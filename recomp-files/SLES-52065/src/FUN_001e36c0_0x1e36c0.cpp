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

// Function: FUN_001e36c0
// Address: 0x1e36c0 - 0x1e3924
void FUN_001e36c0_0x1e36c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e36c0_0x1e36c0");
#endif

    switch (ctx->pc) {
        case 0x1e36c0u: goto label_1e36c0;
        case 0x1e36c4u: goto label_1e36c4;
        case 0x1e36c8u: goto label_1e36c8;
        case 0x1e36ccu: goto label_1e36cc;
        case 0x1e36d0u: goto label_1e36d0;
        case 0x1e36d4u: goto label_1e36d4;
        case 0x1e36d8u: goto label_1e36d8;
        case 0x1e36dcu: goto label_1e36dc;
        case 0x1e36e0u: goto label_1e36e0;
        case 0x1e36e4u: goto label_1e36e4;
        case 0x1e36e8u: goto label_1e36e8;
        case 0x1e36ecu: goto label_1e36ec;
        case 0x1e36f0u: goto label_1e36f0;
        case 0x1e36f4u: goto label_1e36f4;
        case 0x1e36f8u: goto label_1e36f8;
        case 0x1e36fcu: goto label_1e36fc;
        case 0x1e3700u: goto label_1e3700;
        case 0x1e3704u: goto label_1e3704;
        case 0x1e3708u: goto label_1e3708;
        case 0x1e370cu: goto label_1e370c;
        case 0x1e3710u: goto label_1e3710;
        case 0x1e3714u: goto label_1e3714;
        case 0x1e3718u: goto label_1e3718;
        case 0x1e371cu: goto label_1e371c;
        case 0x1e3720u: goto label_1e3720;
        case 0x1e3724u: goto label_1e3724;
        case 0x1e3728u: goto label_1e3728;
        case 0x1e372cu: goto label_1e372c;
        case 0x1e3730u: goto label_1e3730;
        case 0x1e3734u: goto label_1e3734;
        case 0x1e3738u: goto label_1e3738;
        case 0x1e373cu: goto label_1e373c;
        case 0x1e3740u: goto label_1e3740;
        case 0x1e3744u: goto label_1e3744;
        case 0x1e3748u: goto label_1e3748;
        case 0x1e374cu: goto label_1e374c;
        case 0x1e3750u: goto label_1e3750;
        case 0x1e3754u: goto label_1e3754;
        case 0x1e3758u: goto label_1e3758;
        case 0x1e375cu: goto label_1e375c;
        case 0x1e3760u: goto label_1e3760;
        case 0x1e3764u: goto label_1e3764;
        case 0x1e3768u: goto label_1e3768;
        case 0x1e376cu: goto label_1e376c;
        case 0x1e3770u: goto label_1e3770;
        case 0x1e3774u: goto label_1e3774;
        case 0x1e3778u: goto label_1e3778;
        case 0x1e377cu: goto label_1e377c;
        case 0x1e3780u: goto label_1e3780;
        case 0x1e3784u: goto label_1e3784;
        case 0x1e3788u: goto label_1e3788;
        case 0x1e378cu: goto label_1e378c;
        case 0x1e3790u: goto label_1e3790;
        case 0x1e3794u: goto label_1e3794;
        case 0x1e3798u: goto label_1e3798;
        case 0x1e379cu: goto label_1e379c;
        case 0x1e37a0u: goto label_1e37a0;
        case 0x1e37a4u: goto label_1e37a4;
        case 0x1e37a8u: goto label_1e37a8;
        case 0x1e37acu: goto label_1e37ac;
        case 0x1e37b0u: goto label_1e37b0;
        case 0x1e37b4u: goto label_1e37b4;
        case 0x1e37b8u: goto label_1e37b8;
        case 0x1e37bcu: goto label_1e37bc;
        case 0x1e37c0u: goto label_1e37c0;
        case 0x1e37c4u: goto label_1e37c4;
        case 0x1e37c8u: goto label_1e37c8;
        case 0x1e37ccu: goto label_1e37cc;
        case 0x1e37d0u: goto label_1e37d0;
        case 0x1e37d4u: goto label_1e37d4;
        case 0x1e37d8u: goto label_1e37d8;
        case 0x1e37dcu: goto label_1e37dc;
        case 0x1e37e0u: goto label_1e37e0;
        case 0x1e37e4u: goto label_1e37e4;
        case 0x1e37e8u: goto label_1e37e8;
        case 0x1e37ecu: goto label_1e37ec;
        case 0x1e37f0u: goto label_1e37f0;
        case 0x1e37f4u: goto label_1e37f4;
        case 0x1e37f8u: goto label_1e37f8;
        case 0x1e37fcu: goto label_1e37fc;
        case 0x1e3800u: goto label_1e3800;
        case 0x1e3804u: goto label_1e3804;
        case 0x1e3808u: goto label_1e3808;
        case 0x1e380cu: goto label_1e380c;
        case 0x1e3810u: goto label_1e3810;
        case 0x1e3814u: goto label_1e3814;
        case 0x1e3818u: goto label_1e3818;
        case 0x1e381cu: goto label_1e381c;
        case 0x1e3820u: goto label_1e3820;
        case 0x1e3824u: goto label_1e3824;
        case 0x1e3828u: goto label_1e3828;
        case 0x1e382cu: goto label_1e382c;
        case 0x1e3830u: goto label_1e3830;
        case 0x1e3834u: goto label_1e3834;
        case 0x1e3838u: goto label_1e3838;
        case 0x1e383cu: goto label_1e383c;
        case 0x1e3840u: goto label_1e3840;
        case 0x1e3844u: goto label_1e3844;
        case 0x1e3848u: goto label_1e3848;
        case 0x1e384cu: goto label_1e384c;
        case 0x1e3850u: goto label_1e3850;
        case 0x1e3854u: goto label_1e3854;
        case 0x1e3858u: goto label_1e3858;
        case 0x1e385cu: goto label_1e385c;
        case 0x1e3860u: goto label_1e3860;
        case 0x1e3864u: goto label_1e3864;
        case 0x1e3868u: goto label_1e3868;
        case 0x1e386cu: goto label_1e386c;
        case 0x1e3870u: goto label_1e3870;
        case 0x1e3874u: goto label_1e3874;
        case 0x1e3878u: goto label_1e3878;
        case 0x1e387cu: goto label_1e387c;
        case 0x1e3880u: goto label_1e3880;
        case 0x1e3884u: goto label_1e3884;
        case 0x1e3888u: goto label_1e3888;
        case 0x1e388cu: goto label_1e388c;
        case 0x1e3890u: goto label_1e3890;
        case 0x1e3894u: goto label_1e3894;
        case 0x1e3898u: goto label_1e3898;
        case 0x1e389cu: goto label_1e389c;
        case 0x1e38a0u: goto label_1e38a0;
        case 0x1e38a4u: goto label_1e38a4;
        case 0x1e38a8u: goto label_1e38a8;
        case 0x1e38acu: goto label_1e38ac;
        case 0x1e38b0u: goto label_1e38b0;
        case 0x1e38b4u: goto label_1e38b4;
        case 0x1e38b8u: goto label_1e38b8;
        case 0x1e38bcu: goto label_1e38bc;
        case 0x1e38c0u: goto label_1e38c0;
        case 0x1e38c4u: goto label_1e38c4;
        case 0x1e38c8u: goto label_1e38c8;
        case 0x1e38ccu: goto label_1e38cc;
        case 0x1e38d0u: goto label_1e38d0;
        case 0x1e38d4u: goto label_1e38d4;
        case 0x1e38d8u: goto label_1e38d8;
        case 0x1e38dcu: goto label_1e38dc;
        case 0x1e38e0u: goto label_1e38e0;
        case 0x1e38e4u: goto label_1e38e4;
        case 0x1e38e8u: goto label_1e38e8;
        case 0x1e38ecu: goto label_1e38ec;
        case 0x1e38f0u: goto label_1e38f0;
        case 0x1e38f4u: goto label_1e38f4;
        case 0x1e38f8u: goto label_1e38f8;
        case 0x1e38fcu: goto label_1e38fc;
        case 0x1e3900u: goto label_1e3900;
        case 0x1e3904u: goto label_1e3904;
        case 0x1e3908u: goto label_1e3908;
        case 0x1e390cu: goto label_1e390c;
        case 0x1e3910u: goto label_1e3910;
        case 0x1e3914u: goto label_1e3914;
        case 0x1e3918u: goto label_1e3918;
        case 0x1e391cu: goto label_1e391c;
        case 0x1e3920u: goto label_1e3920;
        default: break;
    }

    ctx->pc = 0x1e36c0u;

