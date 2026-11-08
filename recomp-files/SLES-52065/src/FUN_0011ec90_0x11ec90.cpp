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

// Function: FUN_0011ec90
// Address: 0x11ec90 - 0x11ecf8
void FUN_0011ec90_0x11ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011ec90_0x11ec90");
#endif

    ctx->pc = 0x11ec90u;

    // 0x11ec90: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x11ec90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11ec94: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11ec94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11ec98: 0x367fc  dsll32      $t4, $v1, 31
    ctx->pc = 0x11ec98u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) << (32 + 31));
    // 0x11ec9c: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x11ec9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11eca0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11eca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11eca4: 0x35ff8  dsll        $t3, $v1, 31
    ctx->pc = 0x11eca4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << 31);
    // 0x11eca8: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x11eca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11ecac: 0x2408fff0  addiu       $t0, $zero, -0x10
    ctx->pc = 0x11ecacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x11ecb0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11ecb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11ecb4: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x11ecb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x11ecb8: 0x33f38  dsll        $a3, $v1, 28
    ctx->pc = 0x11ecb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 28);
    // 0x11ecbc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11ecbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11ecc0: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x11ecc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11ecc4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x11ecc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x11ecc8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11ecc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11eccc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11ecccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11ecd0: 0x32eb8  dsll        $a1, $v1, 26
    ctx->pc = 0x11ecd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 26);
    // 0x11ecd4: 0x1863025  or          $a2, $t4, $a2
    ctx->pc = 0x11ecd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) | GPR_U64(ctx, 6));
    // 0x11ecd8: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x11ecd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11ecdc: 0x1663025  or          $a2, $t3, $a2
    ctx->pc = 0x11ecdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) | GPR_U64(ctx, 6));
    // 0x11ece0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11ece0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11ece4: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x11ece4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x11ece8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x11ece8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x11ecec: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x11ececu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x11ecf0: 0x3e00008  jr          $ra
    ctx->pc = 0x11ECF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ECF0u;
        // 0x11ecf4: 0xfc830000  sd          $v1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ECF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11ECF8u;
}
