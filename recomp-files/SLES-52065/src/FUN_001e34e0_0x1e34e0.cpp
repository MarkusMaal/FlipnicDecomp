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

// Function: FUN_001e34e0
// Address: 0x1e34e0 - 0x1e36a8
void FUN_001e34e0_0x1e34e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e34e0_0x1e34e0");
#endif

    switch (ctx->pc) {
        case 0x1e34e0u: goto label_1e34e0;
        case 0x1e34e4u: goto label_1e34e4;
        case 0x1e34e8u: goto label_1e34e8;
        case 0x1e34ecu: goto label_1e34ec;
        case 0x1e34f0u: goto label_1e34f0;
        case 0x1e34f4u: goto label_1e34f4;
        case 0x1e34f8u: goto label_1e34f8;
        case 0x1e34fcu: goto label_1e34fc;
        case 0x1e3500u: goto label_1e3500;
        case 0x1e3504u: goto label_1e3504;
        case 0x1e3508u: goto label_1e3508;
        case 0x1e350cu: goto label_1e350c;
        case 0x1e3510u: goto label_1e3510;
        case 0x1e3514u: goto label_1e3514;
        case 0x1e3518u: goto label_1e3518;
        case 0x1e351cu: goto label_1e351c;
        case 0x1e3520u: goto label_1e3520;
        case 0x1e3524u: goto label_1e3524;
        case 0x1e3528u: goto label_1e3528;
        case 0x1e352cu: goto label_1e352c;
        case 0x1e3530u: goto label_1e3530;
        case 0x1e3534u: goto label_1e3534;
        case 0x1e3538u: goto label_1e3538;
        case 0x1e353cu: goto label_1e353c;
        case 0x1e3540u: goto label_1e3540;
        case 0x1e3544u: goto label_1e3544;
        case 0x1e3548u: goto label_1e3548;
        case 0x1e354cu: goto label_1e354c;
        case 0x1e3550u: goto label_1e3550;
        case 0x1e3554u: goto label_1e3554;
        case 0x1e3558u: goto label_1e3558;
        case 0x1e355cu: goto label_1e355c;
        case 0x1e3560u: goto label_1e3560;
        case 0x1e3564u: goto label_1e3564;
        case 0x1e3568u: goto label_1e3568;
        case 0x1e356cu: goto label_1e356c;
        case 0x1e3570u: goto label_1e3570;
        case 0x1e3574u: goto label_1e3574;
        case 0x1e3578u: goto label_1e3578;
        case 0x1e357cu: goto label_1e357c;
        case 0x1e3580u: goto label_1e3580;
        case 0x1e3584u: goto label_1e3584;
        case 0x1e3588u: goto label_1e3588;
        case 0x1e358cu: goto label_1e358c;
        case 0x1e3590u: goto label_1e3590;
        case 0x1e3594u: goto label_1e3594;
        case 0x1e3598u: goto label_1e3598;
        case 0x1e359cu: goto label_1e359c;
        case 0x1e35a0u: goto label_1e35a0;
        case 0x1e35a4u: goto label_1e35a4;
        case 0x1e35a8u: goto label_1e35a8;
        case 0x1e35acu: goto label_1e35ac;
        case 0x1e35b0u: goto label_1e35b0;
        case 0x1e35b4u: goto label_1e35b4;
        case 0x1e35b8u: goto label_1e35b8;
        case 0x1e35bcu: goto label_1e35bc;
        case 0x1e35c0u: goto label_1e35c0;
        case 0x1e35c4u: goto label_1e35c4;
        case 0x1e35c8u: goto label_1e35c8;
        case 0x1e35ccu: goto label_1e35cc;
        case 0x1e35d0u: goto label_1e35d0;
        case 0x1e35d4u: goto label_1e35d4;
        case 0x1e35d8u: goto label_1e35d8;
        case 0x1e35dcu: goto label_1e35dc;
        case 0x1e35e0u: goto label_1e35e0;
        case 0x1e35e4u: goto label_1e35e4;
        case 0x1e35e8u: goto label_1e35e8;
        case 0x1e35ecu: goto label_1e35ec;
        case 0x1e35f0u: goto label_1e35f0;
        case 0x1e35f4u: goto label_1e35f4;
        case 0x1e35f8u: goto label_1e35f8;
        case 0x1e35fcu: goto label_1e35fc;
        case 0x1e3600u: goto label_1e3600;
        case 0x1e3604u: goto label_1e3604;
        case 0x1e3608u: goto label_1e3608;
        case 0x1e360cu: goto label_1e360c;
        case 0x1e3610u: goto label_1e3610;
        case 0x1e3614u: goto label_1e3614;
        case 0x1e3618u: goto label_1e3618;
        case 0x1e361cu: goto label_1e361c;
        case 0x1e3620u: goto label_1e3620;
        case 0x1e3624u: goto label_1e3624;
        case 0x1e3628u: goto label_1e3628;
        case 0x1e362cu: goto label_1e362c;
        case 0x1e3630u: goto label_1e3630;
        case 0x1e3634u: goto label_1e3634;
        case 0x1e3638u: goto label_1e3638;
        case 0x1e363cu: goto label_1e363c;
        case 0x1e3640u: goto label_1e3640;
        case 0x1e3644u: goto label_1e3644;
        case 0x1e3648u: goto label_1e3648;
        case 0x1e364cu: goto label_1e364c;
        case 0x1e3650u: goto label_1e3650;
        case 0x1e3654u: goto label_1e3654;
        case 0x1e3658u: goto label_1e3658;
        case 0x1e365cu: goto label_1e365c;
        case 0x1e3660u: goto label_1e3660;
        case 0x1e3664u: goto label_1e3664;
        case 0x1e3668u: goto label_1e3668;
        case 0x1e366cu: goto label_1e366c;
        case 0x1e3670u: goto label_1e3670;
        case 0x1e3674u: goto label_1e3674;
        case 0x1e3678u: goto label_1e3678;
        case 0x1e367cu: goto label_1e367c;
        case 0x1e3680u: goto label_1e3680;
        case 0x1e3684u: goto label_1e3684;
        case 0x1e3688u: goto label_1e3688;
        case 0x1e368cu: goto label_1e368c;
        case 0x1e3690u: goto label_1e3690;
        case 0x1e3694u: goto label_1e3694;
        case 0x1e3698u: goto label_1e3698;
        case 0x1e369cu: goto label_1e369c;
        case 0x1e36a0u: goto label_1e36a0;
        case 0x1e36a4u: goto label_1e36a4;
        default: break;
    }

    ctx->pc = 0x1e34e0u;

