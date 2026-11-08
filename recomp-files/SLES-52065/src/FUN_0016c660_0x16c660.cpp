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

// Function: FUN_0016c660
// Address: 0x16c660 - 0x16cb44
void FUN_0016c660_0x16c660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016c660_0x16c660");
#endif

    switch (ctx->pc) {
        case 0x16c660u: goto label_16c660;
        case 0x16c664u: goto label_16c664;
        case 0x16c668u: goto label_16c668;
        case 0x16c66cu: goto label_16c66c;
        case 0x16c670u: goto label_16c670;
        case 0x16c674u: goto label_16c674;
        case 0x16c678u: goto label_16c678;
        case 0x16c67cu: goto label_16c67c;
        case 0x16c680u: goto label_16c680;
        case 0x16c684u: goto label_16c684;
        case 0x16c688u: goto label_16c688;
        case 0x16c68cu: goto label_16c68c;
        case 0x16c690u: goto label_16c690;
        case 0x16c694u: goto label_16c694;
        case 0x16c698u: goto label_16c698;
        case 0x16c69cu: goto label_16c69c;
        case 0x16c6a0u: goto label_16c6a0;
        case 0x16c6a4u: goto label_16c6a4;
        case 0x16c6a8u: goto label_16c6a8;
        case 0x16c6acu: goto label_16c6ac;
        case 0x16c6b0u: goto label_16c6b0;
        case 0x16c6b4u: goto label_16c6b4;
        case 0x16c6b8u: goto label_16c6b8;
        case 0x16c6bcu: goto label_16c6bc;
        case 0x16c6c0u: goto label_16c6c0;
        case 0x16c6c4u: goto label_16c6c4;
        case 0x16c6c8u: goto label_16c6c8;
        case 0x16c6ccu: goto label_16c6cc;
        case 0x16c6d0u: goto label_16c6d0;
        case 0x16c6d4u: goto label_16c6d4;
        case 0x16c6d8u: goto label_16c6d8;
        case 0x16c6dcu: goto label_16c6dc;
        case 0x16c6e0u: goto label_16c6e0;
        case 0x16c6e4u: goto label_16c6e4;
        case 0x16c6e8u: goto label_16c6e8;
        case 0x16c6ecu: goto label_16c6ec;
        case 0x16c6f0u: goto label_16c6f0;
        case 0x16c6f4u: goto label_16c6f4;
        case 0x16c6f8u: goto label_16c6f8;
        case 0x16c6fcu: goto label_16c6fc;
        case 0x16c700u: goto label_16c700;
        case 0x16c704u: goto label_16c704;
        case 0x16c708u: goto label_16c708;
        case 0x16c70cu: goto label_16c70c;
        case 0x16c710u: goto label_16c710;
        case 0x16c714u: goto label_16c714;
        case 0x16c718u: goto label_16c718;
        case 0x16c71cu: goto label_16c71c;
        case 0x16c720u: goto label_16c720;
        case 0x16c724u: goto label_16c724;
        case 0x16c728u: goto label_16c728;
        case 0x16c72cu: goto label_16c72c;
        case 0x16c730u: goto label_16c730;
        case 0x16c734u: goto label_16c734;
        case 0x16c738u: goto label_16c738;
        case 0x16c73cu: goto label_16c73c;
        case 0x16c740u: goto label_16c740;
        case 0x16c744u: goto label_16c744;
        case 0x16c748u: goto label_16c748;
        case 0x16c74cu: goto label_16c74c;
        case 0x16c750u: goto label_16c750;
        case 0x16c754u: goto label_16c754;
        case 0x16c758u: goto label_16c758;
        case 0x16c75cu: goto label_16c75c;
        case 0x16c760u: goto label_16c760;
        case 0x16c764u: goto label_16c764;
        case 0x16c768u: goto label_16c768;
        case 0x16c76cu: goto label_16c76c;
        case 0x16c770u: goto label_16c770;
        case 0x16c774u: goto label_16c774;
        case 0x16c778u: goto label_16c778;
        case 0x16c77cu: goto label_16c77c;
        case 0x16c780u: goto label_16c780;
        case 0x16c784u: goto label_16c784;
        case 0x16c788u: goto label_16c788;
        case 0x16c78cu: goto label_16c78c;
        case 0x16c790u: goto label_16c790;
        case 0x16c794u: goto label_16c794;
        case 0x16c798u: goto label_16c798;
        case 0x16c79cu: goto label_16c79c;
        case 0x16c7a0u: goto label_16c7a0;
        case 0x16c7a4u: goto label_16c7a4;
        case 0x16c7a8u: goto label_16c7a8;
        case 0x16c7acu: goto label_16c7ac;
        case 0x16c7b0u: goto label_16c7b0;
        case 0x16c7b4u: goto label_16c7b4;
        case 0x16c7b8u: goto label_16c7b8;
        case 0x16c7bcu: goto label_16c7bc;
        case 0x16c7c0u: goto label_16c7c0;
        case 0x16c7c4u: goto label_16c7c4;
        case 0x16c7c8u: goto label_16c7c8;
        case 0x16c7ccu: goto label_16c7cc;
        case 0x16c7d0u: goto label_16c7d0;
        case 0x16c7d4u: goto label_16c7d4;
        case 0x16c7d8u: goto label_16c7d8;
        case 0x16c7dcu: goto label_16c7dc;
        case 0x16c7e0u: goto label_16c7e0;
        case 0x16c7e4u: goto label_16c7e4;
        case 0x16c7e8u: goto label_16c7e8;
        case 0x16c7ecu: goto label_16c7ec;
        case 0x16c7f0u: goto label_16c7f0;
        case 0x16c7f4u: goto label_16c7f4;
        case 0x16c7f8u: goto label_16c7f8;
        case 0x16c7fcu: goto label_16c7fc;
        case 0x16c800u: goto label_16c800;
        case 0x16c804u: goto label_16c804;
        case 0x16c808u: goto label_16c808;
        case 0x16c80cu: goto label_16c80c;
        case 0x16c810u: goto label_16c810;
        case 0x16c814u: goto label_16c814;
        case 0x16c818u: goto label_16c818;
        case 0x16c81cu: goto label_16c81c;
        case 0x16c820u: goto label_16c820;
        case 0x16c824u: goto label_16c824;
        case 0x16c828u: goto label_16c828;
        case 0x16c82cu: goto label_16c82c;
        case 0x16c830u: goto label_16c830;
        case 0x16c834u: goto label_16c834;
        case 0x16c838u: goto label_16c838;
        case 0x16c83cu: goto label_16c83c;
        case 0x16c840u: goto label_16c840;
        case 0x16c844u: goto label_16c844;
        case 0x16c848u: goto label_16c848;
        case 0x16c84cu: goto label_16c84c;
        case 0x16c850u: goto label_16c850;
        case 0x16c854u: goto label_16c854;
        case 0x16c858u: goto label_16c858;
        case 0x16c85cu: goto label_16c85c;
        case 0x16c860u: goto label_16c860;
        case 0x16c864u: goto label_16c864;
        case 0x16c868u: goto label_16c868;
        case 0x16c86cu: goto label_16c86c;
        case 0x16c870u: goto label_16c870;
        case 0x16c874u: goto label_16c874;
        case 0x16c878u: goto label_16c878;
        case 0x16c87cu: goto label_16c87c;
        case 0x16c880u: goto label_16c880;
        case 0x16c884u: goto label_16c884;
        case 0x16c888u: goto label_16c888;
        case 0x16c88cu: goto label_16c88c;
        case 0x16c890u: goto label_16c890;
        case 0x16c894u: goto label_16c894;
        case 0x16c898u: goto label_16c898;
        case 0x16c89cu: goto label_16c89c;
        case 0x16c8a0u: goto label_16c8a0;
        case 0x16c8a4u: goto label_16c8a4;
        case 0x16c8a8u: goto label_16c8a8;
        case 0x16c8acu: goto label_16c8ac;
        case 0x16c8b0u: goto label_16c8b0;
        case 0x16c8b4u: goto label_16c8b4;
        case 0x16c8b8u: goto label_16c8b8;
        case 0x16c8bcu: goto label_16c8bc;
        case 0x16c8c0u: goto label_16c8c0;
        case 0x16c8c4u: goto label_16c8c4;
        case 0x16c8c8u: goto label_16c8c8;
        case 0x16c8ccu: goto label_16c8cc;
        case 0x16c8d0u: goto label_16c8d0;
        case 0x16c8d4u: goto label_16c8d4;
        case 0x16c8d8u: goto label_16c8d8;
        case 0x16c8dcu: goto label_16c8dc;
        case 0x16c8e0u: goto label_16c8e0;
        case 0x16c8e4u: goto label_16c8e4;
        case 0x16c8e8u: goto label_16c8e8;
        case 0x16c8ecu: goto label_16c8ec;
        case 0x16c8f0u: goto label_16c8f0;
        case 0x16c8f4u: goto label_16c8f4;
        case 0x16c8f8u: goto label_16c8f8;
        case 0x16c8fcu: goto label_16c8fc;
        case 0x16c900u: goto label_16c900;
        case 0x16c904u: goto label_16c904;
        case 0x16c908u: goto label_16c908;
        case 0x16c90cu: goto label_16c90c;
        case 0x16c910u: goto label_16c910;
        case 0x16c914u: goto label_16c914;
        case 0x16c918u: goto label_16c918;
        case 0x16c91cu: goto label_16c91c;
        case 0x16c920u: goto label_16c920;
        case 0x16c924u: goto label_16c924;
        case 0x16c928u: goto label_16c928;
        case 0x16c92cu: goto label_16c92c;
        case 0x16c930u: goto label_16c930;
        case 0x16c934u: goto label_16c934;
        case 0x16c938u: goto label_16c938;
        case 0x16c93cu: goto label_16c93c;
        case 0x16c940u: goto label_16c940;
        case 0x16c944u: goto label_16c944;
        case 0x16c948u: goto label_16c948;
        case 0x16c94cu: goto label_16c94c;
        case 0x16c950u: goto label_16c950;
        case 0x16c954u: goto label_16c954;
        case 0x16c958u: goto label_16c958;
        case 0x16c95cu: goto label_16c95c;
        case 0x16c960u: goto label_16c960;
        case 0x16c964u: goto label_16c964;
        case 0x16c968u: goto label_16c968;
        case 0x16c96cu: goto label_16c96c;
        case 0x16c970u: goto label_16c970;
        case 0x16c974u: goto label_16c974;
        case 0x16c978u: goto label_16c978;
        case 0x16c97cu: goto label_16c97c;
        case 0x16c980u: goto label_16c980;
        case 0x16c984u: goto label_16c984;
        case 0x16c988u: goto label_16c988;
        case 0x16c98cu: goto label_16c98c;
        case 0x16c990u: goto label_16c990;
        case 0x16c994u: goto label_16c994;
        case 0x16c998u: goto label_16c998;
        case 0x16c99cu: goto label_16c99c;
        case 0x16c9a0u: goto label_16c9a0;
        case 0x16c9a4u: goto label_16c9a4;
        case 0x16c9a8u: goto label_16c9a8;
        case 0x16c9acu: goto label_16c9ac;
        case 0x16c9b0u: goto label_16c9b0;
        case 0x16c9b4u: goto label_16c9b4;
        case 0x16c9b8u: goto label_16c9b8;
        case 0x16c9bcu: goto label_16c9bc;
        case 0x16c9c0u: goto label_16c9c0;
        case 0x16c9c4u: goto label_16c9c4;
        case 0x16c9c8u: goto label_16c9c8;
        case 0x16c9ccu: goto label_16c9cc;
        case 0x16c9d0u: goto label_16c9d0;
        case 0x16c9d4u: goto label_16c9d4;
        case 0x16c9d8u: goto label_16c9d8;
        case 0x16c9dcu: goto label_16c9dc;
        case 0x16c9e0u: goto label_16c9e0;
        case 0x16c9e4u: goto label_16c9e4;
        case 0x16c9e8u: goto label_16c9e8;
        case 0x16c9ecu: goto label_16c9ec;
        case 0x16c9f0u: goto label_16c9f0;
        case 0x16c9f4u: goto label_16c9f4;
        case 0x16c9f8u: goto label_16c9f8;
        case 0x16c9fcu: goto label_16c9fc;
        case 0x16ca00u: goto label_16ca00;
        case 0x16ca04u: goto label_16ca04;
        case 0x16ca08u: goto label_16ca08;
        case 0x16ca0cu: goto label_16ca0c;
        case 0x16ca10u: goto label_16ca10;
        case 0x16ca14u: goto label_16ca14;
        case 0x16ca18u: goto label_16ca18;
        case 0x16ca1cu: goto label_16ca1c;
        case 0x16ca20u: goto label_16ca20;
        case 0x16ca24u: goto label_16ca24;
        case 0x16ca28u: goto label_16ca28;
        case 0x16ca2cu: goto label_16ca2c;
        case 0x16ca30u: goto label_16ca30;
        case 0x16ca34u: goto label_16ca34;
        case 0x16ca38u: goto label_16ca38;
        case 0x16ca3cu: goto label_16ca3c;
        case 0x16ca40u: goto label_16ca40;
        case 0x16ca44u: goto label_16ca44;
        case 0x16ca48u: goto label_16ca48;
        case 0x16ca4cu: goto label_16ca4c;
        case 0x16ca50u: goto label_16ca50;
        case 0x16ca54u: goto label_16ca54;
        case 0x16ca58u: goto label_16ca58;
        case 0x16ca5cu: goto label_16ca5c;
        case 0x16ca60u: goto label_16ca60;
        case 0x16ca64u: goto label_16ca64;
        case 0x16ca68u: goto label_16ca68;
        case 0x16ca6cu: goto label_16ca6c;
        case 0x16ca70u: goto label_16ca70;
        case 0x16ca74u: goto label_16ca74;
        case 0x16ca78u: goto label_16ca78;
        case 0x16ca7cu: goto label_16ca7c;
        case 0x16ca80u: goto label_16ca80;
        case 0x16ca84u: goto label_16ca84;
        case 0x16ca88u: goto label_16ca88;
        case 0x16ca8cu: goto label_16ca8c;
        case 0x16ca90u: goto label_16ca90;
        case 0x16ca94u: goto label_16ca94;
        case 0x16ca98u: goto label_16ca98;
        case 0x16ca9cu: goto label_16ca9c;
        case 0x16caa0u: goto label_16caa0;
        case 0x16caa4u: goto label_16caa4;
        case 0x16caa8u: goto label_16caa8;
        case 0x16caacu: goto label_16caac;
        case 0x16cab0u: goto label_16cab0;
        case 0x16cab4u: goto label_16cab4;
        case 0x16cab8u: goto label_16cab8;
        case 0x16cabcu: goto label_16cabc;
        case 0x16cac0u: goto label_16cac0;
        case 0x16cac4u: goto label_16cac4;
        case 0x16cac8u: goto label_16cac8;
        case 0x16caccu: goto label_16cacc;
        case 0x16cad0u: goto label_16cad0;
        case 0x16cad4u: goto label_16cad4;
        case 0x16cad8u: goto label_16cad8;
        case 0x16cadcu: goto label_16cadc;
        case 0x16cae0u: goto label_16cae0;
        case 0x16cae4u: goto label_16cae4;
        case 0x16cae8u: goto label_16cae8;
        case 0x16caecu: goto label_16caec;
        case 0x16caf0u: goto label_16caf0;
        case 0x16caf4u: goto label_16caf4;
        case 0x16caf8u: goto label_16caf8;
        case 0x16cafcu: goto label_16cafc;
        case 0x16cb00u: goto label_16cb00;
        case 0x16cb04u: goto label_16cb04;
        case 0x16cb08u: goto label_16cb08;
        case 0x16cb0cu: goto label_16cb0c;
        case 0x16cb10u: goto label_16cb10;
        case 0x16cb14u: goto label_16cb14;
        case 0x16cb18u: goto label_16cb18;
        case 0x16cb1cu: goto label_16cb1c;
        case 0x16cb20u: goto label_16cb20;
        case 0x16cb24u: goto label_16cb24;
        case 0x16cb28u: goto label_16cb28;
        case 0x16cb2cu: goto label_16cb2c;
        case 0x16cb30u: goto label_16cb30;
        case 0x16cb34u: goto label_16cb34;
        case 0x16cb38u: goto label_16cb38;
        case 0x16cb3cu: goto label_16cb3c;
        case 0x16cb40u: goto label_16cb40;
        default: break;
    }

    ctx->pc = 0x16c660u;

