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

// Function: FUN_0019c730
// Address: 0x19c730 - 0x19cc38
void FUN_0019c730_0x19c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019c730_0x19c730");
#endif

    switch (ctx->pc) {
        case 0x19c730u: goto label_19c730;
        case 0x19c734u: goto label_19c734;
        case 0x19c738u: goto label_19c738;
        case 0x19c73cu: goto label_19c73c;
        case 0x19c740u: goto label_19c740;
        case 0x19c744u: goto label_19c744;
        case 0x19c748u: goto label_19c748;
        case 0x19c74cu: goto label_19c74c;
        case 0x19c750u: goto label_19c750;
        case 0x19c754u: goto label_19c754;
        case 0x19c758u: goto label_19c758;
        case 0x19c75cu: goto label_19c75c;
        case 0x19c760u: goto label_19c760;
        case 0x19c764u: goto label_19c764;
        case 0x19c768u: goto label_19c768;
        case 0x19c76cu: goto label_19c76c;
        case 0x19c770u: goto label_19c770;
        case 0x19c774u: goto label_19c774;
        case 0x19c778u: goto label_19c778;
        case 0x19c77cu: goto label_19c77c;
        case 0x19c780u: goto label_19c780;
        case 0x19c784u: goto label_19c784;
        case 0x19c788u: goto label_19c788;
        case 0x19c78cu: goto label_19c78c;
        case 0x19c790u: goto label_19c790;
        case 0x19c794u: goto label_19c794;
        case 0x19c798u: goto label_19c798;
        case 0x19c79cu: goto label_19c79c;
        case 0x19c7a0u: goto label_19c7a0;
        case 0x19c7a4u: goto label_19c7a4;
        case 0x19c7a8u: goto label_19c7a8;
        case 0x19c7acu: goto label_19c7ac;
        case 0x19c7b0u: goto label_19c7b0;
        case 0x19c7b4u: goto label_19c7b4;
        case 0x19c7b8u: goto label_19c7b8;
        case 0x19c7bcu: goto label_19c7bc;
        case 0x19c7c0u: goto label_19c7c0;
        case 0x19c7c4u: goto label_19c7c4;
        case 0x19c7c8u: goto label_19c7c8;
        case 0x19c7ccu: goto label_19c7cc;
        case 0x19c7d0u: goto label_19c7d0;
        case 0x19c7d4u: goto label_19c7d4;
        case 0x19c7d8u: goto label_19c7d8;
        case 0x19c7dcu: goto label_19c7dc;
        case 0x19c7e0u: goto label_19c7e0;
        case 0x19c7e4u: goto label_19c7e4;
        case 0x19c7e8u: goto label_19c7e8;
        case 0x19c7ecu: goto label_19c7ec;
        case 0x19c7f0u: goto label_19c7f0;
        case 0x19c7f4u: goto label_19c7f4;
        case 0x19c7f8u: goto label_19c7f8;
        case 0x19c7fcu: goto label_19c7fc;
        case 0x19c800u: goto label_19c800;
        case 0x19c804u: goto label_19c804;
        case 0x19c808u: goto label_19c808;
        case 0x19c80cu: goto label_19c80c;
        case 0x19c810u: goto label_19c810;
        case 0x19c814u: goto label_19c814;
        case 0x19c818u: goto label_19c818;
        case 0x19c81cu: goto label_19c81c;
        case 0x19c820u: goto label_19c820;
        case 0x19c824u: goto label_19c824;
        case 0x19c828u: goto label_19c828;
        case 0x19c82cu: goto label_19c82c;
        case 0x19c830u: goto label_19c830;
        case 0x19c834u: goto label_19c834;
        case 0x19c838u: goto label_19c838;
        case 0x19c83cu: goto label_19c83c;
        case 0x19c840u: goto label_19c840;
        case 0x19c844u: goto label_19c844;
        case 0x19c848u: goto label_19c848;
        case 0x19c84cu: goto label_19c84c;
        case 0x19c850u: goto label_19c850;
        case 0x19c854u: goto label_19c854;
        case 0x19c858u: goto label_19c858;
        case 0x19c85cu: goto label_19c85c;
        case 0x19c860u: goto label_19c860;
        case 0x19c864u: goto label_19c864;
        case 0x19c868u: goto label_19c868;
        case 0x19c86cu: goto label_19c86c;
        case 0x19c870u: goto label_19c870;
        case 0x19c874u: goto label_19c874;
        case 0x19c878u: goto label_19c878;
        case 0x19c87cu: goto label_19c87c;
        case 0x19c880u: goto label_19c880;
        case 0x19c884u: goto label_19c884;
        case 0x19c888u: goto label_19c888;
        case 0x19c88cu: goto label_19c88c;
        case 0x19c890u: goto label_19c890;
        case 0x19c894u: goto label_19c894;
        case 0x19c898u: goto label_19c898;
        case 0x19c89cu: goto label_19c89c;
        case 0x19c8a0u: goto label_19c8a0;
        case 0x19c8a4u: goto label_19c8a4;
        case 0x19c8a8u: goto label_19c8a8;
        case 0x19c8acu: goto label_19c8ac;
        case 0x19c8b0u: goto label_19c8b0;
        case 0x19c8b4u: goto label_19c8b4;
        case 0x19c8b8u: goto label_19c8b8;
        case 0x19c8bcu: goto label_19c8bc;
        case 0x19c8c0u: goto label_19c8c0;
        case 0x19c8c4u: goto label_19c8c4;
        case 0x19c8c8u: goto label_19c8c8;
        case 0x19c8ccu: goto label_19c8cc;
        case 0x19c8d0u: goto label_19c8d0;
        case 0x19c8d4u: goto label_19c8d4;
        case 0x19c8d8u: goto label_19c8d8;
        case 0x19c8dcu: goto label_19c8dc;
        case 0x19c8e0u: goto label_19c8e0;
        case 0x19c8e4u: goto label_19c8e4;
        case 0x19c8e8u: goto label_19c8e8;
        case 0x19c8ecu: goto label_19c8ec;
        case 0x19c8f0u: goto label_19c8f0;
        case 0x19c8f4u: goto label_19c8f4;
        case 0x19c8f8u: goto label_19c8f8;
        case 0x19c8fcu: goto label_19c8fc;
        case 0x19c900u: goto label_19c900;
        case 0x19c904u: goto label_19c904;
        case 0x19c908u: goto label_19c908;
        case 0x19c90cu: goto label_19c90c;
        case 0x19c910u: goto label_19c910;
        case 0x19c914u: goto label_19c914;
        case 0x19c918u: goto label_19c918;
        case 0x19c91cu: goto label_19c91c;
        case 0x19c920u: goto label_19c920;
        case 0x19c924u: goto label_19c924;
        case 0x19c928u: goto label_19c928;
        case 0x19c92cu: goto label_19c92c;
        case 0x19c930u: goto label_19c930;
        case 0x19c934u: goto label_19c934;
        case 0x19c938u: goto label_19c938;
        case 0x19c93cu: goto label_19c93c;
        case 0x19c940u: goto label_19c940;
        case 0x19c944u: goto label_19c944;
        case 0x19c948u: goto label_19c948;
        case 0x19c94cu: goto label_19c94c;
        case 0x19c950u: goto label_19c950;
        case 0x19c954u: goto label_19c954;
        case 0x19c958u: goto label_19c958;
        case 0x19c95cu: goto label_19c95c;
        case 0x19c960u: goto label_19c960;
        case 0x19c964u: goto label_19c964;
        case 0x19c968u: goto label_19c968;
        case 0x19c96cu: goto label_19c96c;
        case 0x19c970u: goto label_19c970;
        case 0x19c974u: goto label_19c974;
        case 0x19c978u: goto label_19c978;
        case 0x19c97cu: goto label_19c97c;
        case 0x19c980u: goto label_19c980;
        case 0x19c984u: goto label_19c984;
        case 0x19c988u: goto label_19c988;
        case 0x19c98cu: goto label_19c98c;
        case 0x19c990u: goto label_19c990;
        case 0x19c994u: goto label_19c994;
        case 0x19c998u: goto label_19c998;
        case 0x19c99cu: goto label_19c99c;
        case 0x19c9a0u: goto label_19c9a0;
        case 0x19c9a4u: goto label_19c9a4;
        case 0x19c9a8u: goto label_19c9a8;
        case 0x19c9acu: goto label_19c9ac;
        case 0x19c9b0u: goto label_19c9b0;
        case 0x19c9b4u: goto label_19c9b4;
        case 0x19c9b8u: goto label_19c9b8;
        case 0x19c9bcu: goto label_19c9bc;
        case 0x19c9c0u: goto label_19c9c0;
        case 0x19c9c4u: goto label_19c9c4;
        case 0x19c9c8u: goto label_19c9c8;
        case 0x19c9ccu: goto label_19c9cc;
        case 0x19c9d0u: goto label_19c9d0;
        case 0x19c9d4u: goto label_19c9d4;
        case 0x19c9d8u: goto label_19c9d8;
        case 0x19c9dcu: goto label_19c9dc;
        case 0x19c9e0u: goto label_19c9e0;
        case 0x19c9e4u: goto label_19c9e4;
        case 0x19c9e8u: goto label_19c9e8;
        case 0x19c9ecu: goto label_19c9ec;
        case 0x19c9f0u: goto label_19c9f0;
        case 0x19c9f4u: goto label_19c9f4;
        case 0x19c9f8u: goto label_19c9f8;
        case 0x19c9fcu: goto label_19c9fc;
        case 0x19ca00u: goto label_19ca00;
        case 0x19ca04u: goto label_19ca04;
        case 0x19ca08u: goto label_19ca08;
        case 0x19ca0cu: goto label_19ca0c;
        case 0x19ca10u: goto label_19ca10;
        case 0x19ca14u: goto label_19ca14;
        case 0x19ca18u: goto label_19ca18;
        case 0x19ca1cu: goto label_19ca1c;
        case 0x19ca20u: goto label_19ca20;
        case 0x19ca24u: goto label_19ca24;
        case 0x19ca28u: goto label_19ca28;
        case 0x19ca2cu: goto label_19ca2c;
        case 0x19ca30u: goto label_19ca30;
        case 0x19ca34u: goto label_19ca34;
        case 0x19ca38u: goto label_19ca38;
        case 0x19ca3cu: goto label_19ca3c;
        case 0x19ca40u: goto label_19ca40;
        case 0x19ca44u: goto label_19ca44;
        case 0x19ca48u: goto label_19ca48;
        case 0x19ca4cu: goto label_19ca4c;
        case 0x19ca50u: goto label_19ca50;
        case 0x19ca54u: goto label_19ca54;
        case 0x19ca58u: goto label_19ca58;
        case 0x19ca5cu: goto label_19ca5c;
        case 0x19ca60u: goto label_19ca60;
        case 0x19ca64u: goto label_19ca64;
        case 0x19ca68u: goto label_19ca68;
        case 0x19ca6cu: goto label_19ca6c;
        case 0x19ca70u: goto label_19ca70;
        case 0x19ca74u: goto label_19ca74;
        case 0x19ca78u: goto label_19ca78;
        case 0x19ca7cu: goto label_19ca7c;
        case 0x19ca80u: goto label_19ca80;
        case 0x19ca84u: goto label_19ca84;
        case 0x19ca88u: goto label_19ca88;
        case 0x19ca8cu: goto label_19ca8c;
        case 0x19ca90u: goto label_19ca90;
        case 0x19ca94u: goto label_19ca94;
        case 0x19ca98u: goto label_19ca98;
        case 0x19ca9cu: goto label_19ca9c;
        case 0x19caa0u: goto label_19caa0;
        case 0x19caa4u: goto label_19caa4;
        case 0x19caa8u: goto label_19caa8;
        case 0x19caacu: goto label_19caac;
        case 0x19cab0u: goto label_19cab0;
        case 0x19cab4u: goto label_19cab4;
        case 0x19cab8u: goto label_19cab8;
        case 0x19cabcu: goto label_19cabc;
        case 0x19cac0u: goto label_19cac0;
        case 0x19cac4u: goto label_19cac4;
        case 0x19cac8u: goto label_19cac8;
        case 0x19caccu: goto label_19cacc;
        case 0x19cad0u: goto label_19cad0;
        case 0x19cad4u: goto label_19cad4;
        case 0x19cad8u: goto label_19cad8;
        case 0x19cadcu: goto label_19cadc;
        case 0x19cae0u: goto label_19cae0;
        case 0x19cae4u: goto label_19cae4;
        case 0x19cae8u: goto label_19cae8;
        case 0x19caecu: goto label_19caec;
        case 0x19caf0u: goto label_19caf0;
        case 0x19caf4u: goto label_19caf4;
        case 0x19caf8u: goto label_19caf8;
        case 0x19cafcu: goto label_19cafc;
        case 0x19cb00u: goto label_19cb00;
        case 0x19cb04u: goto label_19cb04;
        case 0x19cb08u: goto label_19cb08;
        case 0x19cb0cu: goto label_19cb0c;
        case 0x19cb10u: goto label_19cb10;
        case 0x19cb14u: goto label_19cb14;
        case 0x19cb18u: goto label_19cb18;
        case 0x19cb1cu: goto label_19cb1c;
        case 0x19cb20u: goto label_19cb20;
        case 0x19cb24u: goto label_19cb24;
        case 0x19cb28u: goto label_19cb28;
        case 0x19cb2cu: goto label_19cb2c;
        case 0x19cb30u: goto label_19cb30;
        case 0x19cb34u: goto label_19cb34;
        case 0x19cb38u: goto label_19cb38;
        case 0x19cb3cu: goto label_19cb3c;
        case 0x19cb40u: goto label_19cb40;
        case 0x19cb44u: goto label_19cb44;
        case 0x19cb48u: goto label_19cb48;
        case 0x19cb4cu: goto label_19cb4c;
        case 0x19cb50u: goto label_19cb50;
        case 0x19cb54u: goto label_19cb54;
        case 0x19cb58u: goto label_19cb58;
        case 0x19cb5cu: goto label_19cb5c;
        case 0x19cb60u: goto label_19cb60;
        case 0x19cb64u: goto label_19cb64;
        case 0x19cb68u: goto label_19cb68;
        case 0x19cb6cu: goto label_19cb6c;
        case 0x19cb70u: goto label_19cb70;
        case 0x19cb74u: goto label_19cb74;
        case 0x19cb78u: goto label_19cb78;
        case 0x19cb7cu: goto label_19cb7c;
        case 0x19cb80u: goto label_19cb80;
        case 0x19cb84u: goto label_19cb84;
        case 0x19cb88u: goto label_19cb88;
        case 0x19cb8cu: goto label_19cb8c;
        case 0x19cb90u: goto label_19cb90;
        case 0x19cb94u: goto label_19cb94;
        case 0x19cb98u: goto label_19cb98;
        case 0x19cb9cu: goto label_19cb9c;
        case 0x19cba0u: goto label_19cba0;
        case 0x19cba4u: goto label_19cba4;
        case 0x19cba8u: goto label_19cba8;
        case 0x19cbacu: goto label_19cbac;
        case 0x19cbb0u: goto label_19cbb0;
        case 0x19cbb4u: goto label_19cbb4;
        case 0x19cbb8u: goto label_19cbb8;
        case 0x19cbbcu: goto label_19cbbc;
        case 0x19cbc0u: goto label_19cbc0;
        case 0x19cbc4u: goto label_19cbc4;
        case 0x19cbc8u: goto label_19cbc8;
        case 0x19cbccu: goto label_19cbcc;
        case 0x19cbd0u: goto label_19cbd0;
        case 0x19cbd4u: goto label_19cbd4;
        case 0x19cbd8u: goto label_19cbd8;
        case 0x19cbdcu: goto label_19cbdc;
        case 0x19cbe0u: goto label_19cbe0;
        case 0x19cbe4u: goto label_19cbe4;
        case 0x19cbe8u: goto label_19cbe8;
        case 0x19cbecu: goto label_19cbec;
        case 0x19cbf0u: goto label_19cbf0;
        case 0x19cbf4u: goto label_19cbf4;
        case 0x19cbf8u: goto label_19cbf8;
        case 0x19cbfcu: goto label_19cbfc;
        case 0x19cc00u: goto label_19cc00;
        case 0x19cc04u: goto label_19cc04;
        case 0x19cc08u: goto label_19cc08;
        case 0x19cc0cu: goto label_19cc0c;
        case 0x19cc10u: goto label_19cc10;
        case 0x19cc14u: goto label_19cc14;
        case 0x19cc18u: goto label_19cc18;
        case 0x19cc1cu: goto label_19cc1c;
        case 0x19cc20u: goto label_19cc20;
        case 0x19cc24u: goto label_19cc24;
        case 0x19cc28u: goto label_19cc28;
        case 0x19cc2cu: goto label_19cc2c;
        case 0x19cc30u: goto label_19cc30;
        case 0x19cc34u: goto label_19cc34;
        default: break;
    }

    ctx->pc = 0x19c730u;