label_1e36c0:
    // 0x1e36c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e36c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1e36c4:
    // 0x1e36c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e36c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1e36c8:
    // 0x1e36c8: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x1e36c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_1e36cc:
    // 0x1e36cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e36ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e36d0:
    // 0x1e36d0: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e36d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
label_1e36d4:
    // 0x1e36d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e36d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e36d8:
    // 0x1e36d8: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1e36d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e36dc:
    // 0x1e36dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e36dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e36e0:
    // 0x1e36e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e36e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e36e4:
    // 0x1e36e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e36e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e36e8:
    // 0x1e36e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e36e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e36ec:
    // 0x1e36ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e36ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e36f0:
    // 0x1e36f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e36f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e36f4:
    // 0x1e36f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e36f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e36f8:
    // 0x1e36f8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e36f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e36fc:
    // 0x1e36fc: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x1e36fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_1e3700:
    // 0x1e3700: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e3700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3704:
    // 0x1e3704: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e3704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e3708:
    // 0x1e3708: 0x320f809  jalr        $t9
label_1e370c:
    if (ctx->pc == 0x1E370Cu) {
        ctx->pc = 0x1E370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3708u;
        // 0x1e370c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3710u;
        goto label_1e3710;
    }
    ctx->pc = 0x1E3708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3710u);
        ctx->pc = 0x1E370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3708u;
        // 0x1e370c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3708u, 0x1E3710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3710u;