label_1e34e0:
    // 0x1e34e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e34e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1e34e4:
    // 0x1e34e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e34e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1e34e8:
    // 0x1e34e8: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1e34e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1e34ec:
    // 0x1e34ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e34ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e34f0:
    // 0x1e34f0: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e34f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
label_1e34f4:
    // 0x1e34f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e34f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e34f8:
    // 0x1e34f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e34f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e34fc:
    // 0x1e34fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e34fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e3500:
    // 0x1e3500: 0x27c40070  addiu       $a0, $fp, 0x70
    ctx->pc = 0x1e3500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
label_1e3504:
    // 0x1e3504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e3508:
    // 0x1e3508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e350c:
    // 0x1e350c: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x1e350cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_1e3510:
    // 0x1e3510: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x1e3510u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
label_1e3514:
    // 0x1e3514: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1e3514u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_1e3518:
    // 0x1e3518: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1e3518u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
label_1e351c:
    // 0x1e351c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x1e351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1e3520:
    // 0x1e3520: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e3524:
    if (ctx->pc == 0x1E3524u) {
        ctx->pc = 0x1E3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3520u;
        // 0x1e3524: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3528u;
        goto label_1e3528;
    }
    ctx->pc = 0x1E3520u;
    {
        const bool branch_taken_0x1e3520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3520u;
        // 0x1e3524: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3520) {
            ctx->pc = 0x1E353Cu;
            goto label_1e353c;
        }
    }
    ctx->pc = 0x1E3528u;
label_1e3528:
    // 0x1e3528: 0x30f200ff  andi        $s2, $a3, 0xFF
    ctx->pc = 0x1e3528u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1e352c:
    // 0x1e352c: 0x32420018  andi        $v0, $s2, 0x18
    ctx->pc = 0x1e352cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)24);
label_1e3530:
    // 0x1e3530: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e3530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e3534:
    // 0x1e3534: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e3538:
    if (ctx->pc == 0x1E3538u) {
        ctx->pc = 0x1E353Cu;
        goto label_1e353c;
    }
    ctx->pc = 0x1E3534u;
    {
        const bool branch_taken_0x1e3534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3534) {
            ctx->pc = 0x1E3550u;
            goto label_1e3550;
        }
    }
    ctx->pc = 0x1E353Cu;