label_16c660:
    // 0x16c660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16c660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16c664:
    // 0x16c664: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16c664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16c668:
    // 0x16c668: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16c668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_16c66c:
    // 0x16c66c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16c66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_16c670:
    // 0x16c670: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16c670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_16c674:
    // 0x16c674: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16c674u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_16c678:
    // 0x16c678: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16c678u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16c67c:
    // 0x16c67c: 0x8c830230  lw          $v1, 0x230($a0)
    ctx->pc = 0x16c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
label_16c680:
    // 0x16c680: 0x10600128  beqz        $v1, . + 4 + (0x128 << 2)
label_16c684:
    if (ctx->pc == 0x16C684u) {
        ctx->pc = 0x16C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C680u;
        // 0x16c684: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C688u;
        goto label_16c688;
    }
    ctx->pc = 0x16C680u;
    {
        const bool branch_taken_0x16c680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C680u;
        // 0x16c684: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c680) {
            ctx->pc = 0x16CB24u;
            goto label_16cb24;
        }
    }
    ctx->pc = 0x16C688u;
label_16c688:
    // 0x16c688: 0x846501e8  lh          $a1, 0x1E8($v1)
    ctx->pc = 0x16c688u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_16c68c:
    // 0x16c68c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c690:
    // 0x16c690: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
