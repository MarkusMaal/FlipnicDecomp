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

// Function: FUN_0014f550
// Address: 0x14f550 - 0x14f9b0
void FUN_0014f550_0x14f550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014f550_0x14f550");
#endif

    switch (ctx->pc) {
        case 0x14f550u: goto label_14f550;
        case 0x14f554u: goto label_14f554;
        case 0x14f558u: goto label_14f558;
        case 0x14f55cu: goto label_14f55c;
        case 0x14f560u: goto label_14f560;
        case 0x14f564u: goto label_14f564;
        case 0x14f568u: goto label_14f568;
        case 0x14f56cu: goto label_14f56c;
        case 0x14f570u: goto label_14f570;
        case 0x14f574u: goto label_14f574;
        case 0x14f578u: goto label_14f578;
        case 0x14f57cu: goto label_14f57c;
        case 0x14f580u: goto label_14f580;
        case 0x14f584u: goto label_14f584;
        case 0x14f588u: goto label_14f588;
        case 0x14f58cu: goto label_14f58c;
        case 0x14f590u: goto label_14f590;
        case 0x14f594u: goto label_14f594;
        case 0x14f598u: goto label_14f598;
        case 0x14f59cu: goto label_14f59c;
        case 0x14f5a0u: goto label_14f5a0;
        case 0x14f5a4u: goto label_14f5a4;
        case 0x14f5a8u: goto label_14f5a8;
        case 0x14f5acu: goto label_14f5ac;
        case 0x14f5b0u: goto label_14f5b0;
        case 0x14f5b4u: goto label_14f5b4;
        case 0x14f5b8u: goto label_14f5b8;
        case 0x14f5bcu: goto label_14f5bc;
        case 0x14f5c0u: goto label_14f5c0;
        case 0x14f5c4u: goto label_14f5c4;
        case 0x14f5c8u: goto label_14f5c8;
        case 0x14f5ccu: goto label_14f5cc;
        case 0x14f5d0u: goto label_14f5d0;
        case 0x14f5d4u: goto label_14f5d4;
        case 0x14f5d8u: goto label_14f5d8;
        case 0x14f5dcu: goto label_14f5dc;
        case 0x14f5e0u: goto label_14f5e0;
        case 0x14f5e4u: goto label_14f5e4;
        case 0x14f5e8u: goto label_14f5e8;
        case 0x14f5ecu: goto label_14f5ec;
        case 0x14f5f0u: goto label_14f5f0;
        case 0x14f5f4u: goto label_14f5f4;
        case 0x14f5f8u: goto label_14f5f8;
        case 0x14f5fcu: goto label_14f5fc;
        case 0x14f600u: goto label_14f600;
        case 0x14f604u: goto label_14f604;
        case 0x14f608u: goto label_14f608;
        case 0x14f60cu: goto label_14f60c;
        case 0x14f610u: goto label_14f610;
        case 0x14f614u: goto label_14f614;
        case 0x14f618u: goto label_14f618;
        case 0x14f61cu: goto label_14f61c;
        case 0x14f620u: goto label_14f620;
        case 0x14f624u: goto label_14f624;
        case 0x14f628u: goto label_14f628;
        case 0x14f62cu: goto label_14f62c;
        case 0x14f630u: goto label_14f630;
        case 0x14f634u: goto label_14f634;
        case 0x14f638u: goto label_14f638;
        case 0x14f63cu: goto label_14f63c;
        case 0x14f640u: goto label_14f640;
        case 0x14f644u: goto label_14f644;
        case 0x14f648u: goto label_14f648;
        case 0x14f64cu: goto label_14f64c;
        case 0x14f650u: goto label_14f650;
        case 0x14f654u: goto label_14f654;
        case 0x14f658u: goto label_14f658;
        case 0x14f65cu: goto label_14f65c;
        case 0x14f660u: goto label_14f660;
        case 0x14f664u: goto label_14f664;
        case 0x14f668u: goto label_14f668;
        case 0x14f66cu: goto label_14f66c;
        case 0x14f670u: goto label_14f670;
        case 0x14f674u: goto label_14f674;
        case 0x14f678u: goto label_14f678;
        case 0x14f67cu: goto label_14f67c;
        case 0x14f680u: goto label_14f680;
        case 0x14f684u: goto label_14f684;
        case 0x14f688u: goto label_14f688;
        case 0x14f68cu: goto label_14f68c;
        case 0x14f690u: goto label_14f690;
        case 0x14f694u: goto label_14f694;
        case 0x14f698u: goto label_14f698;
        case 0x14f69cu: goto label_14f69c;
        case 0x14f6a0u: goto label_14f6a0;
        case 0x14f6a4u: goto label_14f6a4;
        case 0x14f6a8u: goto label_14f6a8;
        case 0x14f6acu: goto label_14f6ac;
        case 0x14f6b0u: goto label_14f6b0;
        case 0x14f6b4u: goto label_14f6b4;
        case 0x14f6b8u: goto label_14f6b8;
        case 0x14f6bcu: goto label_14f6bc;
        case 0x14f6c0u: goto label_14f6c0;
        case 0x14f6c4u: goto label_14f6c4;
        case 0x14f6c8u: goto label_14f6c8;
        case 0x14f6ccu: goto label_14f6cc;
        case 0x14f6d0u: goto label_14f6d0;
        case 0x14f6d4u: goto label_14f6d4;
        case 0x14f6d8u: goto label_14f6d8;
        case 0x14f6dcu: goto label_14f6dc;
        case 0x14f6e0u: goto label_14f6e0;
        case 0x14f6e4u: goto label_14f6e4;
        case 0x14f6e8u: goto label_14f6e8;
        case 0x14f6ecu: goto label_14f6ec;
        case 0x14f6f0u: goto label_14f6f0;
        case 0x14f6f4u: goto label_14f6f4;
        case 0x14f6f8u: goto label_14f6f8;
        case 0x14f6fcu: goto label_14f6fc;
        case 0x14f700u: goto label_14f700;
        case 0x14f704u: goto label_14f704;
        case 0x14f708u: goto label_14f708;
        case 0x14f70cu: goto label_14f70c;
        case 0x14f710u: goto label_14f710;
        case 0x14f714u: goto label_14f714;
        case 0x14f718u: goto label_14f718;
        case 0x14f71cu: goto label_14f71c;
        case 0x14f720u: goto label_14f720;
        case 0x14f724u: goto label_14f724;
        case 0x14f728u: goto label_14f728;
        case 0x14f72cu: goto label_14f72c;
        case 0x14f730u: goto label_14f730;
        case 0x14f734u: goto label_14f734;
        case 0x14f738u: goto label_14f738;
        case 0x14f73cu: goto label_14f73c;
        case 0x14f740u: goto label_14f740;
        case 0x14f744u: goto label_14f744;
        case 0x14f748u: goto label_14f748;
        case 0x14f74cu: goto label_14f74c;
        case 0x14f750u: goto label_14f750;
        case 0x14f754u: goto label_14f754;
        case 0x14f758u: goto label_14f758;
        case 0x14f75cu: goto label_14f75c;
        case 0x14f760u: goto label_14f760;
        case 0x14f764u: goto label_14f764;
        case 0x14f768u: goto label_14f768;
        case 0x14f76cu: goto label_14f76c;
        case 0x14f770u: goto label_14f770;
        case 0x14f774u: goto label_14f774;
        case 0x14f778u: goto label_14f778;
        case 0x14f77cu: goto label_14f77c;
        case 0x14f780u: goto label_14f780;
        case 0x14f784u: goto label_14f784;
        case 0x14f788u: goto label_14f788;
        case 0x14f78cu: goto label_14f78c;
        case 0x14f790u: goto label_14f790;
        case 0x14f794u: goto label_14f794;
        case 0x14f798u: goto label_14f798;
        case 0x14f79cu: goto label_14f79c;
        case 0x14f7a0u: goto label_14f7a0;
        case 0x14f7a4u: goto label_14f7a4;
        case 0x14f7a8u: goto label_14f7a8;
        case 0x14f7acu: goto label_14f7ac;
        case 0x14f7b0u: goto label_14f7b0;
        case 0x14f7b4u: goto label_14f7b4;
        case 0x14f7b8u: goto label_14f7b8;
        case 0x14f7bcu: goto label_14f7bc;
        case 0x14f7c0u: goto label_14f7c0;
        case 0x14f7c4u: goto label_14f7c4;
        case 0x14f7c8u: goto label_14f7c8;
        case 0x14f7ccu: goto label_14f7cc;
        case 0x14f7d0u: goto label_14f7d0;
        case 0x14f7d4u: goto label_14f7d4;
        case 0x14f7d8u: goto label_14f7d8;
        case 0x14f7dcu: goto label_14f7dc;
        case 0x14f7e0u: goto label_14f7e0;
        case 0x14f7e4u: goto label_14f7e4;
        case 0x14f7e8u: goto label_14f7e8;
        case 0x14f7ecu: goto label_14f7ec;
        case 0x14f7f0u: goto label_14f7f0;
        case 0x14f7f4u: goto label_14f7f4;
        case 0x14f7f8u: goto label_14f7f8;
        case 0x14f7fcu: goto label_14f7fc;
        case 0x14f800u: goto label_14f800;
        case 0x14f804u: goto label_14f804;
        case 0x14f808u: goto label_14f808;
        case 0x14f80cu: goto label_14f80c;
        case 0x14f810u: goto label_14f810;
        case 0x14f814u: goto label_14f814;
        case 0x14f818u: goto label_14f818;
        case 0x14f81cu: goto label_14f81c;
        case 0x14f820u: goto label_14f820;
        case 0x14f824u: goto label_14f824;
        case 0x14f828u: goto label_14f828;
        case 0x14f82cu: goto label_14f82c;
        case 0x14f830u: goto label_14f830;
        case 0x14f834u: goto label_14f834;
        case 0x14f838u: goto label_14f838;
        case 0x14f83cu: goto label_14f83c;
        case 0x14f840u: goto label_14f840;
        case 0x14f844u: goto label_14f844;
        case 0x14f848u: goto label_14f848;
        case 0x14f84cu: goto label_14f84c;
        case 0x14f850u: goto label_14f850;
        case 0x14f854u: goto label_14f854;
        case 0x14f858u: goto label_14f858;
        case 0x14f85cu: goto label_14f85c;
        case 0x14f860u: goto label_14f860;
        case 0x14f864u: goto label_14f864;
        case 0x14f868u: goto label_14f868;
        case 0x14f86cu: goto label_14f86c;
        case 0x14f870u: goto label_14f870;
        case 0x14f874u: goto label_14f874;
        case 0x14f878u: goto label_14f878;
        case 0x14f87cu: goto label_14f87c;
        case 0x14f880u: goto label_14f880;
        case 0x14f884u: goto label_14f884;
        case 0x14f888u: goto label_14f888;
        case 0x14f88cu: goto label_14f88c;
        case 0x14f890u: goto label_14f890;
        case 0x14f894u: goto label_14f894;
        case 0x14f898u: goto label_14f898;
        case 0x14f89cu: goto label_14f89c;
        case 0x14f8a0u: goto label_14f8a0;
        case 0x14f8a4u: goto label_14f8a4;
        case 0x14f8a8u: goto label_14f8a8;
        case 0x14f8acu: goto label_14f8ac;
        case 0x14f8b0u: goto label_14f8b0;
        case 0x14f8b4u: goto label_14f8b4;
        case 0x14f8b8u: goto label_14f8b8;
        case 0x14f8bcu: goto label_14f8bc;
        case 0x14f8c0u: goto label_14f8c0;
        case 0x14f8c4u: goto label_14f8c4;
        case 0x14f8c8u: goto label_14f8c8;
        case 0x14f8ccu: goto label_14f8cc;
        case 0x14f8d0u: goto label_14f8d0;
        case 0x14f8d4u: goto label_14f8d4;
        case 0x14f8d8u: goto label_14f8d8;
        case 0x14f8dcu: goto label_14f8dc;
        case 0x14f8e0u: goto label_14f8e0;
        case 0x14f8e4u: goto label_14f8e4;
        case 0x14f8e8u: goto label_14f8e8;
        case 0x14f8ecu: goto label_14f8ec;
        case 0x14f8f0u: goto label_14f8f0;
        case 0x14f8f4u: goto label_14f8f4;
        case 0x14f8f8u: goto label_14f8f8;
        case 0x14f8fcu: goto label_14f8fc;
        case 0x14f900u: goto label_14f900;
        case 0x14f904u: goto label_14f904;
        case 0x14f908u: goto label_14f908;
        case 0x14f90cu: goto label_14f90c;
        case 0x14f910u: goto label_14f910;
        case 0x14f914u: goto label_14f914;
        case 0x14f918u: goto label_14f918;
        case 0x14f91cu: goto label_14f91c;
        case 0x14f920u: goto label_14f920;
        case 0x14f924u: goto label_14f924;
        case 0x14f928u: goto label_14f928;
        case 0x14f92cu: goto label_14f92c;
        case 0x14f930u: goto label_14f930;
        case 0x14f934u: goto label_14f934;
        case 0x14f938u: goto label_14f938;
        case 0x14f93cu: goto label_14f93c;
        case 0x14f940u: goto label_14f940;
        case 0x14f944u: goto label_14f944;
        case 0x14f948u: goto label_14f948;
        case 0x14f94cu: goto label_14f94c;
        case 0x14f950u: goto label_14f950;
        case 0x14f954u: goto label_14f954;
        case 0x14f958u: goto label_14f958;
        case 0x14f95cu: goto label_14f95c;
        case 0x14f960u: goto label_14f960;
        case 0x14f964u: goto label_14f964;
        case 0x14f968u: goto label_14f968;
        case 0x14f96cu: goto label_14f96c;
        case 0x14f970u: goto label_14f970;
        case 0x14f974u: goto label_14f974;
        case 0x14f978u: goto label_14f978;
        case 0x14f97cu: goto label_14f97c;
        case 0x14f980u: goto label_14f980;
        case 0x14f984u: goto label_14f984;
        case 0x14f988u: goto label_14f988;
        case 0x14f98cu: goto label_14f98c;
        case 0x14f990u: goto label_14f990;
        case 0x14f994u: goto label_14f994;
        case 0x14f998u: goto label_14f998;
        case 0x14f99cu: goto label_14f99c;
        case 0x14f9a0u: goto label_14f9a0;
        case 0x14f9a4u: goto label_14f9a4;
        case 0x14f9a8u: goto label_14f9a8;
        case 0x14f9acu: goto label_14f9ac;
        default: break;
    }

    ctx->pc = 0x14f550u;