label_1e353c:
    // 0x1e353c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e353cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3540:
    // 0x1e3540: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e3540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e3544:
    // 0x1e3544: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e3544u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1e3548:
    // 0x1e3548: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1e354c:
    if (ctx->pc == 0x1E354Cu) {
        ctx->pc = 0x1E354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3548u;
        // 0x1e354c: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3550u;
        goto label_1e3550;
    }
    ctx->pc = 0x1E3548u;
    {
        const bool branch_taken_0x1e3548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3548u;
        // 0x1e354c: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3548) {
            ctx->pc = 0x1E3680u;
            goto label_1e3680;
        }
    }
    ctx->pc = 0x1E3550u;
label_1e3550:
    // 0x1e3550: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x1e3550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1e3554:
    // 0x1e3554: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e3554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3558:
    // 0x1e3558: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e3558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e355c:
    // 0x1e355c: 0x320f809  jalr        $t9
label_1e3560:
    if (ctx->pc == 0x1E3560u) {
        ctx->pc = 0x1E3564u;
        goto label_1e3564;
    }
    ctx->pc = 0x1E355Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3564u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E355Cu, 0x1E3564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3564u;
label_1e3564:
    // 0x1e3564: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e3568:
    if (ctx->pc == 0x1E3568u) {
        ctx->pc = 0x1E3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3564u;
        // 0x1e3568: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E356Cu;
        goto label_1e356c;
    }
    ctx->pc = 0x1E3564u;
    {
        const bool branch_taken_0x1e3564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3564u;
        // 0x1e3568: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3564) {
            ctx->pc = 0x1E3594u;
            goto label_1e3594;
        }
    }
    ctx->pc = 0x1E356Cu;
label_1e356c:
    // 0x1e356c: 0xc07a704  jal         func_1E9C10
label_1e3570:
    if (ctx->pc == 0x1E3570u) {
        ctx->pc = 0x1E3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E356Cu;
        // 0x1e3570: 0x27c40080  addiu       $a0, $fp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3574u;
        goto label_1e3574;
    }
    ctx->pc = 0x1E356Cu;
    SET_GPR_U32(ctx, 31, 0x1E3574u);
    ctx->pc = 0x1E3570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E356Cu;
    // 0x1e3570: 0x27c40080  addiu       $a0, $fp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E356Cu, 0x1E3574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3574u;
label_1e3574:
    // 0x1e3574: 0x0  nop
    ctx->pc = 0x1e3574u;
    // NOP
label_1e3578:
    // 0x1e3578: 0x0  nop
    ctx->pc = 0x1e3578u;
    // NOP
label_1e357c:
    // 0x1e357c: 0x0  nop
    ctx->pc = 0x1e357cu;
    // NOP
label_1e3580:
    // 0x1e3580: 0x0  nop
    ctx->pc = 0x1e3580u;
    // NOP
label_1e3584:
    // 0x1e3584: 0x0  nop
    ctx->pc = 0x1e3584u;
    // NOP
label_1e3588:
    // 0x1e3588: 0x0  nop
    ctx->pc = 0x1e3588u;
    // NOP
label_1e358c:
    // 0x1e358c: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e3590:
    if (ctx->pc == 0x1E3590u) {
        ctx->pc = 0x1E3594u;
        goto label_1e3594;
    }
    ctx->pc = 0x1E358Cu;
    {
        const bool branch_taken_0x1e358c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e358c) {
            ctx->pc = 0x1E3574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3574;
        }
    }
    ctx->pc = 0x1E3594u;
label_1e3594:
    // 0x1e3594: 0x0  nop
    ctx->pc = 0x1e3594u;
    // NOP
label_1e3598:
    // 0x1e3598: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1e3598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1e359c:
    // 0x1e359c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1e359cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1e35a0:
    // 0x1e35a0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e35a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e35a4:
    // 0x1e35a4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1e35a8:
    if (ctx->pc == 0x1E35A8u) {
        ctx->pc = 0x1E35A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35A4u;
        // 0x1e35a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E35ACu;
        goto label_1e35ac;
    }
    ctx->pc = 0x1E35A4u;
    {
        const bool branch_taken_0x1e35a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E35A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35A4u;
        // 0x1e35a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e35a4) {
            ctx->pc = 0x1E35D0u;
            goto label_1e35d0;
        }
    }
    ctx->pc = 0x1E35ACu;
label_1e35ac:
    // 0x1e35ac: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e35acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e35b0:
    // 0x1e35b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e35b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e35b4:
    // 0x1e35b4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e35b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e35b8:
    // 0x1e35b8: 0x320f809  jalr        $t9
label_1e35bc:
    if (ctx->pc == 0x1E35BCu) {
        ctx->pc = 0x1E35BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35B8u;
        // 0x1e35bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E35C0u;
        goto label_1e35c0;
    }
    ctx->pc = 0x1E35B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E35C0u);
        ctx->pc = 0x1E35BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35B8u;
        // 0x1e35bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E35B8u, 0x1E35C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E35C0u;
