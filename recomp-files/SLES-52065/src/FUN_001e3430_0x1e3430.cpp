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

// Function: FUN_001e3430
// Address: 0x1e3430 - 0x1e34dc
void FUN_001e3430_0x1e3430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e3430_0x1e3430");
#endif

    switch (ctx->pc) {
        case 0x1e3430u: goto label_1e3430;
        case 0x1e3434u: goto label_1e3434;
        case 0x1e3438u: goto label_1e3438;
        case 0x1e343cu: goto label_1e343c;
        case 0x1e3440u: goto label_1e3440;
        case 0x1e3444u: goto label_1e3444;
        case 0x1e3448u: goto label_1e3448;
        case 0x1e344cu: goto label_1e344c;
        case 0x1e3450u: goto label_1e3450;
        case 0x1e3454u: goto label_1e3454;
        case 0x1e3458u: goto label_1e3458;
        case 0x1e345cu: goto label_1e345c;
        case 0x1e3460u: goto label_1e3460;
        case 0x1e3464u: goto label_1e3464;
        case 0x1e3468u: goto label_1e3468;
        case 0x1e346cu: goto label_1e346c;
        case 0x1e3470u: goto label_1e3470;
        case 0x1e3474u: goto label_1e3474;
        case 0x1e3478u: goto label_1e3478;
        case 0x1e347cu: goto label_1e347c;
        case 0x1e3480u: goto label_1e3480;
        case 0x1e3484u: goto label_1e3484;
        case 0x1e3488u: goto label_1e3488;
        case 0x1e348cu: goto label_1e348c;
        case 0x1e3490u: goto label_1e3490;
        case 0x1e3494u: goto label_1e3494;
        case 0x1e3498u: goto label_1e3498;
        case 0x1e349cu: goto label_1e349c;
        case 0x1e34a0u: goto label_1e34a0;
        case 0x1e34a4u: goto label_1e34a4;
        case 0x1e34a8u: goto label_1e34a8;
        case 0x1e34acu: goto label_1e34ac;
        case 0x1e34b0u: goto label_1e34b0;
        case 0x1e34b4u: goto label_1e34b4;
        case 0x1e34b8u: goto label_1e34b8;
        case 0x1e34bcu: goto label_1e34bc;
        case 0x1e34c0u: goto label_1e34c0;
        case 0x1e34c4u: goto label_1e34c4;
        case 0x1e34c8u: goto label_1e34c8;
        case 0x1e34ccu: goto label_1e34cc;
        case 0x1e34d0u: goto label_1e34d0;
        case 0x1e34d4u: goto label_1e34d4;
        case 0x1e34d8u: goto label_1e34d8;
        default: break;
    }

    ctx->pc = 0x1e3430u;

label_1e3430:
    // 0x1e3430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e3430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e3434:
    // 0x1e3434: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e3434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e3438:
    // 0x1e3438: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e3438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e343c:
    // 0x1e343c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e343cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e3440:
    // 0x1e3440: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e3444:
    // 0x1e3444: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e3448:
    // 0x1e3448: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1e3448u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1e344c:
    // 0x1e344c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1e344cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1e3450:
    // 0x1e3450: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3454:
    // 0x1e3454: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1e3458:
    if (ctx->pc == 0x1E3458u) {
        ctx->pc = 0x1E3458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3454u;
        // 0x1e3458: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E345Cu;
        goto label_1e345c;
    }
    ctx->pc = 0x1E3454u;
    {
        const bool branch_taken_0x1e3454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3454u;
        // 0x1e3458: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3454) {
            ctx->pc = 0x1E349Cu;
            goto label_1e349c;
        }
    }
    ctx->pc = 0x1E345Cu;
label_1e345c:
    // 0x1e345c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1e345cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e3460:
    // 0x1e3460: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e3460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e3464:
    // 0x1e3464: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e3464u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e3468:
    // 0x1e3468: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1e346c:
    if (ctx->pc == 0x1E346Cu) {
        ctx->pc = 0x1E346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3468u;
        // 0x1e346c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3470u;
        goto label_1e3470;
    }
    ctx->pc = 0x1E3468u;
    {
        const bool branch_taken_0x1e3468 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3468u;
        // 0x1e346c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3468) {
            ctx->pc = 0x1E3490u;
            goto label_1e3490;
        }
    }
    ctx->pc = 0x1E3470u;
