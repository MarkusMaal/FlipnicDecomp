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

// Function: entry_001e3810
// Address: 0x1e3810 - 0x1e3834
void entry_001e3810_0x1e3810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3810_0x1e3810");
#endif

    ctx->pc = 0x1e3810u;

    // 0x1e3810: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E3810u;
    {
        const bool branch_taken_0x1e3810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3810u;
        // 0x1e3814: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3810) {
            ctx->pc = 0x1E386Cu;
            return;
        }
    }
    ctx->pc = 0x1E3818u;
    // 0x1e3818: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3818u;
    {
        const bool branch_taken_0x1e3818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3818) {
            ctx->pc = 0x1E383Cu;
            return;
        }
    }
    ctx->pc = 0x1E3820u;
    // 0x1e3820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3824: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3824u;
    {
        const bool branch_taken_0x1e3824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3824) {
            ctx->pc = 0x1E3834u;
            return;
        }
    }
    ctx->pc = 0x1E382Cu;
    // 0x1e382c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E382Cu;
    {
        const bool branch_taken_0x1e382c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E382Cu;
        // 0x1e3830: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e382c) {
            ctx->pc = 0x1E3874u;
            return;
        }
    }
    ctx->pc = 0x1E3834u;
}