label_1e35c0:
    // 0x1e35c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e35c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e35c4:
    // 0x1e35c4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e35c8:
    if (ctx->pc == 0x1E35C8u) {
        ctx->pc = 0x1E35CCu;
        goto label_1e35cc;
    }
    ctx->pc = 0x1E35C4u;
    {
        const bool branch_taken_0x1e35c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e35c4) {
            ctx->pc = 0x1E35D0u;
            goto label_1e35d0;
        }
    }
    ctx->pc = 0x1E35CCu;
label_1e35cc:
    // 0x1e35cc: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1e35ccu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1e35d0:
    // 0x1e35d0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1e35d4:
    if (ctx->pc == 0x1E35D4u) {
        ctx->pc = 0x1E35D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35D0u;
        // 0x1e35d4: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E35D8u;
        goto label_1e35d8;
    }
    ctx->pc = 0x1E35D0u;
    {
        const bool branch_taken_0x1e35d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E35D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35D0u;
        // 0x1e35d4: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e35d0) {
            ctx->pc = 0x1E35ECu;
            goto label_1e35ec;
        }
    }
    ctx->pc = 0x1E35D8u;
label_1e35d8:
    // 0x1e35d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e35dc:
    // 0x1e35dc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e35dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e35e0:
    // 0x1e35e0: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e35e0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1e35e4:
    // 0x1e35e4: 0x10000026  b           . + 4 + (0x26 << 2)
label_1e35e8:
    if (ctx->pc == 0x1E35E8u) {
        ctx->pc = 0x1E35E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35E4u;
        // 0x1e35e8: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E35ECu;
        goto label_1e35ec;
    }
    ctx->pc = 0x1E35E4u;
    {
        const bool branch_taken_0x1e35e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E35E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35E4u;
        // 0x1e35e8: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e35e4) {
            ctx->pc = 0x1E3680u;
            goto label_1e3680;
        }
    }
    ctx->pc = 0x1E35ECu;
label_1e35ec:
    // 0x1e35ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e35ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e35f0:
    // 0x1e35f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1e35f4:
    if (ctx->pc == 0x1E35F4u) {
        ctx->pc = 0x1E35F8u;
        goto label_1e35f8;
    }
    ctx->pc = 0x1E35F0u;
    {
        const bool branch_taken_0x1e35f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e35f0) {
            ctx->pc = 0x1E362Cu;
            goto label_1e362c;
        }
    }
    ctx->pc = 0x1E35F8u;
label_1e35f8:
    // 0x1e35f8: 0x92620040  lbu         $v0, 0x40($s3)
    ctx->pc = 0x1e35f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 64)));
label_1e35fc:
    // 0x1e35fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e3600:
    if (ctx->pc == 0x1E3600u) {
        ctx->pc = 0x1E3604u;
        goto label_1e3604;
    }
    ctx->pc = 0x1E35FCu;
    {
        const bool branch_taken_0x1e35fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e35fc) {
            ctx->pc = 0x1E362Cu;
            goto label_1e362c;
        }
    }
    ctx->pc = 0x1E3604u;
label_1e3604:
    // 0x1e3604: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
label_1e3608:
    if (ctx->pc == 0x1E3608u) {
        ctx->pc = 0x1E3608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3604u;
        // 0x1e3608: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E360Cu;
        goto label_1e360c;
    }
    ctx->pc = 0x1E3604u;
    {
        const bool branch_taken_0x1e3604 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1E3608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3604u;
        // 0x1e3608: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3604) {
            ctx->pc = 0x1E362Cu;
            goto label_1e362c;
        }
    }
    ctx->pc = 0x1E360Cu;
label_1e360c:
    // 0x1e360c: 0xc079574  jal         func_1E55D0
label_1e3610:
    if (ctx->pc == 0x1E3610u) {
        ctx->pc = 0x1E3614u;
        goto label_1e3614;
    }
    ctx->pc = 0x1E360Cu;
    SET_GPR_U32(ctx, 31, 0x1E3614u);
    ctx->pc = 0x1E55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55D0u, 0x1E360Cu, 0x1E3614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3614u;
label_1e3614:
    // 0x1e3614: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e3618:
    if (ctx->pc == 0x1E3618u) {
        ctx->pc = 0x1E3618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3614u;
        // 0x1e3618: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E361Cu;
        goto label_1e361c;
    }
    ctx->pc = 0x1E3614u;
    {
        const bool branch_taken_0x1e3614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3614u;
        // 0x1e3618: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3614) {
            ctx->pc = 0x1E362Cu;
            goto label_1e362c;
        }
    }
    ctx->pc = 0x1E361Cu;
