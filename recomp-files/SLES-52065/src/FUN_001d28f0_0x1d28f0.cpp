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

// Function: FUN_001d28f0
// Address: 0x1d28f0 - 0x1d2954
void FUN_001d28f0_0x1d28f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d28f0_0x1d28f0");
#endif

    switch (ctx->pc) {
        case 0x1d2920u: goto label_1d2920;
        case 0x1d2938u: goto label_1d2938;
        default: break;
    }

    ctx->pc = 0x1d28f0u;

    // 0x1d28f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d28f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d28f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d28f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d28f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d28f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d28fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d28fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d2900: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d2900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2904: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2908: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d2908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d290c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d290cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2910: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d2910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2914: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1d2914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2918: 0xc074af0  jal         func_1D2BC0
    ctx->pc = 0x1D2918u;
    SET_GPR_U32(ctx, 31, 0x1D2920u);
    ctx->pc = 0x1D291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2918u;
    // 0x1d291c: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2BC0u, 0x1D2918u, 0x1D2920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2920u;
label_1d2920:
    // 0x1d2920: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d2920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2924: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d2924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2928: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1d2928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d292c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1d292cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2930: 0xc074a58  jal         func_1D2960
    ctx->pc = 0x1D2930u;
    SET_GPR_U32(ctx, 31, 0x1D2938u);
    ctx->pc = 0x1D2934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2930u;
    // 0x1d2934: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2960u, 0x1D2930u, 0x1D2938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2938u;
label_1d2938:
    // 0x1d2938: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d2938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d293c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d293cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2940: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d2940u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2944: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d294c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D294Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D294Cu;
        // 0x1d2950: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D294Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2954u;
}
