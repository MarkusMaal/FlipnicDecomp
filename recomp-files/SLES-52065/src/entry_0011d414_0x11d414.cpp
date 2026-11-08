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

// Function: entry_0011d414
// Address: 0x11d414 - 0x11d444
void entry_0011d414_0x11d414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d414_0x11d414");
#endif

    switch (ctx->pc) {
        case 0x11d42cu: goto label_11d42c;
        default: break;
    }

    ctx->pc = 0x11d414u;

    // 0x11d414: 0x0  nop
    ctx->pc = 0x11d414u;
    // NOP
    // 0x11d418: 0x12283c  dsll32      $a1, $s2, 0
    ctx->pc = 0x11d418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 0));
    // 0x11d41c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x11d41cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11d420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d424: 0xc07bef2  jal         func_1EFBC8
    ctx->pc = 0x11D424u;
    SET_GPR_U32(ctx, 31, 0x11D42Cu);
    ctx->pc = 0x11D428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D424u;
    // 0x11d428: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFBC8u, 0x11D424u, 0x11D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D42Cu;
label_11d42c:
    // 0x11d42c: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x11d42cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11d430: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x11d430u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x11d434: 0x6600003  bltz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D434u;
    {
        const bool branch_taken_0x11d434 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x11d434) {
            ctx->pc = 0x11D444u;
            return;
        }
    }
    ctx->pc = 0x11D43Cu;
    // 0x11d43c: 0xff9383e8  sd          $s3, -0x7C18($gp)
    ctx->pc = 0x11d43cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935528), GPR_U64(ctx, 19));
    // 0x11d440: 0xaf9183e0  sw          $s1, -0x7C20($gp)
    ctx->pc = 0x11d440u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935520), GPR_U32(ctx, 17));
    ctx->pc = 0x11d444u;
}
