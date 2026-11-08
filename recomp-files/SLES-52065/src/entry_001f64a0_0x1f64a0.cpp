#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001f64a0
// Address: 0x1f64a0 - 0x1f64b8
void entry_001f64a0_0x1f64a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f64a0_0x1f64a0");
#endif

    ctx->pc = 0x1f64a0u;

    // 0x1f64a0: 0x90830065  lbu         $v1, 0x65($a0)
    ctx->pc = 0x1f64a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 101)));
    // 0x1f64a4: 0x240200f3  addiu       $v0, $zero, 0xF3
    ctx->pc = 0x1f64a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x1f64a8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F64A8u;
    {
        const bool branch_taken_0x1f64a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64A8u;
        // 0x1f64ac: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64a8) {
            ctx->pc = 0x1F6518u;
            return;
        }
    }
    ctx->pc = 0x1F64B0u;
    // 0x1f64b0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F64B0u;
    {
        const bool branch_taken_0x1f64b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64B0u;
        // 0x1f64b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64b0) {
            ctx->pc = 0x1F6520u;
            return;
        }
    }
    ctx->pc = 0x1F64B8u;
}
