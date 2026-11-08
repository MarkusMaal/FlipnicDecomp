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

// Function: FUN_001e4490
// Address: 0x1e4490 - 0x1e453c
void FUN_001e4490_0x1e4490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e4490_0x1e4490");
#endif

    switch (ctx->pc) {
        case 0x1e4490u: goto label_1e4490;
        case 0x1e4494u: goto label_1e4494;
        case 0x1e4498u: goto label_1e4498;
        case 0x1e449cu: goto label_1e449c;
        case 0x1e44a0u: goto label_1e44a0;
        case 0x1e44a4u: goto label_1e44a4;
        case 0x1e44a8u: goto label_1e44a8;
        case 0x1e44acu: goto label_1e44ac;
        case 0x1e44b0u: goto label_1e44b0;
        case 0x1e44b4u: goto label_1e44b4;
        case 0x1e44b8u: goto label_1e44b8;
        case 0x1e44bcu: goto label_1e44bc;
        case 0x1e44c0u: goto label_1e44c0;
        case 0x1e44c4u: goto label_1e44c4;
        case 0x1e44c8u: goto label_1e44c8;
        case 0x1e44ccu: goto label_1e44cc;
        case 0x1e44d0u: goto label_1e44d0;
        case 0x1e44d4u: goto label_1e44d4;
        case 0x1e44d8u: goto label_1e44d8;
        case 0x1e44dcu: goto label_1e44dc;
        case 0x1e44e0u: goto label_1e44e0;
        case 0x1e44e4u: goto label_1e44e4;
        case 0x1e44e8u: goto label_1e44e8;
        case 0x1e44ecu: goto label_1e44ec;
        case 0x1e44f0u: goto label_1e44f0;
        case 0x1e44f4u: goto label_1e44f4;
        case 0x1e44f8u: goto label_1e44f8;
        case 0x1e44fcu: goto label_1e44fc;
        case 0x1e4500u: goto label_1e4500;
        case 0x1e4504u: goto label_1e4504;
        case 0x1e4508u: goto label_1e4508;
        case 0x1e450cu: goto label_1e450c;
        case 0x1e4510u: goto label_1e4510;
        case 0x1e4514u: goto label_1e4514;
        case 0x1e4518u: goto label_1e4518;
        case 0x1e451cu: goto label_1e451c;
        case 0x1e4520u: goto label_1e4520;
        case 0x1e4524u: goto label_1e4524;
        case 0x1e4528u: goto label_1e4528;
        case 0x1e452cu: goto label_1e452c;
        case 0x1e4530u: goto label_1e4530;
        case 0x1e4534u: goto label_1e4534;
        case 0x1e4538u: goto label_1e4538;
        default: break;
    }

    ctx->pc = 0x1e4490u;

label_1e4490:
    // 0x1e4490: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e4490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e4494:
    // 0x1e4494: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e4494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e4498:
    // 0x1e4498: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e4498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e449c:
    // 0x1e449c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e449cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e44a0:
    // 0x1e44a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e44a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e44a4:
    // 0x1e44a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e44a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e44a8:
    // 0x1e44a8: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1e44a8u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1e44ac:
    // 0x1e44ac: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1e44acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1e44b0:
    // 0x1e44b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e44b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e44b4:
    // 0x1e44b4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1e44b8:
    if (ctx->pc == 0x1E44B8u) {
        ctx->pc = 0x1E44B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44B4u;
        // 0x1e44b8: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E44BCu;
        goto label_1e44bc;
    }
    ctx->pc = 0x1E44B4u;
    {
        const bool branch_taken_0x1e44b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E44B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44B4u;
        // 0x1e44b8: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44b4) {
            ctx->pc = 0x1E44FCu;
            goto label_1e44fc;
        }
    }
    ctx->pc = 0x1E44BCu;
label_1e44bc:
    // 0x1e44bc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1e44bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e44c0:
    // 0x1e44c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e44c4:
    // 0x1e44c4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e44c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e44c8:
    // 0x1e44c8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1e44cc:
    if (ctx->pc == 0x1E44CCu) {
        ctx->pc = 0x1E44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44C8u;
        // 0x1e44cc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E44D0u;
        goto label_1e44d0;
    }
    ctx->pc = 0x1E44C8u;
    {
        const bool branch_taken_0x1e44c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44C8u;
        // 0x1e44cc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44c8) {
            ctx->pc = 0x1E44F0u;
            goto label_1e44f0;
        }
    }
    ctx->pc = 0x1E44D0u;
