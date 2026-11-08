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

// Function: FUN_00193610
// Address: 0x193610 - 0x193afc
void FUN_00193610_0x193610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00193610_0x193610");
#endif

    switch (ctx->pc) {
        case 0x193610u: goto label_193610;
        case 0x193614u: goto label_193614;
        case 0x193618u: goto label_193618;
        case 0x19361cu: goto label_19361c;
        case 0x193620u: goto label_193620;
        case 0x193624u: goto label_193624;
        case 0x193628u: goto label_193628;
        case 0x19362cu: goto label_19362c;
        case 0x193630u: goto label_193630;
        case 0x193634u: goto label_193634;
        case 0x193638u: goto label_193638;
        case 0x19363cu: goto label_19363c;
        case 0x193640u: goto label_193640;
        case 0x193644u: goto label_193644;
        case 0x193648u: goto label_193648;
        case 0x19364cu: goto label_19364c;
        case 0x193650u: goto label_193650;
        case 0x193654u: goto label_193654;
        case 0x193658u: goto label_193658;
        case 0x19365cu: goto label_19365c;
        case 0x193660u: goto label_193660;
        case 0x193664u: goto label_193664;
        case 0x193668u: goto label_193668;
        case 0x19366cu: goto label_19366c;
        case 0x193670u: goto label_193670;
        case 0x193674u: goto label_193674;
        case 0x193678u: goto label_193678;
        case 0x19367cu: goto label_19367c;
        case 0x193680u: goto label_193680;
        case 0x193684u: goto label_193684;
        case 0x193688u: goto label_193688;
        case 0x19368cu: goto label_19368c;
        case 0x193690u: goto label_193690;
        case 0x193694u: goto label_193694;
        case 0x193698u: goto label_193698;
        case 0x19369cu: goto label_19369c;
        case 0x1936a0u: goto label_1936a0;
        case 0x1936a4u: goto label_1936a4;
        case 0x1936a8u: goto label_1936a8;
        case 0x1936acu: goto label_1936ac;
        case 0x1936b0u: goto label_1936b0;
        case 0x1936b4u: goto label_1936b4;
        case 0x1936b8u: goto label_1936b8;
        case 0x1936bcu: goto label_1936bc;
        case 0x1936c0u: goto label_1936c0;
        case 0x1936c4u: goto label_1936c4;
        case 0x1936c8u: goto label_1936c8;
        case 0x1936ccu: goto label_1936cc;
        case 0x1936d0u: goto label_1936d0;
        case 0x1936d4u: goto label_1936d4;
        case 0x1936d8u: goto label_1936d8;
        case 0x1936dcu: goto label_1936dc;
        case 0x1936e0u: goto label_1936e0;
        case 0x1936e4u: goto label_1936e4;
        case 0x1936e8u: goto label_1936e8;
        case 0x1936ecu: goto label_1936ec;
        case 0x1936f0u: goto label_1936f0;
        case 0x1936f4u: goto label_1936f4;
        case 0x1936f8u: goto label_1936f8;
        case 0x1936fcu: goto label_1936fc;
        case 0x193700u: goto label_193700;
        case 0x193704u: goto label_193704;
        case 0x193708u: goto label_193708;
        case 0x19370cu: goto label_19370c;
        case 0x193710u: goto label_193710;
        case 0x193714u: goto label_193714;
        case 0x193718u: goto label_193718;
        case 0x19371cu: goto label_19371c;
        case 0x193720u: goto label_193720;
        case 0x193724u: goto label_193724;
        case 0x193728u: goto label_193728;
        case 0x19372cu: goto label_19372c;
        case 0x193730u: goto label_193730;
        case 0x193734u: goto label_193734;
        case 0x193738u: goto label_193738;
        case 0x19373cu: goto label_19373c;
        case 0x193740u: goto label_193740;
        case 0x193744u: goto label_193744;
        case 0x193748u: goto label_193748;
        case 0x19374cu: goto label_19374c;
        case 0x193750u: goto label_193750;
        case 0x193754u: goto label_193754;
        case 0x193758u: goto label_193758;
        case 0x19375cu: goto label_19375c;
        case 0x193760u: goto label_193760;
        case 0x193764u: goto label_193764;
        case 0x193768u: goto label_193768;
        case 0x19376cu: goto label_19376c;
        case 0x193770u: goto label_193770;
        case 0x193774u: goto label_193774;
        case 0x193778u: goto label_193778;
        case 0x19377cu: goto label_19377c;
        case 0x193780u: goto label_193780;
        case 0x193784u: goto label_193784;
        case 0x193788u: goto label_193788;
        case 0x19378cu: goto label_19378c;
        case 0x193790u: goto label_193790;
        case 0x193794u: goto label_193794;
        case 0x193798u: goto label_193798;
        case 0x19379cu: goto label_19379c;
        case 0x1937a0u: goto label_1937a0;
        case 0x1937a4u: goto label_1937a4;
        case 0x1937a8u: goto label_1937a8;
        case 0x1937acu: goto label_1937ac;
        case 0x1937b0u: goto label_1937b0;
        case 0x1937b4u: goto label_1937b4;
        case 0x1937b8u: goto label_1937b8;
        case 0x1937bcu: goto label_1937bc;
        case 0x1937c0u: goto label_1937c0;
        case 0x1937c4u: goto label_1937c4;
        case 0x1937c8u: goto label_1937c8;
        case 0x1937ccu: goto label_1937cc;
        case 0x1937d0u: goto label_1937d0;
        case 0x1937d4u: goto label_1937d4;
        case 0x1937d8u: goto label_1937d8;
        case 0x1937dcu: goto label_1937dc;
        case 0x1937e0u: goto label_1937e0;
        case 0x1937e4u: goto label_1937e4;
        case 0x1937e8u: goto label_1937e8;
        case 0x1937ecu: goto label_1937ec;
        case 0x1937f0u: goto label_1937f0;
        case 0x1937f4u: goto label_1937f4;
        case 0x1937f8u: goto label_1937f8;
        case 0x1937fcu: goto label_1937fc;
        case 0x193800u: goto label_193800;
        case 0x193804u: goto label_193804;
        case 0x193808u: goto label_193808;
        case 0x19380cu: goto label_19380c;
        case 0x193810u: goto label_193810;
        case 0x193814u: goto label_193814;
        case 0x193818u: goto label_193818;
        case 0x19381cu: goto label_19381c;
        case 0x193820u: goto label_193820;
        case 0x193824u: goto label_193824;
        case 0x193828u: goto label_193828;
        case 0x19382cu: goto label_19382c;
        case 0x193830u: goto label_193830;
        case 0x193834u: goto label_193834;
        case 0x193838u: goto label_193838;
        case 0x19383cu: goto label_19383c;
        case 0x193840u: goto label_193840;
        case 0x193844u: goto label_193844;
        case 0x193848u: goto label_193848;
        case 0x19384cu: goto label_19384c;
        case 0x193850u: goto label_193850;
        case 0x193854u: goto label_193854;
        case 0x193858u: goto label_193858;
        case 0x19385cu: goto label_19385c;
        case 0x193860u: goto label_193860;
        case 0x193864u: goto label_193864;
        case 0x193868u: goto label_193868;
        case 0x19386cu: goto label_19386c;
        case 0x193870u: goto label_193870;
        case 0x193874u: goto label_193874;
        case 0x193878u: goto label_193878;
        case 0x19387cu: goto label_19387c;
        case 0x193880u: goto label_193880;
        case 0x193884u: goto label_193884;
        case 0x193888u: goto label_193888;
        case 0x19388cu: goto label_19388c;
        case 0x193890u: goto label_193890;
        case 0x193894u: goto label_193894;
        case 0x193898u: goto label_193898;
        case 0x19389cu: goto label_19389c;
        case 0x1938a0u: goto label_1938a0;
        case 0x1938a4u: goto label_1938a4;
        case 0x1938a8u: goto label_1938a8;
        case 0x1938acu: goto label_1938ac;
        case 0x1938b0u: goto label_1938b0;
        case 0x1938b4u: goto label_1938b4;
        case 0x1938b8u: goto label_1938b8;
        case 0x1938bcu: goto label_1938bc;
        case 0x1938c0u: goto label_1938c0;
        case 0x1938c4u: goto label_1938c4;
        case 0x1938c8u: goto label_1938c8;
        case 0x1938ccu: goto label_1938cc;
        case 0x1938d0u: goto label_1938d0;
        case 0x1938d4u: goto label_1938d4;
        case 0x1938d8u: goto label_1938d8;
        case 0x1938dcu: goto label_1938dc;
        case 0x1938e0u: goto label_1938e0;
        case 0x1938e4u: goto label_1938e4;
        case 0x1938e8u: goto label_1938e8;
        case 0x1938ecu: goto label_1938ec;
        case 0x1938f0u: goto label_1938f0;
        case 0x1938f4u: goto label_1938f4;
        case 0x1938f8u: goto label_1938f8;
        case 0x1938fcu: goto label_1938fc;
        case 0x193900u: goto label_193900;
        case 0x193904u: goto label_193904;
        case 0x193908u: goto label_193908;
        case 0x19390cu: goto label_19390c;
        case 0x193910u: goto label_193910;
        case 0x193914u: goto label_193914;
        case 0x193918u: goto label_193918;
        case 0x19391cu: goto label_19391c;
        case 0x193920u: goto label_193920;
        case 0x193924u: goto label_193924;
        case 0x193928u: goto label_193928;
        case 0x19392cu: goto label_19392c;
        case 0x193930u: goto label_193930;
        case 0x193934u: goto label_193934;
        case 0x193938u: goto label_193938;
        case 0x19393cu: goto label_19393c;
        case 0x193940u: goto label_193940;
        case 0x193944u: goto label_193944;
        case 0x193948u: goto label_193948;
        case 0x19394cu: goto label_19394c;
        case 0x193950u: goto label_193950;
        case 0x193954u: goto label_193954;
        case 0x193958u: goto label_193958;
        case 0x19395cu: goto label_19395c;
        case 0x193960u: goto label_193960;
        case 0x193964u: goto label_193964;
        case 0x193968u: goto label_193968;
        case 0x19396cu: goto label_19396c;
        case 0x193970u: goto label_193970;
        case 0x193974u: goto label_193974;
        case 0x193978u: goto label_193978;
        case 0x19397cu: goto label_19397c;
        case 0x193980u: goto label_193980;
        case 0x193984u: goto label_193984;
        case 0x193988u: goto label_193988;
        case 0x19398cu: goto label_19398c;
        case 0x193990u: goto label_193990;
        case 0x193994u: goto label_193994;
        case 0x193998u: goto label_193998;
        case 0x19399cu: goto label_19399c;
        case 0x1939a0u: goto label_1939a0;
        case 0x1939a4u: goto label_1939a4;
        case 0x1939a8u: goto label_1939a8;
        case 0x1939acu: goto label_1939ac;
        case 0x1939b0u: goto label_1939b0;
        case 0x1939b4u: goto label_1939b4;
        case 0x1939b8u: goto label_1939b8;
        case 0x1939bcu: goto label_1939bc;
        case 0x1939c0u: goto label_1939c0;
        case 0x1939c4u: goto label_1939c4;
        case 0x1939c8u: goto label_1939c8;
        case 0x1939ccu: goto label_1939cc;
        case 0x1939d0u: goto label_1939d0;
        case 0x1939d4u: goto label_1939d4;
        case 0x1939d8u: goto label_1939d8;
        case 0x1939dcu: goto label_1939dc;
        case 0x1939e0u: goto label_1939e0;
        case 0x1939e4u: goto label_1939e4;
        case 0x1939e8u: goto label_1939e8;
        case 0x1939ecu: goto label_1939ec;
        case 0x1939f0u: goto label_1939f0;
        case 0x1939f4u: goto label_1939f4;
        case 0x1939f8u: goto label_1939f8;
        case 0x1939fcu: goto label_1939fc;
        case 0x193a00u: goto label_193a00;
        case 0x193a04u: goto label_193a04;
        case 0x193a08u: goto label_193a08;
        case 0x193a0cu: goto label_193a0c;
        case 0x193a10u: goto label_193a10;
        case 0x193a14u: goto label_193a14;
        case 0x193a18u: goto label_193a18;
        case 0x193a1cu: goto label_193a1c;
        case 0x193a20u: goto label_193a20;
        case 0x193a24u: goto label_193a24;
        case 0x193a28u: goto label_193a28;
        case 0x193a2cu: goto label_193a2c;
        case 0x193a30u: goto label_193a30;
        case 0x193a34u: goto label_193a34;
        case 0x193a38u: goto label_193a38;
        case 0x193a3cu: goto label_193a3c;
        case 0x193a40u: goto label_193a40;
        case 0x193a44u: goto label_193a44;
        case 0x193a48u: goto label_193a48;
        case 0x193a4cu: goto label_193a4c;
        case 0x193a50u: goto label_193a50;
        case 0x193a54u: goto label_193a54;
        case 0x193a58u: goto label_193a58;
        case 0x193a5cu: goto label_193a5c;
        case 0x193a60u: goto label_193a60;
        case 0x193a64u: goto label_193a64;
        case 0x193a68u: goto label_193a68;
        case 0x193a6cu: goto label_193a6c;
        case 0x193a70u: goto label_193a70;
        case 0x193a74u: goto label_193a74;
        case 0x193a78u: goto label_193a78;
        case 0x193a7cu: goto label_193a7c;
        case 0x193a80u: goto label_193a80;
        case 0x193a84u: goto label_193a84;
        case 0x193a88u: goto label_193a88;
        case 0x193a8cu: goto label_193a8c;
        case 0x193a90u: goto label_193a90;
        case 0x193a94u: goto label_193a94;
        case 0x193a98u: goto label_193a98;
        case 0x193a9cu: goto label_193a9c;
        case 0x193aa0u: goto label_193aa0;
        case 0x193aa4u: goto label_193aa4;
        case 0x193aa8u: goto label_193aa8;
        case 0x193aacu: goto label_193aac;
        case 0x193ab0u: goto label_193ab0;
        case 0x193ab4u: goto label_193ab4;
        case 0x193ab8u: goto label_193ab8;
        case 0x193abcu: goto label_193abc;
        case 0x193ac0u: goto label_193ac0;
        case 0x193ac4u: goto label_193ac4;
        case 0x193ac8u: goto label_193ac8;
        case 0x193accu: goto label_193acc;
        case 0x193ad0u: goto label_193ad0;
        case 0x193ad4u: goto label_193ad4;
        case 0x193ad8u: goto label_193ad8;
        case 0x193adcu: goto label_193adc;
        case 0x193ae0u: goto label_193ae0;
        case 0x193ae4u: goto label_193ae4;
        case 0x193ae8u: goto label_193ae8;
        case 0x193aecu: goto label_193aec;
        case 0x193af0u: goto label_193af0;
        case 0x193af4u: goto label_193af4;
        case 0x193af8u: goto label_193af8;
        default: break;
    }

    ctx->pc = 0x193610u;

