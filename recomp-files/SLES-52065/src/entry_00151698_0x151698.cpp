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

// Function: entry_00151698
// Address: 0x151698 - 0x1518b0
void entry_00151698_0x151698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151698_0x151698");
#endif

    switch (ctx->pc) {
        case 0x151698u: goto label_151698;
        case 0x15169cu: goto label_15169c;
        case 0x1516a0u: goto label_1516a0;
        case 0x1516a4u: goto label_1516a4;
        case 0x1516a8u: goto label_1516a8;
        case 0x1516acu: goto label_1516ac;
        case 0x1516b0u: goto label_1516b0;
        case 0x1516b4u: goto label_1516b4;
        case 0x1516b8u: goto label_1516b8;
        case 0x1516bcu: goto label_1516bc;
        case 0x1516c0u: goto label_1516c0;
        case 0x1516c4u: goto label_1516c4;
        case 0x1516c8u: goto label_1516c8;
        case 0x1516ccu: goto label_1516cc;
        case 0x1516d0u: goto label_1516d0;
        case 0x1516d4u: goto label_1516d4;
        case 0x1516d8u: goto label_1516d8;
        case 0x1516dcu: goto label_1516dc;
        case 0x1516e0u: goto label_1516e0;
        case 0x1516e4u: goto label_1516e4;
        case 0x1516e8u: goto label_1516e8;
        case 0x1516ecu: goto label_1516ec;
        case 0x1516f0u: goto label_1516f0;
        case 0x1516f4u: goto label_1516f4;
        case 0x1516f8u: goto label_1516f8;
        case 0x1516fcu: goto label_1516fc;
        case 0x151700u: goto label_151700;
        case 0x151704u: goto label_151704;
        case 0x151708u: goto label_151708;
        case 0x15170cu: goto label_15170c;
        case 0x151710u: goto label_151710;
        case 0x151714u: goto label_151714;
        case 0x151718u: goto label_151718;
        case 0x15171cu: goto label_15171c;
        case 0x151720u: goto label_151720;
        case 0x151724u: goto label_151724;
        case 0x151728u: goto label_151728;
        case 0x15172cu: goto label_15172c;
        case 0x151730u: goto label_151730;
        case 0x151734u: goto label_151734;
        case 0x151738u: goto label_151738;
        case 0x15173cu: goto label_15173c;
        case 0x151740u: goto label_151740;
        case 0x151744u: goto label_151744;
        case 0x151748u: goto label_151748;
        case 0x15174cu: goto label_15174c;
        case 0x151750u: goto label_151750;
        case 0x151754u: goto label_151754;
        case 0x151758u: goto label_151758;
        case 0x15175cu: goto label_15175c;
        case 0x151760u: goto label_151760;
        case 0x151764u: goto label_151764;
        case 0x151768u: goto label_151768;
        case 0x15176cu: goto label_15176c;
        case 0x151770u: goto label_151770;
        case 0x151774u: goto label_151774;
        case 0x151778u: goto label_151778;
        case 0x15177cu: goto label_15177c;
        case 0x151780u: goto label_151780;
        case 0x151784u: goto label_151784;
        case 0x151788u: goto label_151788;
        case 0x15178cu: goto label_15178c;
        case 0x151790u: goto label_151790;
        case 0x151794u: goto label_151794;
        case 0x151798u: goto label_151798;
        case 0x15179cu: goto label_15179c;
        case 0x1517a0u: goto label_1517a0;
        case 0x1517a4u: goto label_1517a4;
        case 0x1517a8u: goto label_1517a8;
        case 0x1517acu: goto label_1517ac;
        case 0x1517b0u: goto label_1517b0;
        case 0x1517b4u: goto label_1517b4;
        case 0x1517b8u: goto label_1517b8;
        case 0x1517bcu: goto label_1517bc;
        case 0x1517c0u: goto label_1517c0;
        case 0x1517c4u: goto label_1517c4;
        case 0x1517c8u: goto label_1517c8;
        case 0x1517ccu: goto label_1517cc;
        case 0x1517d0u: goto label_1517d0;
        case 0x1517d4u: goto label_1517d4;
        case 0x1517d8u: goto label_1517d8;
        case 0x1517dcu: goto label_1517dc;
        case 0x1517e0u: goto label_1517e0;
        case 0x1517e4u: goto label_1517e4;
        case 0x1517e8u: goto label_1517e8;
        case 0x1517ecu: goto label_1517ec;
        case 0x1517f0u: goto label_1517f0;
        case 0x1517f4u: goto label_1517f4;
        case 0x1517f8u: goto label_1517f8;
        case 0x1517fcu: goto label_1517fc;
        case 0x151800u: goto label_151800;
        case 0x151804u: goto label_151804;
        case 0x151808u: goto label_151808;
        case 0x15180cu: goto label_15180c;
        case 0x151810u: goto label_151810;
        case 0x151814u: goto label_151814;
        case 0x151818u: goto label_151818;
        case 0x15181cu: goto label_15181c;
        case 0x151820u: goto label_151820;
        case 0x151824u: goto label_151824;
        case 0x151828u: goto label_151828;
        case 0x15182cu: goto label_15182c;
        case 0x151830u: goto label_151830;
        case 0x151834u: goto label_151834;
        case 0x151838u: goto label_151838;
        case 0x15183cu: goto label_15183c;
        case 0x151840u: goto label_151840;
        case 0x151844u: goto label_151844;
        case 0x151848u: goto label_151848;
        case 0x15184cu: goto label_15184c;
        case 0x151850u: goto label_151850;
        case 0x151854u: goto label_151854;
        case 0x151858u: goto label_151858;
        case 0x15185cu: goto label_15185c;
        case 0x151860u: goto label_151860;
        case 0x151864u: goto label_151864;
        case 0x151868u: goto label_151868;
        case 0x15186cu: goto label_15186c;
        case 0x151870u: goto label_151870;
        case 0x151874u: goto label_151874;
        case 0x151878u: goto label_151878;
        case 0x15187cu: goto label_15187c;
        case 0x151880u: goto label_151880;
        case 0x151884u: goto label_151884;
        case 0x151888u: goto label_151888;
        case 0x15188cu: goto label_15188c;
        case 0x151890u: goto label_151890;
        case 0x151894u: goto label_151894;
        case 0x151898u: goto label_151898;
        case 0x15189cu: goto label_15189c;
        case 0x1518a0u: goto label_1518a0;
        case 0x1518a4u: goto label_1518a4;
        case 0x1518a8u: goto label_1518a8;
        case 0x1518acu: goto label_1518ac;
        default: break;
    }

    ctx->pc = 0x151698u;