label_1e44d0:
    // 0x1e44d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e44d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e44d4:
    // 0x1e44d4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e44d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e44d8:
    // 0x1e44d8: 0x320f809  jalr        $t9
label_1e44dc:
    if (ctx->pc == 0x1E44DCu) {
        ctx->pc = 0x1E44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44D8u;
        // 0x1e44dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E44E0u;
        goto label_1e44e0;
    }
    ctx->pc = 0x1E44D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E44E0u);
        ctx->pc = 0x1E44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44D8u;
        // 0x1e44dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E44D8u, 0x1E44E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E44E0u;
label_1e44e0:
    // 0x1e44e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e44e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e44e4:
    // 0x1e44e4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e44e8:
    if (ctx->pc == 0x1E44E8u) {
        ctx->pc = 0x1E44ECu;
        goto label_1e44ec;
    }
    ctx->pc = 0x1E44E4u;
    {
        const bool branch_taken_0x1e44e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e44e4) {
            ctx->pc = 0x1E44F0u;
            goto label_1e44f0;
        }
    }
    ctx->pc = 0x1E44ECu;
label_1e44ec:
    // 0x1e44ec: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x1e44ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e44f0:
    // 0x1e44f0: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
label_1e44f4:
    if (ctx->pc == 0x1E44F4u) {
        ctx->pc = 0x1E44F8u;
        goto label_1e44f8;
    }
    ctx->pc = 0x1E44F0u;
    {
        const bool branch_taken_0x1e44f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e44f0) {
            ctx->pc = 0x1E44FCu;
            goto label_1e44fc;
        }
    }
    ctx->pc = 0x1E44F8u;
label_1e44f8:
    // 0x1e44f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e44f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e44fc:
    // 0x1e44fc: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
label_1e4500:
    if (ctx->pc == 0x1E4500u) {
        ctx->pc = 0x1E4500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44FCu;
        // 0x1e4500: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4504u;
        goto label_1e4504;
    }
    ctx->pc = 0x1E44FCu;
    {
        const bool branch_taken_0x1e44fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44FCu;
        // 0x1e4500: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44fc) {
            ctx->pc = 0x1E451Cu;
            goto label_1e451c;
        }
    }
    ctx->pc = 0x1E4504u;
label_1e4504:
    // 0x1e4504: 0xc07f4fc  jal         func_1FD3F0
label_1e4508:
    if (ctx->pc == 0x1E4508u) {
        ctx->pc = 0x1E4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4504u;
        // 0x1e4508: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E450Cu;
        goto label_1e450c;
    }
    ctx->pc = 0x1E4504u;
    SET_GPR_U32(ctx, 31, 0x1E450Cu);
    ctx->pc = 0x1E4508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4504u;
    // 0x1e4508: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1E4504u, 0x1E450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E450Cu;
label_1e450c:
    // 0x1e450c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1e4510:
    if (ctx->pc == 0x1E4510u) {
        ctx->pc = 0x1E4514u;
        goto label_1e4514;
    }
    ctx->pc = 0x1E450Cu;
    {
        const bool branch_taken_0x1e450c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e450c) {
            ctx->pc = 0x1E4518u;
            goto label_1e4518;
        }
    }
    ctx->pc = 0x1E4514u;
label_1e4514:
    // 0x1e4514: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e4514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4518:
    // 0x1e4518: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e4518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e451c:
    // 0x1e451c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e451cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e4520:
    // 0x1e4520: 0x11100a  movz        $v0, $zero, $s1
    ctx->pc = 0x1e4520u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1e4524:
    // 0x1e4524: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e4524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4528:
    // 0x1e4528: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e452c:
    // 0x1e452c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e452cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4530:
    // 0x1e4530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4534:
    // 0x1e4534: 0x3e00008  jr          $ra
label_1e4538:
    if (ctx->pc == 0x1E4538u) {
        ctx->pc = 0x1E4538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4534u;
        // 0x1e4538: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E453Cu;
        goto label_fallthrough_0x1e4534;
    }
    ctx->pc = 0x1E4534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4534u;
        // 0x1e4538: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e4534:
    ctx->pc = 0x1E453Cu;
}