label_193610:
    // 0x193610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_193614:
    // 0x193614: 0x2cc10011  sltiu       $at, $a2, 0x11
    ctx->pc = 0x193614u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_193618:
    // 0x193618: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19361c:
    // 0x19361c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19361cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_193620:
    // 0x193620: 0x10200132  beqz        $at, . + 4 + (0x132 << 2)
label_193624:
    if (ctx->pc == 0x193624u) {
        ctx->pc = 0x193624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193620u;
        // 0x193624: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193628u;
        goto label_193628;
    }
    ctx->pc = 0x193620u;
    {
        const bool branch_taken_0x193620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193620u;
        // 0x193624: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193620) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x193628u;
label_193628:
    // 0x193628: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x193628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_19362c:
    // 0x19362c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x19362cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_193630:
    // 0x193630: 0x2484ff30  addiu       $a0, $a0, -0xD0
    ctx->pc = 0x193630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
label_193634:
    // 0x193634: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_193638:
    // 0x193638: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x193638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19363c:
    // 0x19363c: 0x600008  jr          $v1
label_193640:
    if (ctx->pc == 0x193640u) {
        ctx->pc = 0x193644u;
        goto label_193644;
    }
    ctx->pc = 0x19363Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193644u: goto label_193644;
            case 0x19366Cu: goto label_19366c;
            case 0x193688u: goto label_193688;
            case 0x1936A8u: goto label_1936a8;
            case 0x1936D4u: goto label_1936d4;
            case 0x193704u: goto label_193704;
            case 0x19379Cu: goto label_19379c;
            case 0x193834u: goto label_193834;
            case 0x19387Cu: goto label_19387c;
            case 0x19389Cu: goto label_19389c;
            case 0x19394Cu: goto label_19394c;
            case 0x193974u: goto label_193974;
            case 0x19398Cu: goto label_19398c;
            case 0x1939A8u: goto label_1939a8;
            case 0x1939D4u: goto label_1939d4;
            case 0x193ABCu: goto label_193abc;
            case 0x193AD4u: goto label_193ad4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19363Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x193644u;
label_193644:
    // 0x193644: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x193644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_193648:
    // 0x193648: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x193648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_19364c:
    // 0x19364c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19364cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_193650:
    // 0x193650: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x193650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_193654:
    // 0x193654: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x193654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_193658:
    // 0x193658: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x193658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_19365c:
    // 0x19365c: 0x320f809  jalr        $t9
label_193660:
    if (ctx->pc == 0x193660u) {
        ctx->pc = 0x193664u;
        goto label_193664;
    }
    ctx->pc = 0x19365Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193664u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19365Cu, 0x193664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193664u;
label_193664:
    // 0x193664: 0x10000122  b           . + 4 + (0x122 << 2)
label_193668:
    if (ctx->pc == 0x193668u) {
        ctx->pc = 0x193668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193664u;
        // 0x193668: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19366Cu;
        goto label_19366c;
    }
    ctx->pc = 0x193664u;
    {
        const bool branch_taken_0x193664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193664u;
        // 0x193668: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193664) {
            ctx->pc = 0x193AF0u;
            goto label_193af0;
        }
    }
    ctx->pc = 0x19366Cu;