label_1e3710:
    // 0x1e3710: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e3714:
    if (ctx->pc == 0x1E3714u) {
        ctx->pc = 0x1E3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3710u;
        // 0x1e3714: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3718u;
        goto label_1e3718;
    }
    ctx->pc = 0x1E3710u;
    {
        const bool branch_taken_0x1e3710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3710u;
        // 0x1e3714: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3710) {
            ctx->pc = 0x1E3740u;
            goto label_1e3740;
        }
    }
    ctx->pc = 0x1E3718u;
label_1e3718:
    // 0x1e3718: 0xc07a704  jal         func_1E9C10
label_1e371c:
    if (ctx->pc == 0x1E371Cu) {
        ctx->pc = 0x1E371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3718u;
        // 0x1e371c: 0x27c40090  addiu       $a0, $fp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3720u;
        goto label_1e3720;
    }
    ctx->pc = 0x1E3718u;
    SET_GPR_U32(ctx, 31, 0x1E3720u);
    ctx->pc = 0x1E371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3718u;
    // 0x1e371c: 0x27c40090  addiu       $a0, $fp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E3718u, 0x1E3720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3720u;
label_1e3720:
    // 0x1e3720: 0x0  nop
    ctx->pc = 0x1e3720u;
    // NOP
label_1e3724:
    // 0x1e3724: 0x0  nop
    ctx->pc = 0x1e3724u;
    // NOP
label_1e3728:
    // 0x1e3728: 0x0  nop
    ctx->pc = 0x1e3728u;
    // NOP
label_1e372c:
    // 0x1e372c: 0x0  nop
    ctx->pc = 0x1e372cu;
    // NOP
label_1e3730:
    // 0x1e3730: 0x0  nop
    ctx->pc = 0x1e3730u;
    // NOP
label_1e3734:
    // 0x1e3734: 0x0  nop
    ctx->pc = 0x1e3734u;
    // NOP
label_1e3738:
    // 0x1e3738: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e373c:
    if (ctx->pc == 0x1E373Cu) {
        ctx->pc = 0x1E3740u;
        goto label_1e3740;
    }
    ctx->pc = 0x1E3738u;
    {
        const bool branch_taken_0x1e3738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3738) {
            ctx->pc = 0x1E3720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3720;
        }
    }
    ctx->pc = 0x1E3740u;