label_19c730:
    // 0x19c730: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19c730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19c734:
    // 0x19c734: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19c734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_19c738:
    // 0x19c738: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19c738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_19c73c:
    // 0x19c73c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19c73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_19c740:
    // 0x19c740: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19c740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c744:
    // 0x19c744: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_19c748:
    // 0x19c748: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19c748u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19c74c:
    // 0x19c74c: 0x8c850670  lw          $a1, 0x670($a0)
    ctx->pc = 0x19c74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
label_19c750:
    // 0x19c750: 0x90830938  lbu         $v1, 0x938($a0)
    ctx->pc = 0x19c750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2360)));
label_19c754:
    // 0x19c754: 0x8f88838c  lw          $t0, -0x7C74($gp)
    ctx->pc = 0x19c754u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
label_19c758:
    // 0x19c758: 0x8f868318  lw          $a2, -0x7CE8($gp)
    ctx->pc = 0x19c758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
label_19c75c:
    // 0x19c75c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x19c75cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_19c760:
    // 0x19c760: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19c760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19c764:
    // 0x19c764: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x19c764u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_19c768:
    // 0x19c768: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x19c768u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_19c76c:
    // 0x19c76c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x19c76cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_19c770:
    // 0x19c770: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x19c770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_19c774:
    // 0x19c774: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x19c774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