label_14f550:
    // 0x14f550: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14f550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_14f554:
    // 0x14f554: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x14f554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_14f558:
    // 0x14f558: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14f558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_14f55c:
    // 0x14f55c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14f55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_14f560:
    // 0x14f560: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14f560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_14f564:
    // 0x14f564: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14f564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14f568:
    // 0x14f568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14f56c:
    // 0x14f56c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14f56cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14f570:
    // 0x14f570: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x14f570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_14f574:
    // 0x14f574: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14f574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14f578:
    // 0x14f578: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x14f578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14f57c:
    // 0x14f57c: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x14f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_14f580:
    // 0x14f580: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x14f580u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
label_14f584:
    // 0x14f584: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x14f584u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
label_14f588:
    // 0x14f588: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x14f588u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_14f58c:
    // 0x14f58c: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x14f58cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
label_14f590:
    // 0x14f590: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x14f590u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_14f594:
    // 0x14f594: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x14f594u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_14f598:
    // 0x14f598: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14f59c:
    // 0x14f59c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14f5a0:
    // 0x14f5a0: 0xc053e94  jal         func_14FA50
label_14f5a4:
    if (ctx->pc == 0x14F5A4u) {
        ctx->pc = 0x14F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5A0u;
        // 0x14f5a4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F5A8u;
        goto label_14f5a8;
    }
    ctx->pc = 0x14F5A0u;
    SET_GPR_U32(ctx, 31, 0x14F5A8u);
    ctx->pc = 0x14F5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F5A0u;
    // 0x14f5a4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FA50u, 0x14F5A0u, 0x14F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F5A8u;
