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

// Function: FUN_001a66f0
// Address: 0x1a66f0 - 0x1a671c
void FUN_001a66f0_0x1a66f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a66f0_0x1a66f0");
#endif

    switch (ctx->pc) {
        case 0x1a66f0u: goto label_1a66f0;
        case 0x1a66f4u: goto label_1a66f4;
        case 0x1a66f8u: goto label_1a66f8;
        case 0x1a66fcu: goto label_1a66fc;
        case 0x1a6700u: goto label_1a6700;
        case 0x1a6704u: goto label_1a6704;
        case 0x1a6708u: goto label_1a6708;
        case 0x1a670cu: goto label_1a670c;
        case 0x1a6710u: goto label_1a6710;
        case 0x1a6714u: goto label_1a6714;
        case 0x1a6718u: goto label_1a6718;
        default: break;
    }

    ctx->pc = 0x1a66f0u;

label_1a66f0:
    // 0x1a66f0: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x1a66f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
label_1a66f4:
    // 0x1a66f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a66f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a66f8:
    // 0x1a66f8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a66f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a66fc:
    // 0x1a66fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a66fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a6700:
    // 0x1a6700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a6704:
    // 0x1a6704: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a6704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a6708:
    // 0x1a6708: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a6708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a670c:
    // 0x1a670c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a670cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6710:
    // 0x1a6710: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a6710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a6714:
    // 0x1a6714: 0x3200008  jr          $t9
label_1a6718:
    if (ctx->pc == 0x1A6718u) {
        ctx->pc = 0x1A671Cu;
        goto label_fallthrough_0x1a6714;
    }
    ctx->pc = 0x1A6714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6714u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1a6714:
    ctx->pc = 0x1A671Cu;
}