label_16c694:
    if (ctx->pc == 0x16C694u) {
        ctx->pc = 0x16C698u;
        goto label_16c698;
    }
    ctx->pc = 0x16C690u;
    {
        const bool branch_taken_0x16c690 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c690) {
            ctx->pc = 0x16C6B0u;
            goto label_16c6b0;
        }
    }
    ctx->pc = 0x16C698u;
label_16c698:
    // 0x16c698: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x16c698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16c69c:
    // 0x16c69c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x16c69cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_16c6a0:
    // 0x16c6a0: 0x320f809  jalr        $t9
label_16c6a4:
    if (ctx->pc == 0x16C6A4u) {
        ctx->pc = 0x16C6A8u;
        goto label_16c6a8;
    }
    ctx->pc = 0x16C6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C6A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C6A0u, 0x16C6A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C6A8u;
label_16c6a8:
    // 0x16c6a8: 0x1000011f  b           . + 4 + (0x11F << 2)
label_16c6ac:
    if (ctx->pc == 0x16C6ACu) {
        ctx->pc = 0x16C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6A8u;
        // 0x16c6ac: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C6B0u;
        goto label_16c6b0;
    }
    ctx->pc = 0x16C6A8u;
    {
        const bool branch_taken_0x16c6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6A8u;
        // 0x16c6ac: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c6a8) {
            ctx->pc = 0x16CB28u;
            goto label_16cb28;
        }
    }
    ctx->pc = 0x16C6B0u;
label_16c6b0:
    // 0x16c6b0: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x16c6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16c6b4:
    // 0x16c6b4: 0x3c033e06  lui         $v1, 0x3E06
    ctx->pc = 0x16c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15878 << 16));
label_16c6b8:
    // 0x16c6b8: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x16c6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_16c6bc:
    // 0x16c6bc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x16c6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_16c6c0:
    // 0x16c6c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16c6c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16c6c4:
    // 0x16c6c4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x16c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_16c6c8:
    // 0x16c6c8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16c6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_16c6cc:
    // 0x16c6cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16c6ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_16c6d0:
    // 0x16c6d0: 0xaf848604  sw          $a0, -0x79FC($gp)
    ctx->pc = 0x16c6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936068), GPR_U32(ctx, 4));
label_16c6d4:
    // 0x16c6d4: 0xc6220224  lwc1        $f2, 0x224($s1)
    ctx->pc = 0x16c6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16c6d8:
    // 0x16c6d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16c6d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c6dc:
    // 0x16c6dc: 0x0  nop
    ctx->pc = 0x16c6dcu;
    // NOP
label_16c6e0:
    // 0x16c6e0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x16c6e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_16c6e4:
    // 0x16c6e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16c6e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c6e8:
    // 0x16c6e8: 0x0  nop
    ctx->pc = 0x16c6e8u;
    // NOP
label_16c6ec:
    // 0x16c6ec: 0x45010057  bc1t        . + 4 + (0x57 << 2)
label_16c6f0:
    if (ctx->pc == 0x16C6F0u) {
        ctx->pc = 0x16C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6ECu;
        // 0x16c6f0: 0xe6210224  swc1        $f1, 0x224($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C6F4u;
        goto label_16c6f4;
    }
    ctx->pc = 0x16C6ECu;
    {
        const bool branch_taken_0x16c6ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6ECu;
        // 0x16c6f0: 0xe6210224  swc1        $f1, 0x224($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c6ec) {
            ctx->pc = 0x16C84Cu;
            goto label_16c84c;
        }
    }
    ctx->pc = 0x16C6F4u;
label_16c6f4:
    // 0x16c6f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16c6f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16c6f8:
    // 0x16c6f8: 0xe6200224  swc1        $f0, 0x224($s1)
    ctx->pc = 0x16c6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
label_16c6fc:
    // 0x16c6fc: 0x86230220  lh          $v1, 0x220($s1)
    ctx->pc = 0x16c6fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
label_16c700:
    // 0x16c700: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16c704:
    // 0x16c704: 0xa6230220  sh          $v1, 0x220($s1)
    ctx->pc = 0x16c704u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 3));
label_16c708:
    // 0x16c708: 0x86230220  lh          $v1, 0x220($s1)
    ctx->pc = 0x16c708u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