label_14f5a8:
    // 0x14f5a8: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x14f5a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f5ac:
    // 0x14f5ac: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x14f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
label_14f5b0:
    // 0x14f5b0: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x14f5b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_14f5b4:
    // 0x14f5b4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x14f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_14f5b8:
    // 0x14f5b8: 0x346a0404  ori         $t2, $v1, 0x404
    ctx->pc = 0x14f5b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
label_14f5bc:
    // 0x14f5bc: 0x26270140  addiu       $a3, $s1, 0x140
    ctx->pc = 0x14f5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
label_14f5c0:
    // 0x14f5c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14f5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14f5c4:
    // 0x14f5c4: 0x34458014  ori         $a1, $v0, 0x8014
    ctx->pc = 0x14f5c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32788);
label_14f5c8:
    // 0x14f5c8: 0x34448214  ori         $a0, $v0, 0x8214
    ctx->pc = 0x14f5c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33300);
label_14f5cc:
    // 0x14f5cc: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x14f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14f5d0:
    // 0x14f5d0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x14f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_14f5d4:
    // 0x14f5d4: 0xa1280003  sb          $t0, 0x3($t1)
    ctx->pc = 0x14f5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 8));
label_14f5d8:
    // 0x14f5d8: 0x24420f30  addiu       $v0, $v0, 0xF30
    ctx->pc = 0x14f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3888));