label_1e3470:
    // 0x1e3470: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e3470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3474:
    // 0x1e3474: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e3474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e3478:
    // 0x1e3478: 0x320f809  jalr        $t9
label_1e347c:
    if (ctx->pc == 0x1E347Cu) {
        ctx->pc = 0x1E347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3478u;
        // 0x1e347c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3480u;
        goto label_1e3480;
    }
    ctx->pc = 0x1E3478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3480u);
        ctx->pc = 0x1E347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3478u;
        // 0x1e347c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3478u, 0x1E3480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3480u;
label_1e3480:
    // 0x1e3480: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e3480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3484:
    // 0x1e3484: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e3488:
    if (ctx->pc == 0x1E3488u) {
        ctx->pc = 0x1E348Cu;
        goto label_1e348c;
    }
    ctx->pc = 0x1E3484u;
    {
        const bool branch_taken_0x1e3484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3484) {
            ctx->pc = 0x1E3490u;
            goto label_1e3490;
        }
    }
    ctx->pc = 0x1E348Cu;
label_1e348c:
    // 0x1e348c: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x1e348cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e3490:
    // 0x1e3490: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
label_1e3494:
    if (ctx->pc == 0x1E3494u) {
        ctx->pc = 0x1E3498u;
        goto label_1e3498;
    }
    ctx->pc = 0x1E3490u;
    {
        const bool branch_taken_0x1e3490 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3490) {
            ctx->pc = 0x1E349Cu;
            goto label_1e349c;
        }
    }
    ctx->pc = 0x1E3498u;
label_1e3498:
    // 0x1e3498: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e3498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e349c:
    // 0x1e349c: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
label_1e34a0:
    if (ctx->pc == 0x1E34A0u) {
        ctx->pc = 0x1E34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E349Cu;
        // 0x1e34a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E34A4u;
        goto label_1e34a4;
    }
    ctx->pc = 0x1E349Cu;
    {
        const bool branch_taken_0x1e349c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E349Cu;
        // 0x1e34a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e349c) {
            ctx->pc = 0x1E34BCu;
            goto label_1e34bc;
        }
    }
    ctx->pc = 0x1E34A4u;
label_1e34a4:
    // 0x1e34a4: 0xc07f4fc  jal         func_1FD3F0
label_1e34a8:
    if (ctx->pc == 0x1E34A8u) {
        ctx->pc = 0x1E34A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34A4u;
        // 0x1e34a8: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E34ACu;
        goto label_1e34ac;
    }
    ctx->pc = 0x1E34A4u;
    SET_GPR_U32(ctx, 31, 0x1E34ACu);
    ctx->pc = 0x1E34A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E34A4u;
    // 0x1e34a8: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1E34A4u, 0x1E34ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E34ACu;
label_1e34ac:
    // 0x1e34ac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1e34b0:
    if (ctx->pc == 0x1E34B0u) {
        ctx->pc = 0x1E34B4u;
        goto label_1e34b4;
    }
    ctx->pc = 0x1E34ACu;
    {
        const bool branch_taken_0x1e34ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e34ac) {
            ctx->pc = 0x1E34B8u;
            goto label_1e34b8;
        }
    }
    ctx->pc = 0x1E34B4u;
label_1e34b4:
    // 0x1e34b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e34b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e34b8:
    // 0x1e34b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e34b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e34bc:
    // 0x1e34bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e34bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e34c0:
    // 0x1e34c0: 0x11100a  movz        $v0, $zero, $s1
    ctx->pc = 0x1e34c0u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1e34c4:
    // 0x1e34c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e34c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e34c8:
    // 0x1e34c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e34c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e34cc:
    // 0x1e34cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e34ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e34d0:
    // 0x1e34d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e34d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e34d4:
    // 0x1e34d4: 0x3e00008  jr          $ra
label_1e34d8:
    if (ctx->pc == 0x1E34D8u) {
        ctx->pc = 0x1E34D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34D4u;
        // 0x1e34d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E34DCu;
        goto label_fallthrough_0x1e34d4;
    }
    ctx->pc = 0x1E34D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E34D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34D4u;
        // 0x1e34d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E34D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e34d4:
    ctx->pc = 0x1E34DCu;
}