label_19366c:
    // 0x19366c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19366cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_193670:
    // 0x193670: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x193670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_193674:
    // 0x193674: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_193678:
    // 0x193678: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x193678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_19367c:
    // 0x19367c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19367cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_193680:
    // 0x193680: 0x1000011a  b           . + 4 + (0x11A << 2)
label_193684:
    if (ctx->pc == 0x193684u) {
        ctx->pc = 0x193684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193680u;
        // 0x193684: 0xa0600028  sb          $zero, 0x28($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193688u;
        goto label_193688;
    }
    ctx->pc = 0x193680u;
    {
        const bool branch_taken_0x193680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193680u;
        // 0x193684: 0xa0600028  sb          $zero, 0x28($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193680) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x193688u;
label_193688:
    // 0x193688: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x193688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19368c:
    // 0x19368c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x19368cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_193690:
    // 0x193690: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x193690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193694:
    // 0x193694: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_193698:
    // 0x193698: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x193698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_19369c:
    // 0x19369c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19369cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1936a0:
    // 0x1936a0: 0x10000112  b           . + 4 + (0x112 << 2)
label_1936a4:
    if (ctx->pc == 0x1936A4u) {
        ctx->pc = 0x1936A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936A0u;
        // 0x1936a4: 0xa0650028  sb          $a1, 0x28($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1936A8u;
        goto label_1936a8;
    }
    ctx->pc = 0x1936A0u;
    {
        const bool branch_taken_0x1936a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1936A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936A0u;
        // 0x1936a4: 0xa0650028  sb          $a1, 0x28($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936a0) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x1936A8u;
label_1936a8:
    // 0x1936a8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1936a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1936ac:
    // 0x1936ac: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x1936acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1936b0:
    // 0x1936b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1936b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1936b4:
    // 0x1936b4: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1936b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1936b8:
    // 0x1936b8: 0xc042570  jal         func_1095C0
label_1936bc:
    if (ctx->pc == 0x1936BCu) {
        ctx->pc = 0x1936BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936B8u;
        // 0x1936bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1936C0u;
        goto label_1936c0;
    }
    ctx->pc = 0x1936B8u;
    SET_GPR_U32(ctx, 31, 0x1936C0u);
    ctx->pc = 0x1936BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1936B8u;
    // 0x1936bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1936B8u, 0x1936C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1936C0u;
label_1936c0:
    // 0x1936c0: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1936c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1936c4:
    // 0x1936c4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1936c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1936c8:
    // 0x1936c8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1936c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1936cc:
    // 0x1936cc: 0x10000107  b           . + 4 + (0x107 << 2)
label_1936d0:
    if (ctx->pc == 0x1936D0u) {
        ctx->pc = 0x1936D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936CCu;
        // 0x1936d0: 0xa06001d3  sb          $zero, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1936D4u;
        goto label_1936d4;
    }
    ctx->pc = 0x1936CCu;
    {
        const bool branch_taken_0x1936cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1936D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936CCu;
        // 0x1936d0: 0xa06001d3  sb          $zero, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936cc) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x1936D4u;
label_1936d4:
    // 0x1936d4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1936d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1936d8:
    // 0x1936d8: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x1936d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1936dc:
    // 0x1936dc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1936dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1936e0:
    // 0x1936e0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1936e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1936e4:
    // 0x1936e4: 0xc042570  jal         func_1095C0
label_1936e8:
    if (ctx->pc == 0x1936E8u) {
        ctx->pc = 0x1936E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936E4u;
        // 0x1936e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1936ECu;
        goto label_1936ec;
    }
    ctx->pc = 0x1936E4u;
    SET_GPR_U32(ctx, 31, 0x1936ECu);
    ctx->pc = 0x1936E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1936E4u;
    // 0x1936e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1936E4u, 0x1936ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1936ECu;
label_1936ec:
    // 0x1936ec: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1936ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1936f0:
    // 0x1936f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1936f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1936f4:
    // 0x1936f4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1936f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1936f8:
    // 0x1936f8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1936f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1936fc:
    // 0x1936fc: 0x100000fb  b           . + 4 + (0xFB << 2)
label_193700:
    if (ctx->pc == 0x193700u) {
        ctx->pc = 0x193700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936FCu;
        // 0x193700: 0xa06401d3  sb          $a0, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193704u;
        goto label_193704;
    }
    ctx->pc = 0x1936FCu;
    {
        const bool branch_taken_0x1936fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936FCu;
        // 0x193700: 0xa06401d3  sb          $a0, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936fc) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x193704u;
label_193704:
    // 0x193704: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x193704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_193708:
    // 0x193708: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x193708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_19370c:
    // 0x19370c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x19370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_193710:
    // 0x193710: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_193714:
    // 0x193714: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x193714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_193718:
    // 0x193718: 0x10e20014  beq         $a3, $v0, . + 4 + (0x14 << 2)
label_19371c:
    if (ctx->pc == 0x19371Cu) {
        ctx->pc = 0x19371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193718u;
        // 0x19371c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193720u;
        goto label_193720;
    }
    ctx->pc = 0x193718u;
    {
        const bool branch_taken_0x193718 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x19371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193718u;
        // 0x19371c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193718) {
            ctx->pc = 0x19376Cu;
            goto label_19376c;
        }
    }
    ctx->pc = 0x193720u;
label_193720:
    // 0x193720: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x193720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_193724:
    // 0x193724: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
label_193728:
    if (ctx->pc == 0x193728u) {
        ctx->pc = 0x193728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193724u;
        // 0x193728: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19372Cu;
        goto label_19372c;
    }
    ctx->pc = 0x193724u;
    {
        const bool branch_taken_0x193724 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x193728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193724u;
        // 0x193728: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193724) {
            ctx->pc = 0x193754u;
            goto label_193754;
        }
    }
    ctx->pc = 0x19372Cu;
label_19372c:
    // 0x19372c: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
label_193730:
    if (ctx->pc == 0x193730u) {
        ctx->pc = 0x193734u;
        goto label_193734;
    }
    ctx->pc = 0x19372Cu;
    {
        const bool branch_taken_0x19372c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x19372c) {
            ctx->pc = 0x19373Cu;
            goto label_19373c;
        }
    }
    ctx->pc = 0x193734u;
label_193734:
    // 0x193734: 0x10000013  b           . + 4 + (0x13 << 2)
label_193738:
    if (ctx->pc == 0x193738u) {
        ctx->pc = 0x193738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193734u;
        // 0x193738: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19373Cu;
        goto label_19373c;
    }
    ctx->pc = 0x193734u;
    {
        const bool branch_taken_0x193734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193734u;
        // 0x193738: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193734) {
            ctx->pc = 0x193784u;
            goto label_193784;
        }
    }
    ctx->pc = 0x19373Cu;