label_14f5dc:
    // 0x14f5dc: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x14f5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
label_14f5e0:
    // 0x14f5e0: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x14f5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_14f5e4:
    // 0x14f5e4: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x14f5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
label_14f5e8:
    // 0x14f5e8: 0xad2a0008  sw          $t2, 0x8($t1)
    ctx->pc = 0x14f5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 10));
label_14f5ec:
    // 0x14f5ec: 0xad25000c  sw          $a1, 0xC($t1)
    ctx->pc = 0x14f5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
label_14f5f0:
    // 0x14f5f0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x14f5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f5f4:
    // 0x14f5f4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x14f5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_14f5f8:
    // 0x14f5f8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x14f5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_14f5fc:
    // 0x14f5fc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x14f5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f600:
    // 0x14f600: 0xa0a80003  sb          $t0, 0x3($a1)
    ctx->pc = 0x14f600u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 8));
label_14f604:
    // 0x14f604: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x14f604u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_14f608:
    // 0x14f608: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x14f608u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
label_14f60c:
    // 0x14f60c: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x14f60cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
label_14f610:
    // 0x14f610: 0xacaa0008  sw          $t2, 0x8($a1)
    ctx->pc = 0x14f610u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 10));
label_14f614:
    // 0x14f614: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x14f614u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
label_14f618:
    // 0x14f618: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14f618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f61c:
    // 0x14f61c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x14f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_14f620:
    // 0x14f620: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x14f620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_14f624:
    // 0x14f624: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x14f624u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_14f628:
    // 0x14f628: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x14f628u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_14f62c:
    // 0x14f62c: 0xc04c734  jal         func_131CD0
label_14f630:
    if (ctx->pc == 0x14F630u) {
        ctx->pc = 0x14F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F62Cu;
        // 0x14f630: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F634u;
        goto label_14f634;
    }
    ctx->pc = 0x14F62Cu;
    SET_GPR_U32(ctx, 31, 0x14F634u);
    ctx->pc = 0x14F630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F62Cu;
    // 0x14f630: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CD0u, 0x14F62Cu, 0x14F634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F634u;
label_14f634:
    // 0x14f634: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14f638:
    // 0x14f638: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x14f638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_14f63c:
    // 0x14f63c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x14f63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_14f640:
    // 0x14f640: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x14f640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14f644:
    // 0x14f644: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x14f644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14f648:
    // 0x14f648: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x14f648u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
label_14f64c:
    // 0x14f64c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x14f64cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_14f650:
    // 0x14f650: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x14f650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14f654:
    // 0x14f654: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x14f654u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_14f658:
    // 0x14f658: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14f658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_14f65c:
    // 0x14f65c: 0xc07d38e  jal         func_1F4E38
label_14f660:
    if (ctx->pc == 0x14F660u) {
        ctx->pc = 0x14F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F65Cu;
        // 0x14f660: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F664u;
        goto label_14f664;
    }
    ctx->pc = 0x14F65Cu;
    SET_GPR_U32(ctx, 31, 0x14F664u);
    ctx->pc = 0x14F660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F65Cu;
    // 0x14f660: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x14F65Cu, 0x14F664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F664u;
label_14f664:
    // 0x14f664: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x14f664u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f668:
    // 0x14f668: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x14f668u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_14f66c:
    // 0x14f66c: 0x3c080021  lui         $t0, 0x21
    ctx->pc = 0x14f66cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33 << 16));
label_14f670:
    // 0x14f670: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x14f670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_14f674:
    // 0x14f674: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x14f674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
label_14f678:
    // 0x14f678: 0x34660404  ori         $a2, $v1, 0x404
    ctx->pc = 0x14f678u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
label_14f67c:
    // 0x14f67c: 0x34458019  ori         $a1, $v0, 0x8019
    ctx->pc = 0x14f67cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32793);
label_14f680:
    // 0x14f680: 0x25080f20  addiu       $t0, $t0, 0xF20
    ctx->pc = 0x14f680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3872));
label_14f684:
    // 0x14f684: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14f684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f688:
    // 0x14f688: 0x26230120  addiu       $v1, $s1, 0x120
    ctx->pc = 0x14f688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_14f68c:
    // 0x14f68c: 0x3442801a  ori         $v0, $v0, 0x801A
    ctx->pc = 0x14f68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32794);
label_14f690:
    // 0x14f690: 0xa1490003  sb          $t1, 0x3($t2)
    ctx->pc = 0x14f690u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 9));
label_14f694:
    // 0x14f694: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x14f694u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
label_14f698:
    // 0x14f698: 0xad480004  sw          $t0, 0x4($t2)
    ctx->pc = 0x14f698u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 8));
label_14f69c:
    // 0x14f69c: 0xa5470000  sh          $a3, 0x0($t2)
    ctx->pc = 0x14f69cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 7));
label_14f6a0:
    // 0x14f6a0: 0xad460008  sw          $a2, 0x8($t2)
    ctx->pc = 0x14f6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 6));
label_14f6a4:
    // 0x14f6a4: 0xad45000c  sw          $a1, 0xC($t2)
    ctx->pc = 0x14f6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 5));
label_14f6a8:
    // 0x14f6a8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x14f6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f6ac:
    // 0x14f6ac: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x14f6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_14f6b0:
    // 0x14f6b0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x14f6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_14f6b4:
    // 0x14f6b4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x14f6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f6b8:
    // 0x14f6b8: 0xa0a90003  sb          $t1, 0x3($a1)
    ctx->pc = 0x14f6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 9));
