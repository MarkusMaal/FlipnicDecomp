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

// Function: entry_0015d6b4
// Address: 0x15d6b4 - 0x15d6d4
void entry_0015d6b4_0x15d6b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d6b4_0x15d6b4");
#endif

    switch (ctx->pc) {
        case 0x15d6ccu: goto label_15d6cc;
        default: break;
    }

    ctx->pc = 0x15d6b4u;

label_15d6b4:
    // 0x15d6b4: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x15d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_15d6b8:
    // 0x15d6b8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15d6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15d6bc:
    // 0x15d6bc: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15d6bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15d6c0:
    // 0x15d6c0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x15d6c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_15d6c4:
    // 0x15d6c4: 0x320f809  jalr        $t9
label_15d6c8:
    if (ctx->pc == 0x15D6C8u) {
        ctx->pc = 0x15D6CCu;
        goto label_15d6cc;
    }
    ctx->pc = 0x15D6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D6CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D6C4u, 0x15D6CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D6CCu;
label_15d6cc:
    // 0x15d6cc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x15d6ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_15d6d0:
    // 0x15d6d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15d6d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x15d6d4u;
}
