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

// Function: FUN_00207080
// Address: 0x207080 - 0x2070e0
void FUN_00207080_0x207080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00207080_0x207080");
#endif

    ctx->pc = 0x207080u;

    // 0x207080: 0x4303f  dsra32      $a2, $a0, 0
    ctx->pc = 0x207080u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x207084: 0x5183f  dsra32      $v1, $a1, 0
    ctx->pc = 0x207084u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x207088: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x207088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20708c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x20708cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x207090: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x207090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x207094: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x207094u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x207098: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x207098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20709c: 0x70c53018  mult1       $a2, $a2, $a1
    ctx->pc = 0x20709cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2070a0: 0x850019  multu       $a0, $a1
    ctx->pc = 0x2070a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2070a4: 0x2012  mflo        $a0
    ctx->pc = 0x2070a4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2070a8: 0x1010  mfhi        $v0
    ctx->pc = 0x2070a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2070ac: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2070acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2070b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2070b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2070b4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2070b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2070b8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2070b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2070bc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2070bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2070c0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2070c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2070c4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2070c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2070c8: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x2070c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2070cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2070ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2070d0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x2070d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2070d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2070d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2070d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2070D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2070DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070D8u;
        // 0x2070dc: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2070D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2070E0u;
}
