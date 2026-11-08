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

// Function: FUN_00137570
// Address: 0x137570 - 0x13778c
void FUN_00137570_0x137570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00137570_0x137570");
#endif

    switch (ctx->pc) {
        case 0x137570u: goto label_137570;
        case 0x137574u: goto label_137574;
        case 0x137578u: goto label_137578;
        case 0x13757cu: goto label_13757c;
        case 0x137580u: goto label_137580;
        case 0x137584u: goto label_137584;
        case 0x137588u: goto label_137588;
        case 0x13758cu: goto label_13758c;
        case 0x137590u: goto label_137590;
        case 0x137594u: goto label_137594;
        case 0x137598u: goto label_137598;
        case 0x13759cu: goto label_13759c;
        case 0x1375a0u: goto label_1375a0;
        case 0x1375a4u: goto label_1375a4;
        case 0x1375a8u: goto label_1375a8;
        case 0x1375acu: goto label_1375ac;
        case 0x1375b0u: goto label_1375b0;
        case 0x1375b4u: goto label_1375b4;
        case 0x1375b8u: goto label_1375b8;
        case 0x1375bcu: goto label_1375bc;
        case 0x1375c0u: goto label_1375c0;
        case 0x1375c4u: goto label_1375c4;
        case 0x1375c8u: goto label_1375c8;
        case 0x1375ccu: goto label_1375cc;
        case 0x1375d0u: goto label_1375d0;
        case 0x1375d4u: goto label_1375d4;
        case 0x1375d8u: goto label_1375d8;
        case 0x1375dcu: goto label_1375dc;
        case 0x1375e0u: goto label_1375e0;
        case 0x1375e4u: goto label_1375e4;
        case 0x1375e8u: goto label_1375e8;
        case 0x1375ecu: goto label_1375ec;
        case 0x1375f0u: goto label_1375f0;
        case 0x1375f4u: goto label_1375f4;
        case 0x1375f8u: goto label_1375f8;
        case 0x1375fcu: goto label_1375fc;
        case 0x137600u: goto label_137600;
        case 0x137604u: goto label_137604;
        case 0x137608u: goto label_137608;
        case 0x13760cu: goto label_13760c;
        case 0x137610u: goto label_137610;
        case 0x137614u: goto label_137614;
        case 0x137618u: goto label_137618;
        case 0x13761cu: goto label_13761c;
        case 0x137620u: goto label_137620;
        case 0x137624u: goto label_137624;
        case 0x137628u: goto label_137628;
        case 0x13762cu: goto label_13762c;
        case 0x137630u: goto label_137630;
        case 0x137634u: goto label_137634;
        case 0x137638u: goto label_137638;
        case 0x13763cu: goto label_13763c;
        case 0x137640u: goto label_137640;
        case 0x137644u: goto label_137644;
        case 0x137648u: goto label_137648;
        case 0x13764cu: goto label_13764c;
        case 0x137650u: goto label_137650;
        case 0x137654u: goto label_137654;
        case 0x137658u: goto label_137658;
        case 0x13765cu: goto label_13765c;
        case 0x137660u: goto label_137660;
        case 0x137664u: goto label_137664;
        case 0x137668u: goto label_137668;
        case 0x13766cu: goto label_13766c;
        case 0x137670u: goto label_137670;
        case 0x137674u: goto label_137674;
        case 0x137678u: goto label_137678;
        case 0x13767cu: goto label_13767c;
        case 0x137680u: goto label_137680;
        case 0x137684u: goto label_137684;
        case 0x137688u: goto label_137688;
        case 0x13768cu: goto label_13768c;
        case 0x137690u: goto label_137690;
        case 0x137694u: goto label_137694;
        case 0x137698u: goto label_137698;
        case 0x13769cu: goto label_13769c;
        case 0x1376a0u: goto label_1376a0;
        case 0x1376a4u: goto label_1376a4;
        case 0x1376a8u: goto label_1376a8;
        case 0x1376acu: goto label_1376ac;
        case 0x1376b0u: goto label_1376b0;
        case 0x1376b4u: goto label_1376b4;
        case 0x1376b8u: goto label_1376b8;
        case 0x1376bcu: goto label_1376bc;
        case 0x1376c0u: goto label_1376c0;
        case 0x1376c4u: goto label_1376c4;
        case 0x1376c8u: goto label_1376c8;
        case 0x1376ccu: goto label_1376cc;
        case 0x1376d0u: goto label_1376d0;
        case 0x1376d4u: goto label_1376d4;
        case 0x1376d8u: goto label_1376d8;
        case 0x1376dcu: goto label_1376dc;
        case 0x1376e0u: goto label_1376e0;
        case 0x1376e4u: goto label_1376e4;
        case 0x1376e8u: goto label_1376e8;
        case 0x1376ecu: goto label_1376ec;
        case 0x1376f0u: goto label_1376f0;
        case 0x1376f4u: goto label_1376f4;
        case 0x1376f8u: goto label_1376f8;
        case 0x1376fcu: goto label_1376fc;
        case 0x137700u: goto label_137700;
        case 0x137704u: goto label_137704;
        case 0x137708u: goto label_137708;
        case 0x13770cu: goto label_13770c;
        case 0x137710u: goto label_137710;
        case 0x137714u: goto label_137714;
        case 0x137718u: goto label_137718;
        case 0x13771cu: goto label_13771c;
        case 0x137720u: goto label_137720;
        case 0x137724u: goto label_137724;
        case 0x137728u: goto label_137728;
        case 0x13772cu: goto label_13772c;
        case 0x137730u: goto label_137730;
        case 0x137734u: goto label_137734;
        case 0x137738u: goto label_137738;
        case 0x13773cu: goto label_13773c;
        case 0x137740u: goto label_137740;
        case 0x137744u: goto label_137744;
        case 0x137748u: goto label_137748;
        case 0x13774cu: goto label_13774c;
        case 0x137750u: goto label_137750;
        case 0x137754u: goto label_137754;
        case 0x137758u: goto label_137758;
        case 0x13775cu: goto label_13775c;
        case 0x137760u: goto label_137760;
        case 0x137764u: goto label_137764;
        case 0x137768u: goto label_137768;
        case 0x13776cu: goto label_13776c;
        case 0x137770u: goto label_137770;
        case 0x137774u: goto label_137774;
        case 0x137778u: goto label_137778;
        case 0x13777cu: goto label_13777c;
        case 0x137780u: goto label_137780;
        case 0x137784u: goto label_137784;
        case 0x137788u: goto label_137788;
        default: break;
    }

    ctx->pc = 0x137570u;