label_16c70c:
    // 0x16c70c: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x16c70cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_16c710:
    // 0x16c710: 0x1420004e  bnez        $at, . + 4 + (0x4E << 2)
label_16c714:
    if (ctx->pc == 0x16C714u) {
        ctx->pc = 0x16C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C710u;
        // 0x16c714: 0x28610004  slti        $at, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C718u;
        goto label_16c718;
    }
    ctx->pc = 0x16C710u;
    {
        const bool branch_taken_0x16c710 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C710u;
        // 0x16c714: 0x28610004  slti        $at, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c710) {
            ctx->pc = 0x16C84Cu;
            goto label_16c84c;
        }
    }
    ctx->pc = 0x16C718u;
label_16c718:
    // 0x16c718: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_16c71c:
    if (ctx->pc == 0x16C71Cu) {
        ctx->pc = 0x16C720u;
        goto label_16c720;
    }
    ctx->pc = 0x16C718u;
    {
        const bool branch_taken_0x16c718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c718) {
            ctx->pc = 0x16C73Cu;
            goto label_16c73c;
        }
    }
    ctx->pc = 0x16C720u;
label_16c720:
    // 0x16c720: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x16c720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c724:
    // 0x16c724: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16c724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c728:
    // 0x16c728: 0x0  nop
    ctx->pc = 0x16c728u;
    // NOP
label_16c72c:
    // 0x16c72c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x16c72cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c730:
    // 0x16c730: 0x0  nop
    ctx->pc = 0x16c730u;
    // NOP
label_16c734:
    // 0x16c734: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_16c738:
    if (ctx->pc == 0x16C738u) {
        ctx->pc = 0x16C73Cu;
        goto label_16c73c;
    }
    ctx->pc = 0x16C734u;
    {
        const bool branch_taken_0x16c734 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c734) {
            ctx->pc = 0x16C79Cu;
            goto label_16c79c;
        }
    }
    ctx->pc = 0x16C73Cu;
label_16c73c:
    // 0x16c73c: 0xa6200220  sh          $zero, 0x220($s1)
    ctx->pc = 0x16c73cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 0));
label_16c740:
    // 0x16c740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c744:
    // 0x16c744: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c748:
    // 0x16c748: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16c748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16c74c:
    // 0x16c74c: 0x320f809  jalr        $t9
label_16c750:
    if (ctx->pc == 0x16C750u) {
        ctx->pc = 0x16C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C74Cu;
        // 0x16c750: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C754u;
        goto label_16c754;
    }
    ctx->pc = 0x16C74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C754u);
        ctx->pc = 0x16C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C74Cu;
        // 0x16c750: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C74Cu, 0x16C754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C754u;
label_16c754:
    // 0x16c754: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x16c754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c758:
    // 0x16c758: 0xc620022c  lwc1        $f0, 0x22C($s1)
    ctx->pc = 0x16c758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c75c:
    // 0x16c75c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16c75cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_16c760:
    // 0x16c760: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16c760u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_16c764:
    // 0x16c764: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16c764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_16c768:
    // 0x16c768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16c768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c76c:
    // 0x16c76c: 0x0  nop
    ctx->pc = 0x16c76cu;
    // NOP
label_16c770:
    // 0x16c770: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c774:
    // 0x16c774: 0x0  nop
    ctx->pc = 0x16c774u;
    // NOP
label_16c778:
    // 0x16c778: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16c77c:
    if (ctx->pc == 0x16C77Cu) {
        ctx->pc = 0x16C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C778u;
        // 0x16c77c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C780u;
        goto label_16c780;
    }
    ctx->pc = 0x16C778u;
    {
        const bool branch_taken_0x16c778 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C778u;
        // 0x16c77c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c778) {
            ctx->pc = 0x16C784u;
            goto label_16c784;
        }
    }
    ctx->pc = 0x16C780u;
label_16c780:
    // 0x16c780: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c784:
    // 0x16c784: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c788:
    // 0x16c788: 0x14830030  bne         $a0, $v1, . + 4 + (0x30 << 2)
label_16c78c:
    if (ctx->pc == 0x16C78Cu) {
        ctx->pc = 0x16C790u;
        goto label_16c790;
    }
    ctx->pc = 0x16C788u;
    {
        const bool branch_taken_0x16c788 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c788) {
            ctx->pc = 0x16C84Cu;
            goto label_16c84c;
        }
    }
    ctx->pc = 0x16C790u;
label_16c790:
    // 0x16c790: 0xc6200210  lwc1        $f0, 0x210($s1)
    ctx->pc = 0x16c790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c794:
    // 0x16c794: 0x1000002d  b           . + 4 + (0x2D << 2)
label_16c798:
    if (ctx->pc == 0x16C798u) {
        ctx->pc = 0x16C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C794u;
        // 0x16c798: 0xe620022c  swc1        $f0, 0x22C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C79Cu;
        goto label_16c79c;
    }
    ctx->pc = 0x16C794u;
    {
        const bool branch_taken_0x16c794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C794u;
        // 0x16c798: 0xe620022c  swc1        $f0, 0x22C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c794) {
            ctx->pc = 0x16C84Cu;
            goto label_16c84c;
        }
    }
    ctx->pc = 0x16C79Cu;
label_16c79c:
    // 0x16c79c: 0xc620022c  lwc1        $f0, 0x22C($s1)
    ctx->pc = 0x16c79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c7a0:
    // 0x16c7a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16c7a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_16c7a4:
    // 0x16c7a4: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16c7a4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_16c7a8:
    // 0x16c7a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_16c7ac:
    // 0x16c7ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16c7acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c7b0:
    // 0x16c7b0: 0x0  nop
    ctx->pc = 0x16c7b0u;
    // NOP
label_16c7b4:
    // 0x16c7b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c7b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c7b8:
    // 0x16c7b8: 0x0  nop
    ctx->pc = 0x16c7b8u;
    // NOP
label_16c7bc:
    // 0x16c7bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16c7c0:
    if (ctx->pc == 0x16C7C0u) {
        ctx->pc = 0x16C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7BCu;
        // 0x16c7c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C7C4u;
        goto label_16c7c4;
    }
    ctx->pc = 0x16C7BCu;
    {
        const bool branch_taken_0x16c7bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7BCu;
        // 0x16c7c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c7bc) {
            ctx->pc = 0x16C7C8u;
            goto label_16c7c8;
        }
    }
    ctx->pc = 0x16C7C4u;
label_16c7c4:
    // 0x16c7c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c7c8:
    // 0x16c7c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c7cc:
    // 0x16c7cc: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
label_16c7d0:
    if (ctx->pc == 0x16C7D0u) {
        ctx->pc = 0x16C7D4u;
        goto label_16c7d4;
    }
    ctx->pc = 0x16C7CCu;
    {
        const bool branch_taken_0x16c7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x16c7cc) {
            ctx->pc = 0x16C7F0u;
            goto label_16c7f0;
        }
    }
    ctx->pc = 0x16C7D4u;
label_16c7d4:
    // 0x16c7d4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c7d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c7d8:
    // 0x16c7d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c7dc:
    // 0x16c7dc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16c7dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16c7e0:
    // 0x16c7e0: 0x320f809  jalr        $t9
label_16c7e4:
    if (ctx->pc == 0x16C7E4u) {
        ctx->pc = 0x16C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7E0u;
        // 0x16c7e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C7E8u;
        goto label_16c7e8;
    }
    ctx->pc = 0x16C7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C7E8u);
        ctx->pc = 0x16C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7E0u;
        // 0x16c7e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C7E0u, 0x16C7E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C7E8u;
