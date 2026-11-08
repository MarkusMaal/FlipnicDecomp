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

// Function: FUN_0011edb0
// Address: 0x11edb0 - 0x11ee08
void FUN_0011edb0_0x11edb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011edb0_0x11edb0");
#endif

    ctx->pc = 0x11edb0u;

    // 0x11edb0: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x11edb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11edb4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11edb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11edb8: 0x346fc  dsll32      $t0, $v1, 27
    ctx->pc = 0x11edb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 27));
    // 0x11edbc: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x11edbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11edc0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11edc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11edc4: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x11edc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x11edc8: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x11edc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11edcc: 0x1052825  or          $a1, $t0, $a1
    ctx->pc = 0x11edccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x11edd0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11edd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11edd4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11edd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11edd8: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x11edd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x11eddc: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x11eddcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11ede0: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x11ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x11ede4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x11ede4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11ede8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x11ede8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x11edec: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11edecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11edf0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x11edf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x11edf4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x11edf4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11edf8: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x11edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x11edfc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x11edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x11ee00: 0x3e00008  jr          $ra
    ctx->pc = 0x11EE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE00u;
        // 0x11ee04: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EE08u;
}