label_137570:
    // 0x137570: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x137570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_137574:
    // 0x137574: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x137574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_137578:
    // 0x137578: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x137578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_13757c:
    // 0x13757c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13757cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_137580:
    // 0x137580: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x137580u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_137584:
    // 0x137584: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x137584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_137588:
    // 0x137588: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x137588u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13758c:
    // 0x13758c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13758cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_137590:
    // 0x137590: 0x12800075  beqz        $s4, . + 4 + (0x75 << 2)
label_137594:
    if (ctx->pc == 0x137594u) {
        ctx->pc = 0x137594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137590u;
        // 0x137594: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137598u;
        goto label_137598;
    }
    ctx->pc = 0x137590u;
    {
        const bool branch_taken_0x137590 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x137594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137590u;
        // 0x137594: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137590) {
            ctx->pc = 0x137768u;
            goto label_137768;
        }
    }
    ctx->pc = 0x137598u;
label_137598:
    // 0x137598: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x137598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_13759c:
    // 0x13759c: 0x24429040  addiu       $v0, $v0, -0x6FC0
    ctx->pc = 0x13759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938688));
label_1375a0:
    // 0x1375a0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1375a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1375a4:
    // 0x1375a4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1375a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1375a8:
    // 0x1375a8: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
label_1375ac:
    if (ctx->pc == 0x1375ACu) {
        ctx->pc = 0x1375ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1375A8u;
        // 0x1375ac: 0x13143c  dsll32      $v0, $s3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1375B0u;
        goto label_1375b0;
    }
    ctx->pc = 0x1375A8u;
    {
        const bool branch_taken_0x1375a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1375ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1375A8u;
        // 0x1375ac: 0x13143c  dsll32      $v0, $s3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375a8) {
            ctx->pc = 0x137754u;
            goto label_137754;
        }
    }
    ctx->pc = 0x1375B0u;