label_16c7e8:
    // 0x16c7e8: 0x10000019  b           . + 4 + (0x19 << 2)
label_16c7ec:
    if (ctx->pc == 0x16C7ECu) {
        ctx->pc = 0x16C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7E8u;
        // 0x16c7ec: 0x8e2401d4  lw          $a0, 0x1D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C7F0u;
        goto label_16c7f0;
    }
    ctx->pc = 0x16C7E8u;
    {
        const bool branch_taken_0x16c7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7E8u;
        // 0x16c7ec: 0x8e2401d4  lw          $a0, 0x1D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c7e8) {
            ctx->pc = 0x16C850u;
            goto label_16c850;
        }
    }
    ctx->pc = 0x16C7F0u;
label_16c7f0:
    // 0x16c7f0: 0xc621022c  lwc1        $f1, 0x22C($s1)
    ctx->pc = 0x16c7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c7f4:
    // 0x16c7f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16c7f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c7f8:
    // 0x16c7f8: 0x0  nop
    ctx->pc = 0x16c7f8u;
    // NOP
label_16c7fc:
    // 0x16c7fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16c7fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16c800:
    // 0x16c800: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16c800u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_16c804:
    // 0x16c804: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16c804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_16c808:
    // 0x16c808: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16c808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c80c:
    // 0x16c80c: 0x0  nop
    ctx->pc = 0x16c80cu;
    // NOP
label_16c810:
    // 0x16c810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c814:
    // 0x16c814: 0x0  nop
    ctx->pc = 0x16c814u;
    // NOP
label_16c818:
    // 0x16c818: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_16c81c:
    if (ctx->pc == 0x16C81Cu) {
        ctx->pc = 0x16C820u;
        goto label_16c820;
    }
    ctx->pc = 0x16C818u;
    {
        const bool branch_taken_0x16c818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c818) {
            ctx->pc = 0x16C828u;
            goto label_16c828;
        }
    }
    ctx->pc = 0x16C820u;
label_16c820:
    // 0x16c820: 0x10000003  b           . + 4 + (0x3 << 2)
label_16c824:
    if (ctx->pc == 0x16C824u) {
        ctx->pc = 0x16C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C820u;
        // 0x16c824: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C828u;
        goto label_16c828;
    }
    ctx->pc = 0x16C820u;
    {
        const bool branch_taken_0x16c820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C820u;
        // 0x16c824: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c820) {
            ctx->pc = 0x16C830u;
            goto label_16c830;
        }
    }
    ctx->pc = 0x16C828u;
label_16c828:
    // 0x16c828: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c82c:
    // 0x16c82c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c830:
    // 0x16c830: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_16c834:
    if (ctx->pc == 0x16C834u) {
        ctx->pc = 0x16C838u;
        goto label_16c838;
    }
    ctx->pc = 0x16C830u;
    {
        const bool branch_taken_0x16c830 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c830) {
            ctx->pc = 0x16C84Cu;
            goto label_16c84c;
        }
    }
    ctx->pc = 0x16C838u;
label_16c838:
    // 0x16c838: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c83c:
    // 0x16c83c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c840:
    // 0x16c840: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16c840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16c844:
    // 0x16c844: 0x320f809  jalr        $t9
label_16c848:
    if (ctx->pc == 0x16C848u) {
        ctx->pc = 0x16C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C844u;
        // 0x16c848: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C84Cu;
        goto label_16c84c;
    }
    ctx->pc = 0x16C844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C84Cu);
        ctx->pc = 0x16C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C844u;
        // 0x16c848: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C844u, 0x16C84Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C84Cu;
label_16c84c:
    // 0x16c84c: 0x8e2401d4  lw          $a0, 0x1D4($s1)
    ctx->pc = 0x16c84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_16c850:
    // 0x16c850: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16c850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16c854:
    // 0x16c854: 0x1483006b  bne         $a0, $v1, . + 4 + (0x6B << 2)
label_16c858:
    if (ctx->pc == 0x16C858u) {
        ctx->pc = 0x16C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C854u;
        // 0x16c858: 0x8e300230  lw          $s0, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C85Cu;
        goto label_16c85c;
    }
    ctx->pc = 0x16C854u;
    {
        const bool branch_taken_0x16c854 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C854u;
        // 0x16c858: 0x8e300230  lw          $s0, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c854) {
            ctx->pc = 0x16CA04u;
            goto label_16ca04;
        }
    }
    ctx->pc = 0x16C85Cu;
label_16c85c:
    // 0x16c85c: 0xc6210224  lwc1        $f1, 0x224($s1)
    ctx->pc = 0x16c85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c860:
    // 0x16c860: 0x3c033e06  lui         $v1, 0x3E06
    ctx->pc = 0x16c860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15878 << 16));
label_16c864:
    // 0x16c864: 0xc6220228  lwc1        $f2, 0x228($s1)
    ctx->pc = 0x16c864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16c868:
    // 0x16c868: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x16c868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_16c86c:
    // 0x16c86c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16c86cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c870:
    // 0x16c870: 0xc7848020  lwc1        $f4, -0x7FE0($gp)
    ctx->pc = 0x16c870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_16c874:
    // 0x16c874: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16c874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16c878:
    // 0x16c878: 0x460208c3  div.s       $f3, $f1, $f2
    ctx->pc = 0x16c878u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_16c87c:
    // 0x16c87c: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16c87cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_16c880:
    // 0x16c880: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x16c880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_16c884:
    // 0x16c884: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x16c884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_16c888:
    // 0x16c888: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16c888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16c88c:
    // 0x16c88c: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x16c88cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_16c890:
    // 0x16c890: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16c890u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_16c894:
    // 0x16c894: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16c894u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c898:
    // 0x16c898: 0x0  nop
    ctx->pc = 0x16c898u;
    // NOP
label_16c89c:
    // 0x16c89c: 0x45010059  bc1t        . + 4 + (0x59 << 2)
label_16c8a0:
    if (ctx->pc == 0x16C8A0u) {
        ctx->pc = 0x16C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C89Cu;
        // 0x16c8a0: 0x80640023  lb          $a0, 0x23($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8A4u;
        goto label_16c8a4;
    }
    ctx->pc = 0x16C89Cu;
    {
        const bool branch_taken_0x16c89c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C89Cu;
        // 0x16c8a0: 0x80640023  lb          $a0, 0x23($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c89c) {
            ctx->pc = 0x16CA04u;
            goto label_16ca04;
        }
    }
    ctx->pc = 0x16C8A4u;
label_16c8a4:
    // 0x16c8a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_16c8a8:
    if (ctx->pc == 0x16C8A8u) {
        ctx->pc = 0x16C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8A4u;
        // 0x16c8a8: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8ACu;
        goto label_16c8ac;
    }
    ctx->pc = 0x16C8A4u;
    {
        const bool branch_taken_0x16c8a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8A4u;
        // 0x16c8a8: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c8a4) {
            ctx->pc = 0x16C8B4u;
            goto label_16c8b4;
        }
    }
    ctx->pc = 0x16C8ACu;
label_16c8ac:
    // 0x16c8ac: 0x14640055  bne         $v1, $a0, . + 4 + (0x55 << 2)