label_19373c:
    // 0x19373c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19373cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193740:
    // 0x193740: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x193740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_193744:
    // 0x193744: 0x320f809  jalr        $t9
label_193748:
    if (ctx->pc == 0x193748u) {
        ctx->pc = 0x193748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193744u;
        // 0x193748: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19374Cu;
        goto label_19374c;
    }
    ctx->pc = 0x193744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19374Cu);
        ctx->pc = 0x193748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193744u;
        // 0x193748: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193744u, 0x19374Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19374Cu;
label_19374c:
    // 0x19374c: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_193750:
    if (ctx->pc == 0x193750u) {
        ctx->pc = 0x193754u;
        goto label_193754;
    }
    ctx->pc = 0x19374Cu;
    {
        const bool branch_taken_0x19374c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19374c) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x193754u;
label_193754:
    // 0x193754: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x193754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193758:
    // 0x193758: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x193758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_19375c:
    // 0x19375c: 0x320f809  jalr        $t9
label_193760:
    if (ctx->pc == 0x193760u) {
        ctx->pc = 0x193760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19375Cu;
        // 0x193760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193764u;
        goto label_193764;
    }
    ctx->pc = 0x19375Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193764u);
        ctx->pc = 0x193760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19375Cu;
        // 0x193760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19375Cu, 0x193764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193764u;
label_193764:
    // 0x193764: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_193768:
    if (ctx->pc == 0x193768u) {
        ctx->pc = 0x19376Cu;
        goto label_19376c;
    }
    ctx->pc = 0x193764u;
    {
        const bool branch_taken_0x193764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193764) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x19376Cu;
label_19376c:
    // 0x19376c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19376cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193770:
    // 0x193770: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x193770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_193774:
    // 0x193774: 0x320f809  jalr        $t9
label_193778:
    if (ctx->pc == 0x193778u) {
        ctx->pc = 0x193778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193774u;
        // 0x193778: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19377Cu;
        goto label_19377c;
    }
    ctx->pc = 0x193774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19377Cu);
        ctx->pc = 0x193778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193774u;
        // 0x193778: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193774u, 0x19377Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19377Cu;
label_19377c:
    // 0x19377c: 0x100000db  b           . + 4 + (0xDB << 2)
label_193780:
    if (ctx->pc == 0x193780u) {
        ctx->pc = 0x193784u;
        goto label_193784;
    }
    ctx->pc = 0x19377Cu;
    {
        const bool branch_taken_0x19377c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19377c) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x193784u;
