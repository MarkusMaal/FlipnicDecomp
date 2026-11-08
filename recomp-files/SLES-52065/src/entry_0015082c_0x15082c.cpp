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

// Function: entry_0015082c
// Address: 0x15082c - 0x150848
void entry_0015082c_0x15082c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015082c_0x15082c");
#endif

    ctx->pc = 0x15082cu;

    // 0x15082c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x15082cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x150830: 0x8c227438  lw          $v0, 0x7438($at)
    ctx->pc = 0x150830u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x367438u));
    // 0x150834: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x150834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x150838: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x150838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15083c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x15083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x150840: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x150840u;
    {
        const bool branch_taken_0x150840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150840u;
        // 0x150844: 0xaf8285e4  sw          $v0, -0x7A1C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150840) {
            ctx->pc = 0x150880u;
            return;
        }
    }
    ctx->pc = 0x150848u;
}