label_16c8b0:
    if (ctx->pc == 0x16C8B0u) {
        ctx->pc = 0x16C8B4u;
        goto label_16c8b4;
    }
    ctx->pc = 0x16C8ACu;
    {
        const bool branch_taken_0x16c8ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x16c8ac) {
            ctx->pc = 0x16CA04u;
            goto label_16ca04;
        }
    }
    ctx->pc = 0x16C8B4u;
label_16c8b4:
    // 0x16c8b4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c8b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c8b8:
    // 0x16c8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c8bc:
    // 0x16c8bc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16c8bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16c8c0:
    // 0x16c8c0: 0x320f809  jalr        $t9
label_16c8c4:
    if (ctx->pc == 0x16C8C4u) {
        ctx->pc = 0x16C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8C0u;
        // 0x16c8c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8C8u;
        goto label_16c8c8;
    }
    ctx->pc = 0x16C8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C8C8u);
        ctx->pc = 0x16C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8C0u;
        // 0x16c8c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C8C0u, 0x16C8C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C8C8u;
label_16c8c8:
    // 0x16c8c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c8cc:
    // 0x16c8cc: 0xc042118  jal         func_108460
label_16c8d0:
    if (ctx->pc == 0x16C8D0u) {
        ctx->pc = 0x16C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8CCu;
        // 0x16c8d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8D4u;
        goto label_16c8d4;
    }
    ctx->pc = 0x16C8CCu;
    SET_GPR_U32(ctx, 31, 0x16C8D4u);
    ctx->pc = 0x16C8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8CCu;
    // 0x16c8d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16C8CCu, 0x16C8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C8D4u;
label_16c8d4:
    // 0x16c8d4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c8d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c8d8:
    // 0x16c8d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c8dc:
    // 0x16c8dc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x16c8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_16c8e0:
    // 0x16c8e0: 0x320f809  jalr        $t9
label_16c8e4:
    if (ctx->pc == 0x16C8E4u) {
        ctx->pc = 0x16C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8E0u;
        // 0x16c8e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8E8u;
        goto label_16c8e8;
    }
    ctx->pc = 0x16C8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C8E8u);
        ctx->pc = 0x16C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8E0u;
        // 0x16c8e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C8E0u, 0x16C8E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C8E8u;
label_16c8e8:
    // 0x16c8e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16c8ec:
    // 0x16c8ec: 0xc4550054  lwc1        $f21, 0x54($v0)
    ctx->pc = 0x16c8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16c8f0:
    // 0x16c8f0: 0xc055c40  jal         func_157100
label_16c8f4:
    if (ctx->pc == 0x16C8F4u) {
        ctx->pc = 0x16C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8F0u;
        // 0x16c8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8F8u;
        goto label_16c8f8;
    }
    ctx->pc = 0x16C8F0u;
    SET_GPR_U32(ctx, 31, 0x16C8F8u);
    ctx->pc = 0x16C8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8F0u;
    // 0x16c8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16C8F0u, 0x16C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C8F8u;
label_16c8f8:
    // 0x16c8f8: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x16c8f8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16c8fc:
    // 0x16c8fc: 0xc6200228  lwc1        $f0, 0x228($s1)
    ctx->pc = 0x16c8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c900:
    // 0x16c900: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16c900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16c904:
    // 0x16c904: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x16c904u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16c908:
    // 0x16c908: 0xc0548a8  jal         func_1522A0
label_16c90c:
    if (ctx->pc == 0x16C90Cu) {
        ctx->pc = 0x16C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C908u;
        // 0x16c90c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C910u;
        goto label_16c910;
    }
    ctx->pc = 0x16C908u;
    SET_GPR_U32(ctx, 31, 0x16C910u);
    ctx->pc = 0x16C90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C908u;
    // 0x16c90c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x16C908u, 0x16C910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C910u;
label_16c910:
    // 0x16c910: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16c910u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16c914:
    // 0x16c914: 0xc07edc4  jal         func_1FB710
label_16c918:
    if (ctx->pc == 0x16C918u) {
        ctx->pc = 0x16C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C914u;
        // 0x16c918: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C91Cu;
        goto label_16c91c;
    }
    ctx->pc = 0x16C914u;
    SET_GPR_U32(ctx, 31, 0x16C91Cu);
    ctx->pc = 0x16C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C914u;
    // 0x16c918: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x16C914u, 0x16C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C91Cu;
label_16c91c:
    // 0x16c91c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16c920:
    // 0x16c920: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16c920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16c924:
    // 0x16c924: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16c924u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16c928:
    // 0x16c928: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16c928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16c92c:
    // 0x16c92c: 0xe6000290  swc1        $f0, 0x290($s0)
    ctx->pc = 0x16c92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
label_16c930:
    // 0x16c930: 0xc07eea2  jal         func_1FBA88
label_16c934:
    if (ctx->pc == 0x16C934u) {
        ctx->pc = 0x16C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C930u;
        // 0x16c934: 0xae000294  sw          $zero, 0x294($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C938u;
        goto label_16c938;
    }
    ctx->pc = 0x16C930u;
    SET_GPR_U32(ctx, 31, 0x16C938u);
    ctx->pc = 0x16C934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C930u;
    // 0x16c934: 0xae000294  sw          $zero, 0x294($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x16C930u, 0x16C938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C938u;
label_16c938:
    // 0x16c938: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16c93c:
    // 0x16c93c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c940:
    // 0x16c940: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16c940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16c944:
    // 0x16c944: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16c944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c948:
    // 0x16c948: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16c948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16c94c:
    // 0x16c94c: 0xe6000298  swc1        $f0, 0x298($s0)
    ctx->pc = 0x16c94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
label_16c950:
    // 0x16c950: 0xe61502a0  swc1        $f21, 0x2A0($s0)
    ctx->pc = 0x16c950u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
label_16c954:
    // 0x16c954: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c958:
    // 0x16c958: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x16c958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_16c95c:
    // 0x16c95c: 0x320f809  jalr        $t9
label_16c960:
    if (ctx->pc == 0x16C960u) {
        ctx->pc = 0x16C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C95Cu;
        // 0x16c960: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C964u;
        goto label_16c964;
    }
    ctx->pc = 0x16C95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C964u);
        ctx->pc = 0x16C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C95Cu;
        // 0x16c960: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C95Cu, 0x16C964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C964u;
label_16c964:
    // 0x16c964: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16c964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16c968:
    // 0x16c968: 0x80420022  lb          $v0, 0x22($v0)
    ctx->pc = 0x16c968u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
label_16c96c:
    // 0x16c96c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_16c970:
    if (ctx->pc == 0x16C970u) {
        ctx->pc = 0x16C974u;
        goto label_16c974;
    }
    ctx->pc = 0x16C96Cu;
    {
        const bool branch_taken_0x16c96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c96c) {
            ctx->pc = 0x16C9DCu;
            goto label_16c9dc;
        }
    }
    ctx->pc = 0x16C974u;
label_16c974:
    // 0x16c974: 0xc621022c  lwc1        $f1, 0x22C($s1)
    ctx->pc = 0x16c974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c978:
    // 0x16c978: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16c978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c97c:
    // 0x16c97c: 0x0  nop
    ctx->pc = 0x16c97cu;
    // NOP
label_16c980:
    // 0x16c980: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16c980u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16c984:
    // 0x16c984: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16c984u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_16c988:
    // 0x16c988: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16c98c:
    // 0x16c98c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c990:
    // 0x16c990: 0x0  nop
    ctx->pc = 0x16c990u;
    // NOP
label_16c994:
    // 0x16c994: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c998:
    // 0x16c998: 0x0  nop
    ctx->pc = 0x16c998u;
    // NOP
