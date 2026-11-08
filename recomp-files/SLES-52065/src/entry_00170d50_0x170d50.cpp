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

// Function: entry_00170d50
// Address: 0x170d50 - 0x170d74
void entry_00170d50_0x170d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170d50_0x170d50");
#endif

    switch (ctx->pc) {
        case 0x170d64u: goto label_170d64;
        default: break;
    }

    ctx->pc = 0x170d50u;

label_170d50:
    // 0x170d50: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x170d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_170d54:
    // 0x170d54: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x170d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_170d58:
    // 0x170d58: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x170d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_170d5c:
    // 0x170d5c: 0x320f809  jalr        $t9
label_170d60:
    if (ctx->pc == 0x170D60u) {
        ctx->pc = 0x170D64u;
        goto label_170d64;
    }
    ctx->pc = 0x170D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x170D64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170D5Cu, 0x170D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170D64u;
label_170d64:
    // 0x170d64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_170d68:
    if (ctx->pc == 0x170D68u) {
        ctx->pc = 0x170D6Cu;
        goto label_170d6c;
    }
    ctx->pc = 0x170D64u;
    {
        const bool branch_taken_0x170d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170d64) {
            ctx->pc = 0x170D74u;
            return;
        }
    }
    ctx->pc = 0x170D6Cu;
label_170d6c:
    // 0x170d6c: 0x8e02026c  lw          $v0, 0x26C($s0)
    ctx->pc = 0x170d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_170d70:
    // 0x170d70: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x170d70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x170d74u;
}
