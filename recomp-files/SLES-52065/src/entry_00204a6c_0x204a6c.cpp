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

// Function: entry_00204a6c
// Address: 0x204a6c - 0x204a88
void entry_00204a6c_0x204a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204a6c_0x204a6c");
#endif

    ctx->pc = 0x204a6cu;

    // 0x204a6c: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x204a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x204a70: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x204a70u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x204a74: 0x1a00002d  blez        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x204A74u;
    {
        const bool branch_taken_0x204a74 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x204A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A74u;
        // 0x204a78: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a74) {
            ctx->pc = 0x204B2Cu;
            return;
        }
    }
    ctx->pc = 0x204A7Cu;
    // 0x204a7c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x204A7Cu;
    {
        const bool branch_taken_0x204a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A7Cu;
        // 0x204a80: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a7c) {
            ctx->pc = 0x204AE8u;
            return;
        }
    }
    ctx->pc = 0x204A84u;
    // 0x204a84: 0x0  nop
    ctx->pc = 0x204a84u;
    // NOP
    ctx->pc = 0x204a88u;
}
