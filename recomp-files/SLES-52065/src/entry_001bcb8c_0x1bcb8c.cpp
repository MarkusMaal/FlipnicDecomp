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

// Function: entry_001bcb8c
// Address: 0x1bcb8c - 0x1bcbb0
void entry_001bcb8c_0x1bcb8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcb8c_0x1bcb8c");
#endif

    ctx->pc = 0x1bcb8cu;

    // 0x1bcb8c: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x1bcb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1bcb90: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BCB90u;
    {
        const bool branch_taken_0x1bcb90 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bcb90) {
            ctx->pc = 0x1BCBB0u;
            return;
        }
    }
    ctx->pc = 0x1BCB98u;
    // 0x1bcb98: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x1bcb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1bcb9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bcb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcba0: 0xaea20080  sw          $v0, 0x80($s5)
    ctx->pc = 0x1bcba0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
    // 0x1bcba4: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x1bcba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1bcba8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bcba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bcbac: 0xaea20080  sw          $v0, 0x80($s5)
    ctx->pc = 0x1bcbacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
    ctx->pc = 0x1bcbb0u;
}