label_193784:
    // 0x193784: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x193784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_193788:
    // 0x193788: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x193788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_19378c:
    // 0x19378c: 0x320f809  jalr        $t9
label_193790:
    if (ctx->pc == 0x193790u) {
        ctx->pc = 0x193790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19378Cu;
        // 0x193790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193794u;
        goto label_193794;
    }
    ctx->pc = 0x19378Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193794u);
        ctx->pc = 0x193790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19378Cu;
        // 0x193790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19378Cu, 0x193794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193794u;
label_193794:
    // 0x193794: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_193798:
    if (ctx->pc == 0x193798u) {
        ctx->pc = 0x19379Cu;
        goto label_19379c;
    }
    ctx->pc = 0x193794u;
    {
        const bool branch_taken_0x193794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193794) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x19379Cu;
label_19379c:
    // 0x19379c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19379cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1937a0:
    // 0x1937a0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1937a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1937a4:
    // 0x1937a4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1937a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1937a8:
    // 0x1937a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1937a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1937ac:
    // 0x1937ac: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1937acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1937b0:
    // 0x1937b0: 0x10e20014  beq         $a3, $v0, . + 4 + (0x14 << 2)
label_1937b4:
    if (ctx->pc == 0x1937B4u) {
        ctx->pc = 0x1937B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937B0u;
        // 0x1937b4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1937B8u;
        goto label_1937b8;
    }
    ctx->pc = 0x1937B0u;
    {
        const bool branch_taken_0x1937b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1937B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937B0u;
        // 0x1937b4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937b0) {
            ctx->pc = 0x193804u;
            goto label_193804;
        }
    }
    ctx->pc = 0x1937B8u;
label_1937b8:
    // 0x1937b8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1937b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1937bc:
    // 0x1937bc: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
label_1937c0:
    if (ctx->pc == 0x1937C0u) {
        ctx->pc = 0x1937C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937BCu;
        // 0x1937c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1937C4u;
        goto label_1937c4;
    }
    ctx->pc = 0x1937BCu;
    {
        const bool branch_taken_0x1937bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1937C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937BCu;
        // 0x1937c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937bc) {
            ctx->pc = 0x1937ECu;
            goto label_1937ec;
        }
    }
    ctx->pc = 0x1937C4u;
label_1937c4:
    // 0x1937c4: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
label_1937c8:
    if (ctx->pc == 0x1937C8u) {
        ctx->pc = 0x1937CCu;
        goto label_1937cc;
    }
    ctx->pc = 0x1937C4u;
    {
        const bool branch_taken_0x1937c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1937c4) {
            ctx->pc = 0x1937D4u;
            goto label_1937d4;
        }
    }
    ctx->pc = 0x1937CCu;
label_1937cc:
    // 0x1937cc: 0x10000013  b           . + 4 + (0x13 << 2)
label_1937d0:
    if (ctx->pc == 0x1937D0u) {
        ctx->pc = 0x1937D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937CCu;
        // 0x1937d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1937D4u;
        goto label_1937d4;
    }
    ctx->pc = 0x1937CCu;
    {
        const bool branch_taken_0x1937cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1937D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937CCu;
        // 0x1937d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937cc) {
            ctx->pc = 0x19381Cu;
            goto label_19381c;
        }
    }
    ctx->pc = 0x1937D4u;
label_1937d4:
    // 0x1937d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1937d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1937d8:
    // 0x1937d8: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1937d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1937dc:
    // 0x1937dc: 0x320f809  jalr        $t9
label_1937e0:
    if (ctx->pc == 0x1937E0u) {
        ctx->pc = 0x1937E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937DCu;
        // 0x1937e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1937E4u;
        goto label_1937e4;
    }
    ctx->pc = 0x1937DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1937E4u);
        ctx->pc = 0x1937E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937DCu;
        // 0x1937e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1937DCu, 0x1937E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1937E4u;
label_1937e4:
    // 0x1937e4: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_1937e8:
    if (ctx->pc == 0x1937E8u) {
        ctx->pc = 0x1937ECu;
        goto label_1937ec;
    }
    ctx->pc = 0x1937E4u;
    {
        const bool branch_taken_0x1937e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1937e4) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x1937ECu;
label_1937ec:
    // 0x1937ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1937ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1937f0:
    // 0x1937f0: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1937f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1937f4:
    // 0x1937f4: 0x320f809  jalr        $t9
label_1937f8:
    if (ctx->pc == 0x1937F8u) {
        ctx->pc = 0x1937F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937F4u;
        // 0x1937f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1937FCu;
        goto label_1937fc;
    }
    ctx->pc = 0x1937F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1937FCu);
        ctx->pc = 0x1937F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937F4u;
        // 0x1937f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1937F4u, 0x1937FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1937FCu;
label_1937fc:
    // 0x1937fc: 0x100000bb  b           . + 4 + (0xBB << 2)
label_193800:
    if (ctx->pc == 0x193800u) {
        ctx->pc = 0x193804u;
        goto label_193804;
    }
    ctx->pc = 0x1937FCu;
    {
        const bool branch_taken_0x1937fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1937fc) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x193804u;
label_193804:
    // 0x193804: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x193804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193808:
    // 0x193808: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x193808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_19380c:
    // 0x19380c: 0x320f809  jalr        $t9
label_193810:
    if (ctx->pc == 0x193810u) {
        ctx->pc = 0x193810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19380Cu;
        // 0x193810: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193814u;
        goto label_193814;
    }
    ctx->pc = 0x19380Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193814u);
        ctx->pc = 0x193810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19380Cu;
        // 0x193810: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19380Cu, 0x193814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193814u;
label_193814:
    // 0x193814: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_193818:
    if (ctx->pc == 0x193818u) {
        ctx->pc = 0x19381Cu;
        goto label_19381c;
    }
    ctx->pc = 0x193814u;
    {
        const bool branch_taken_0x193814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193814) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x19381Cu;
label_19381c:
    // 0x19381c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x19381cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_193820:
    // 0x193820: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x193820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_193824:
    // 0x193824: 0x320f809  jalr        $t9
label_193828:
    if (ctx->pc == 0x193828u) {
        ctx->pc = 0x193828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193824u;
        // 0x193828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19382Cu;
        goto label_19382c;
    }
    ctx->pc = 0x193824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19382Cu);
        ctx->pc = 0x193828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193824u;
        // 0x193828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193824u, 0x19382Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19382Cu;
label_19382c:
    // 0x19382c: 0x100000af  b           . + 4 + (0xAF << 2)
label_193830:
    if (ctx->pc == 0x193830u) {
        ctx->pc = 0x193834u;
        goto label_193834;
    }
    ctx->pc = 0x19382Cu;
    {
        const bool branch_taken_0x19382c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19382c) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x193834u;