label_19c778:
    // 0x19c778: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x19c778u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19c77c:
    // 0x19c77c: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
label_19c780:
    if (ctx->pc == 0x19C780u) {
        ctx->pc = 0x19C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C77Cu;
        // 0x19c780: 0xc78021  addu        $s0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C784u;
        goto label_19c784;
    }
    ctx->pc = 0x19C77Cu;
    {
        const bool branch_taken_0x19c77c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C77Cu;
        // 0x19c780: 0xc78021  addu        $s0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c77c) {
            ctx->pc = 0x19C8ACu;
            goto label_19c8ac;
        }
    }
    ctx->pc = 0x19C784u;
label_19c784:
    // 0x19c784: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x19c784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19c788:
    // 0x19c788: 0x8f390098  lw          $t9, 0x98($t9)
    ctx->pc = 0x19c788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 152)));
label_19c78c:
    // 0x19c78c: 0x320f809  jalr        $t9
label_19c790:
    if (ctx->pc == 0x19C790u) {
        ctx->pc = 0x19C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C78Cu;
        // 0x19c790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C794u;
        goto label_19c794;
    }
    ctx->pc = 0x19C78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19C794u);
        ctx->pc = 0x19C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C78Cu;
        // 0x19c790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C78Cu, 0x19C794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C794u;
label_19c794:
    // 0x19c794: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x19c794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19c798:
    // 0x19c798: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x19c798u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_19c79c:
    // 0x19c79c: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x19c79cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_19c7a0:
    // 0x19c7a0: 0x320f809  jalr        $t9
label_19c7a4:
    if (ctx->pc == 0x19C7A4u) {
        ctx->pc = 0x19C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7A0u;
        // 0x19c7a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C7A8u;
        goto label_19c7a8;
    }
    ctx->pc = 0x19C7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19C7A8u);
        ctx->pc = 0x19C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7A0u;
        // 0x19c7a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C7A0u, 0x19C7A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C7A8u;
label_19c7a8:
    // 0x19c7a8: 0x0  nop
    ctx->pc = 0x19c7a8u;
    // NOP
label_19c7ac:
    // 0x19c7ac: 0x0  nop
    ctx->pc = 0x19c7acu;
    // NOP
label_19c7b0:
    // 0x19c7b0: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x19c7b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_19c7b4:
    // 0x19c7b4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x19c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_19c7b8:
    // 0x19c7b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19c7b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c7bc:
    // 0x19c7bc: 0x0  nop
    ctx->pc = 0x19c7bcu;
    // NOP
label_19c7c0:
    // 0x19c7c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19c7c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19c7c4:
    // 0x19c7c4: 0x0  nop
    ctx->pc = 0x19c7c4u;
    // NOP
label_19c7c8:
    // 0x19c7c8: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_19c7cc:
    if (ctx->pc == 0x19C7CCu) {
        ctx->pc = 0x19C7D0u;
        goto label_19c7d0;
    }
    ctx->pc = 0x19C7C8u;
    {
        const bool branch_taken_0x19c7c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19c7c8) {
            ctx->pc = 0x19C8ACu;
            goto label_19c8ac;
        }
    }
    ctx->pc = 0x19C7D0u;
label_19c7d0:
    // 0x19c7d0: 0x9383848c  lbu         $v1, -0x7B74($gp)
    ctx->pc = 0x19c7d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935692)));
label_19c7d4:
    // 0x19c7d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_19c7d8:
    if (ctx->pc == 0x19C7D8u) {
        ctx->pc = 0x19C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7D4u;
        // 0x19c7d8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C7DCu;
        goto label_19c7dc;
    }
    ctx->pc = 0x19C7D4u;
    {
        const bool branch_taken_0x19c7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7D4u;
        // 0x19c7d8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c7d4) {
            ctx->pc = 0x19C7E8u;
            goto label_19c7e8;
        }
    }
    ctx->pc = 0x19C7DCu;
label_19c7dc:
    // 0x19c7dc: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x19c7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
label_19c7e0:
    // 0x19c7e0: 0x90240e55  lbu         $a0, 0xE55($at)
    ctx->pc = 0x19c7e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 3669)));
label_19c7e4:
    // 0x19c7e4: 0x0  nop
    ctx->pc = 0x19c7e4u;
    // NOP
label_19c7e8:
    // 0x19c7e8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_19c7ec:
    if (ctx->pc == 0x19C7ECu) {
        ctx->pc = 0x19C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7E8u;
        // 0x19c7ec: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C7F0u;
        goto label_19c7f0;
    }
    ctx->pc = 0x19C7E8u;
    {
        const bool branch_taken_0x19c7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7E8u;
        // 0x19c7ec: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c7e8) {
            ctx->pc = 0x19C7FCu;
            goto label_19c7fc;
        }
    }
    ctx->pc = 0x19C7F0u;
label_19c7f0:
    // 0x19c7f0: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x19c7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
label_19c7f4:
    // 0x19c7f4: 0x90250e5f  lbu         $a1, 0xE5F($at)
    ctx->pc = 0x19c7f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 3679)));
label_19c7f8:
    // 0x19c7f8: 0x0  nop
    ctx->pc = 0x19c7f8u;
    // NOP
label_19c7fc:
    // 0x19c7fc: 0x93868488  lbu         $a2, -0x7B78($gp)
    ctx->pc = 0x19c7fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
label_19c800:
    // 0x19c800: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_19c804:
    if (ctx->pc == 0x19C804u) {
        ctx->pc = 0x19C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C800u;
        // 0x19c804: 0x3c03002b  lui         $v1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C808u;
        goto label_19c808;
    }
    ctx->pc = 0x19C800u;
    {
        const bool branch_taken_0x19c800 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C800u;
        // 0x19c804: 0x3c03002b  lui         $v1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c800) {
            ctx->pc = 0x19C818u;
            goto label_19c818;
        }
    }
    ctx->pc = 0x19C808u;
label_19c808:
    // 0x19c808: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x19c808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
label_19c80c:
    // 0x19c80c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19c810:
    // 0x19c810: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x19c810u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_19c814:
    // 0x19c814: 0x0  nop
    ctx->pc = 0x19c814u;
    // NOP
label_19c818:
    // 0x19c818: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_19c81c:
    if (ctx->pc == 0x19C81Cu) {
        ctx->pc = 0x19C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C818u;
        // 0x19c81c: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C820u;
        goto label_19c820;
    }
    ctx->pc = 0x19C818u;
    {
        const bool branch_taken_0x19c818 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C818u;
        // 0x19c81c: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c818) {
            ctx->pc = 0x19C828u;
            goto label_19c828;
        }
    }
    ctx->pc = 0x19C820u;
label_19c820:
    // 0x19c820: 0x10000009  b           . + 4 + (0x9 << 2)
label_19c824:
    if (ctx->pc == 0x19C824u) {
        ctx->pc = 0x19C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C820u;
        // 0x19c824: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C828u;
        goto label_19c828;
    }
    ctx->pc = 0x19C820u;
    {
        const bool branch_taken_0x19c820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C820u;
        // 0x19c824: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c820) {
            ctx->pc = 0x19C848u;
            goto label_19c848;
        }
    }
    ctx->pc = 0x19C828u;
label_19c828:
    // 0x19c828: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19c828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_19c82c:
    // 0x19c82c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c830:
    // 0x19c830: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x19c830u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_19c834:
    // 0x19c834: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_19c838:
    if (ctx->pc == 0x19C838u) {
        ctx->pc = 0x19C83Cu;
        goto label_19c83c;
    }
    ctx->pc = 0x19C834u;
    {
        const bool branch_taken_0x19c834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x19c834) {
            ctx->pc = 0x19C844u;
            goto label_19c844;
        }
    }
    ctx->pc = 0x19C83Cu;
label_19c83c:
    // 0x19c83c: 0x10000002  b           . + 4 + (0x2 << 2)