label_14f6bc:
    // 0x14f6bc: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x14f6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_14f6c0:
    // 0x14f6c0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x14f6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_14f6c4:
    // 0x14f6c4: 0xa4a70000  sh          $a3, 0x0($a1)
    ctx->pc = 0x14f6c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 7));
label_14f6c8:
    // 0x14f6c8: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x14f6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
label_14f6cc:
    // 0x14f6cc: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x14f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_14f6d0:
    // 0x14f6d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f6d4:
    // 0x14f6d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14f6d8:
    // 0x14f6d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_14f6dc:
    // 0x14f6dc: 0x8e2501a0  lw          $a1, 0x1A0($s1)
    ctx->pc = 0x14f6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_14f6e0:
    // 0x14f6e0: 0xc0485c0  jal         func_121700
label_14f6e4:
    if (ctx->pc == 0x14F6E4u) {
        ctx->pc = 0x14F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6E0u;
        // 0x14f6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F6E8u;
        goto label_14f6e8;
    }
    ctx->pc = 0x14F6E0u;
    SET_GPR_U32(ctx, 31, 0x14F6E8u);
    ctx->pc = 0x14F6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F6E0u;
    // 0x14f6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121700u, 0x14F6E0u, 0x14F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6E8u;
label_14f6e8:
    // 0x14f6e8: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x14f6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_14f6ec:
    // 0x14f6ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14f6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14f6f0:
    // 0x14f6f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14f6f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14f6f4:
    // 0x14f6f4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x14f6f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_14f6f8:
    // 0x14f6f8: 0x320f809  jalr        $t9
label_14f6fc:
    if (ctx->pc == 0x14F6FCu) {
        ctx->pc = 0x14F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6F8u;
        // 0x14f6fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F700u;
        goto label_14f700;
    }
    ctx->pc = 0x14F6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14F700u);
        ctx->pc = 0x14F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6F8u;
        // 0x14f6fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F6F8u, 0x14F700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14F700u;
label_14f700:
    // 0x14f700: 0x8f868504  lw          $a2, -0x7AFC($gp)
    ctx->pc = 0x14f700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935812)));
label_14f704:
    // 0x14f704: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x14f704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_14f708:
    // 0x14f708: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x14f708u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
label_14f70c:
    // 0x14f70c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x14f70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_14f710:
    // 0x14f710: 0x8f8584cc  lw          $a1, -0x7B34($gp)
    ctx->pc = 0x14f710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935756)));
label_14f714:
    // 0x14f714: 0x348d0404  ori         $t5, $a0, 0x404
    ctx->pc = 0x14f714u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
label_14f718:
    // 0x14f718: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x14f718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
label_14f71c:
    // 0x14f71c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x14f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_14f720:
    // 0x14f720: 0x348c8017  ori         $t4, $a0, 0x8017
    ctx->pc = 0x14f720u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32791);
label_14f724:
    // 0x14f724: 0x25ef73e0  addiu       $t7, $t7, 0x73E0
    ctx->pc = 0x14f724u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 29664));
label_14f728:
    // 0x14f728: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x14f728u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f72c:
    // 0x14f72c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x14f72cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_14f730:
    // 0x14f730: 0xac2673e0  sw          $a2, 0x73E0($at)
    ctx->pc = 0x14f730u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29664), GPR_U32(ctx, 6));
label_14f734:
    // 0x14f734: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x14f734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
label_14f738:
    // 0x14f738: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x14f738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_14f73c:
    // 0x14f73c: 0x34860004  ori         $a2, $a0, 0x4
    ctx->pc = 0x14f73cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_14f740:
    // 0x14f740: 0xac2573e4  sw          $a1, 0x73E4($at)
    ctx->pc = 0x14f740u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29668), GPR_U32(ctx, 5));
label_14f744:
    // 0x14f744: 0x3c0438e3  lui         $a0, 0x38E3
    ctx->pc = 0x14f744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14563 << 16));
label_14f748:
    // 0x14f748: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x14f748u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f74c:
    // 0x14f74c: 0x3c0b1400  lui         $t3, 0x1400
    ctx->pc = 0x14f74cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)5120 << 16));
label_14f750:
    // 0x14f750: 0x26290160  addiu       $t1, $s1, 0x160
    ctx->pc = 0x14f750u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
label_14f754:
    // 0x14f754: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x14f754u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14f758:
    // 0x14f758: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x14f758u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_14f75c:
    // 0x14f75c: 0x34848e39  ori         $a0, $a0, 0x8E39
    ctx->pc = 0x14f75cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36409);
label_14f760:
    // 0x14f760: 0xa2430003  sb          $v1, 0x3($s2)
    ctx->pc = 0x14f760u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
label_14f764:
    // 0x14f764: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x14f764u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_14f768:
    // 0x14f768: 0xae4f0004  sw          $t7, 0x4($s2)
    ctx->pc = 0x14f768u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 15));
label_14f76c:
    // 0x14f76c: 0xa64e0000  sh          $t6, 0x0($s2)
    ctx->pc = 0x14f76cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 14));
label_14f770:
    // 0x14f770: 0xae4d0008  sw          $t5, 0x8($s2)
    ctx->pc = 0x14f770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 13));
label_14f774:
    // 0x14f774: 0xae4c000c  sw          $t4, 0xC($s2)
    ctx->pc = 0x14f774u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 12));
label_14f778:
    // 0x14f778: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x14f778u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f77c:
    // 0x14f77c: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x14f77cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
label_14f780:
    // 0x14f780: 0xae0c0000  sw          $t4, 0x0($s0)
    ctx->pc = 0x14f780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