label_193834:
    // 0x193834: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x193834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_193838:
    // 0x193838: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x193838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_19383c:
    // 0x19383c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19383cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193840:
    // 0x193840: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x193840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_193844:
    // 0x193844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_193848:
    // 0x193848: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x193848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_19384c:
    // 0x19384c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x19384cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_193850:
    // 0x193850: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x193850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_193854:
    // 0x193854: 0x8f3900e4  lw          $t9, 0xE4($t9)
    ctx->pc = 0x193854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 228)));
label_193858:
    // 0x193858: 0x320f809  jalr        $t9
label_19385c:
    if (ctx->pc == 0x19385Cu) {
        ctx->pc = 0x19385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193858u;
        // 0x19385c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193860u;
        goto label_193860;
    }
    ctx->pc = 0x193858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193860u);
        ctx->pc = 0x19385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193858u;
        // 0x19385c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193858u, 0x193860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193860u;
label_193860:
    // 0x193860: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x193860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_193864:
    // 0x193864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193868:
    // 0x193868: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x193868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_19386c:
    // 0x19386c: 0x320f809  jalr        $t9
label_193870:
    if (ctx->pc == 0x193870u) {
        ctx->pc = 0x193870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19386Cu;
        // 0x193870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193874u;
        goto label_193874;
    }
    ctx->pc = 0x19386Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193874u);
        ctx->pc = 0x193870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19386Cu;
        // 0x193870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19386Cu, 0x193874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193874u;
label_193874:
    // 0x193874: 0x1000009d  b           . + 4 + (0x9D << 2)
label_193878:
    if (ctx->pc == 0x193878u) {
        ctx->pc = 0x19387Cu;
        goto label_19387c;
    }
    ctx->pc = 0x193874u;
    {
        const bool branch_taken_0x193874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193874) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x19387Cu;
label_19387c:
    // 0x19387c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19387cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_193880:
    // 0x193880: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x193880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_193884:
    // 0x193884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_193888:
    // 0x193888: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x193888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_19388c:
    // 0x19388c: 0xc042118  jal         func_108460
label_193890:
    if (ctx->pc == 0x193890u) {
        ctx->pc = 0x193890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19388Cu;
        // 0x193890: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193894u;
        goto label_193894;
    }
    ctx->pc = 0x19388Cu;
    SET_GPR_U32(ctx, 31, 0x193894u);
    ctx->pc = 0x193890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19388Cu;
    // 0x193890: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x19388Cu, 0x193894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193894u;
label_193894:
    // 0x193894: 0x10000095  b           . + 4 + (0x95 << 2)
label_193898:
    if (ctx->pc == 0x193898u) {
        ctx->pc = 0x19389Cu;
        goto label_19389c;
    }
    ctx->pc = 0x193894u;
    {
        const bool branch_taken_0x193894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193894) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x19389Cu;
label_19389c:
    // 0x19389c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19389cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1938a0:
    // 0x1938a0: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x1938a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1938a4:
    // 0x1938a4: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x1938a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1938a8:
    // 0x1938a8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1938a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1938ac:
    // 0x1938ac: 0x690018  mult        $zero, $v1, $t1
    ctx->pc = 0x1938acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1938b0:
    // 0x1938b0: 0x927c2  srl         $a0, $t1, 31
    ctx->pc = 0x1938b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1938b4:
    // 0x1938b4: 0x91203  sra         $v0, $t1, 8
    ctx->pc = 0x1938b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 8));
label_1938b8:
    // 0x1938b8: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1938b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1938bc:
    // 0x1938bc: 0x8c652cd8  lw          $a1, 0x2CD8($v1)
    ctx->pc = 0x1938bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1938c0:
    // 0x1938c0: 0x1810  mfhi        $v1
    ctx->pc = 0x1938c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1938c4:
    // 0x1938c4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1938c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1938c8:
    // 0x1938c8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1938c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1938cc:
    // 0x1938cc: 0x31bc3  sra         $v1, $v1, 15
    ctx->pc = 0x1938ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 15));
label_1938d0:
    // 0x1938d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1938d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1938d4:
    // 0x1938d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1938d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1938d8:
    // 0x1938d8: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1938d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_1938dc:
    // 0x1938dc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1938dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1938e0:
    // 0x1938e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1938e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1938e4:
    // 0x1938e4: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_1938e8:
    if (ctx->pc == 0x1938E8u) {
        ctx->pc = 0x1938E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938E4u;
        // 0x1938e8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1938ECu;
        goto label_1938ec;
    }
    ctx->pc = 0x1938E4u;
    {
        const bool branch_taken_0x1938e4 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1938E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938E4u;
        // 0x1938e8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1938e4) {
            ctx->pc = 0x1938F4u;
            goto label_1938f4;
        }
    }
    ctx->pc = 0x1938ECu;
label_1938ec:
    // 0x1938ec: 0x252200ff  addiu       $v0, $t1, 0xFF
    ctx->pc = 0x1938ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 255));
label_1938f0:
    // 0x1938f0: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1938f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_1938f4:
    // 0x1938f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1938f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1938f8:
    // 0x1938f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1938f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1938fc:
    // 0x1938fc: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x1938fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
label_193900:
    // 0x193900: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x193900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_193904:
    // 0x193904: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x193904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_193908:
    // 0x193908: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x193908u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_19390c:
    // 0x19390c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x19390cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_193910:
    // 0x193910: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x193910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_193914:
    // 0x193914: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193918:
    // 0x193918: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x193918u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19391c:
    // 0x19391c: 0x8f838384  lw          $v1, -0x7C7C($gp)
    ctx->pc = 0x19391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_193920:
    // 0x193920: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x193920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_193924:
    // 0x193924: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x193924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_193928:
    // 0x193928: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19392c:
    // 0x19392c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19392cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_193930:
    // 0x193930: 0x46800b60  cvt.s.w     $f13, $f1
    ctx->pc = 0x193930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_193934:
    // 0x193934: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x193934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_193938:
    // 0x193938: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x193938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_19393c:
    // 0x19393c: 0xc04bce0  jal         func_12F380
label_193940:
    if (ctx->pc == 0x193940u) {
        ctx->pc = 0x193940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19393Cu;
        // 0x193940: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193944u;
        goto label_193944;
    }
    ctx->pc = 0x19393Cu;
    SET_GPR_U32(ctx, 31, 0x193944u);
    ctx->pc = 0x193940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19393Cu;
    // 0x193940: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x19393Cu, 0x193944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193944u;
label_193944:
    // 0x193944: 0x10000069  b           . + 4 + (0x69 << 2)
label_193948:
    if (ctx->pc == 0x193948u) {
        ctx->pc = 0x19394Cu;
        goto label_19394c;
    }
    ctx->pc = 0x193944u;
    {
        const bool branch_taken_0x193944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193944) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x19394Cu;
