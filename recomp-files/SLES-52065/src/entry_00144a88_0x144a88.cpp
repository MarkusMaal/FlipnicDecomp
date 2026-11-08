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

// Function: entry_00144a88
// Address: 0x144a88 - 0x144aa0
void entry_00144a88_0x144a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144a88_0x144a88");
#endif

    ctx->pc = 0x144a88u;

    // 0x144a88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x144a8c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x144a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x144a90: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x144a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x144a94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x144a98: 0x1450fff3  bne         $v0, $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x144A98u;
    {
        const bool branch_taken_0x144a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x144a98) {
            ctx->pc = 0x144A68u;
            return;
        }
    }
    ctx->pc = 0x144AA0u;
}