label_19c840:
    if (ctx->pc == 0x19C840u) {
        ctx->pc = 0x19C844u;
        goto label_19c844;
    }
    ctx->pc = 0x19C83Cu;
    {
        const bool branch_taken_0x19c83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c83c) {
            ctx->pc = 0x19C848u;
            goto label_19c848;
        }
    }
    ctx->pc = 0x19C844u;
label_19c844:
    // 0x19c844: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19c844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c848:
    // 0x19c848: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_19c84c:
    if (ctx->pc == 0x19C84Cu) {
        ctx->pc = 0x19C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C848u;
        // 0x19c84c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C850u;
        goto label_19c850;
    }
    ctx->pc = 0x19C848u;
    {
        const bool branch_taken_0x19c848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C848u;
        // 0x19c84c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c848) {
            ctx->pc = 0x19C858u;
            goto label_19c858;
        }
    }
    ctx->pc = 0x19C850u;
label_19c850:
    // 0x19c850: 0x10000016  b           . + 4 + (0x16 << 2)
label_19c854:
    if (ctx->pc == 0x19C854u) {
        ctx->pc = 0x19C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C850u;
        // 0x19c854: 0xae43068c  sw          $v1, 0x68C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1676), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C858u;
        goto label_19c858;
    }
    ctx->pc = 0x19C850u;
    {
        const bool branch_taken_0x19c850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C850u;
        // 0x19c854: 0xae43068c  sw          $v1, 0x68C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1676), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c850) {
            ctx->pc = 0x19C8ACu;
            goto label_19c8ac;
        }
    }
    ctx->pc = 0x19C858u;
label_19c858:
    // 0x19c858: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_19c85c:
    if (ctx->pc == 0x19C85Cu) {
        ctx->pc = 0x19C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C858u;
        // 0x19c85c: 0x3c03002b  lui         $v1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C860u;
        goto label_19c860;
    }
    ctx->pc = 0x19C858u;
    {
        const bool branch_taken_0x19c858 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C858u;
        // 0x19c85c: 0x3c03002b  lui         $v1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c858) {
            ctx->pc = 0x19C870u;
            goto label_19c870;
        }
    }
    ctx->pc = 0x19C860u;
label_19c860:
    // 0x19c860: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x19c860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
label_19c864:
    // 0x19c864: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19c864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_19c868:
    // 0x19c868: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x19c868u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_19c86c:
    // 0x19c86c: 0x0  nop
    ctx->pc = 0x19c86cu;
    // NOP
label_19c870:
    // 0x19c870: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_19c874:
    if (ctx->pc == 0x19C874u) {
        ctx->pc = 0x19C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C870u;
        // 0x19c874: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C878u;
        goto label_19c878;
    }
    ctx->pc = 0x19C870u;
    {
        const bool branch_taken_0x19c870 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x19C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C870u;
        // 0x19c874: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c870) {
            ctx->pc = 0x19C880u;
            goto label_19c880;
        }
    }
    ctx->pc = 0x19C878u;
label_19c878:
    // 0x19c878: 0x10000009  b           . + 4 + (0x9 << 2)
label_19c87c:
    if (ctx->pc == 0x19C87Cu) {
        ctx->pc = 0x19C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C878u;
        // 0x19c87c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C880u;
        goto label_19c880;
    }
    ctx->pc = 0x19C878u;
    {
        const bool branch_taken_0x19c878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C878u;
        // 0x19c87c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c878) {
            ctx->pc = 0x19C8A0u;
            goto label_19c8a0;
        }
    }
    ctx->pc = 0x19C880u;
label_19c880:
    // 0x19c880: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19c880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c884:
    // 0x19c884: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19c884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_19c888:
    // 0x19c888: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x19c888u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_19c88c:
    // 0x19c88c: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_19c890:
    if (ctx->pc == 0x19C890u) {
        ctx->pc = 0x19C894u;
        goto label_19c894;
    }
    ctx->pc = 0x19C88Cu;
    {
        const bool branch_taken_0x19c88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x19c88c) {
            ctx->pc = 0x19C89Cu;
            goto label_19c89c;
        }
    }
    ctx->pc = 0x19C894u;
label_19c894:
    // 0x19c894: 0x10000002  b           . + 4 + (0x2 << 2)
label_19c898:
    if (ctx->pc == 0x19C898u) {
        ctx->pc = 0x19C89Cu;
        goto label_19c89c;
    }
    ctx->pc = 0x19C894u;
    {
        const bool branch_taken_0x19c894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c894) {
            ctx->pc = 0x19C8A0u;
            goto label_19c8a0;
        }
    }
    ctx->pc = 0x19C89Cu;
label_19c89c:
    // 0x19c89c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19c89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c8a0:
    // 0x19c8a0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_19c8a4:
    if (ctx->pc == 0x19C8A4u) {
        ctx->pc = 0x19C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8A0u;
        // 0x19c8a4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C8A8u;
        goto label_19c8a8;
    }
    ctx->pc = 0x19C8A0u;
    {
        const bool branch_taken_0x19c8a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8A0u;
        // 0x19c8a4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8a0) {
            ctx->pc = 0x19C8ACu;
            goto label_19c8ac;
        }
    }
    ctx->pc = 0x19C8A8u;
label_19c8a8:
    // 0x19c8a8: 0xae43068c  sw          $v1, 0x68C($s2)
    ctx->pc = 0x19c8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1676), GPR_U32(ctx, 3));
label_19c8ac:
    // 0x19c8ac: 0x8e440674  lw          $a0, 0x674($s2)
    ctx->pc = 0x19c8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1652)));
label_19c8b0:
    // 0x19c8b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19c8b4:
    // 0x19c8b4: 0x108300a2  beq         $a0, $v1, . + 4 + (0xA2 << 2)
label_19c8b8:
    if (ctx->pc == 0x19C8B8u) {
        ctx->pc = 0x19C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8B4u;
        // 0x19c8b8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C8BCu;
        goto label_19c8bc;
    }
    ctx->pc = 0x19C8B4u;
    {
        const bool branch_taken_0x19c8b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8B4u;
        // 0x19c8b8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8b4) {
            ctx->pc = 0x19CB40u;
            goto label_19cb40;
        }
    }
    ctx->pc = 0x19C8BCu;
label_19c8bc:
    // 0x19c8bc: 0x10860096  beq         $a0, $a2, . + 4 + (0x96 << 2)
label_19c8c0:
    if (ctx->pc == 0x19C8C0u) {
        ctx->pc = 0x19C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8BCu;
        // 0x19c8c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C8C4u;
        goto label_19c8c4;
    }
    ctx->pc = 0x19C8BCu;
    {
        const bool branch_taken_0x19c8bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x19C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8BCu;
        // 0x19c8c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8bc) {
            ctx->pc = 0x19CB18u;
            goto label_19cb18;
        }
    }
    ctx->pc = 0x19C8C4u;
label_19c8c4:
    // 0x19c8c4: 0x1085007b  beq         $a0, $a1, . + 4 + (0x7B << 2)
label_19c8c8:
    if (ctx->pc == 0x19C8C8u) {
        ctx->pc = 0x19C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8C4u;
        // 0x19c8c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C8CCu;
        goto label_19c8cc;
    }
    ctx->pc = 0x19C8C4u;
    {
        const bool branch_taken_0x19c8c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x19C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8C4u;
        // 0x19c8c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8c4) {
            ctx->pc = 0x19CAB4u;
            goto label_19cab4;
        }
    }
    ctx->pc = 0x19C8CCu;
label_19c8cc:
    // 0x19c8cc: 0x10860036  beq         $a0, $a2, . + 4 + (0x36 << 2)
label_19c8d0:
    if (ctx->pc == 0x19C8D0u) {
        ctx->pc = 0x19C8D4u;
        goto label_19c8d4;
    }
    ctx->pc = 0x19C8CCu;
    {
        const bool branch_taken_0x19c8cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x19c8cc) {
            ctx->pc = 0x19C9A8u;
            goto label_19c9a8;
        }
    }
    ctx->pc = 0x19C8D4u;
label_19c8d4:
    // 0x19c8d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_19c8d8:
    if (ctx->pc == 0x19C8D8u) {
        ctx->pc = 0x19C8DCu;
        goto label_19c8dc;
    }
    ctx->pc = 0x19C8D4u;
    {
        const bool branch_taken_0x19c8d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c8d4) {
            ctx->pc = 0x19C8E4u;
            goto label_19c8e4;
        }
    }
    ctx->pc = 0x19C8DCu;