label_1e3740:
    // 0x1e3740: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1e3740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e3744:
    // 0x1e3744: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e3748:
    if (ctx->pc == 0x1E3748u) {
        ctx->pc = 0x1E3748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3744u;
        // 0x1e3748: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E374Cu;
        goto label_1e374c;
    }
    ctx->pc = 0x1E3744u;
    {
        const bool branch_taken_0x1e3744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3744u;
        // 0x1e3748: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3744) {
            ctx->pc = 0x1E3760u;
            goto label_1e3760;
        }
    }
    ctx->pc = 0x1E374Cu;
label_1e374c:
    // 0x1e374c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_1e3750:
    if (ctx->pc == 0x1E3750u) {
        ctx->pc = 0x1E3754u;
        goto label_1e3754;
    }
    ctx->pc = 0x1E374Cu;
    {
        const bool branch_taken_0x1e374c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e374c) {
            ctx->pc = 0x1E3770u;
            goto label_1e3770;
        }
    }
    ctx->pc = 0x1E3754u;
label_1e3754:
    // 0x1e3754: 0x1e800006  bgtz        $s4, . + 4 + (0x6 << 2)
label_1e3758:
    if (ctx->pc == 0x1E3758u) {
        ctx->pc = 0x1E375Cu;
        goto label_1e375c;
    }
    ctx->pc = 0x1E3754u;
    {
        const bool branch_taken_0x1e3754 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x1e3754) {
            ctx->pc = 0x1E3770u;
            goto label_1e3770;
        }
    }
    ctx->pc = 0x1E375Cu;
label_1e375c:
    // 0x1e375c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e375cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3760:
    // 0x1e3760: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e3760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e3764:
    // 0x1e3764: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1e3764u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
label_1e3768:
    // 0x1e3768: 0x10000062  b           . + 4 + (0x62 << 2)
label_1e376c:
    if (ctx->pc == 0x1E376Cu) {
        ctx->pc = 0x1E376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3768u;
        // 0x1e376c: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3770u;
        goto label_1e3770;
    }
    ctx->pc = 0x1E3768u;
    {
        const bool branch_taken_0x1e3768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3768u;
        // 0x1e376c: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3768) {
            ctx->pc = 0x1E38F4u;
            goto label_1e38f4;
        }
    }
    ctx->pc = 0x1E3770u;
label_1e3770:
    // 0x1e3770: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1e3770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1e3774:
    // 0x1e3774: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1e3774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1e3778:
    // 0x1e3778: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e3778u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e377c:
    // 0x1e377c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1e3780:
    if (ctx->pc == 0x1E3780u) {
        ctx->pc = 0x1E3780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E377Cu;
        // 0x1e3780: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3784u;
        goto label_1e3784;
    }
    ctx->pc = 0x1E377Cu;
    {
        const bool branch_taken_0x1e377c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E377Cu;
        // 0x1e3780: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e377c) {
            ctx->pc = 0x1E37A8u;
            goto label_1e37a8;
        }
    }
    ctx->pc = 0x1E3784u;
label_1e3784:
    // 0x1e3784: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1e3784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e3788:
    // 0x1e3788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e3788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e378c:
    // 0x1e378c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e378cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e3790:
    // 0x1e3790: 0x320f809  jalr        $t9
label_1e3794:
    if (ctx->pc == 0x1E3794u) {
        ctx->pc = 0x1E3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3790u;
        // 0x1e3794: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3798u;
        goto label_1e3798;
    }
    ctx->pc = 0x1E3790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3798u);
        ctx->pc = 0x1E3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3790u;
        // 0x1e3794: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3790u, 0x1E3798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3798u;
label_1e3798:
    // 0x1e3798: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e3798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e379c:
    // 0x1e379c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e37a0:
    if (ctx->pc == 0x1E37A0u) {
        ctx->pc = 0x1E37A4u;
        goto label_1e37a4;
    }
    ctx->pc = 0x1E379Cu;
    {
        const bool branch_taken_0x1e379c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e379c) {
            ctx->pc = 0x1E37A8u;
            goto label_1e37a8;
        }
    }
    ctx->pc = 0x1E37A4u;