label_19394c:
    // 0x19394c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19394cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_193950:
    // 0x193950: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x193950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_193954:
    // 0x193954: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_193958:
    // 0x193958: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x193958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_19395c:
    // 0x19395c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x19395cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_193960:
    // 0x193960: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x193960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_193964:
    // 0x193964: 0x320f809  jalr        $t9
label_193968:
    if (ctx->pc == 0x193968u) {
        ctx->pc = 0x193968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193964u;
        // 0x193968: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19396Cu;
        goto label_19396c;
    }
    ctx->pc = 0x193964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19396Cu);
        ctx->pc = 0x193968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193964u;
        // 0x193968: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193964u, 0x19396Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19396Cu;
label_19396c:
    // 0x19396c: 0x1000005f  b           . + 4 + (0x5F << 2)
label_193970:
    if (ctx->pc == 0x193970u) {
        ctx->pc = 0x193974u;
        goto label_193974;
    }
    ctx->pc = 0x19396Cu;
    {
        const bool branch_taken_0x19396c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19396c) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x193974u;
label_193974:
    // 0x193974: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x193974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_193978:
    // 0x193978: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x193978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_19397c:
    // 0x19397c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19397cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_193980:
    // 0x193980: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x193980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_193984:
    // 0x193984: 0x10000059  b           . + 4 + (0x59 << 2)
label_193988:
    if (ctx->pc == 0x193988u) {
        ctx->pc = 0x193988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193984u;
        // 0x193988: 0xa06001d3  sb          $zero, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19398Cu;
        goto label_19398c;
    }
    ctx->pc = 0x193984u;
    {
        const bool branch_taken_0x193984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193984u;
        // 0x193988: 0xa06001d3  sb          $zero, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193984) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x19398Cu;
label_19398c:
    // 0x19398c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19398cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_193990:
    // 0x193990: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x193990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_193994:
    // 0x193994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x193994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193998:
    // 0x193998: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19399c:
    // 0x19399c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x19399cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1939a0:
    // 0x1939a0: 0x10000052  b           . + 4 + (0x52 << 2)
label_1939a4:
    if (ctx->pc == 0x1939A4u) {
        ctx->pc = 0x1939A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939A0u;
        // 0x1939a4: 0xa06501d3  sb          $a1, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1939A8u;
        goto label_1939a8;
    }
    ctx->pc = 0x1939A0u;
    {
        const bool branch_taken_0x1939a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1939A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939A0u;
        // 0x1939a4: 0xa06501d3  sb          $a1, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939a0) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x1939A8u;
label_1939a8:
    // 0x1939a8: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1939a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1939ac:
    // 0x1939ac: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1939acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1939b0:
    // 0x1939b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1939b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1939b4:
    // 0x1939b4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1939b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1939b8:
    // 0x1939b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1939b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1939bc:
    // 0x1939bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1939bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1939c0:
    // 0x1939c0: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x1939c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_1939c4:
    // 0x1939c4: 0x320f809  jalr        $t9
label_1939c8:
    if (ctx->pc == 0x1939C8u) {
        ctx->pc = 0x1939C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939C4u;
        // 0x1939c8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1939CCu;
        goto label_1939cc;
    }
    ctx->pc = 0x1939C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1939CCu);
        ctx->pc = 0x1939C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939C4u;
        // 0x1939c8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1939C4u, 0x1939CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1939CCu;
label_1939cc:
    // 0x1939cc: 0x10000047  b           . + 4 + (0x47 << 2)
label_1939d0:
    if (ctx->pc == 0x1939D0u) {
        ctx->pc = 0x1939D4u;
        goto label_1939d4;
    }
    ctx->pc = 0x1939CCu;
    {
        const bool branch_taken_0x1939cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1939cc) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x1939D4u;
label_1939d4:
    // 0x1939d4: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1939d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1939d8:
    // 0x1939d8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1939d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1939dc:
    // 0x1939dc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1939dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1939e0:
    // 0x1939e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1939e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1939e4:
    // 0x1939e4: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1939e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1939e8:
    // 0x1939e8: 0x1202001e  beq         $s0, $v0, . + 4 + (0x1E << 2)
label_1939ec:
    if (ctx->pc == 0x1939ECu) {
        ctx->pc = 0x1939ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939E8u;
        // 0x1939ec: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1939F0u;
        goto label_1939f0;
    }
    ctx->pc = 0x1939E8u;
    {
        const bool branch_taken_0x1939e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1939ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939E8u;
        // 0x1939ec: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939e8) {
            ctx->pc = 0x193A64u;
            goto label_193a64;
        }
    }
    ctx->pc = 0x1939F0u;
label_1939f0:
    // 0x1939f0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1939f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1939f4:
    // 0x1939f4: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
label_1939f8:
    if (ctx->pc == 0x1939F8u) {
        ctx->pc = 0x1939F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939F4u;
        // 0x1939f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1939FCu;
        goto label_1939fc;
    }
    ctx->pc = 0x1939F4u;
    {
        const bool branch_taken_0x1939f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1939F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939F4u;
        // 0x1939f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939f4) {
            ctx->pc = 0x193A38u;
            goto label_193a38;
        }
    }
    ctx->pc = 0x1939FCu;
label_1939fc:
    // 0x1939fc: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_193a00:
    if (ctx->pc == 0x193A00u) {
        ctx->pc = 0x193A04u;
        goto label_193a04;
    }
    ctx->pc = 0x1939FCu;
    {
        const bool branch_taken_0x1939fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1939fc) {
            ctx->pc = 0x193A0Cu;
            goto label_193a0c;
        }
    }
    ctx->pc = 0x193A04u;
label_193a04:
    // 0x193a04: 0x10000022  b           . + 4 + (0x22 << 2)
label_193a08:
    if (ctx->pc == 0x193A08u) {
        ctx->pc = 0x193A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A04u;
        // 0x193a08: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A0Cu;
        goto label_193a0c;
    }
    ctx->pc = 0x193A04u;
    {
        const bool branch_taken_0x193a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A04u;
        // 0x193a08: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a04) {
            ctx->pc = 0x193A90u;
            goto label_193a90;
        }
    }
    ctx->pc = 0x193A0Cu;
label_193a0c:
    // 0x193a0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x193a0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193a10:
    // 0x193a10: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x193a10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_193a14:
    // 0x193a14: 0x320f809  jalr        $t9
label_193a18:
    if (ctx->pc == 0x193A18u) {
        ctx->pc = 0x193A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A14u;
        // 0x193a18: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A1Cu;
        goto label_193a1c;
    }
    ctx->pc = 0x193A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193A1Cu);
        ctx->pc = 0x193A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A14u;
        // 0x193a18: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A14u, 0x193A1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193A1Cu;
label_193a1c:
    // 0x193a1c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x193a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_193a20:
    // 0x193a20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193a24:
    // 0x193a24: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x193a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_193a28:
    // 0x193a28: 0x320f809  jalr        $t9
