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

// Function: FUN_0011ed50
// Address: 0x11ed50 - 0x11eda8
void FUN_0011ed50_0x11ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011ed50_0x11ed50");
#endif

    ctx->pc = 0x11ed50u;

    // 0x11ed50: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x11ed50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11ed54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11ed54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11ed58: 0x33e3c  dsll32      $a3, $v1, 24
    ctx->pc = 0x11ed58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 24));
    // 0x11ed5c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x11ed5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11ed60: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11ed60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11ed64: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x11ed64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x11ed68: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x11ed68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11ed6c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11ed6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11ed70: 0xe62825  or          $a1, $a3, $a2
    ctx->pc = 0x11ed70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x11ed74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11ed74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11ed78: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x11ed78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x11ed7c: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x11ed7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11ed80: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x11ed80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x11ed84: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x11ed84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11ed88: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x11ed88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x11ed8c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11ed8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11ed90: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x11ed90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x11ed94: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x11ed94u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11ed98: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x11ed98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x11ed9c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x11ed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x11eda0: 0x3e00008  jr          $ra
    ctx->pc = 0x11EDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EDA0u;
        // 0x11eda4: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EDA8u;
}