label_1e37a4:
    // 0x1e37a4: 0x64150001  daddiu      $s5, $zero, 0x1
    ctx->pc = 0x1e37a4u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1e37a8:
    // 0x1e37a8: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_1e37ac:
    if (ctx->pc == 0x1E37ACu) {
        ctx->pc = 0x1E37ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37A8u;
        // 0x1e37ac: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E37B0u;
        goto label_1e37b0;
    }
    ctx->pc = 0x1E37A8u;
    {
        const bool branch_taken_0x1e37a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E37ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37A8u;
        // 0x1e37ac: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37a8) {
            ctx->pc = 0x1E37C0u;
            goto label_1e37c0;
        }
    }
    ctx->pc = 0x1E37B0u;
label_1e37b0:
    // 0x1e37b0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e37b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e37b4:
    // 0x1e37b4: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1e37b4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
label_1e37b8:
    // 0x1e37b8: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1e37bc:
    if (ctx->pc == 0x1E37BCu) {
        ctx->pc = 0x1E37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37B8u;
        // 0x1e37bc: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E37C0u;
        goto label_1e37c0;
    }
    ctx->pc = 0x1E37B8u;
    {
        const bool branch_taken_0x1e37b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37B8u;
        // 0x1e37bc: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37b8) {
            ctx->pc = 0x1E38F4u;
            goto label_1e38f4;
        }
    }
    ctx->pc = 0x1E37C0u;
label_1e37c0:
    // 0x1e37c0: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x1e37c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1e37c4:
    // 0x1e37c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e37c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e37c8:
    // 0x1e37c8: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_1e37cc:
    if (ctx->pc == 0x1E37CCu) {
        ctx->pc = 0x1E37D0u;
        goto label_1e37d0;
    }
    ctx->pc = 0x1E37C8u;
    {
        const bool branch_taken_0x1e37c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e37c8) {
            ctx->pc = 0x1E37D8u;
            goto label_1e37d8;
        }
    }
    ctx->pc = 0x1E37D0u;
label_1e37d0:
    // 0x1e37d0: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_1e37d4:
    if (ctx->pc == 0x1E37D4u) {
        ctx->pc = 0x1E37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37D0u;
        // 0x1e37d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E37D8u;
        goto label_1e37d8;
    }
    ctx->pc = 0x1E37D0u;
    {
        const bool branch_taken_0x1e37d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37D0u;
        // 0x1e37d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37d0) {
            ctx->pc = 0x1E3810u;
            goto label_1e3810;
        }
    }
    ctx->pc = 0x1E37D8u;
label_1e37d8:
    // 0x1e37d8: 0x92420040  lbu         $v0, 0x40($s2)
    ctx->pc = 0x1e37d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 64)));
label_1e37dc:
    // 0x1e37dc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e37e0:
    if (ctx->pc == 0x1E37E0u) {
        ctx->pc = 0x1E37E4u;
        goto label_1e37e4;
    }
    ctx->pc = 0x1E37DCu;
    {
        const bool branch_taken_0x1e37dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e37dc) {
            ctx->pc = 0x1E380Cu;
            goto label_1e380c;
        }
    }
    ctx->pc = 0x1E37E4u;
label_1e37e4:
    // 0x1e37e4: 0x6810009  bgez        $s4, . + 4 + (0x9 << 2)
label_1e37e8:
    if (ctx->pc == 0x1E37E8u) {
        ctx->pc = 0x1E37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37E4u;
        // 0x1e37e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E37ECu;
        goto label_1e37ec;
    }
    ctx->pc = 0x1E37E4u;
    {
        const bool branch_taken_0x1e37e4 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1E37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37E4u;
        // 0x1e37e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37e4) {
            ctx->pc = 0x1E380Cu;
            goto label_1e380c;
        }
    }
    ctx->pc = 0x1E37ECu;
label_1e37ec:
    // 0x1e37ec: 0xc079574  jal         func_1E55D0