label_1e361c:
    // 0x1e361c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e361cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e3620:
    // 0x1e3620: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e3620u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1e3624:
    // 0x1e3624: 0x10000016  b           . + 4 + (0x16 << 2)
label_1e3628:
    if (ctx->pc == 0x1E3628u) {
        ctx->pc = 0x1E3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3624u;
        // 0x1e3628: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E362Cu;
        goto label_1e362c;
    }
    ctx->pc = 0x1E3624u;
    {
        const bool branch_taken_0x1e3624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3624u;
        // 0x1e3628: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3624) {
            ctx->pc = 0x1E3680u;
            goto label_1e3680;
        }
    }
    ctx->pc = 0x1E362Cu;
label_1e362c:
    // 0x1e362c: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x1e362cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1e3630:
    // 0x1e3630: 0xdfc50070  ld          $a1, 0x70($fp)
    ctx->pc = 0x1e3630u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 112)));
label_1e3634:
    // 0x1e3634: 0xc07f74e  jal         func_1FDD38
label_1e3638:
    if (ctx->pc == 0x1E3638u) {
        ctx->pc = 0x1E3638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3634u;
        // 0x1e3638: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E363Cu;
        goto label_1e363c;
    }
    ctx->pc = 0x1E3634u;
    SET_GPR_U32(ctx, 31, 0x1E363Cu);
    ctx->pc = 0x1E3638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3634u;
    // 0x1e3638: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDD38u, 0x1E3634u, 0x1E363Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E363Cu;
label_1e363c:
    // 0x1e363c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e3640:
    if (ctx->pc == 0x1E3640u) {
        ctx->pc = 0x1E3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E363Cu;
        // 0x1e3640: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3644u;
        goto label_1e3644;
    }
    ctx->pc = 0x1E363Cu;
    {
        const bool branch_taken_0x1e363c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E363Cu;
        // 0x1e3640: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e363c) {
            ctx->pc = 0x1E3654u;
            goto label_1e3654;
        }
    }
    ctx->pc = 0x1E3644u;
label_1e3644:
    // 0x1e3644: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e3644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e3648:
    // 0x1e3648: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e3648u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1e364c:
    // 0x1e364c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1e3650:
    if (ctx->pc == 0x1E3650u) {
        ctx->pc = 0x1E3650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E364Cu;
        // 0x1e3650: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3654u;
        goto label_1e3654;
    }
    ctx->pc = 0x1E364Cu;
    {
        const bool branch_taken_0x1e364c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E364Cu;
        // 0x1e3650: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e364c) {
            ctx->pc = 0x1E3680u;
            goto label_1e3680;
        }
    }
    ctx->pc = 0x1E3654u;
label_1e3654:
    // 0x1e3654: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1e3654u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1e3658:
    // 0x1e3658: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1e3658u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_1e365c:
    // 0x1e365c: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x1e365cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_1e3660:
    // 0x1e3660: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1e3660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_1e3664:
    // 0x1e3664: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1e3664u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_1e3668:
    // 0x1e3668: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x1e3668u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_1e366c:
    // 0x1e366c: 0xa2600040  sb          $zero, 0x40($s3)
    ctx->pc = 0x1e366cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 64), (uint8_t)GPR_U32(ctx, 0));
label_1e3670:
    // 0x1e3670: 0xdfc30070  ld          $v1, 0x70($fp)
    ctx->pc = 0x1e3670u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 112)));
label_1e3674:
    // 0x1e3674: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e3674u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1e3678:
    // 0x1e3678: 0x8fc30078  lw          $v1, 0x78($fp)
    ctx->pc = 0x1e3678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
label_1e367c:
    // 0x1e367c: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x1e367cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_1e3680:
    // 0x1e3680: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e3680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e3684:
    // 0x1e3684: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e3684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1e3688:
    // 0x1e3688: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1e3688u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e368c:
    // 0x1e368c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e368cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e3690:
    // 0x1e3690: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e3690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e3694:
    // 0x1e3694: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e3694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3698:
    // 0x1e3698: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e369c:
    // 0x1e369c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e369cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e36a0:
    // 0x1e36a0: 0x3e00008  jr          $ra
label_1e36a4:
    if (ctx->pc == 0x1E36A4u) {
        ctx->pc = 0x1E36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E36A0u;
        // 0x1e36a4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E36A8u;
        goto label_fallthrough_0x1e36a0;
    }
    ctx->pc = 0x1E36A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E36A0u;
        // 0x1e36a4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E36A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e36a0:
    ctx->pc = 0x1E36A8u;
}