label_19c8dc:
    // 0x19c8dc: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_19c8e0:
    if (ctx->pc == 0x19C8E0u) {
        ctx->pc = 0x19C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8DCu;
        // 0x19c8e0: 0x8e430690  lw          $v1, 0x690($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C8E4u;
        goto label_19c8e4;
    }
    ctx->pc = 0x19C8DCu;
    {
        const bool branch_taken_0x19c8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8DCu;
        // 0x19c8e0: 0x8e430690  lw          $v1, 0x690($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8dc) {
            ctx->pc = 0x19CB80u;
            goto label_19cb80;
        }
    }
    ctx->pc = 0x19C8E4u;
label_19c8e4:
    // 0x19c8e4: 0xae40068c  sw          $zero, 0x68C($s2)
    ctx->pc = 0x19c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1676), GPR_U32(ctx, 0));
label_19c8e8:
    // 0x19c8e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19c8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19c8ec:
    // 0x19c8ec: 0xae460688  sw          $a2, 0x688($s2)
    ctx->pc = 0x19c8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1672), GPR_U32(ctx, 6));
label_19c8f0:
    // 0x19c8f0: 0xae400690  sw          $zero, 0x690($s2)
    ctx->pc = 0x19c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1680), GPR_U32(ctx, 0));
label_19c8f4:
    // 0x19c8f4: 0xae400694  sw          $zero, 0x694($s2)
    ctx->pc = 0x19c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1684), GPR_U32(ctx, 0));
label_19c8f8:
    // 0x19c8f8: 0xae450698  sw          $a1, 0x698($s2)
    ctx->pc = 0x19c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1688), GPR_U32(ctx, 5));
label_19c8fc:
    // 0x19c8fc: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19c8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19c900:
    // 0x19c900: 0xc064c20  jal         func_193080
label_19c904:
    if (ctx->pc == 0x19C904u) {
        ctx->pc = 0x19C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C900u;
        // 0x19c904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C908u;
        goto label_19c908;
    }
    ctx->pc = 0x19C900u;
    SET_GPR_U32(ctx, 31, 0x19C908u);
    ctx->pc = 0x19C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C900u;
    // 0x19c904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x19C900u, 0x19C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C908u;
label_19c908:
    // 0x19c908: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19c908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19c90c:
    // 0x19c90c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19c90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19c910:
    // 0x19c910: 0xc064c4c  jal         func_193130
label_19c914:
    if (ctx->pc == 0x19C914u) {
        ctx->pc = 0x19C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C910u;
        // 0x19c914: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C918u;
        goto label_19c918;
    }
    ctx->pc = 0x19C910u;
    SET_GPR_U32(ctx, 31, 0x19C918u);
    ctx->pc = 0x19C914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C910u;
    // 0x19c914: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x19C910u, 0x19C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C918u;
label_19c918:
    // 0x19c918: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x19c918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19c91c:
    // 0x19c91c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19c920:
    // 0x19c920: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19c924:
    // 0x19c924: 0x8f3900ac  lw          $t9, 0xAC($t9)
    ctx->pc = 0x19c924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 172)));
label_19c928:
    // 0x19c928: 0x320f809  jalr        $t9
label_19c92c:
    if (ctx->pc == 0x19C92Cu) {
        ctx->pc = 0x19C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C928u;
        // 0x19c92c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C930u;
        goto label_19c930;
    }
    ctx->pc = 0x19C928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19C930u);
        ctx->pc = 0x19C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C928u;
        // 0x19c92c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C928u, 0x19C930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C930u;
label_19c930:
    // 0x19c930: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x19c930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19c934:
    // 0x19c934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c938:
    // 0x19c938: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x19c938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_19c93c:
    // 0x19c93c: 0x320f809  jalr        $t9
label_19c940:
    if (ctx->pc == 0x19C940u) {
        ctx->pc = 0x19C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C93Cu;
        // 0x19c940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C944u;
        goto label_19c944;
    }
    ctx->pc = 0x19C93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19C944u);
        ctx->pc = 0x19C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C93Cu;
        // 0x19c940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C93Cu, 0x19C944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C944u;
label_19c944:
    // 0x19c944: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19c948:
    // 0x19c948: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19c94c:
    // 0x19c94c: 0xc04c72c  jal         func_131CB0
label_19c950:
    if (ctx->pc == 0x19C950u) {
        ctx->pc = 0x19C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C94Cu;
        // 0x19c950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C954u;
        goto label_19c954;
    }
    ctx->pc = 0x19C94Cu;
    SET_GPR_U32(ctx, 31, 0x19C954u);
    ctx->pc = 0x19C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C94Cu;
    // 0x19c950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x19C94Cu, 0x19C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C954u;
label_19c954:
    // 0x19c954: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19c954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19c958:
    // 0x19c958: 0xc064bf8  jal         func_192FE0
label_19c95c:
    if (ctx->pc == 0x19C95Cu) {
        ctx->pc = 0x19C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C958u;
        // 0x19c95c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C960u;
        goto label_19c960;
    }
    ctx->pc = 0x19C958u;
    SET_GPR_U32(ctx, 31, 0x19C960u);
    ctx->pc = 0x19C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C958u;
    // 0x19c95c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192FE0u, 0x19C958u, 0x19C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C960u;
label_19c960:
    // 0x19c960: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19c960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19c964:
    // 0x19c964: 0xc064bd4  jal         func_192F50
label_19c968:
    if (ctx->pc == 0x19C968u) {
        ctx->pc = 0x19C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C964u;
        // 0x19c968: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C96Cu;
        goto label_19c96c;
    }
    ctx->pc = 0x19C964u;
    SET_GPR_U32(ctx, 31, 0x19C96Cu);
    ctx->pc = 0x19C968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C964u;
    // 0x19c968: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192F50u, 0x19C964u, 0x19C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C96Cu;
label_19c96c:
    // 0x19c96c: 0x8e440670  lw          $a0, 0x670($s2)
    ctx->pc = 0x19c96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19c970:
    // 0x19c970: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19c970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c974:
    // 0x19c974: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19c974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19c978:
    // 0x19c978: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19c978u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_19c97c:
    // 0x19c97c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_19c980:
    // 0x19c980: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x19c980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_19c984:
    // 0x19c984: 0xa065007a  sb          $a1, 0x7A($v1)
    ctx->pc = 0x19c984u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 122), (uint8_t)GPR_U32(ctx, 5));
label_19c988:
    // 0x19c988: 0x8e440670  lw          $a0, 0x670($s2)
    ctx->pc = 0x19c988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19c98c:
    // 0x19c98c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19c990:
    // 0x19c990: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19c990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_19c994:
    // 0x19c994: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19c994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_19c998:
    // 0x19c998: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x19c998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_19c99c:
    // 0x19c99c: 0xa06501d3  sb          $a1, 0x1D3($v1)
    ctx->pc = 0x19c99cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 5));
label_19c9a0:
    // 0x19c9a0: 0x10000076  b           . + 4 + (0x76 << 2)
label_19c9a4:
    if (ctx->pc == 0x19C9A4u) {
        ctx->pc = 0x19C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9A0u;
        // 0x19c9a4: 0xae450674  sw          $a1, 0x674($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C9A8u;
        goto label_19c9a8;
    }
    ctx->pc = 0x19C9A0u;
    {
        const bool branch_taken_0x19c9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9A0u;
        // 0x19c9a4: 0xae450674  sw          $a1, 0x674($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c9a0) {
            ctx->pc = 0x19CB7Cu;
            goto label_19cb7c;
        }
    }
    ctx->pc = 0x19C9A8u;
label_19c9a8:
    // 0x19c9a8: 0x8e43068c  lw          $v1, 0x68C($s2)
    ctx->pc = 0x19c9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1676)));
label_19c9ac:
    // 0x19c9ac: 0x14660018  bne         $v1, $a2, . + 4 + (0x18 << 2)
label_19c9b0:
    if (ctx->pc == 0x19C9B0u) {
        ctx->pc = 0x19C9B4u;
        goto label_19c9b4;
    }
    ctx->pc = 0x19C9ACu;
    {
        const bool branch_taken_0x19c9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x19c9ac) {
            ctx->pc = 0x19CA10u;
            goto label_19ca10;
        }
    }
    ctx->pc = 0x19C9B4u;
label_19c9b4:
    // 0x19c9b4: 0x8e430688  lw          $v1, 0x688($s2)
    ctx->pc = 0x19c9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1672)));
label_19c9b8:
    // 0x19c9b8: 0x10650015  beq         $v1, $a1, . + 4 + (0x15 << 2)
label_19c9bc:
    if (ctx->pc == 0x19C9BCu) {
        ctx->pc = 0x19C9C0u;
        goto label_19c9c0;
    }
    ctx->pc = 0x19C9B8u;
    {
        const bool branch_taken_0x19c9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x19c9b8) {
            ctx->pc = 0x19CA10u;
            goto label_19ca10;
        }
    }
    ctx->pc = 0x19C9C0u;