label_151698:
    // 0x151698: 0x8e32006c  lw          $s2, 0x6C($s1)
    ctx->pc = 0x151698u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_15169c:
    // 0x15169c: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x15169cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
label_1516a0:
    // 0x1516a0: 0x8f868508  lw          $a2, -0x7AF8($gp)
    ctx->pc = 0x1516a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935816)));
label_1516a4:
    // 0x1516a4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1516a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1516a8:
    // 0x1516a8: 0x8f8584c8  lw          $a1, -0x7B38($gp)
    ctx->pc = 0x1516a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935752)));
label_1516ac:
    // 0x1516ac: 0x3c0c0036  lui         $t4, 0x36
    ctx->pc = 0x1516acu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)54 << 16));
label_1516b0:
    // 0x1516b0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1516b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_1516b4:
    // 0x1516b4: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x1516b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
label_1516b8:
    // 0x1516b8: 0x8f8484ec  lw          $a0, -0x7B14($gp)
    ctx->pc = 0x1516b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935788)));
label_1516bc:
    // 0x1516bc: 0x240d0030  addiu       $t5, $zero, 0x30
    ctx->pc = 0x1516bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1516c0:
    // 0x1516c0: 0x258c7480  addiu       $t4, $t4, 0x7480
    ctx->pc = 0x1516c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 29824));
label_1516c4:
    // 0x1516c4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1516c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1516c8:
    // 0x1516c8: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x1516c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_1516cc:
    // 0x1516cc: 0x346a8017  ori         $t2, $v1, 0x8017
    ctx->pc = 0x1516ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32791);
label_1516d0:
    // 0x1516d0: 0xac267480  sw          $a2, 0x7480($at)
    ctx->pc = 0x1516d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29824), GPR_U32(ctx, 6));
label_1516d4:
    // 0x1516d4: 0x34688018  ori         $t0, $v1, 0x8018
    ctx->pc = 0x1516d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32792);
