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

// Function: FUN_001053b0
// Address: 0x1053b0 - 0x105440
void FUN_001053b0_0x1053b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001053b0_0x1053b0");
#endif

    switch (ctx->pc) {
        case 0x105410u: goto label_105410;
        case 0x105428u: goto label_105428;
        default: break;
    }

    ctx->pc = 0x1053b0u;

    // 0x1053b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1053b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1053b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1053b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1053b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1053b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1053bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1053bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1053c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1053c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1053c4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1053C4u;
    {
        const bool branch_taken_0x1053c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1053C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053C4u;
        // 0x1053c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053c4) {
            ctx->pc = 0x105428u;
            goto label_105428;
        }
    }
    ctx->pc = 0x1053CCu;
    // 0x1053cc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1053ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1053d0: 0x244298f0  addiu       $v0, $v0, -0x6710
    ctx->pc = 0x1053d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940912));
    // 0x1053d4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1053D4u;
    {
        const bool branch_taken_0x1053d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1053D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053D4u;
        // 0x1053d8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053d4) {
            ctx->pc = 0x105410u;
            goto label_105410;
        }
    }
    ctx->pc = 0x1053DCu;
    // 0x1053dc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1053dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1053e0: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x1053e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x1053e4: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1053E4u;
    {
        const bool branch_taken_0x1053e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1053E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053E4u;
        // 0x1053e8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053e4) {
            ctx->pc = 0x105410u;
            goto label_105410;
        }
    }
    ctx->pc = 0x1053ECu;
    // 0x1053ec: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1053ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1053f0: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x1053f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x1053f4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1053F4u;
    {
        const bool branch_taken_0x1053f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1053F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053F4u;
        // 0x1053f8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053f4) {
            ctx->pc = 0x105410u;
            goto label_105410;
        }
    }
    ctx->pc = 0x1053FCu;
    // 0x1053fc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1053fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105404: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x105404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x105408: 0xc0416c8  jal         func_105B20
    ctx->pc = 0x105408u;
    SET_GPR_U32(ctx, 31, 0x105410u);
    ctx->pc = 0x10540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105408u;
    // 0x10540c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B20u, 0x105408u, 0x105410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105410u;
label_105410:
    // 0x105410: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x105410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x105414: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105414u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x105418: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105418u;
    {
        const bool branch_taken_0x105418 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105418u;
        // 0x10541c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105418) {
            ctx->pc = 0x10542Cu;
            goto label_10542c;
        }
    }
    ctx->pc = 0x105420u;
    // 0x105420: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105420u;
    SET_GPR_U32(ctx, 31, 0x105428u);
    ctx->pc = 0x105424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105420u;
    // 0x105424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105420u, 0x105428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105428u;
label_105428:
    // 0x105428: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x105428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10542c:
    // 0x10542c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10542cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x105430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105438: 0x3e00008  jr          $ra
    ctx->pc = 0x105438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105438u;
        // 0x10543c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105440u;
}