label_14f784:
    // 0x14f784: 0x8f8c84e0  lw          $t4, -0x7B20($gp)
    ctx->pc = 0x14f784u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_14f788:
    // 0x14f788: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x14f788u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f78c:
    // 0x14f78c: 0x18b5825  or          $t3, $t4, $t3
    ctx->pc = 0x14f78cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
label_14f790:
    // 0x14f790: 0xa1aa0003  sb          $t2, 0x3($t5)
    ctx->pc = 0x14f790u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 3), (uint8_t)GPR_U32(ctx, 10));
label_14f794:
    // 0x14f794: 0xa1a00002  sb          $zero, 0x2($t5)
    ctx->pc = 0x14f794u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 0));
label_14f798:
    // 0x14f798: 0xada00004  sw          $zero, 0x4($t5)
    ctx->pc = 0x14f798u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 0));
label_14f79c:
    // 0x14f79c: 0xa5a00000  sh          $zero, 0x0($t5)
    ctx->pc = 0x14f79cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 0));
label_14f7a0:
    // 0x14f7a0: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x14f7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
label_14f7a4:
    // 0x14f7a4: 0xadab000c  sw          $t3, 0xC($t5)
    ctx->pc = 0x14f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 11));
label_14f7a8:
    // 0x14f7a8: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x14f7a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f7ac:
    // 0x14f7ac: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x14f7acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_14f7b0:
    // 0x14f7b0: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x14f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
label_14f7b4:
    // 0x14f7b4: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x14f7b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f7b8:
    // 0x14f7b8: 0xa1430003  sb          $v1, 0x3($t2)
    ctx->pc = 0x14f7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 3));
label_14f7bc:
    // 0x14f7bc: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x14f7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
label_14f7c0:
    // 0x14f7c0: 0xad490004  sw          $t1, 0x4($t2)
    ctx->pc = 0x14f7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 9));
label_14f7c4:
    // 0x14f7c4: 0xa5480000  sh          $t0, 0x0($t2)
    ctx->pc = 0x14f7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 8));
label_14f7c8:
    // 0x14f7c8: 0xad470008  sw          $a3, 0x8($t2)
    ctx->pc = 0x14f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 7));
label_14f7cc:
    // 0x14f7cc: 0xad46000c  sw          $a2, 0xC($t2)
    ctx->pc = 0x14f7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 6));
label_14f7d0:
    // 0x14f7d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f7d4:
    // 0x14f7d4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x14f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_14f7d8:
    // 0x14f7d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x14f7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_14f7dc:
    // 0x14f7dc: 0x8e26005c  lw          $a2, 0x5C($s1)
    ctx->pc = 0x14f7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_14f7e0:
    // 0x14f7e0: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x14f7e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_14f7e4:
    // 0x14f7e4: 0x0  nop
    ctx->pc = 0x14f7e4u;
    // NOP
label_14f7e8:
    // 0x14f7e8: 0x0  nop
    ctx->pc = 0x14f7e8u;
    // NOP
label_14f7ec:
    // 0x14f7ec: 0x1810  mfhi        $v1
    ctx->pc = 0x14f7ecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_14f7f0:
    // 0x14f7f0: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x14f7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_14f7f4:
    // 0x14f7f4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x14f7f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_14f7f8:
    // 0x14f7f8: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x14f7f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14f7fc:
    // 0x14f7fc: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
label_14f800:
    if (ctx->pc == 0x14F800u) {
        ctx->pc = 0x14F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F7FCu;
        // 0x14f800: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F804u;
        goto label_14f804;
    }
    ctx->pc = 0x14F7FCu;
    {
        const bool branch_taken_0x14f7fc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F7FCu;
        // 0x14f800: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7fc) {
            ctx->pc = 0x14F820u;
            goto label_14f820;
        }
    }
    ctx->pc = 0x14F804u;
label_14f804:
    // 0x14f804: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x14f804u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_14f808:
    // 0x14f808: 0x0  nop
    ctx->pc = 0x14f808u;
    // NOP
label_14f80c:
    // 0x14f80c: 0x0  nop
    ctx->pc = 0x14f80cu;
    // NOP
label_14f810:
    // 0x14f810: 0x1810  mfhi        $v1
    ctx->pc = 0x14f810u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_14f814:
    // 0x14f814: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_14f818:
    if (ctx->pc == 0x14F818u) {
        ctx->pc = 0x14F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F814u;
        // 0x14f818: 0x920c0  sll         $a0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F81Cu;
        goto label_14f81c;
    }
    ctx->pc = 0x14F814u;
    {
        const bool branch_taken_0x14f814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F814u;
        // 0x14f818: 0x920c0  sll         $a0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f814) {
            ctx->pc = 0x14F824u;
            goto label_14f824;
        }
    }
    ctx->pc = 0x14F81Cu;
label_14f81c:
    // 0x14f81c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x14f81cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_14f820:
    // 0x14f820: 0x920c0  sll         $a0, $t1, 3
    ctx->pc = 0x14f820u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_14f824:
    // 0x14f824: 0x3c03502f  lui         $v1, 0x502F
    ctx->pc = 0x14f824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20527 << 16));
label_14f828:
    // 0x14f828: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x14f828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_14f82c:
    // 0x14f82c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x14f82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_14f830:
    // 0x14f830: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14f830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_14f834:
    // 0x14f834: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x14f834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_14f838:
    // 0x14f838: 0xc45023  subu        $t2, $a2, $a0
    ctx->pc = 0x14f838u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_14f83c:
    // 0x14f83c: 0x34038024  ori         $v1, $zero, 0x8024
    ctx->pc = 0x14f83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32804);
label_14f840:
    // 0x14f840: 0x652025  or          $a0, $v1, $a1
    ctx->pc = 0x14f840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_14f844:
    // 0x14f844: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x14f844u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f848:
    // 0x14f848: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x14f848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_14f84c:
    // 0x14f84c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x14f84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
