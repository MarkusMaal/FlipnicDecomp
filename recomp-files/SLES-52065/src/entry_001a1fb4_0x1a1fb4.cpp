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

// Function: entry_001a1fb4
// Address: 0x1a1fb4 - 0x1a1fcc
void entry_001a1fb4_0x1a1fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1fb4_0x1a1fb4");
#endif

    switch (ctx->pc) {
        case 0x1a1fc8u: goto label_1a1fc8;
        default: break;
    }

    ctx->pc = 0x1a1fb4u;

label_1a1fb4:
    // 0x1a1fb4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1a1fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1a1fb8:
    // 0x1a1fb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1fbc:
    // 0x1a1fbc: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1a1fbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1a1fc0:
    // 0x1a1fc0: 0x320f809  jalr        $t9
label_1a1fc4:
    if (ctx->pc == 0x1A1FC4u) {
        ctx->pc = 0x1A1FC8u;
        goto label_1a1fc8;
    }
    ctx->pc = 0x1A1FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1FC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1FC0u, 0x1A1FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1FC8u;
label_1a1fc8:
    // 0x1a1fc8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a1fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x1a1fccu;
}