label_1375b0:
    // 0x1375b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1375b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1375b4:
    // 0x1375b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1375b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1375b8:
    // 0x1375b8: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1375bc:
    if (ctx->pc == 0x1375BCu) {
        ctx->pc = 0x1375BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1375B8u;
        // 0x1375bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1375C0u;
        goto label_1375c0;
    }
    ctx->pc = 0x1375B8u;
    {
        const bool branch_taken_0x1375b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1375BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1375B8u;
        // 0x1375bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375b8) {
            ctx->pc = 0x1376B4u;
            goto label_1376b4;
        }
    }
    ctx->pc = 0x1375C0u;
label_1375c0:
    // 0x1375c0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1375c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1375c4:
    // 0x1375c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1375c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1375c8:
    // 0x1375c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1375c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1375cc:
    // 0x1375cc: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x1375ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_1375d0:
    // 0x1375d0: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x1375d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1375d4:
    // 0x1375d4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1375d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1375d8:
    // 0x1375d8: 0x0  nop
    ctx->pc = 0x1375d8u;
    // NOP
label_1375dc:
    // 0x1375dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1375e0:
    if (ctx->pc == 0x1375E0u) {
        ctx->pc = 0x1375E4u;
        goto label_1375e4;
    }
    ctx->pc = 0x1375DCu;
    {
        const bool branch_taken_0x1375dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1375dc) {
            ctx->pc = 0x1375F8u;
            goto label_1375f8;
        }
    }
    ctx->pc = 0x1375E4u;
label_1375e4:
    // 0x1375e4: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x1375e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1375e8:
    // 0x1375e8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1375e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1375ec:
    // 0x1375ec: 0x0  nop
    ctx->pc = 0x1375ecu;
    // NOP
label_1375f0:
    // 0x1375f0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1375f4:
    if (ctx->pc == 0x1375F4u) {
        ctx->pc = 0x1375F8u;
        goto label_1375f8;
    }
    ctx->pc = 0x1375F0u;
    {
        const bool branch_taken_0x1375f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1375f0) {
            ctx->pc = 0x137610u;
            goto label_137610;
        }
    }
    ctx->pc = 0x1375F8u;
label_1375f8:
    // 0x1375f8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1375f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1375fc:
    // 0x1375fc: 0x8f848580  lw          $a0, -0x7A80($gp)
    ctx->pc = 0x1375fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935936)));
label_137600:
    // 0x137600: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x137600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_137604:
    // 0x137604: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x137604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_137608:
    // 0x137608: 0xc04eb10  jal         func_13AC40
label_13760c:
    if (ctx->pc == 0x13760Cu) {
        ctx->pc = 0x13760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137608u;
        // 0x13760c: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137610u;
        goto label_137610;
    }
    ctx->pc = 0x137608u;
    SET_GPR_U32(ctx, 31, 0x137610u);
    ctx->pc = 0x13760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137608u;
    // 0x13760c: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x137608u, 0x137610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137610u;
label_137610:
    // 0x137610: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x137610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_137614:
    // 0x137614: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x137614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_137618:
    // 0x137618: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x137618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_13761c:
    // 0x13761c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x13761cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_137620:
    // 0x137620: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x137620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_137624:
    // 0x137624: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x137624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_137628:
    // 0x137628: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_13762c:
    if (ctx->pc == 0x13762Cu) {
        ctx->pc = 0x13762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137628u;
        // 0x13762c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137630u;
        goto label_137630;
    }
    ctx->pc = 0x137628u;
    {
        const bool branch_taken_0x137628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137628u;
        // 0x13762c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137628) {
            ctx->pc = 0x137638u;
            goto label_137638;
        }
    }
    ctx->pc = 0x137630u;