label_14f850:
    // 0x14f850: 0x34632521  ori         $v1, $v1, 0x2521
    ctx->pc = 0x14f850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9505);
label_14f854:
    // 0x14f854: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x14f854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_14f858:
    // 0x14f858: 0xffa30068  sd          $v1, 0x68($sp)
    ctx->pc = 0x14f858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 3));
label_14f85c:
    // 0x14f85c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x14f85cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f860:
    // 0x14f860: 0xffa30078  sd          $v1, 0x78($sp)
    ctx->pc = 0x14f860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 3));
label_14f864:
    // 0x14f864: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x14f864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_14f868:
    // 0x14f868: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x14f868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_14f86c:
    // 0x14f86c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14f86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f870:
    // 0x14f870: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x14f870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_14f874:
    // 0x14f874: 0x3c181400  lui         $t8, 0x1400
    ctx->pc = 0x14f874u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)5120 << 16));
label_14f878:
    // 0x14f878: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x14f878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_14f87c:
    // 0x14f87c: 0x252f0001  addiu       $t7, $t1, 0x1
    ctx->pc = 0x14f87cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_14f880:
    // 0x14f880: 0xffa30070  sd          $v1, 0x70($sp)
    ctx->pc = 0x14f880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 3));
label_14f884:
    // 0x14f884: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x14f884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_14f888:
    // 0x14f888: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x14f888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_14f88c:
    // 0x14f88c: 0x34660404  ori         $a2, $v1, 0x404
    ctx->pc = 0x14f88cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
label_14f890:
    // 0x14f890: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x14f890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
label_14f894:
    // 0x14f894: 0x3465801f  ori         $a1, $v1, 0x801F
    ctx->pc = 0x14f894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32799);
label_14f898:
    // 0x14f898: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x14f898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
label_14f89c:
    // 0x14f89c: 0x10000039  b           . + 4 + (0x39 << 2)
label_14f8a0:
    if (ctx->pc == 0x14F8A0u) {
        ctx->pc = 0x14F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F89Cu;
        // 0x14f8a0: 0x34638020  ori         $v1, $v1, 0x8020 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32800);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F8A4u;
        goto label_14f8a4;
    }
    ctx->pc = 0x14F89Cu;
    {
        const bool branch_taken_0x14f89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F89Cu;
        // 0x14f8a0: 0x34638020  ori         $v1, $v1, 0x8020 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32800);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f89c) {
            ctx->pc = 0x14F984u;
            goto label_14f984;
        }
    }
    ctx->pc = 0x14F8A4u;
label_14f8a4:
    // 0x14f8a4: 0x152d0003  bne         $t1, $t5, . + 4 + (0x3 << 2)
label_14f8a8:
    if (ctx->pc == 0x14F8A8u) {
        ctx->pc = 0x14F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8A4u;
        // 0x14f8a8: 0x27ab0070  addiu       $t3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F8ACu;
        goto label_14f8ac;
    }
    ctx->pc = 0x14F8A4u;
    {
        const bool branch_taken_0x14f8a4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 13));
        ctx->pc = 0x14F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8A4u;
        // 0x14f8a8: 0x27ab0070  addiu       $t3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f8a4) {
            ctx->pc = 0x14F8B4u;
            goto label_14f8b4;
        }
    }
    ctx->pc = 0x14F8ACu;
label_14f8ac:
    // 0x14f8ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_14f8b0:
    if (ctx->pc == 0x14F8B0u) {
        ctx->pc = 0x14F8B4u;
        goto label_14f8b4;
    }
    ctx->pc = 0x14F8ACu;
    {
        const bool branch_taken_0x14f8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f8ac) {
            ctx->pc = 0x14F8BCu;
            goto label_14f8bc;
        }
    }
    ctx->pc = 0x14F8B4u;
label_14f8b4:
    // 0x14f8b4: 0x0  nop
    ctx->pc = 0x14f8b4u;
    // NOP
label_14f8b8:
    // 0x14f8b8: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x14f8b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_14f8bc:
    // 0x14f8bc: 0x0  nop
    ctx->pc = 0x14f8bcu;
    // NOP
label_14f8c0:
    // 0x14f8c0: 0x152d0002  bne         $t1, $t5, . + 4 + (0x2 << 2)
label_14f8c4:
    if (ctx->pc == 0x14F8C4u) {
        ctx->pc = 0x14F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8C0u;
        // 0x14f8c4: 0x24190024  addiu       $t9, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F8C8u;
        goto label_14f8c8;
    }
    ctx->pc = 0x14F8C0u;
    {
        const bool branch_taken_0x14f8c0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 13));
        ctx->pc = 0x14F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8C0u;
        // 0x14f8c4: 0x24190024  addiu       $t9, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f8c0) {
            ctx->pc = 0x14F8CCu;
            goto label_14f8cc;
        }
    }
    ctx->pc = 0x14F8C8u;
label_14f8c8:
    // 0x14f8c8: 0x140c82d  daddu       $t9, $t2, $zero
    ctx->pc = 0x14f8c8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_14f8cc:
    // 0x14f8cc: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x14f8ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f8d0:
    // 0x14f8d0: 0xc9180  sll         $s2, $t4, 6
    ctx->pc = 0x14f8d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_14f8d4:
    // 0x14f8d4: 0x197080  sll         $t6, $t9, 2
    ctx->pc = 0x14f8d4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
label_14f8d8:
    // 0x14f8d8: 0x258c0024  addiu       $t4, $t4, 0x24
    ctx->pc = 0x14f8d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 36));
label_14f8dc:
    // 0x14f8dc: 0x19cc80  sll         $t9, $t9, 18
    ctx->pc = 0x14f8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 18));