label_1516d8:
    // 0x1516d8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1516d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1516dc:
    // 0x1516dc: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1516dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_1516e0:
    // 0x1516e0: 0xac257484  sw          $a1, 0x7484($at)
    ctx->pc = 0x1516e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29828), GPR_U32(ctx, 5));
label_1516e4:
    // 0x1516e4: 0x25297470  addiu       $t1, $t1, 0x7470
    ctx->pc = 0x1516e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29808));
label_1516e8:
    // 0x1516e8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1516e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1516ec:
    // 0x1516ec: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x1516ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1516f0:
    // 0x1516f0: 0xac247488  sw          $a0, 0x7488($at)
    ctx->pc = 0x1516f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29832), GPR_U32(ctx, 4));
label_1516f4:
    // 0x1516f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1516f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1516f8:
    // 0x1516f8: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x1516f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1516fc:
    // 0x1516fc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1516fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_151700:
    // 0x151700: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x151700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_151704:
    // 0x151704: 0xa1cd0003  sb          $t5, 0x3($t6)
    ctx->pc = 0x151704u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 3), (uint8_t)GPR_U32(ctx, 13));
label_151708:
    // 0x151708: 0xa1c00002  sb          $zero, 0x2($t6)
    ctx->pc = 0x151708u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 2), (uint8_t)GPR_U32(ctx, 0));
label_15170c:
    // 0x15170c: 0xadcc0004  sw          $t4, 0x4($t6)
    ctx->pc = 0x15170cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 12));
label_151710:
    // 0x151710: 0xa5cb0000  sh          $t3, 0x0($t6)
    ctx->pc = 0x151710u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 11));
label_151714:
    // 0x151714: 0xadc20008  sw          $v0, 0x8($t6)
    ctx->pc = 0x151714u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 2));
label_151718:
    // 0x151718: 0xadca000c  sw          $t2, 0xC($t6)
    ctx->pc = 0x151718u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 10));
label_15171c:
    // 0x15171c: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x15171cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151720:
    // 0x151720: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x151720u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_151724:
    // 0x151724: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x151724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
label_151728:
    // 0x151728: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x151728u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15172c:
    // 0x15172c: 0xa14d0003  sb          $t5, 0x3($t2)
    ctx->pc = 0x15172cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 13));
label_151730:
    // 0x151730: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x151730u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
label_151734:
    // 0x151734: 0xad490004  sw          $t1, 0x4($t2)
    ctx->pc = 0x151734u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 9));
label_151738:
    // 0x151738: 0xa54b0000  sh          $t3, 0x0($t2)
    ctx->pc = 0x151738u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 11));
label_15173c:
    // 0x15173c: 0xad420008  sw          $v0, 0x8($t2)
    ctx->pc = 0x15173cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 2));
label_151740:
    // 0x151740: 0xad48000c  sw          $t0, 0xC($t2)
    ctx->pc = 0x151740u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 8));
label_151744:
    // 0x151744: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x151744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151748:
    // 0x151748: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x151748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15174c:
    // 0x15174c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x15174cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_151750:
    // 0x151750: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x151750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151754:
    // 0x151754: 0xa04d0003  sb          $t5, 0x3($v0)
    ctx->pc = 0x151754u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 13));
label_151758:
    // 0x151758: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x151758u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_15175c:
    // 0x15175c: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x15175cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_151760:
    // 0x151760: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x151760u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
label_151764:
    // 0x151764: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x151764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_151768:
    // 0x151768: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x151768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_15176c:
    // 0x15176c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15176cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151770:
    // 0x151770: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x151770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_151774:
    // 0x151774: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x151774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_151778:
    // 0x151778: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x151778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_15177c:
    // 0x15177c: 0xc0485c0  jal         func_121700
label_151780:
    if (ctx->pc == 0x151780u) {
        ctx->pc = 0x151780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15177Cu;
        // 0x151780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151784u;
        goto label_151784;
    }
    ctx->pc = 0x15177Cu;
    SET_GPR_U32(ctx, 31, 0x151784u);
    ctx->pc = 0x151780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15177Cu;
    // 0x151780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121700u, 0x15177Cu, 0x151784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151784u;
label_151784:
    // 0x151784: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x151784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_151788:
    // 0x151788: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x151788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15178c:
    // 0x15178c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15178cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_151790:
    // 0x151790: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x151790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_151794:
    // 0x151794: 0x320f809  jalr        $t9
