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

// Function: entry_0018ef7c
// Address: 0x18ef7c - 0x18ef98
void entry_0018ef7c_0x18ef7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ef7c_0x18ef7c");
#endif

    ctx->pc = 0x18ef7cu;

    // 0x18ef7c: 0x868401e8  lh          $a0, 0x1E8($s4)
    ctx->pc = 0x18ef7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 488)));
    // 0x18ef80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18ef84: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x18EF84u;
    {
        const bool branch_taken_0x18ef84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF84u;
        // 0x18ef88: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef84) {
            ctx->pc = 0x18F07Cu;
            return;
        }
    }
    ctx->pc = 0x18EF8Cu;
    // 0x18ef8c: 0x1083003b  beq         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x18EF8Cu;
    {
        const bool branch_taken_0x18ef8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF8Cu;
        // 0x18ef90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef8c) {
            ctx->pc = 0x18F07Cu;
            return;
        }
    }
    ctx->pc = 0x18EF94u;
    // 0x18ef94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18ef94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18ef98u;
}