label_137630:
    // 0x137630: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_137634:
    if (ctx->pc == 0x137634u) {
        ctx->pc = 0x137638u;
        goto label_137638;
    }
    ctx->pc = 0x137630u;
    {
        const bool branch_taken_0x137630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x137630) {
            ctx->pc = 0x137650u;
            goto label_137650;
        }
    }
    ctx->pc = 0x137638u;
label_137638:
    // 0x137638: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x137638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_13763c:
    // 0x13763c: 0x8f848584  lw          $a0, -0x7A7C($gp)
    ctx->pc = 0x13763cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935940)));
label_137640:
    // 0x137640: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x137640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_137644:
    // 0x137644: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x137644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_137648:
    // 0x137648: 0xc04eb10  jal         func_13AC40
label_13764c:
    if (ctx->pc == 0x13764Cu) {
        ctx->pc = 0x13764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137648u;
        // 0x13764c: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137650u;
        goto label_137650;
    }
    ctx->pc = 0x137648u;
    SET_GPR_U32(ctx, 31, 0x137650u);
    ctx->pc = 0x13764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137648u;
    // 0x13764c: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x137648u, 0x137650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137650u;
label_137650:
    // 0x137650: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x137650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_137654:
    // 0x137654: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x137654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_137658:
    // 0x137658: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x137658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_13765c:
    // 0x13765c: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x13765cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_137660:
    // 0x137660: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x137660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_137664:
    // 0x137664: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x137664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_137668:
    // 0x137668: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_13766c:
    if (ctx->pc == 0x13766Cu) {
        ctx->pc = 0x137670u;
        goto label_137670;
    }
    ctx->pc = 0x137668u;
    {
        const bool branch_taken_0x137668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137668) {
            ctx->pc = 0x137688u;
            goto label_137688;
        }
    }
    ctx->pc = 0x137670u;
label_137670:
    // 0x137670: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x137670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_137674:
    // 0x137674: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x137674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_137678:
    // 0x137678: 0x8f848588  lw          $a0, -0x7A78($gp)
    ctx->pc = 0x137678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935944)));
label_13767c:
    // 0x13767c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_137680:
    // 0x137680: 0xc04eb10  jal         func_13AC40
label_137684:
    if (ctx->pc == 0x137684u) {
        ctx->pc = 0x137684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137680u;
        // 0x137684: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137688u;
        goto label_137688;
    }
    ctx->pc = 0x137680u;
    SET_GPR_U32(ctx, 31, 0x137688u);
    ctx->pc = 0x137684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137680u;
    // 0x137684: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x137680u, 0x137688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137688u;
label_137688:
    // 0x137688: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x137688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_13768c:
    // 0x13768c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13768cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_137690:
    // 0x137690: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x137690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_137694:
    // 0x137694: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_137698:
    if (ctx->pc == 0x137698u) {
        ctx->pc = 0x13769Cu;
        goto label_13769c;
    }
    ctx->pc = 0x137694u;
    {
        const bool branch_taken_0x137694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x137694) {
            ctx->pc = 0x1376A4u;
            goto label_1376a4;
        }
    }
    ctx->pc = 0x13769Cu;
label_13769c:
    // 0x13769c: 0xc0485bc  jal         func_1216F0
label_1376a0:
    if (ctx->pc == 0x1376A0u) {
        ctx->pc = 0x1376A4u;
        goto label_1376a4;
    }
    ctx->pc = 0x13769Cu;
    SET_GPR_U32(ctx, 31, 0x1376A4u);
    ctx->pc = 0x1216F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216F0u, 0x13769Cu, 0x1376A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1376A4u;