label_1e37f0:
    if (ctx->pc == 0x1E37F0u) {
        ctx->pc = 0x1E37F4u;
        goto label_1e37f4;
    }
    ctx->pc = 0x1E37ECu;
    SET_GPR_U32(ctx, 31, 0x1E37F4u);
    ctx->pc = 0x1E55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55D0u, 0x1E37ECu, 0x1E37F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E37F4u;
label_1e37f4:
    // 0x1e37f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e37f8:
    if (ctx->pc == 0x1E37F8u) {
        ctx->pc = 0x1E37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37F4u;
        // 0x1e37f8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E37FCu;
        goto label_1e37fc;
    }
    ctx->pc = 0x1E37F4u;
    {
        const bool branch_taken_0x1e37f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37F4u;
        // 0x1e37f8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37f4) {
            ctx->pc = 0x1E380Cu;
            goto label_1e380c;
        }
    }
    ctx->pc = 0x1E37FCu;
label_1e37fc:
    // 0x1e37fc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e37fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e3800:
    // 0x1e3800: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1e3800u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
label_1e3804:
    // 0x1e3804: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1e3808:
    if (ctx->pc == 0x1E3808u) {
        ctx->pc = 0x1E3808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3804u;
        // 0x1e3808: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E380Cu;
        goto label_1e380c;
    }
    ctx->pc = 0x1E3804u;
    {
        const bool branch_taken_0x1e3804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3804u;
        // 0x1e3808: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3804) {
            ctx->pc = 0x1E38F4u;
            goto label_1e38f4;
        }
    }
    ctx->pc = 0x1E380Cu;
label_1e380c:
    // 0x1e380c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e3810:
    // 0x1e3810: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
label_1e3814:
    if (ctx->pc == 0x1E3814u) {
        ctx->pc = 0x1E3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3810u;
        // 0x1e3814: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3818u;
        goto label_1e3818;
    }
    ctx->pc = 0x1E3810u;
    {
        const bool branch_taken_0x1e3810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3810u;
        // 0x1e3814: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3810) {
            ctx->pc = 0x1E386Cu;
            goto label_1e386c;
        }
    }
    ctx->pc = 0x1E3818u;
label_1e3818:
    // 0x1e3818: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_1e381c:
    if (ctx->pc == 0x1E381Cu) {
        ctx->pc = 0x1E3820u;
        goto label_1e3820;
    }
    ctx->pc = 0x1E3818u;
    {
        const bool branch_taken_0x1e3818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3818) {
            ctx->pc = 0x1E383Cu;
            goto label_1e383c;
        }
    }
    ctx->pc = 0x1E3820u;
label_1e3820:
    // 0x1e3820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3824:
    // 0x1e3824: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_1e3828:
    if (ctx->pc == 0x1E3828u) {
        ctx->pc = 0x1E382Cu;
        goto label_1e382c;
    }
    ctx->pc = 0x1E3824u;
    {
        const bool branch_taken_0x1e3824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3824) {
            ctx->pc = 0x1E3834u;
            goto label_1e3834;
        }
    }
    ctx->pc = 0x1E382Cu;
label_1e382c:
    // 0x1e382c: 0x10000011  b           . + 4 + (0x11 << 2)
label_1e3830:
    if (ctx->pc == 0x1E3830u) {
        ctx->pc = 0x1E3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E382Cu;
        // 0x1e3830: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3834u;
        goto label_1e3834;
    }
    ctx->pc = 0x1E382Cu;
    {
        const bool branch_taken_0x1e382c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E382Cu;
        // 0x1e3830: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e382c) {
            ctx->pc = 0x1E3874u;
            goto label_1e3874;
        }
    }
    ctx->pc = 0x1E3834u;
label_1e3834:
    // 0x1e3834: 0x10000013  b           . + 4 + (0x13 << 2)
label_1e3838:
    if (ctx->pc == 0x1E3838u) {
        ctx->pc = 0x1E3838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3834u;
        // 0x1e3838: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E383Cu;
        goto label_1e383c;
    }
    ctx->pc = 0x1E3834u;
    {
        const bool branch_taken_0x1e3834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3834u;
        // 0x1e3838: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3834) {
            ctx->pc = 0x1E3884u;
            goto label_1e3884;
        }
    }
    ctx->pc = 0x1E383Cu;