label_193a2c:
    if (ctx->pc == 0x193A2Cu) {
        ctx->pc = 0x193A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A28u;
        // 0x193a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A30u;
        goto label_193a30;
    }
    ctx->pc = 0x193A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193A30u);
        ctx->pc = 0x193A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A28u;
        // 0x193a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A28u, 0x193A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193A30u;
label_193a30:
    // 0x193a30: 0x1000002e  b           . + 4 + (0x2E << 2)
label_193a34:
    if (ctx->pc == 0x193A34u) {
        ctx->pc = 0x193A38u;
        goto label_193a38;
    }
    ctx->pc = 0x193A30u;
    {
        const bool branch_taken_0x193a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193a30) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x193A38u;
label_193a38:
    // 0x193a38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x193a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193a3c:
    // 0x193a3c: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x193a3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_193a40:
    // 0x193a40: 0x320f809  jalr        $t9
label_193a44:
    if (ctx->pc == 0x193A44u) {
        ctx->pc = 0x193A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A40u;
        // 0x193a44: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A48u;
        goto label_193a48;
    }
    ctx->pc = 0x193A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193A48u);
        ctx->pc = 0x193A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A40u;
        // 0x193a44: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A40u, 0x193A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193A48u;
label_193a48:
    // 0x193a48: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x193a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_193a4c:
    // 0x193a4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193a50:
    // 0x193a50: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x193a50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_193a54:
    // 0x193a54: 0x320f809  jalr        $t9
label_193a58:
    if (ctx->pc == 0x193A58u) {
        ctx->pc = 0x193A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A54u;
        // 0x193a58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A5Cu;
        goto label_193a5c;
    }
    ctx->pc = 0x193A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193A5Cu);
        ctx->pc = 0x193A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A54u;
        // 0x193a58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A54u, 0x193A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193A5Cu;
label_193a5c:
    // 0x193a5c: 0x10000023  b           . + 4 + (0x23 << 2)
label_193a60:
    if (ctx->pc == 0x193A60u) {
        ctx->pc = 0x193A64u;
        goto label_193a64;
    }
    ctx->pc = 0x193A5Cu;
    {
        const bool branch_taken_0x193a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193a5c) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x193A64u;
label_193a64:
    // 0x193a64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x193a64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193a68:
    // 0x193a68: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x193a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_193a6c:
    // 0x193a6c: 0x320f809  jalr        $t9
label_193a70:
    if (ctx->pc == 0x193A70u) {
        ctx->pc = 0x193A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A6Cu;
        // 0x193a70: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A74u;
        goto label_193a74;
    }
    ctx->pc = 0x193A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193A74u);
        ctx->pc = 0x193A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A6Cu;
        // 0x193a70: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A6Cu, 0x193A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193A74u;
label_193a74:
    // 0x193a74: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x193a74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_193a78:
    // 0x193a78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193a7c:
    // 0x193a7c: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x193a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_193a80:
    // 0x193a80: 0x320f809  jalr        $t9
label_193a84:
    if (ctx->pc == 0x193A84u) {
        ctx->pc = 0x193A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A80u;
        // 0x193a84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A88u;
        goto label_193a88;
    }
    ctx->pc = 0x193A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193A88u);
        ctx->pc = 0x193A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A80u;
        // 0x193a84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A80u, 0x193A88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193A88u;
label_193a88:
    // 0x193a88: 0x10000018  b           . + 4 + (0x18 << 2)
label_193a8c:
    if (ctx->pc == 0x193A8Cu) {
        ctx->pc = 0x193A90u;
        goto label_193a90;
    }
    ctx->pc = 0x193A88u;
    {
        const bool branch_taken_0x193a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193a88) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x193A90u;
label_193a90:
    // 0x193a90: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x193a90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_193a94:
    // 0x193a94: 0x320f809  jalr        $t9
label_193a98:
    if (ctx->pc == 0x193A98u) {
        ctx->pc = 0x193A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A94u;
        // 0x193a98: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A9Cu;
        goto label_193a9c;
    }
    ctx->pc = 0x193A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193A9Cu);
        ctx->pc = 0x193A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A94u;
        // 0x193a98: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A94u, 0x193A9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193A9Cu;
label_193a9c:
    // 0x193a9c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x193a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_193aa0:
    // 0x193aa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193aa4:
    // 0x193aa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193aa8:
    // 0x193aa8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x193aa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_193aac:
    // 0x193aac: 0x320f809  jalr        $t9
label_193ab0:
    if (ctx->pc == 0x193AB0u) {
        ctx->pc = 0x193AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AACu;
        // 0x193ab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193AB4u;
        goto label_193ab4;
    }
    ctx->pc = 0x193AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193AB4u);
        ctx->pc = 0x193AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AACu;
        // 0x193ab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193AACu, 0x193AB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193AB4u;
label_193ab4:
    // 0x193ab4: 0x1000000d  b           . + 4 + (0xD << 2)
label_193ab8:
    if (ctx->pc == 0x193AB8u) {
        ctx->pc = 0x193ABCu;
        goto label_193abc;
    }
    ctx->pc = 0x193AB4u;
    {
        const bool branch_taken_0x193ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193ab4) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x193ABCu;
label_193abc:
    // 0x193abc: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x193abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_193ac0:
    // 0x193ac0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x193ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_193ac4:
    // 0x193ac4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_193ac8:
    // 0x193ac8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x193ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_193acc:
    // 0x193acc: 0x10000007  b           . + 4 + (0x7 << 2)
label_193ad0:
    if (ctx->pc == 0x193AD0u) {
        ctx->pc = 0x193AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193ACCu;
        // 0x193ad0: 0xa06001f9  sb          $zero, 0x1F9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 505), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193AD4u;
        goto label_193ad4;
    }
    ctx->pc = 0x193ACCu;
    {
        const bool branch_taken_0x193acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193ACCu;
        // 0x193ad0: 0xa06001f9  sb          $zero, 0x1F9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 505), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193acc) {
            ctx->pc = 0x193AECu;
            goto label_193aec;
        }
    }
    ctx->pc = 0x193AD4u;
label_193ad4:
    // 0x193ad4: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x193ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_193ad8:
    // 0x193ad8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x193ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_193adc:
    // 0x193adc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x193adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193ae0:
    // 0x193ae0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_193ae4:
    // 0x193ae4: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x193ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_193ae8:
    // 0x193ae8: 0xa06501f9  sb          $a1, 0x1F9($v1)
    ctx->pc = 0x193ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 505), (uint8_t)GPR_U32(ctx, 5));
label_193aec:
    // 0x193aec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_193af0:
    // 0x193af0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_193af4:
    // 0x193af4: 0x3e00008  jr          $ra
label_193af8:
    if (ctx->pc == 0x193AF8u) {
        ctx->pc = 0x193AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AF4u;
        // 0x193af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193AFCu;
        goto label_fallthrough_0x193af4;
    }
    ctx->pc = 0x193AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AF4u;
        // 0x193af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x193af4:
    ctx->pc = 0x193AFCu;
}