label_16c99c:
    // 0x16c99c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16c9a0:
    if (ctx->pc == 0x16C9A0u) {
        ctx->pc = 0x16C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C99Cu;
        // 0x16c9a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C9A4u;
        goto label_16c9a4;
    }
    ctx->pc = 0x16C99Cu;
    {
        const bool branch_taken_0x16c99c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C99Cu;
        // 0x16c9a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c99c) {
            ctx->pc = 0x16C9A8u;
            goto label_16c9a8;
        }
    }
    ctx->pc = 0x16C9A4u;
label_16c9a4:
    // 0x16c9a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c9a8:
    // 0x16c9a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c9ac:
    // 0x16c9ac: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_16c9b0:
    if (ctx->pc == 0x16C9B0u) {
        ctx->pc = 0x16C9B4u;
        goto label_16c9b4;
    }
    ctx->pc = 0x16C9ACu;
    {
        const bool branch_taken_0x16c9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c9ac) {
            ctx->pc = 0x16C9DCu;
            goto label_16c9dc;
        }
    }
    ctx->pc = 0x16C9B4u;
label_16c9b4:
    // 0x16c9b4: 0xc600026c  lwc1        $f0, 0x26C($s0)
    ctx->pc = 0x16c9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c9b8:
    // 0x16c9b8: 0x3c023d1e  lui         $v0, 0x3D1E
    ctx->pc = 0x16c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15646 << 16));
label_16c9bc:
    // 0x16c9bc: 0x3442611c  ori         $v0, $v0, 0x611C
    ctx->pc = 0x16c9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24860);
label_16c9c0:
    // 0x16c9c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16c9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16c9c4:
    // 0x16c9c4: 0xc60201c0  lwc1        $f2, 0x1C0($s0)
    ctx->pc = 0x16c9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16c9c8:
    // 0x16c9c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16c9c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16c9cc:
    // 0x16c9cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x16c9ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_16c9d0:
    // 0x16c9d0: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x16c9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_16c9d4:
    // 0x16c9d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_16c9d8:
    if (ctx->pc == 0x16C9D8u) {
        ctx->pc = 0x16C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9D4u;
        // 0x16c9d8: 0xae000280  sw          $zero, 0x280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C9DCu;
        goto label_16c9dc;
    }
    ctx->pc = 0x16C9D4u;
    {
        const bool branch_taken_0x16c9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9D4u;
        // 0x16c9d8: 0xae000280  sw          $zero, 0x280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c9d4) {
            ctx->pc = 0x16C9E4u;
            goto label_16c9e4;
        }
    }
    ctx->pc = 0x16C9DCu;
label_16c9dc:
    // 0x16c9dc: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x16c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_16c9e0:
    // 0x16c9e0: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x16c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
label_16c9e4:
    // 0x16c9e4: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x16c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_16c9e8:
    // 0x16c9e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c9ec:
    // 0x16c9ec: 0xa44001e8  sh          $zero, 0x1E8($v0)
    ctx->pc = 0x16c9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 488), (uint16_t)GPR_U32(ctx, 0));
label_16c9f0:
    // 0x16c9f0: 0xae200230  sw          $zero, 0x230($s1)
    ctx->pc = 0x16c9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 0));
label_16c9f4:
    // 0x16c9f4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c9f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c9f8:
    // 0x16c9f8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16c9f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16c9fc:
    // 0x16c9fc: 0x320f809  jalr        $t9
label_16ca00:
    if (ctx->pc == 0x16CA00u) {
        ctx->pc = 0x16CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9FCu;
        // 0x16ca00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CA04u;
        goto label_16ca04;
    }
    ctx->pc = 0x16C9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CA04u);
        ctx->pc = 0x16CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9FCu;
        // 0x16ca00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C9FCu, 0x16CA04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CA04u;
label_16ca04:
    // 0x16ca04: 0x8e2401d4  lw          $a0, 0x1D4($s1)
    ctx->pc = 0x16ca04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_16ca08:
    // 0x16ca08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16ca08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16ca0c:
    // 0x16ca0c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_16ca10:
    if (ctx->pc == 0x16CA10u) {
        ctx->pc = 0x16CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA0Cu;
        // 0x16ca10: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CA14u;
        goto label_16ca14;
    }
    ctx->pc = 0x16CA0Cu;
    {
        const bool branch_taken_0x16ca0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA0Cu;
        // 0x16ca10: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca0c) {
            ctx->pc = 0x16CA30u;
            goto label_16ca30;
        }
    }
    ctx->pc = 0x16CA14u;
label_16ca14:
    // 0x16ca14: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_16ca18:
    if (ctx->pc == 0x16CA18u) {
        ctx->pc = 0x16CA1Cu;
        goto label_16ca1c;
    }
    ctx->pc = 0x16CA14u;
    {
        const bool branch_taken_0x16ca14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ca14) {
            ctx->pc = 0x16CA30u;
            goto label_16ca30;
        }
    }
    ctx->pc = 0x16CA1Cu;
label_16ca1c:
    // 0x16ca1c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16ca20:
    // 0x16ca20: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_16ca24:
    if (ctx->pc == 0x16CA24u) {
        ctx->pc = 0x16CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA20u;
        // 0x16ca24: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CA28u;
        goto label_16ca28;
    }
    ctx->pc = 0x16CA20u;
    {
        const bool branch_taken_0x16ca20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA20u;
        // 0x16ca24: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca20) {
            ctx->pc = 0x16CA30u;
            goto label_16ca30;
        }
    }
    ctx->pc = 0x16CA28u;
label_16ca28:
    // 0x16ca28: 0x1483003e  bne         $a0, $v1, . + 4 + (0x3E << 2)
label_16ca2c:
    if (ctx->pc == 0x16CA2Cu) {
        ctx->pc = 0x16CA30u;
        goto label_16ca30;
    }
    ctx->pc = 0x16CA28u;
    {
        const bool branch_taken_0x16ca28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ca28) {
            ctx->pc = 0x16CB24u;
            goto label_16cb24;
        }
    }
    ctx->pc = 0x16CA30u;
label_16ca30:
    // 0x16ca30: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x16ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_16ca34:
    // 0x16ca34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16ca38:
    // 0x16ca38: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_16ca3c:
    if (ctx->pc == 0x16CA3Cu) {
        ctx->pc = 0x16CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA38u;
        // 0x16ca3c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CA40u;
        goto label_16ca40;
    }
    ctx->pc = 0x16CA38u;
    {
        const bool branch_taken_0x16ca38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA38u;
        // 0x16ca3c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca38) {
            ctx->pc = 0x16CA70u;
            goto label_16ca70;
        }
    }
    ctx->pc = 0x16CA40u;
label_16ca40:
    // 0x16ca40: 0xc6220210  lwc1        $f2, 0x210($s1)
    ctx->pc = 0x16ca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16ca44:
    // 0x16ca44: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16ca48:
    // 0x16ca48: 0xc6210224  lwc1        $f1, 0x224($s1)
    ctx->pc = 0x16ca48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16ca4c:
    // 0x16ca4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16ca4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16ca50:
    // 0x16ca50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ca50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16ca54:
    // 0x16ca54: 0x0  nop
    ctx->pc = 0x16ca54u;
    // NOP
label_16ca58:
    // 0x16ca58: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x16ca58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_16ca5c:
    // 0x16ca5c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16ca5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_16ca60:
    // 0x16ca60: 0x0  nop
    ctx->pc = 0x16ca60u;
    // NOP