label_14f8e0:
    // 0x14f8e0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x14f8e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_14f8e4:
    // 0x14f8e4: 0x323c825  or          $t9, $t9, $v1
    ctx->pc = 0x14f8e4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | GPR_U64(ctx, 3));
label_14f8e8:
    // 0x14f8e8: 0xa2680003  sb          $t0, 0x3($s3)
    ctx->pc = 0x14f8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 8));
label_14f8ec:
    // 0x14f8ec: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x14f8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_14f8f0:
    // 0x14f8f0: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x14f8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_14f8f4:
    // 0x14f8f4: 0xa6670000  sh          $a3, 0x0($s3)
    ctx->pc = 0x14f8f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 7));
label_14f8f8:
    // 0x14f8f8: 0xae660008  sw          $a2, 0x8($s3)
    ctx->pc = 0x14f8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 6));
label_14f8fc:
    // 0x14f8fc: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x14f8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_14f900:
    // 0x14f900: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x14f900u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f904:
    // 0x14f904: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x14f904u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_14f908:
    // 0x14f908: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x14f908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_14f90c:
    // 0x14f90c: 0x79730000  lq          $s3, 0x0($t3)
    ctx->pc = 0x14f90cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 11), 0)));
label_14f910:
    // 0x14f910: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x14f910u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f914:
    // 0x14f914: 0x7d730000  sq          $s3, 0x0($t3)
    ctx->pc = 0x14f914u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 19));
label_14f918:
    // 0x14f918: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x14f918u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f91c:
    // 0x14f91c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x14f91cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_14f920:
    // 0x14f920: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x14f920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
label_14f924:
    // 0x14f924: 0x8e2b011c  lw          $t3, 0x11C($s1)
    ctx->pc = 0x14f924u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_14f928:
    // 0x14f928: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x14f928u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f92c:
    // 0x14f92c: 0x1725821  addu        $t3, $t3, $s2
    ctx->pc = 0x14f92cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 18)));
label_14f930:
    // 0x14f930: 0xa2640003  sb          $a0, 0x3($s3)
    ctx->pc = 0x14f930u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 4));
label_14f934:
    // 0x14f934: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x14f934u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_14f938:
    // 0x14f938: 0xae6b0004  sw          $t3, 0x4($s3)
    ctx->pc = 0x14f938u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 11));
label_14f93c:
    // 0x14f93c: 0xa66e0000  sh          $t6, 0x0($s3)
    ctx->pc = 0x14f93cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 14));
label_14f940:
    // 0x14f940: 0xae660008  sw          $a2, 0x8($s3)
    ctx->pc = 0x14f940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 6));
label_14f944:
    // 0x14f944: 0xae79000c  sw          $t9, 0xC($s3)
    ctx->pc = 0x14f944u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 25));
label_14f948:
    // 0x14f948: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x14f948u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f94c:
    // 0x14f94c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x14f94cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_14f950:
    // 0x14f950: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x14f950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
label_14f954:
    // 0x14f954: 0x8f8b84e4  lw          $t3, -0x7B1C($gp)
    ctx->pc = 0x14f954u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935780)));
label_14f958:
    // 0x14f958: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x14f958u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f95c:
    // 0x14f95c: 0x1785825  or          $t3, $t3, $t8
    ctx->pc = 0x14f95cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 24));
label_14f960:
    // 0x14f960: 0xa1c80003  sb          $t0, 0x3($t6)
    ctx->pc = 0x14f960u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 3), (uint8_t)GPR_U32(ctx, 8));
label_14f964:
    // 0x14f964: 0xa1c00002  sb          $zero, 0x2($t6)
    ctx->pc = 0x14f964u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 2), (uint8_t)GPR_U32(ctx, 0));
label_14f968:
    // 0x14f968: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x14f968u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
label_14f96c:
    // 0x14f96c: 0xa5c00000  sh          $zero, 0x0($t6)
    ctx->pc = 0x14f96cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 0));
label_14f970:
    // 0x14f970: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x14f970u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
label_14f974:
    // 0x14f974: 0xadcb000c  sw          $t3, 0xC($t6)
    ctx->pc = 0x14f974u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 11));
label_14f978:
    // 0x14f978: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x14f978u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14f97c:
    // 0x14f97c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x14f97cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_14f980:
    // 0x14f980: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x14f980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
label_14f984:
    // 0x14f984: 0x0  nop
    ctx->pc = 0x14f984u;
    // NOP
label_14f988:
    // 0x14f988: 0x1af582b  sltu        $t3, $t5, $t7
    ctx->pc = 0x14f988u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
label_14f98c:
    // 0x14f98c: 0x1560ffc5  bnez        $t3, . + 4 + (-0x3B << 2)
label_14f990:
    if (ctx->pc == 0x14F990u) {
        ctx->pc = 0x14F994u;
        goto label_14f994;
    }
    ctx->pc = 0x14F98Cu;
    {
        const bool branch_taken_0x14f98c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f98c) {
            ctx->pc = 0x14F8A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f8a4;
        }
    }
    ctx->pc = 0x14F994u;
label_14f994:
    // 0x14f994: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14f994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_14f998:
    // 0x14f998: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14f998u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14f99c:
    // 0x14f99c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14f99cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14f9a0:
    // 0x14f9a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14f9a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14f9a4:
    // 0x14f9a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14f9a8:
    // 0x14f9a8: 0x3e00008  jr          $ra
label_14f9ac:
    if (ctx->pc == 0x14F9ACu) {
        ctx->pc = 0x14F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9A8u;
        // 0x14f9ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F9B0u;
        goto label_fallthrough_0x14f9a8;
    }
    ctx->pc = 0x14F9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9A8u;
        // 0x14f9ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14f9a8:
    ctx->pc = 0x14F9B0u;
}