label_1376a4:
    // 0x1376a4: 0x0  nop
    ctx->pc = 0x1376a4u;
    // NOP
label_1376a8:
    // 0x1376a8: 0x263100a0  addiu       $s1, $s1, 0xA0
    ctx->pc = 0x1376a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_1376ac:
    // 0x1376ac: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1376acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_1376b0:
    // 0x1376b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1376b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1376b4:
    // 0x1376b4: 0x0  nop
    ctx->pc = 0x1376b4u;
    // NOP
label_1376b8:
    // 0x1376b8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1376b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1376bc:
    // 0x1376bc: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1376bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1376c0:
    // 0x1376c0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1376c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1376c4:
    // 0x1376c4: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_1376c8:
    if (ctx->pc == 0x1376C8u) {
        ctx->pc = 0x1376CCu;
        goto label_1376cc;
    }
    ctx->pc = 0x1376C4u;
    {
        const bool branch_taken_0x1376c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1376c4) {
            ctx->pc = 0x1375C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1375c0;
        }
    }
    ctx->pc = 0x1376CCu;
label_1376cc:
    // 0x1376cc: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1376ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1376d0:
    // 0x1376d0: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x1376d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
label_1376d4:
    // 0x1376d4: 0xc07a394  jal         func_1E8E50
label_1376d8:
    if (ctx->pc == 0x1376D8u) {
        ctx->pc = 0x1376D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1376D4u;
        // 0x1376d8: 0x24a57790  addiu       $a1, $a1, 0x7790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1376DCu;
        goto label_1376dc;
    }
    ctx->pc = 0x1376D4u;
    SET_GPR_U32(ctx, 31, 0x1376DCu);
    ctx->pc = 0x1376D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1376D4u;
    // 0x1376d8: 0x24a57790  addiu       $a1, $a1, 0x7790 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E50u, 0x1376D4u, 0x1376DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1376DCu;
label_1376dc:
    // 0x1376dc: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1376dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1376e0:
    // 0x1376e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1376e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1376e4:
    // 0x1376e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1376e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1376e8:
    // 0x1376e8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1376e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1376ec:
    // 0x1376ec: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x1376ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1376f0:
    // 0x1376f0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1376f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1376f4:
    // 0x1376f4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_1376f8:
    if (ctx->pc == 0x1376F8u) {
        ctx->pc = 0x1376FCu;
        goto label_1376fc;
    }
    ctx->pc = 0x1376F4u;
    {
        const bool branch_taken_0x1376f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1376f4) {
            ctx->pc = 0x137750u;
            goto label_137750;
        }
    }
    ctx->pc = 0x1376FCu;
label_1376fc:
    // 0x1376fc: 0x8cc30048  lw          $v1, 0x48($a2)
    ctx->pc = 0x1376fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
label_137700:
    // 0x137700: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x137700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_137704:
    // 0x137704: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_137708:
    if (ctx->pc == 0x137708u) {
        ctx->pc = 0x137708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137704u;
        // 0x137708: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13770Cu;
        goto label_13770c;
    }
    ctx->pc = 0x137704u;
    {
        const bool branch_taken_0x137704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x137708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137704u;
        // 0x137708: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137704) {
            ctx->pc = 0x137734u;
            goto label_137734;
        }
    }
    ctx->pc = 0x13770Cu;
label_13770c:
    // 0x13770c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_137710:
    if (ctx->pc == 0x137710u) {
        ctx->pc = 0x137714u;
        goto label_137714;
    }
    ctx->pc = 0x13770Cu;
    {
        const bool branch_taken_0x13770c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13770c) {
            ctx->pc = 0x137734u;
            goto label_137734;
        }
    }
    ctx->pc = 0x137714u;
label_137714:
    // 0x137714: 0x8f85858c  lw          $a1, -0x7A74($gp)
    ctx->pc = 0x137714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
label_137718:
    // 0x137718: 0xc04eb2c  jal         func_13ACB0