label_1e383c:
    // 0x1e383c: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x1e383cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_1e3840:
    // 0x1e3840: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e3840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1e3844:
    // 0x1e3844: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e3844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e3848:
    // 0x1e3848: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1e384c:
    if (ctx->pc == 0x1E384Cu) {
        ctx->pc = 0x1E384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3848u;
        // 0x1e384c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3850u;
        goto label_1e3850;
    }
    ctx->pc = 0x1E3848u;
    {
        const bool branch_taken_0x1e3848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3848u;
        // 0x1e384c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3848) {
            ctx->pc = 0x1E3884u;
            goto label_1e3884;
        }
    }
    ctx->pc = 0x1E3850u;
label_1e3850:
    // 0x1e3850: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1e3850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1e3854:
    // 0x1e3854: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e3854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e3858:
    // 0x1e3858: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1e3858u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e385c:
    // 0x1e385c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1e385cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1e3860:
    // 0x1e3860: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e3860u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1e3864:
    // 0x1e3864: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e3868:
    if (ctx->pc == 0x1E3868u) {
        ctx->pc = 0x1E3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3864u;
        // 0x1e3868: 0x222882f  dsubu       $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E386Cu;
        goto label_1e386c;
    }
    ctx->pc = 0x1E3864u;
    {
        const bool branch_taken_0x1e3864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3864u;
        // 0x1e3868: 0x222882f  dsubu       $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3864) {
            ctx->pc = 0x1E3884u;
            goto label_1e3884;
        }
    }
    ctx->pc = 0x1E386Cu;
label_1e386c:
    // 0x1e386c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e3870:
    if (ctx->pc == 0x1E3870u) {
        ctx->pc = 0x1E3870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E386Cu;
        // 0x1e3870: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3874u;
        goto label_1e3874;
    }
    ctx->pc = 0x1E386Cu;
    {
        const bool branch_taken_0x1e386c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E386Cu;
        // 0x1e3870: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e386c) {
            ctx->pc = 0x1E3884u;
            goto label_1e3884;
        }
    }
    ctx->pc = 0x1E3874u;
label_1e3874:
    // 0x1e3874: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e3874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e3878:
    // 0x1e3878: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1e3878u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
label_1e387c:
    // 0x1e387c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1e3880:
    if (ctx->pc == 0x1E3880u) {
        ctx->pc = 0x1E3880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E387Cu;
        // 0x1e3880: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3884u;
        goto label_1e3884;
    }
    ctx->pc = 0x1E387Cu;
    {
        const bool branch_taken_0x1e387c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E387Cu;
        // 0x1e3880: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e387c) {
            ctx->pc = 0x1E38F4u;
            goto label_1e38f4;
        }
    }
    ctx->pc = 0x1E3884u;
label_1e3884:
    // 0x1e3884: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
label_1e3888:
    if (ctx->pc == 0x1E3888u) {
        ctx->pc = 0x1E3888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3884u;
        // 0x1e3888: 0x14203c  dsll32      $a0, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E388Cu;
        goto label_1e388c;
    }
    ctx->pc = 0x1E3884u;
    {
        const bool branch_taken_0x1e3884 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1E3888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3884u;
        // 0x1e3888: 0x14203c  dsll32      $a0, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3884) {
            ctx->pc = 0x1E3894u;
            goto label_1e3894;
        }
    }
    ctx->pc = 0x1E388Cu;
label_1e388c:
    // 0x1e388c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e388cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3890:
    // 0x1e3890: 0x14203c  dsll32      $a0, $s4, 0
    ctx->pc = 0x1e3890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
label_1e3894:
    // 0x1e3894: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e3894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e3898:
    // 0x1e3898: 0xc081c20  jal         func_207080
label_1e389c:
    if (ctx->pc == 0x1E389Cu) {
        ctx->pc = 0x1E389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3898u;
        // 0x1e389c: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38A0u;
        goto label_1e38a0;
    }
    ctx->pc = 0x1E3898u;
    SET_GPR_U32(ctx, 31, 0x1E38A0u);
    ctx->pc = 0x1E389Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3898u;
    // 0x1e389c: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1E3898u, 0x1E38A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E38A0u;