label_19c9c0:
    // 0x19c9c0: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19c9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19c9c4:
    // 0x19c9c4: 0xc064c20  jal         func_193080
label_19c9c8:
    if (ctx->pc == 0x19C9C8u) {
        ctx->pc = 0x19C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9C4u;
        // 0x19c9c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C9CCu;
        goto label_19c9cc;
    }
    ctx->pc = 0x19C9C4u;
    SET_GPR_U32(ctx, 31, 0x19C9CCu);
    ctx->pc = 0x19C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C9C4u;
    // 0x19c9c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x19C9C4u, 0x19C9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C9CCu;
label_19c9cc:
    // 0x19c9cc: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19c9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19c9d0:
    // 0x19c9d0: 0x8e460688  lw          $a2, 0x688($s2)
    ctx->pc = 0x19c9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1672)));
label_19c9d4:
    // 0x19c9d4: 0xc064c4c  jal         func_193130
label_19c9d8:
    if (ctx->pc == 0x19C9D8u) {
        ctx->pc = 0x19C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9D4u;
        // 0x19c9d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C9DCu;
        goto label_19c9dc;
    }
    ctx->pc = 0x19C9D4u;
    SET_GPR_U32(ctx, 31, 0x19C9DCu);
    ctx->pc = 0x19C9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C9D4u;
    // 0x19c9d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x19C9D4u, 0x19C9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C9DCu;
label_19c9dc:
    // 0x19c9dc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x19c9dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19c9e0:
    // 0x19c9e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c9e4:
    // 0x19c9e4: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x19c9e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_19c9e8:
    // 0x19c9e8: 0x320f809  jalr        $t9
label_19c9ec:
    if (ctx->pc == 0x19C9ECu) {
        ctx->pc = 0x19C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9E8u;
        // 0x19c9ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C9F0u;
        goto label_19c9f0;
    }
    ctx->pc = 0x19C9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19C9F0u);
        ctx->pc = 0x19C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9E8u;
        // 0x19c9ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C9E8u, 0x19C9F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C9F0u;
label_19c9f0:
    // 0x19c9f0: 0x8e440688  lw          $a0, 0x688($s2)
    ctx->pc = 0x19c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1672)));
label_19c9f4:
    // 0x19c9f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19c9f8:
    // 0x19c9f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19c9fc:
    // 0x19c9fc: 0xae440688  sw          $a0, 0x688($s2)
    ctx->pc = 0x19c9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1672), GPR_U32(ctx, 4));
label_19ca00:
    // 0x19ca00: 0x8e440698  lw          $a0, 0x698($s2)
    ctx->pc = 0x19ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_19ca04:
    // 0x19ca04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19ca04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19ca08:
    // 0x19ca08: 0xae440698  sw          $a0, 0x698($s2)
    ctx->pc = 0x19ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1688), GPR_U32(ctx, 4));
label_19ca0c:
    // 0x19ca0c: 0xae430674  sw          $v1, 0x674($s2)
    ctx->pc = 0x19ca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 3));
label_19ca10:
    // 0x19ca10: 0x8e43068c  lw          $v1, 0x68C($s2)
    ctx->pc = 0x19ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1676)));
label_19ca14:
    // 0x19ca14: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19ca14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19ca18:
    // 0x19ca18: 0x1466001a  bne         $v1, $a2, . + 4 + (0x1A << 2)
label_19ca1c:
    if (ctx->pc == 0x19CA1Cu) {
        ctx->pc = 0x19CA20u;
        goto label_19ca20;
    }
    ctx->pc = 0x19CA18u;
    {
        const bool branch_taken_0x19ca18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x19ca18) {
            ctx->pc = 0x19CA84u;
            goto label_19ca84;
        }
    }
    ctx->pc = 0x19CA20u;
label_19ca20:
    // 0x19ca20: 0x8e430688  lw          $v1, 0x688($s2)
    ctx->pc = 0x19ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1672)));
label_19ca24:
    // 0x19ca24: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_19ca28:
    if (ctx->pc == 0x19CA28u) {
        ctx->pc = 0x19CA2Cu;
        goto label_19ca2c;
    }
    ctx->pc = 0x19CA24u;
    {
        const bool branch_taken_0x19ca24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ca24) {
            ctx->pc = 0x19CA84u;
            goto label_19ca84;
        }
    }
    ctx->pc = 0x19CA2Cu;
label_19ca2c:
    // 0x19ca2c: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19ca2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19ca30:
    // 0x19ca30: 0xc064c20  jal         func_193080
label_19ca34:
    if (ctx->pc == 0x19CA34u) {
        ctx->pc = 0x19CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA30u;
        // 0x19ca34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CA38u;
        goto label_19ca38;
    }
    ctx->pc = 0x19CA30u;
    SET_GPR_U32(ctx, 31, 0x19CA38u);
    ctx->pc = 0x19CA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA30u;
    // 0x19ca34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x19CA30u, 0x19CA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CA38u;
label_19ca38:
    // 0x19ca38: 0x8e430688  lw          $v1, 0x688($s2)
    ctx->pc = 0x19ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1672)));
label_19ca3c:
    // 0x19ca3c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19ca40:
    // 0x19ca40: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19ca40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19ca44:
    // 0x19ca44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ca44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19ca48:
    // 0x19ca48: 0xc064c4c  jal         func_193130
label_19ca4c:
    if (ctx->pc == 0x19CA4Cu) {
        ctx->pc = 0x19CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA48u;
        // 0x19ca4c: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CA50u;
        goto label_19ca50;
    }
    ctx->pc = 0x19CA48u;
    SET_GPR_U32(ctx, 31, 0x19CA50u);
    ctx->pc = 0x19CA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA48u;
    // 0x19ca4c: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x19CA48u, 0x19CA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CA50u;
label_19ca50:
    // 0x19ca50: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x19ca50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19ca54:
    // 0x19ca54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ca54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ca58:
    // 0x19ca58: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x19ca58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_19ca5c:
    // 0x19ca5c: 0x320f809  jalr        $t9
label_19ca60:
    if (ctx->pc == 0x19CA60u) {
        ctx->pc = 0x19CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA5Cu;
        // 0x19ca60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CA64u;
        goto label_19ca64;
    }
    ctx->pc = 0x19CA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19CA64u);
        ctx->pc = 0x19CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA5Cu;
        // 0x19ca60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CA5Cu, 0x19CA64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CA64u;
label_19ca64:
    // 0x19ca64: 0x8e440688  lw          $a0, 0x688($s2)
    ctx->pc = 0x19ca64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1672)));
label_19ca68:
    // 0x19ca68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19ca6c:
    // 0x19ca6c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19ca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_19ca70:
    // 0x19ca70: 0xae440688  sw          $a0, 0x688($s2)
    ctx->pc = 0x19ca70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1672), GPR_U32(ctx, 4));
label_19ca74:
    // 0x19ca74: 0x8e440698  lw          $a0, 0x698($s2)
    ctx->pc = 0x19ca74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_19ca78:
    // 0x19ca78: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_19ca7c:
    // 0x19ca7c: 0xae440698  sw          $a0, 0x698($s2)
    ctx->pc = 0x19ca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1688), GPR_U32(ctx, 4));
label_19ca80:
    // 0x19ca80: 0xae430674  sw          $v1, 0x674($s2)
    ctx->pc = 0x19ca80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 3));
label_19ca84:
    // 0x19ca84: 0x8e440674  lw          $a0, 0x674($s2)
    ctx->pc = 0x19ca84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1652)));
label_19ca88:
    // 0x19ca88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19ca8c:
    // 0x19ca8c: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_19ca90:
    if (ctx->pc == 0x19CA90u) {
        ctx->pc = 0x19CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA8Cu;
        // 0x19ca90: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CA94u;
        goto label_19ca94;
    }
    ctx->pc = 0x19CA8Cu;
    {
        const bool branch_taken_0x19ca8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x19CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA8Cu;
        // 0x19ca90: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca8c) {
            ctx->pc = 0x19CAACu;
            goto label_19caac;
        }
    }
    ctx->pc = 0x19CA94u;
label_19ca94:
    // 0x19ca94: 0xc045ae8  jal         func_116BA0
label_19ca98:
    if (ctx->pc == 0x19CA98u) {
        ctx->pc = 0x19CA9Cu;
        goto label_19ca9c;
    }
    ctx->pc = 0x19CA94u;
    SET_GPR_U32(ctx, 31, 0x19CA9Cu);
    ctx->pc = 0x116BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116BA0u, 0x19CA94u, 0x19CA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CA9Cu;
label_19ca9c:
    // 0x19ca9c: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19ca9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19caa0:
    // 0x19caa0: 0x24460006  addiu       $a2, $v0, 0x6
    ctx->pc = 0x19caa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_19caa4:
    // 0x19caa4: 0xc064cac  jal         func_1932B0
