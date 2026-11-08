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

// Function: FUN_00105530
// Address: 0x105530 - 0x1055c0
void FUN_00105530_0x105530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105530_0x105530");
#endif

    switch (ctx->pc) {
        case 0x105590u: goto label_105590;
        case 0x1055a8u: goto label_1055a8;
        default: break;
    }

    ctx->pc = 0x105530u;

    // 0x105530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x105530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x105534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x105534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x105538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x105538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10553c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10553cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x105540: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x105540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105544: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x105544u;
    {
        const bool branch_taken_0x105544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105544u;
        // 0x105548: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105544) {
            ctx->pc = 0x1055A8u;
            goto label_1055a8;
        }
    }
    ctx->pc = 0x10554Cu;
    // 0x10554c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10554cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105550: 0x2442a430  addiu       $v0, $v0, -0x5BD0
    ctx->pc = 0x105550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943792));
    // 0x105554: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x105554u;
    {
        const bool branch_taken_0x105554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105554u;
        // 0x105558: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105554) {
            ctx->pc = 0x105590u;
            goto label_105590;
        }
    }
    ctx->pc = 0x10555Cu;
    // 0x10555c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10555cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105560: 0x2442a3d0  addiu       $v0, $v0, -0x5C30
    ctx->pc = 0x105560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943696));
    // 0x105564: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x105564u;
    {
        const bool branch_taken_0x105564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105564u;
        // 0x105568: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105564) {
            ctx->pc = 0x105590u;
            goto label_105590;
        }
    }
    ctx->pc = 0x10556Cu;
    // 0x10556c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10556cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105570: 0x2442a490  addiu       $v0, $v0, -0x5B70
    ctx->pc = 0x105570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943888));
    // 0x105574: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x105574u;
    {
        const bool branch_taken_0x105574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105574u;
        // 0x105578: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105574) {
            ctx->pc = 0x105590u;
            goto label_105590;
        }
    }
    ctx->pc = 0x10557Cu;
    // 0x10557c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10557cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105584: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x105584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x105588: 0xc04176c  jal         func_105DB0
    ctx->pc = 0x105588u;
    SET_GPR_U32(ctx, 31, 0x105590u);
    ctx->pc = 0x10558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105588u;
    // 0x10558c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105DB0u, 0x105588u, 0x105590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105590u;
label_105590:
    // 0x105590: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x105590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x105594: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105594u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x105598: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105598u;
    {
        const bool branch_taken_0x105598 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105598u;
        // 0x10559c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105598) {
            ctx->pc = 0x1055ACu;
            goto label_1055ac;
        }
    }
    ctx->pc = 0x1055A0u;
    // 0x1055a0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1055A0u;
    SET_GPR_U32(ctx, 31, 0x1055A8u);
    ctx->pc = 0x1055A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1055A0u;
    // 0x1055a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1055A0u, 0x1055A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1055A8u;
label_1055a8:
    // 0x1055a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1055a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1055ac:
    // 0x1055ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1055acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1055b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1055b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1055b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1055b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1055b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1055B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1055BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1055B8u;
        // 0x1055bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1055B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1055C0u;
}