label_1e38a0:
    // 0x1e38a0: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1e38a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e38a4:
    // 0x1e38a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e38a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e38a8:
    // 0x1e38a8: 0xc07f74e  jal         func_1FDD38
label_1e38ac:
    if (ctx->pc == 0x1E38ACu) {
        ctx->pc = 0x1E38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38A8u;
        // 0x1e38ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38B0u;
        goto label_1e38b0;
    }
    ctx->pc = 0x1E38A8u;
    SET_GPR_U32(ctx, 31, 0x1E38B0u);
    ctx->pc = 0x1E38ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E38A8u;
    // 0x1e38ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDD38u, 0x1E38A8u, 0x1E38B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E38B0u;
label_1e38b0:
    // 0x1e38b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e38b4:
    if (ctx->pc == 0x1E38B4u) {
        ctx->pc = 0x1E38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38B0u;
        // 0x1e38b4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38B8u;
        goto label_1e38b8;
    }
    ctx->pc = 0x1E38B0u;
    {
        const bool branch_taken_0x1e38b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38B0u;
        // 0x1e38b4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38b0) {
            ctx->pc = 0x1E38C8u;
            goto label_1e38c8;
        }
    }
    ctx->pc = 0x1E38B8u;
label_1e38b8:
    // 0x1e38b8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e38b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e38bc:
    // 0x1e38bc: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1e38bcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
label_1e38c0:
    // 0x1e38c0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1e38c4:
    if (ctx->pc == 0x1E38C4u) {
        ctx->pc = 0x1E38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38C0u;
        // 0x1e38c4: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38C8u;
        goto label_1e38c8;
    }
    ctx->pc = 0x1E38C0u;
    {
        const bool branch_taken_0x1e38c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38C0u;
        // 0x1e38c4: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38c0) {
            ctx->pc = 0x1E38F4u;
            goto label_1e38f4;
        }
    }
    ctx->pc = 0x1E38C8u;
label_1e38c8:
    // 0x1e38c8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1e38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1e38cc:
    // 0x1e38cc: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1e38ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_1e38d0:
    // 0x1e38d0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1e38d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_1e38d4:
    // 0x1e38d4: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1e38d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_1e38d8:
    // 0x1e38d8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1e38d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1e38dc:
    // 0x1e38dc: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x1e38dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_1e38e0:
    // 0x1e38e0: 0xa2400040  sb          $zero, 0x40($s2)
    ctx->pc = 0x1e38e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 64), (uint8_t)GPR_U32(ctx, 0));
label_1e38e4:
    // 0x1e38e4: 0xc07f88a  jal         func_1FE228
label_1e38e8:
    if (ctx->pc == 0x1E38E8u) {
        ctx->pc = 0x1E38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38E4u;
        // 0x1e38e8: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38ECu;
        goto label_1e38ec;
    }
    ctx->pc = 0x1E38E4u;
    SET_GPR_U32(ctx, 31, 0x1E38ECu);
    ctx->pc = 0x1E38E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E38E4u;
    // 0x1e38e8: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE228u, 0x1E38E4u, 0x1E38ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E38ECu;
label_1e38ec:
    // 0x1e38ec: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x1e38ecu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
label_1e38f0:
    // 0x1e38f0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1e38f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_1e38f4:
    // 0x1e38f4: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e38f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e38f8:
    // 0x1e38f8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e38f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1e38fc:
    // 0x1e38fc: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1e38fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e3900:
    // 0x1e3900: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e3900u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e3904:
    // 0x1e3904: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e3904u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e3908:
    // 0x1e3908: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e3908u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e390c:
    // 0x1e390c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e390cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e3910:
    // 0x1e3910: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e3910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3914:
    // 0x1e3914: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3918:
    // 0x1e3918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e391c:
    // 0x1e391c: 0x3e00008  jr          $ra
label_1e3920:
    if (ctx->pc == 0x1E3920u) {
        ctx->pc = 0x1E3920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E391Cu;
        // 0x1e3920: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3924u;
        goto label_fallthrough_0x1e391c;
    }
    ctx->pc = 0x1E391Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E391Cu;
        // 0x1e3920: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E391Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e391c:
    ctx->pc = 0x1E3924u;
}