label_19caa8:
    if (ctx->pc == 0x19CAA8u) {
        ctx->pc = 0x19CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAA4u;
        // 0x19caa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CAACu;
        goto label_19caac;
    }
    ctx->pc = 0x19CAA4u;
    SET_GPR_U32(ctx, 31, 0x19CAACu);
    ctx->pc = 0x19CAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CAA4u;
    // 0x19caa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932B0u, 0x19CAA4u, 0x19CAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CAACu;
label_19caac:
    // 0x19caac: 0x10000033  b           . + 4 + (0x33 << 2)
label_19cab0:
    if (ctx->pc == 0x19CAB0u) {
        ctx->pc = 0x19CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAACu;
        // 0x19cab0: 0xae40068c  sw          $zero, 0x68C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CAB4u;
        goto label_19cab4;
    }
    ctx->pc = 0x19CAACu;
    {
        const bool branch_taken_0x19caac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAACu;
        // 0x19cab0: 0xae40068c  sw          $zero, 0x68C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19caac) {
            ctx->pc = 0x19CB7Cu;
            goto label_19cb7c;
        }
    }
    ctx->pc = 0x19CAB4u;
label_19cab4:
    // 0x19cab4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x19cab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19cab8:
    // 0x19cab8: 0x8f3900f0  lw          $t9, 0xF0($t9)
    ctx->pc = 0x19cab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
label_19cabc:
    // 0x19cabc: 0x320f809  jalr        $t9
label_19cac0:
    if (ctx->pc == 0x19CAC0u) {
        ctx->pc = 0x19CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CABCu;
        // 0x19cac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CAC4u;
        goto label_19cac4;
    }
    ctx->pc = 0x19CABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19CAC4u);
        ctx->pc = 0x19CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CABCu;
        // 0x19cac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CABCu, 0x19CAC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CAC4u;
label_19cac4:
    // 0x19cac4: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_19cac8:
    if (ctx->pc == 0x19CAC8u) {
        ctx->pc = 0x19CACCu;
        goto label_19cacc;
    }
    ctx->pc = 0x19CAC4u;
    {
        const bool branch_taken_0x19cac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cac4) {
            ctx->pc = 0x19CB7Cu;
            goto label_19cb7c;
        }
    }
    ctx->pc = 0x19CACCu;
label_19cacc:
    // 0x19cacc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x19caccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19cad0:
    // 0x19cad0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x19cad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_19cad4:
    // 0x19cad4: 0x320f809  jalr        $t9
label_19cad8:
    if (ctx->pc == 0x19CAD8u) {
        ctx->pc = 0x19CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAD4u;
        // 0x19cad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CADCu;
        goto label_19cadc;
    }
    ctx->pc = 0x19CAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19CADCu);
        ctx->pc = 0x19CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAD4u;
        // 0x19cad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CAD4u, 0x19CADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CADCu;
label_19cadc:
    // 0x19cadc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19cadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cae0:
    // 0x19cae0: 0x14430026  bne         $v0, $v1, . + 4 + (0x26 << 2)
label_19cae4:
    if (ctx->pc == 0x19CAE4u) {
        ctx->pc = 0x19CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAE0u;
        // 0x19cae4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CAE8u;
        goto label_19cae8;
    }
    ctx->pc = 0x19CAE0u;
    {
        const bool branch_taken_0x19cae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAE0u;
        // 0x19cae4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cae0) {
            ctx->pc = 0x19CB7Cu;
            goto label_19cb7c;
        }
    }
    ctx->pc = 0x19CAE8u;
label_19cae8:
    // 0x19cae8: 0xc045ae8  jal         func_116BA0
label_19caec:
    if (ctx->pc == 0x19CAECu) {
        ctx->pc = 0x19CAF0u;
        goto label_19caf0;
    }
    ctx->pc = 0x19CAE8u;
    SET_GPR_U32(ctx, 31, 0x19CAF0u);
    ctx->pc = 0x116BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116BA0u, 0x19CAE8u, 0x19CAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CAF0u;
label_19caf0:
    // 0x19caf0: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19caf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19caf4:
    // 0x19caf4: 0x24460006  addiu       $a2, $v0, 0x6
    ctx->pc = 0x19caf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_19caf8:
    // 0x19caf8: 0xc064cac  jal         func_1932B0
label_19cafc:
    if (ctx->pc == 0x19CAFCu) {
        ctx->pc = 0x19CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAF8u;
        // 0x19cafc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB00u;
        goto label_19cb00;
    }
    ctx->pc = 0x19CAF8u;
    SET_GPR_U32(ctx, 31, 0x19CB00u);
    ctx->pc = 0x19CAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CAF8u;
    // 0x19cafc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932B0u, 0x19CAF8u, 0x19CB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CB00u;
label_19cb00:
    // 0x19cb00: 0x8e440688  lw          $a0, 0x688($s2)
    ctx->pc = 0x19cb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1672)));
label_19cb04:
    // 0x19cb04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cb08:
    // 0x19cb08: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x19cb08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_19cb0c:
    // 0x19cb0c: 0xae440698  sw          $a0, 0x698($s2)
    ctx->pc = 0x19cb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1688), GPR_U32(ctx, 4));
label_19cb10:
    // 0x19cb10: 0x1000001a  b           . + 4 + (0x1A << 2)
label_19cb14:
    if (ctx->pc == 0x19CB14u) {
        ctx->pc = 0x19CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB10u;
        // 0x19cb14: 0xae430674  sw          $v1, 0x674($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB18u;
        goto label_19cb18;
    }
    ctx->pc = 0x19CB10u;
    {
        const bool branch_taken_0x19cb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB10u;
        // 0x19cb14: 0xae430674  sw          $v1, 0x674($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb10) {
            ctx->pc = 0x19CB7Cu;
            goto label_19cb7c;
        }
    }
    ctx->pc = 0x19CB18u;
label_19cb18:
    // 0x19cb18: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19cb18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19cb1c:
    // 0x19cb1c: 0xc064c20  jal         func_193080
label_19cb20:
    if (ctx->pc == 0x19CB20u) {
        ctx->pc = 0x19CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB1Cu;
        // 0x19cb20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB24u;
        goto label_19cb24;
    }
    ctx->pc = 0x19CB1Cu;
    SET_GPR_U32(ctx, 31, 0x19CB24u);
    ctx->pc = 0x19CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB1Cu;
    // 0x19cb20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x19CB1Cu, 0x19CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CB24u;
label_19cb24:
    // 0x19cb24: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19cb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19cb28:
    // 0x19cb28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19cb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19cb2c:
    // 0x19cb2c: 0xc064cac  jal         func_1932B0
label_19cb30:
    if (ctx->pc == 0x19CB30u) {
        ctx->pc = 0x19CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB2Cu;
        // 0x19cb30: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB34u;
        goto label_19cb34;
    }
    ctx->pc = 0x19CB2Cu;
    SET_GPR_U32(ctx, 31, 0x19CB34u);
    ctx->pc = 0x19CB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB2Cu;
    // 0x19cb30: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932B0u, 0x19CB2Cu, 0x19CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CB34u;
label_19cb34:
    // 0x19cb34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19cb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19cb38:
    // 0x19cb38: 0x10000010  b           . + 4 + (0x10 << 2)
label_19cb3c:
    if (ctx->pc == 0x19CB3Cu) {
        ctx->pc = 0x19CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB38u;
        // 0x19cb3c: 0xae430674  sw          $v1, 0x674($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB40u;
        goto label_19cb40;
    }
    ctx->pc = 0x19CB38u;
    {
        const bool branch_taken_0x19cb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB38u;
        // 0x19cb3c: 0xae430674  sw          $v1, 0x674($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb38) {
            ctx->pc = 0x19CB7Cu;
            goto label_19cb7c;
        }
    }
    ctx->pc = 0x19CB40u;
label_19cb40:
    // 0x19cb40: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x19cb40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19cb44:
    // 0x19cb44: 0x8f3900f0  lw          $t9, 0xF0($t9)
    ctx->pc = 0x19cb44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
label_19cb48:
    // 0x19cb48: 0x320f809  jalr        $t9
label_19cb4c:
    if (ctx->pc == 0x19CB4Cu) {
        ctx->pc = 0x19CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB48u;
        // 0x19cb4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB50u;
        goto label_19cb50;
    }
    ctx->pc = 0x19CB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19CB50u);
        ctx->pc = 0x19CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB48u;
        // 0x19cb4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CB48u, 0x19CB50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CB50u;
label_19cb50:
    // 0x19cb50: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_19cb54:
    if (ctx->pc == 0x19CB54u) {
        ctx->pc = 0x19CB58u;
        goto label_19cb58;
    }
    ctx->pc = 0x19CB50u;
    {
        const bool branch_taken_0x19cb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cb50) {
            ctx->pc = 0x19CB7Cu;
            goto label_19cb7c;
        }
    }
    ctx->pc = 0x19CB58u;