label_151798:
    if (ctx->pc == 0x151798u) {
        ctx->pc = 0x151798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151794u;
        // 0x151798: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15179Cu;
        goto label_15179c;
    }
    ctx->pc = 0x151794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15179Cu);
        ctx->pc = 0x151798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151794u;
        // 0x151798: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151794u, 0x15179Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15179Cu;
label_15179c:
    // 0x15179c: 0x2645ffff  addiu       $a1, $s2, -0x1
    ctx->pc = 0x15179cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1517a0:
    // 0x1517a0: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1517a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
label_1517a4:
    // 0x1517a4: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x1517a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1517a8:
    // 0x1517a8: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x1517a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1517ac:
    // 0x1517ac: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1517acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1517b0:
    // 0x1517b0: 0x3c0e0021  lui         $t6, 0x21
    ctx->pc = 0x1517b0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)33 << 16));
label_1517b4:
    // 0x1517b4: 0x34680404  ori         $t0, $v1, 0x404
    ctx->pc = 0x1517b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
label_1517b8:
    // 0x1517b8: 0x3c0c0021  lui         $t4, 0x21
    ctx->pc = 0x1517b8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)33 << 16));
label_1517bc:
    // 0x1517bc: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x1517bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
label_1517c0:
    // 0x1517c0: 0x24c61580  addiu       $a2, $a2, 0x1580
    ctx->pc = 0x1517c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5504));
label_1517c4:
    // 0x1517c4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1517c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1517c8:
    // 0x1517c8: 0x346f801c  ori         $t7, $v1, 0x801C
    ctx->pc = 0x1517c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32796);
label_1517cc:
    // 0x1517cc: 0x25ce1590  addiu       $t6, $t6, 0x1590
    ctx->pc = 0x1517ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 5520));
label_1517d0:
    // 0x1517d0: 0x346d8015  ori         $t5, $v1, 0x8015
    ctx->pc = 0x1517d0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32789);
label_1517d4:
    // 0x1517d4: 0xa24a0003  sb          $t2, 0x3($s2)
    ctx->pc = 0x1517d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 10));
label_1517d8:
    // 0x1517d8: 0x258c15a0  addiu       $t4, $t4, 0x15A0
    ctx->pc = 0x1517d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 5536));
label_1517dc:
    // 0x1517dc: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x1517dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_1517e0:
    // 0x1517e0: 0x34648019  ori         $a0, $v1, 0x8019
    ctx->pc = 0x1517e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32793);
label_1517e4:
    // 0x1517e4: 0xae460004  sw          $a2, 0x4($s2)
    ctx->pc = 0x1517e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
label_1517e8:
    // 0x1517e8: 0x3c071400  lui         $a3, 0x1400
    ctx->pc = 0x1517e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)5120 << 16));
label_1517ec:
    // 0x1517ec: 0xa6490000  sh          $t1, 0x0($s2)
    ctx->pc = 0x1517ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 9));
label_1517f0:
    // 0x1517f0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1517f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1517f4:
    // 0x1517f4: 0xae480008  sw          $t0, 0x8($s2)
    ctx->pc = 0x1517f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 8));
label_1517f8:
    // 0x1517f8: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x1517f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1517fc:
    // 0x1517fc: 0xae4f000c  sw          $t7, 0xC($s2)
    ctx->pc = 0x1517fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 15));
label_151800:
    // 0x151800: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x151800u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151804:
    // 0x151804: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x151804u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151808:
    // 0x151808: 0x25ef0010  addiu       $t7, $t7, 0x10
    ctx->pc = 0x151808u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
label_15180c:
    // 0x15180c: 0xae0f0000  sw          $t7, 0x0($s0)
    ctx->pc = 0x15180cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
label_151810:
    // 0x151810: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x151810u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151814:
    // 0x151814: 0xa1ea0003  sb          $t2, 0x3($t7)
    ctx->pc = 0x151814u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 3), (uint8_t)GPR_U32(ctx, 10));
label_151818:
    // 0x151818: 0xa1e00002  sb          $zero, 0x2($t7)
    ctx->pc = 0x151818u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 2), (uint8_t)GPR_U32(ctx, 0));
label_15181c:
    // 0x15181c: 0xadee0004  sw          $t6, 0x4($t7)
    ctx->pc = 0x15181cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 14));