label_16ca64:
    // 0x16ca64: 0x0  nop
    ctx->pc = 0x16ca64u;
    // NOP
label_16ca68:
    // 0x16ca68: 0x1000000e  b           . + 4 + (0xE << 2)
label_16ca6c:
    if (ctx->pc == 0x16CA6Cu) {
        ctx->pc = 0x16CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA68u;
        // 0x16ca6c: 0xe620022c  swc1        $f0, 0x22C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CA70u;
        goto label_16ca70;
    }
    ctx->pc = 0x16CA68u;
    {
        const bool branch_taken_0x16ca68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA68u;
        // 0x16ca6c: 0xe620022c  swc1        $f0, 0x22C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca68) {
            ctx->pc = 0x16CAA4u;
            goto label_16caa4;
        }
    }
    ctx->pc = 0x16CA70u;
label_16ca70:
    // 0x16ca70: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_16ca74:
    if (ctx->pc == 0x16CA74u) {
        ctx->pc = 0x16CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA70u;
        // 0x16ca74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CA78u;
        goto label_16ca78;
    }
    ctx->pc = 0x16CA70u;
    {
        const bool branch_taken_0x16ca70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA70u;
        // 0x16ca74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca70) {
            ctx->pc = 0x16CAA8u;
            goto label_16caa8;
        }
    }
    ctx->pc = 0x16CA78u;
label_16ca78:
    // 0x16ca78: 0xc6220224  lwc1        $f2, 0x224($s1)
    ctx->pc = 0x16ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16ca7c:
    // 0x16ca7c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16ca80:
    // 0x16ca80: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x16ca80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16ca84:
    // 0x16ca84: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x16ca84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_16ca88:
    // 0x16ca88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16ca8c:
    // 0x16ca8c: 0xc6200210  lwc1        $f0, 0x210($s1)
    ctx->pc = 0x16ca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16ca90:
    // 0x16ca90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ca90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16ca94:
    // 0x16ca94: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x16ca94u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
label_16ca98:
    // 0x16ca98: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x16ca98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_16ca9c:
    // 0x16ca9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16ca9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16caa0:
    // 0x16caa0: 0xe620022c  swc1        $f0, 0x22C($s1)
    ctx->pc = 0x16caa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
label_16caa4:
    // 0x16caa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16caa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16caa8:
    // 0x16caa8: 0xc055c40  jal         func_157100
label_16caac:
    if (ctx->pc == 0x16CAACu) {
        ctx->pc = 0x16CAB0u;
        goto label_16cab0;
    }
    ctx->pc = 0x16CAA8u;
    SET_GPR_U32(ctx, 31, 0x16CAB0u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16CAA8u, 0x16CAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CAB0u;
label_16cab0:
    // 0x16cab0: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16cab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16cab4:
    // 0x16cab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cab8:
    // 0x16cab8: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x16cab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_16cabc:
    // 0x16cabc: 0x320f809  jalr        $t9
label_16cac0:
    if (ctx->pc == 0x16CAC0u) {
        ctx->pc = 0x16CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CABCu;
        // 0x16cac0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CAC4u;
        goto label_16cac4;
    }
    ctx->pc = 0x16CABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CAC4u);
        ctx->pc = 0x16CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CABCu;
        // 0x16cac0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CABCu, 0x16CAC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CAC4u;
label_16cac4:
    // 0x16cac4: 0xc60001c0  lwc1        $f0, 0x1C0($s0)
    ctx->pc = 0x16cac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16cac8:
    // 0x16cac8: 0xc6210200  lwc1        $f1, 0x200($s1)
    ctx->pc = 0x16cac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16cacc:
    // 0x16cacc: 0xc6340224  lwc1        $f20, 0x224($s1)
    ctx->pc = 0x16caccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16cad0:
    // 0x16cad0: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x16cad0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_16cad4:
    // 0x16cad4: 0xc0548a8  jal         func_1522A0
label_16cad8:
    if (ctx->pc == 0x16CAD8u) {
        ctx->pc = 0x16CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAD4u;
        // 0x16cad8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CADCu;
        goto label_16cadc;
    }
    ctx->pc = 0x16CAD4u;
    SET_GPR_U32(ctx, 31, 0x16CADCu);
    ctx->pc = 0x16CAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CAD4u;
    // 0x16cad8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x16CAD4u, 0x16CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CADCu;
label_16cadc:
    // 0x16cadc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16cadcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16cae0:
    // 0x16cae0: 0xc07edc4  jal         func_1FB710
label_16cae4:
    if (ctx->pc == 0x16CAE4u) {
        ctx->pc = 0x16CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAE0u;
        // 0x16cae4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CAE8u;
        goto label_16cae8;
    }
    ctx->pc = 0x16CAE0u;
    SET_GPR_U32(ctx, 31, 0x16CAE8u);
    ctx->pc = 0x16CAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CAE0u;
    // 0x16cae4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x16CAE0u, 0x16CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CAE8u;
label_16cae8:
    // 0x16cae8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16cae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_16caec:
    // 0x16caec: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x16caecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_16caf0:
    // 0x16caf0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16caf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16caf4:
    // 0x16caf4: 0xc07eea2  jal         func_1FBA88
label_16caf8:
    if (ctx->pc == 0x16CAF8u) {
        ctx->pc = 0x16CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAF4u;
        // 0x16caf8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CAFCu;
        goto label_16cafc;
    }
    ctx->pc = 0x16CAF4u;
    SET_GPR_U32(ctx, 31, 0x16CAFCu);
    ctx->pc = 0x16CAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CAF4u;
    // 0x16caf8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x16CAF4u, 0x16CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CAFCu;
label_16cafc:
    // 0x16cafc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16cafcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_16cb00:
    // 0x16cb00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cb04:
    // 0x16cb04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16cb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16cb08:
    // 0x16cb08: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x16cb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_16cb0c:
    // 0x16cb0c: 0xc620022c  lwc1        $f0, 0x22C($s1)
    ctx->pc = 0x16cb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16cb10:
    // 0x16cb10: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x16cb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_16cb14:
    // 0x16cb14: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16cb14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16cb18:
    // 0x16cb18: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x16cb18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_16cb1c:
    // 0x16cb1c: 0x320f809  jalr        $t9
label_16cb20:
    if (ctx->pc == 0x16CB20u) {
        ctx->pc = 0x16CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB1Cu;
        // 0x16cb20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB24u;
        goto label_16cb24;
    }
    ctx->pc = 0x16CB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CB24u);
        ctx->pc = 0x16CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB1Cu;
        // 0x16cb20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CB1Cu, 0x16CB24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CB24u;
label_16cb24:
    // 0x16cb24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16cb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16cb28:
    // 0x16cb28: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16cb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16cb2c:
    // 0x16cb2c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16cb2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16cb30:
    // 0x16cb30: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16cb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16cb34:
    // 0x16cb34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16cb34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16cb38:
    // 0x16cb38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16cb38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16cb3c:
    // 0x16cb3c: 0x3e00008  jr          $ra
label_16cb40:
    if (ctx->pc == 0x16CB40u) {
        ctx->pc = 0x16CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB3Cu;
        // 0x16cb40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB44u;
        goto label_fallthrough_0x16cb3c;
    }
    ctx->pc = 0x16CB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB3Cu;
        // 0x16cb40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16cb3c:
    ctx->pc = 0x16CB44u;
}