label_19cb58:
    // 0x19cb58: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x19cb58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19cb5c:
    // 0x19cb5c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x19cb5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_19cb60:
    // 0x19cb60: 0x320f809  jalr        $t9
label_19cb64:
    if (ctx->pc == 0x19CB64u) {
        ctx->pc = 0x19CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB60u;
        // 0x19cb64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB68u;
        goto label_19cb68;
    }
    ctx->pc = 0x19CB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19CB68u);
        ctx->pc = 0x19CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB60u;
        // 0x19cb64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CB60u, 0x19CB68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CB68u;
label_19cb68:
    // 0x19cb68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cb6c:
    // 0x19cb6c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_19cb70:
    if (ctx->pc == 0x19CB70u) {
        ctx->pc = 0x19CB74u;
        goto label_19cb74;
    }
    ctx->pc = 0x19CB6Cu;
    {
        const bool branch_taken_0x19cb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19cb6c) {
            ctx->pc = 0x19CB7Cu;
            goto label_19cb7c;
        }
    }
    ctx->pc = 0x19CB74u;
label_19cb74:
    // 0x19cb74: 0xae40068c  sw          $zero, 0x68C($s2)
    ctx->pc = 0x19cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1676), GPR_U32(ctx, 0));
label_19cb78:
    // 0x19cb78: 0xae430674  sw          $v1, 0x674($s2)
    ctx->pc = 0x19cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 3));
label_19cb7c:
    // 0x19cb7c: 0x8e430690  lw          $v1, 0x690($s2)
    ctx->pc = 0x19cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
label_19cb80:
    // 0x19cb80: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_19cb84:
    if (ctx->pc == 0x19CB84u) {
        ctx->pc = 0x19CB88u;
        goto label_19cb88;
    }
    ctx->pc = 0x19CB80u;
    {
        const bool branch_taken_0x19cb80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cb80) {
            ctx->pc = 0x19CBB4u;
            goto label_19cbb4;
        }
    }
    ctx->pc = 0x19CB88u;
label_19cb88:
    // 0x19cb88: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19cb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19cb8c:
    // 0x19cb8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19cb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cb90:
    // 0x19cb90: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19cb94:
    // 0x19cb94: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x19cb94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_19cb98:
    // 0x19cb98: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19cb9c:
    // 0x19cb9c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x19cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_19cba0:
    // 0x19cba0: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x19cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_19cba4:
    // 0x19cba4: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_19cba8:
    if (ctx->pc == 0x19CBA8u) {
        ctx->pc = 0x19CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBA4u;
        // 0x19cba8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CBACu;
        goto label_19cbac;
    }
    ctx->pc = 0x19CBA4u;
    {
        const bool branch_taken_0x19cba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x19CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBA4u;
        // 0x19cba8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cba4) {
            ctx->pc = 0x19CBB4u;
            goto label_19cbb4;
        }
    }
    ctx->pc = 0x19CBACu;
label_19cbac:
    // 0x19cbac: 0xae430674  sw          $v1, 0x674($s2)
    ctx->pc = 0x19cbacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 3));
label_19cbb0:
    // 0x19cbb0: 0xae440690  sw          $a0, 0x690($s2)
    ctx->pc = 0x19cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1680), GPR_U32(ctx, 4));
label_19cbb4:
    // 0x19cbb4: 0x8e430694  lw          $v1, 0x694($s2)
    ctx->pc = 0x19cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1684)));
label_19cbb8:
    // 0x19cbb8: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_19cbbc:
    if (ctx->pc == 0x19CBBCu) {
        ctx->pc = 0x19CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBB8u;
        // 0x19cbbc: 0x30650001  andi        $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CBC0u;
        goto label_19cbc0;
    }
    ctx->pc = 0x19CBB8u;
    {
        const bool branch_taken_0x19cbb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBB8u;
        // 0x19cbbc: 0x30650001  andi        $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cbb8) {
            ctx->pc = 0x19CC1Cu;
            goto label_19cc1c;
        }
    }
    ctx->pc = 0x19CBC0u;
label_19cbc0:
    // 0x19cbc0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19cbc4:
    // 0x19cbc4: 0x8e430670  lw          $v1, 0x670($s2)
    ctx->pc = 0x19cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19cbc8:
    // 0x19cbc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19cbcc:
    // 0x19cbcc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19cbd0:
    // 0x19cbd0: 0xc042570  jal         func_1095C0
label_19cbd4:
    if (ctx->pc == 0x19CBD4u) {
        ctx->pc = 0x19CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBD0u;
        // 0x19cbd4: 0x8c442cd8  lw          $a0, 0x2CD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CBD8u;
        goto label_19cbd8;
    }
    ctx->pc = 0x19CBD0u;
    SET_GPR_U32(ctx, 31, 0x19CBD8u);
    ctx->pc = 0x19CBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CBD0u;
    // 0x19cbd4: 0x8c442cd8  lw          $a0, 0x2CD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x19CBD0u, 0x19CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CBD8u;
label_19cbd8:
    // 0x19cbd8: 0x8e430694  lw          $v1, 0x694($s2)
    ctx->pc = 0x19cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1684)));
label_19cbdc:
    // 0x19cbdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_19cbe0:
    // 0x19cbe0: 0xae430694  sw          $v1, 0x694($s2)
    ctx->pc = 0x19cbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1684), GPR_U32(ctx, 3));
label_19cbe4:
    // 0x19cbe4: 0x8e430694  lw          $v1, 0x694($s2)
    ctx->pc = 0x19cbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1684)));
label_19cbe8:
    // 0x19cbe8: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_19cbec:
    if (ctx->pc == 0x19CBECu) {
        ctx->pc = 0x19CBF0u;
        goto label_19cbf0;
    }
    ctx->pc = 0x19CBE8u;
    {
        const bool branch_taken_0x19cbe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cbe8) {
            ctx->pc = 0x19CC1Cu;
            goto label_19cc1c;
        }
    }
    ctx->pc = 0x19CBF0u;
label_19cbf0:
    // 0x19cbf0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19cbf4:
    // 0x19cbf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19cbf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19cbf8:
    // 0x19cbf8: 0xc04c72c  jal         func_131CB0
label_19cbfc:
    if (ctx->pc == 0x19CBFCu) {
        ctx->pc = 0x19CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBF8u;
        // 0x19cbfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CC00u;
        goto label_19cc00;
    }
    ctx->pc = 0x19CBF8u;
    SET_GPR_U32(ctx, 31, 0x19CC00u);
    ctx->pc = 0x19CBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CBF8u;
    // 0x19cbfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x19CBF8u, 0x19CC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CC00u;
label_19cc00:
    // 0x19cc00: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19cc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19cc04:
    // 0x19cc04: 0xc064bf8  jal         func_192FE0
label_19cc08:
    if (ctx->pc == 0x19CC08u) {
        ctx->pc = 0x19CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC04u;
        // 0x19cc08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CC0Cu;
        goto label_19cc0c;
    }
    ctx->pc = 0x19CC04u;
    SET_GPR_U32(ctx, 31, 0x19CC0Cu);
    ctx->pc = 0x19CC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC04u;
    // 0x19cc08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192FE0u, 0x19CC04u, 0x19CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CC0Cu;
label_19cc0c:
    // 0x19cc0c: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19cc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19cc10:
    // 0x19cc10: 0xc064bd4  jal         func_192F50
label_19cc14:
    if (ctx->pc == 0x19CC14u) {
        ctx->pc = 0x19CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC10u;
        // 0x19cc14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CC18u;
        goto label_19cc18;
    }
    ctx->pc = 0x19CC10u;
    SET_GPR_U32(ctx, 31, 0x19CC18u);
    ctx->pc = 0x19CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC10u;
    // 0x19cc14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192F50u, 0x19CC10u, 0x19CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CC18u;
label_19cc18:
    // 0x19cc18: 0xae400690  sw          $zero, 0x690($s2)
    ctx->pc = 0x19cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1680), GPR_U32(ctx, 0));
label_19cc1c:
    // 0x19cc1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19cc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19cc20:
    // 0x19cc20: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19cc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19cc24:
    // 0x19cc24: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19cc24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19cc28:
    // 0x19cc28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19cc28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19cc2c:
    // 0x19cc2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19cc2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19cc30:
    // 0x19cc30: 0x3e00008  jr          $ra
label_19cc34:
    if (ctx->pc == 0x19CC34u) {
        ctx->pc = 0x19CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC30u;
        // 0x19cc34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CC38u;
        goto label_fallthrough_0x19cc30;
    }
    ctx->pc = 0x19CC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC30u;
        // 0x19cc34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19cc30:
    ctx->pc = 0x19CC38u;
}