label_151820:
    // 0x151820: 0xa5e90000  sh          $t1, 0x0($t7)
    ctx->pc = 0x151820u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 9));
label_151824:
    // 0x151824: 0xade80008  sw          $t0, 0x8($t7)
    ctx->pc = 0x151824u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 8));
label_151828:
    // 0x151828: 0xaded000c  sw          $t5, 0xC($t7)
    ctx->pc = 0x151828u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 13));
label_15182c:
    // 0x15182c: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x15182cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151830:
    // 0x151830: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x151830u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
label_151834:
    // 0x151834: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x151834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
label_151838:
    // 0x151838: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x151838u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15183c:
    // 0x15183c: 0xa1aa0003  sb          $t2, 0x3($t5)
    ctx->pc = 0x15183cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 3), (uint8_t)GPR_U32(ctx, 10));
label_151840:
    // 0x151840: 0xa1a00002  sb          $zero, 0x2($t5)
    ctx->pc = 0x151840u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 0));
label_151844:
    // 0x151844: 0xadac0004  sw          $t4, 0x4($t5)
    ctx->pc = 0x151844u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 12));
label_151848:
    // 0x151848: 0xa5a90000  sh          $t1, 0x0($t5)
    ctx->pc = 0x151848u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 9));
label_15184c:
    // 0x15184c: 0xada80008  sw          $t0, 0x8($t5)
    ctx->pc = 0x15184cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 8));
label_151850:
    // 0x151850: 0xada4000c  sw          $a0, 0xC($t5)
    ctx->pc = 0x151850u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 4));
label_151854:
    // 0x151854: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x151854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151858:
    // 0x151858: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x151858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_15185c:
    // 0x15185c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x15185cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_151860:
    // 0x151860: 0x8f8484e0  lw          $a0, -0x7B20($gp)
    ctx->pc = 0x151860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_151864:
    // 0x151864: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x151864u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151868:
    // 0x151868: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x151868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_15186c:
    // 0x15186c: 0xa1860003  sb          $a2, 0x3($t4)
    ctx->pc = 0x15186cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 6));
label_151870:
    // 0x151870: 0xa1800002  sb          $zero, 0x2($t4)
    ctx->pc = 0x151870u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 2), (uint8_t)GPR_U32(ctx, 0));
label_151874:
    // 0x151874: 0xad800004  sw          $zero, 0x4($t4)
    ctx->pc = 0x151874u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 0));
label_151878:
    // 0x151878: 0xa5800000  sh          $zero, 0x0($t4)
    ctx->pc = 0x151878u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 0));
label_15187c:
    // 0x15187c: 0xad800008  sw          $zero, 0x8($t4)
    ctx->pc = 0x15187cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 0));
label_151880:
    // 0x151880: 0xad84000c  sw          $a0, 0xC($t4)
    ctx->pc = 0x151880u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 4));
label_151884:
    // 0x151884: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x151884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151888:
    // 0x151888: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x151888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_15188c:
    // 0x15188c: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
label_151890:
    if (ctx->pc == 0x151890u) {
        ctx->pc = 0x151890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15188Cu;
        // 0x151890: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151894u;
        goto label_151894;
    }
    ctx->pc = 0x15188Cu;
    {
        const bool branch_taken_0x15188c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x151890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15188Cu;
        // 0x151890: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15188c) {
            ctx->pc = 0x15194Cu;
            return;
        }
    }
    ctx->pc = 0x151894u;
label_151894:
    // 0x151894: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x151894u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151898:
    // 0x151898: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x151898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_15189c:
    // 0x15189c: 0x3c0d6c08  lui         $t5, 0x6C08
    ctx->pc = 0x15189cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)27656 << 16));
label_1518a0:
    // 0x1518a0: 0x3463801f  ori         $v1, $v1, 0x801F
    ctx->pc = 0x1518a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32799);
label_1518a4:
    // 0x1518a4: 0x24847450  addiu       $a0, $a0, 0x7450
    ctx->pc = 0x1518a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29776));
label_1518a8:
    // 0x1518a8: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1518a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1518ac:
    // 0x1518ac: 0x35af8048  ori         $t7, $t5, 0x8048
    ctx->pc = 0x1518acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32840);
    ctx->pc = 0x1518b0u;
}