label_13771c:
    if (ctx->pc == 0x13771Cu) {
        ctx->pc = 0x13771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137718u;
        // 0x13771c: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137720u;
        goto label_137720;
    }
    ctx->pc = 0x137718u;
    SET_GPR_U32(ctx, 31, 0x137720u);
    ctx->pc = 0x13771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137718u;
    // 0x13771c: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ACB0u, 0x137718u, 0x137720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137720u;
label_137720:
    // 0x137720: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x137720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_137724:
    // 0x137724: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x137724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_137728:
    // 0x137728: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x137728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_13772c:
    // 0x13772c: 0xc04ebb8  jal         func_13AEE0
label_137730:
    if (ctx->pc == 0x137730u) {
        ctx->pc = 0x137730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13772Cu;
        // 0x137730: 0x8f84858c  lw          $a0, -0x7A74($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137734u;
        goto label_137734;
    }
    ctx->pc = 0x13772Cu;
    SET_GPR_U32(ctx, 31, 0x137734u);
    ctx->pc = 0x137730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13772Cu;
    // 0x137730: 0x8f84858c  lw          $a0, -0x7A74($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AEE0u, 0x13772Cu, 0x137734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137734u;
label_137734:
    // 0x137734: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x137734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_137738:
    // 0x137738: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_13773c:
    if (ctx->pc == 0x13773Cu) {
        ctx->pc = 0x137740u;
        goto label_137740;
    }
    ctx->pc = 0x137738u;
    {
        const bool branch_taken_0x137738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x137738) {
            ctx->pc = 0x137750u;
            goto label_137750;
        }
    }
    ctx->pc = 0x137740u;
label_137740:
    // 0x137740: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x137740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_137744:
    // 0x137744: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x137744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_137748:
    // 0x137748: 0x320f809  jalr        $t9
label_13774c:
    if (ctx->pc == 0x13774Cu) {
        ctx->pc = 0x13774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137748u;
        // 0x13774c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137750u;
        goto label_137750;
    }
    ctx->pc = 0x137748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x137750u);
        ctx->pc = 0x13774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137748u;
        // 0x13774c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137748u, 0x137750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137750u;
label_137750:
    // 0x137750: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x137750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
label_137754:
    // 0x137754: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x137754u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_137758:
    // 0x137758: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_13775c:
    if (ctx->pc == 0x13775Cu) {
        ctx->pc = 0x13775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137758u;
        // 0x13775c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137760u;
        goto label_137760;
    }
    ctx->pc = 0x137758u;
    {
        const bool branch_taken_0x137758 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137758u;
        // 0x13775c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137758) {
            ctx->pc = 0x13776Cu;
            goto label_13776c;
        }
    }
    ctx->pc = 0x137760u;
label_137760:
    // 0x137760: 0xc0401a4  jal         func_100690
label_137764:
    if (ctx->pc == 0x137764u) {
        ctx->pc = 0x137764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137760u;
        // 0x137764: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137768u;
        goto label_137768;
    }
    ctx->pc = 0x137760u;
    SET_GPR_U32(ctx, 31, 0x137768u);
    ctx->pc = 0x137764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137760u;
    // 0x137764: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x137760u, 0x137768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137768u;
label_137768:
    // 0x137768: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x137768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13776c:
    // 0x13776c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13776cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_137770:
    // 0x137770: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x137770u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_137774:
    // 0x137774: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x137774u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_137778:
    // 0x137778: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x137778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13777c:
    // 0x13777c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13777cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_137780:
    // 0x137780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_137784:
    // 0x137784: 0x3e00008  jr          $ra
label_137788:
    if (ctx->pc == 0x137788u) {
        ctx->pc = 0x137788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137784u;
        // 0x137788: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13778Cu;
        goto label_fallthrough_0x137784;
    }
    ctx->pc = 0x137784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137784u;
        // 0x137788: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x137784:
    ctx->pc = 0x13778Cu;
}
