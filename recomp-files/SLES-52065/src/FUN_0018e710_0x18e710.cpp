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

// Function: FUN_0018e710
// Address: 0x18e710 - 0x18ecb0
void FUN_0018e710_0x18e710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018e710_0x18e710");
#endif

    switch (ctx->pc) {
        case 0x18e710u: goto label_18e710;
        case 0x18e714u: goto label_18e714;
        case 0x18e718u: goto label_18e718;
        case 0x18e71cu: goto label_18e71c;
        case 0x18e720u: goto label_18e720;
        case 0x18e724u: goto label_18e724;
        case 0x18e728u: goto label_18e728;
        case 0x18e72cu: goto label_18e72c;
        case 0x18e730u: goto label_18e730;
        case 0x18e734u: goto label_18e734;
        case 0x18e738u: goto label_18e738;
        case 0x18e73cu: goto label_18e73c;
        case 0x18e740u: goto label_18e740;
        case 0x18e744u: goto label_18e744;
        case 0x18e748u: goto label_18e748;
        case 0x18e74cu: goto label_18e74c;
        case 0x18e750u: goto label_18e750;
        case 0x18e754u: goto label_18e754;
        case 0x18e758u: goto label_18e758;
        case 0x18e75cu: goto label_18e75c;
        case 0x18e760u: goto label_18e760;
        case 0x18e764u: goto label_18e764;
        case 0x18e768u: goto label_18e768;
        case 0x18e76cu: goto label_18e76c;
        case 0x18e770u: goto label_18e770;
        case 0x18e774u: goto label_18e774;
        case 0x18e778u: goto label_18e778;
        case 0x18e77cu: goto label_18e77c;
        case 0x18e780u: goto label_18e780;
        case 0x18e784u: goto label_18e784;
        case 0x18e788u: goto label_18e788;
        case 0x18e78cu: goto label_18e78c;
        case 0x18e790u: goto label_18e790;
        case 0x18e794u: goto label_18e794;
        case 0x18e798u: goto label_18e798;
        case 0x18e79cu: goto label_18e79c;
        case 0x18e7a0u: goto label_18e7a0;
        case 0x18e7a4u: goto label_18e7a4;
        case 0x18e7a8u: goto label_18e7a8;
        case 0x18e7acu: goto label_18e7ac;
        case 0x18e7b0u: goto label_18e7b0;
        case 0x18e7b4u: goto label_18e7b4;
        case 0x18e7b8u: goto label_18e7b8;
        case 0x18e7bcu: goto label_18e7bc;
        case 0x18e7c0u: goto label_18e7c0;
        case 0x18e7c4u: goto label_18e7c4;
        case 0x18e7c8u: goto label_18e7c8;
        case 0x18e7ccu: goto label_18e7cc;
        case 0x18e7d0u: goto label_18e7d0;
        case 0x18e7d4u: goto label_18e7d4;
        case 0x18e7d8u: goto label_18e7d8;
        case 0x18e7dcu: goto label_18e7dc;
        case 0x18e7e0u: goto label_18e7e0;
        case 0x18e7e4u: goto label_18e7e4;
        case 0x18e7e8u: goto label_18e7e8;
        case 0x18e7ecu: goto label_18e7ec;
        case 0x18e7f0u: goto label_18e7f0;
        case 0x18e7f4u: goto label_18e7f4;
        case 0x18e7f8u: goto label_18e7f8;
        case 0x18e7fcu: goto label_18e7fc;
        case 0x18e800u: goto label_18e800;
        case 0x18e804u: goto label_18e804;
        case 0x18e808u: goto label_18e808;
        case 0x18e80cu: goto label_18e80c;
        case 0x18e810u: goto label_18e810;
        case 0x18e814u: goto label_18e814;
        case 0x18e818u: goto label_18e818;
        case 0x18e81cu: goto label_18e81c;
        case 0x18e820u: goto label_18e820;
        case 0x18e824u: goto label_18e824;
        case 0x18e828u: goto label_18e828;
        case 0x18e82cu: goto label_18e82c;
        case 0x18e830u: goto label_18e830;
        case 0x18e834u: goto label_18e834;
        case 0x18e838u: goto label_18e838;
        case 0x18e83cu: goto label_18e83c;
        case 0x18e840u: goto label_18e840;
        case 0x18e844u: goto label_18e844;
        case 0x18e848u: goto label_18e848;
        case 0x18e84cu: goto label_18e84c;
        case 0x18e850u: goto label_18e850;
        case 0x18e854u: goto label_18e854;
        case 0x18e858u: goto label_18e858;
        case 0x18e85cu: goto label_18e85c;
        case 0x18e860u: goto label_18e860;
        case 0x18e864u: goto label_18e864;
        case 0x18e868u: goto label_18e868;
        case 0x18e86cu: goto label_18e86c;
        case 0x18e870u: goto label_18e870;
        case 0x18e874u: goto label_18e874;
        case 0x18e878u: goto label_18e878;
        case 0x18e87cu: goto label_18e87c;
        case 0x18e880u: goto label_18e880;
        case 0x18e884u: goto label_18e884;
        case 0x18e888u: goto label_18e888;
        case 0x18e88cu: goto label_18e88c;
        case 0x18e890u: goto label_18e890;
        case 0x18e894u: goto label_18e894;
        case 0x18e898u: goto label_18e898;
        case 0x18e89cu: goto label_18e89c;
        case 0x18e8a0u: goto label_18e8a0;
        case 0x18e8a4u: goto label_18e8a4;
        case 0x18e8a8u: goto label_18e8a8;
        case 0x18e8acu: goto label_18e8ac;
        case 0x18e8b0u: goto label_18e8b0;
        case 0x18e8b4u: goto label_18e8b4;
        case 0x18e8b8u: goto label_18e8b8;
        case 0x18e8bcu: goto label_18e8bc;
        case 0x18e8c0u: goto label_18e8c0;
        case 0x18e8c4u: goto label_18e8c4;
        case 0x18e8c8u: goto label_18e8c8;
        case 0x18e8ccu: goto label_18e8cc;
        case 0x18e8d0u: goto label_18e8d0;
        case 0x18e8d4u: goto label_18e8d4;
        case 0x18e8d8u: goto label_18e8d8;
        case 0x18e8dcu: goto label_18e8dc;
        case 0x18e8e0u: goto label_18e8e0;
        case 0x18e8e4u: goto label_18e8e4;
        case 0x18e8e8u: goto label_18e8e8;
        case 0x18e8ecu: goto label_18e8ec;
        case 0x18e8f0u: goto label_18e8f0;
        case 0x18e8f4u: goto label_18e8f4;
        case 0x18e8f8u: goto label_18e8f8;
        case 0x18e8fcu: goto label_18e8fc;
        case 0x18e900u: goto label_18e900;
        case 0x18e904u: goto label_18e904;
        case 0x18e908u: goto label_18e908;
        case 0x18e90cu: goto label_18e90c;
        case 0x18e910u: goto label_18e910;
        case 0x18e914u: goto label_18e914;
        case 0x18e918u: goto label_18e918;
        case 0x18e91cu: goto label_18e91c;
        case 0x18e920u: goto label_18e920;
        case 0x18e924u: goto label_18e924;
        case 0x18e928u: goto label_18e928;
        case 0x18e92cu: goto label_18e92c;
        case 0x18e930u: goto label_18e930;
        case 0x18e934u: goto label_18e934;
        case 0x18e938u: goto label_18e938;
        case 0x18e93cu: goto label_18e93c;
        case 0x18e940u: goto label_18e940;
        case 0x18e944u: goto label_18e944;
        case 0x18e948u: goto label_18e948;
        case 0x18e94cu: goto label_18e94c;
        case 0x18e950u: goto label_18e950;
        case 0x18e954u: goto label_18e954;
        case 0x18e958u: goto label_18e958;
        case 0x18e95cu: goto label_18e95c;
        case 0x18e960u: goto label_18e960;
        case 0x18e964u: goto label_18e964;
        case 0x18e968u: goto label_18e968;
        case 0x18e96cu: goto label_18e96c;
        case 0x18e970u: goto label_18e970;
        case 0x18e974u: goto label_18e974;
        case 0x18e978u: goto label_18e978;
        case 0x18e97cu: goto label_18e97c;
        case 0x18e980u: goto label_18e980;
        case 0x18e984u: goto label_18e984;
        case 0x18e988u: goto label_18e988;
        case 0x18e98cu: goto label_18e98c;
        case 0x18e990u: goto label_18e990;
        case 0x18e994u: goto label_18e994;
        case 0x18e998u: goto label_18e998;
        case 0x18e99cu: goto label_18e99c;
        case 0x18e9a0u: goto label_18e9a0;
        case 0x18e9a4u: goto label_18e9a4;
        case 0x18e9a8u: goto label_18e9a8;
        case 0x18e9acu: goto label_18e9ac;
        case 0x18e9b0u: goto label_18e9b0;
        case 0x18e9b4u: goto label_18e9b4;
        case 0x18e9b8u: goto label_18e9b8;
        case 0x18e9bcu: goto label_18e9bc;
        case 0x18e9c0u: goto label_18e9c0;
        case 0x18e9c4u: goto label_18e9c4;
        case 0x18e9c8u: goto label_18e9c8;
        case 0x18e9ccu: goto label_18e9cc;
        case 0x18e9d0u: goto label_18e9d0;
        case 0x18e9d4u: goto label_18e9d4;
        case 0x18e9d8u: goto label_18e9d8;
        case 0x18e9dcu: goto label_18e9dc;
        case 0x18e9e0u: goto label_18e9e0;
        case 0x18e9e4u: goto label_18e9e4;
        case 0x18e9e8u: goto label_18e9e8;
        case 0x18e9ecu: goto label_18e9ec;
        case 0x18e9f0u: goto label_18e9f0;
        case 0x18e9f4u: goto label_18e9f4;
        case 0x18e9f8u: goto label_18e9f8;
        case 0x18e9fcu: goto label_18e9fc;
        case 0x18ea00u: goto label_18ea00;
        case 0x18ea04u: goto label_18ea04;
        case 0x18ea08u: goto label_18ea08;
        case 0x18ea0cu: goto label_18ea0c;
        case 0x18ea10u: goto label_18ea10;
        case 0x18ea14u: goto label_18ea14;
        case 0x18ea18u: goto label_18ea18;
        case 0x18ea1cu: goto label_18ea1c;
        case 0x18ea20u: goto label_18ea20;
        case 0x18ea24u: goto label_18ea24;
        case 0x18ea28u: goto label_18ea28;
        case 0x18ea2cu: goto label_18ea2c;
        case 0x18ea30u: goto label_18ea30;
        case 0x18ea34u: goto label_18ea34;
        case 0x18ea38u: goto label_18ea38;
        case 0x18ea3cu: goto label_18ea3c;
        case 0x18ea40u: goto label_18ea40;
        case 0x18ea44u: goto label_18ea44;
        case 0x18ea48u: goto label_18ea48;
        case 0x18ea4cu: goto label_18ea4c;
        case 0x18ea50u: goto label_18ea50;
        case 0x18ea54u: goto label_18ea54;
        case 0x18ea58u: goto label_18ea58;
        case 0x18ea5cu: goto label_18ea5c;
        case 0x18ea60u: goto label_18ea60;
        case 0x18ea64u: goto label_18ea64;
        case 0x18ea68u: goto label_18ea68;
        case 0x18ea6cu: goto label_18ea6c;
        case 0x18ea70u: goto label_18ea70;
        case 0x18ea74u: goto label_18ea74;
        case 0x18ea78u: goto label_18ea78;
        case 0x18ea7cu: goto label_18ea7c;
        case 0x18ea80u: goto label_18ea80;
        case 0x18ea84u: goto label_18ea84;
        case 0x18ea88u: goto label_18ea88;
        case 0x18ea8cu: goto label_18ea8c;
        case 0x18ea90u: goto label_18ea90;
        case 0x18ea94u: goto label_18ea94;
        case 0x18ea98u: goto label_18ea98;
        case 0x18ea9cu: goto label_18ea9c;
        case 0x18eaa0u: goto label_18eaa0;
        case 0x18eaa4u: goto label_18eaa4;
        case 0x18eaa8u: goto label_18eaa8;
        case 0x18eaacu: goto label_18eaac;
        case 0x18eab0u: goto label_18eab0;
        case 0x18eab4u: goto label_18eab4;
        case 0x18eab8u: goto label_18eab8;
        case 0x18eabcu: goto label_18eabc;
        case 0x18eac0u: goto label_18eac0;
        case 0x18eac4u: goto label_18eac4;
        case 0x18eac8u: goto label_18eac8;
        case 0x18eaccu: goto label_18eacc;
        case 0x18ead0u: goto label_18ead0;
        case 0x18ead4u: goto label_18ead4;
        case 0x18ead8u: goto label_18ead8;
        case 0x18eadcu: goto label_18eadc;
        case 0x18eae0u: goto label_18eae0;
        case 0x18eae4u: goto label_18eae4;
        case 0x18eae8u: goto label_18eae8;
        case 0x18eaecu: goto label_18eaec;
        case 0x18eaf0u: goto label_18eaf0;
        case 0x18eaf4u: goto label_18eaf4;
        case 0x18eaf8u: goto label_18eaf8;
        case 0x18eafcu: goto label_18eafc;
        case 0x18eb00u: goto label_18eb00;
        case 0x18eb04u: goto label_18eb04;
        case 0x18eb08u: goto label_18eb08;
        case 0x18eb0cu: goto label_18eb0c;
        case 0x18eb10u: goto label_18eb10;
        case 0x18eb14u: goto label_18eb14;
        case 0x18eb18u: goto label_18eb18;
        case 0x18eb1cu: goto label_18eb1c;
        case 0x18eb20u: goto label_18eb20;
        case 0x18eb24u: goto label_18eb24;
        case 0x18eb28u: goto label_18eb28;
        case 0x18eb2cu: goto label_18eb2c;
        case 0x18eb30u: goto label_18eb30;
        case 0x18eb34u: goto label_18eb34;
        case 0x18eb38u: goto label_18eb38;
        case 0x18eb3cu: goto label_18eb3c;
        case 0x18eb40u: goto label_18eb40;
        case 0x18eb44u: goto label_18eb44;
        case 0x18eb48u: goto label_18eb48;
        case 0x18eb4cu: goto label_18eb4c;
        case 0x18eb50u: goto label_18eb50;
        case 0x18eb54u: goto label_18eb54;
        case 0x18eb58u: goto label_18eb58;
        case 0x18eb5cu: goto label_18eb5c;
        case 0x18eb60u: goto label_18eb60;
        case 0x18eb64u: goto label_18eb64;
        case 0x18eb68u: goto label_18eb68;
        case 0x18eb6cu: goto label_18eb6c;
        case 0x18eb70u: goto label_18eb70;
        case 0x18eb74u: goto label_18eb74;
        case 0x18eb78u: goto label_18eb78;
        case 0x18eb7cu: goto label_18eb7c;
        case 0x18eb80u: goto label_18eb80;
        case 0x18eb84u: goto label_18eb84;
        case 0x18eb88u: goto label_18eb88;
        case 0x18eb8cu: goto label_18eb8c;
        case 0x18eb90u: goto label_18eb90;
        case 0x18eb94u: goto label_18eb94;
        case 0x18eb98u: goto label_18eb98;
        case 0x18eb9cu: goto label_18eb9c;
        case 0x18eba0u: goto label_18eba0;
        case 0x18eba4u: goto label_18eba4;
        case 0x18eba8u: goto label_18eba8;
        case 0x18ebacu: goto label_18ebac;
        case 0x18ebb0u: goto label_18ebb0;
        case 0x18ebb4u: goto label_18ebb4;
        case 0x18ebb8u: goto label_18ebb8;
        case 0x18ebbcu: goto label_18ebbc;
        case 0x18ebc0u: goto label_18ebc0;
        case 0x18ebc4u: goto label_18ebc4;
        case 0x18ebc8u: goto label_18ebc8;
        case 0x18ebccu: goto label_18ebcc;
        case 0x18ebd0u: goto label_18ebd0;
        case 0x18ebd4u: goto label_18ebd4;
        case 0x18ebd8u: goto label_18ebd8;
        case 0x18ebdcu: goto label_18ebdc;
        case 0x18ebe0u: goto label_18ebe0;
        case 0x18ebe4u: goto label_18ebe4;
        case 0x18ebe8u: goto label_18ebe8;
        case 0x18ebecu: goto label_18ebec;
        case 0x18ebf0u: goto label_18ebf0;
        case 0x18ebf4u: goto label_18ebf4;
        case 0x18ebf8u: goto label_18ebf8;
        case 0x18ebfcu: goto label_18ebfc;
        case 0x18ec00u: goto label_18ec00;
        case 0x18ec04u: goto label_18ec04;
        case 0x18ec08u: goto label_18ec08;
        case 0x18ec0cu: goto label_18ec0c;
        case 0x18ec10u: goto label_18ec10;
        case 0x18ec14u: goto label_18ec14;
        case 0x18ec18u: goto label_18ec18;
        case 0x18ec1cu: goto label_18ec1c;
        case 0x18ec20u: goto label_18ec20;
        case 0x18ec24u: goto label_18ec24;
        case 0x18ec28u: goto label_18ec28;
        case 0x18ec2cu: goto label_18ec2c;
        case 0x18ec30u: goto label_18ec30;
        case 0x18ec34u: goto label_18ec34;
        case 0x18ec38u: goto label_18ec38;
        case 0x18ec3cu: goto label_18ec3c;
        case 0x18ec40u: goto label_18ec40;
        case 0x18ec44u: goto label_18ec44;
        case 0x18ec48u: goto label_18ec48;
        case 0x18ec4cu: goto label_18ec4c;
        case 0x18ec50u: goto label_18ec50;
        case 0x18ec54u: goto label_18ec54;
        case 0x18ec58u: goto label_18ec58;
        case 0x18ec5cu: goto label_18ec5c;
        case 0x18ec60u: goto label_18ec60;
        case 0x18ec64u: goto label_18ec64;
        case 0x18ec68u: goto label_18ec68;
        case 0x18ec6cu: goto label_18ec6c;
        case 0x18ec70u: goto label_18ec70;
        case 0x18ec74u: goto label_18ec74;
        case 0x18ec78u: goto label_18ec78;
        case 0x18ec7cu: goto label_18ec7c;
        case 0x18ec80u: goto label_18ec80;
        case 0x18ec84u: goto label_18ec84;
        case 0x18ec88u: goto label_18ec88;
        case 0x18ec8cu: goto label_18ec8c;
        case 0x18ec90u: goto label_18ec90;
        case 0x18ec94u: goto label_18ec94;
        case 0x18ec98u: goto label_18ec98;
        case 0x18ec9cu: goto label_18ec9c;
        case 0x18eca0u: goto label_18eca0;
        case 0x18eca4u: goto label_18eca4;
        case 0x18eca8u: goto label_18eca8;
        case 0x18ecacu: goto label_18ecac;
        default: break;
    }

    ctx->pc = 0x18e710u;

label_18e710:
    // 0x18e710: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18e710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_18e714:
    // 0x18e714: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18e714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18e718:
    // 0x18e718: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18e718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18e71c:
    // 0x18e71c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18e720:
    // 0x18e720: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18e724:
    // 0x18e724: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18e724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18e728:
    // 0x18e728: 0x8c832720  lw          $v1, 0x2720($a0)
    ctx->pc = 0x18e728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10016)));
label_18e72c:
    // 0x18e72c: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x18e72cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_18e730:
    // 0x18e730: 0x10200158  beqz        $at, . + 4 + (0x158 << 2)
label_18e734:
    if (ctx->pc == 0x18E734u) {
        ctx->pc = 0x18E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E730u;
        // 0x18e734: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E738u;
        goto label_18e738;
    }
    ctx->pc = 0x18E730u;
    {
        const bool branch_taken_0x18e730 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E730u;
        // 0x18e734: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e730) {
            ctx->pc = 0x18EC94u;
            goto label_18ec94;
        }
    }
    ctx->pc = 0x18E738u;
label_18e738:
    // 0x18e738: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x18e738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_18e73c:
    // 0x18e73c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18e740:
    // 0x18e740: 0x2484fd80  addiu       $a0, $a0, -0x280
    ctx->pc = 0x18e740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
label_18e744:
    // 0x18e744: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18e744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18e748:
    // 0x18e748: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18e748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18e74c:
    // 0x18e74c: 0x600008  jr          $v1
label_18e750:
    if (ctx->pc == 0x18E750u) {
        ctx->pc = 0x18E754u;
        goto label_18e754;
    }
    ctx->pc = 0x18E74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E754u: goto label_18e754;
            case 0x18E7B0u: goto label_18e7b0;
            case 0x18E8B4u: goto label_18e8b4;
            case 0x18E9C8u: goto label_18e9c8;
            case 0x18EBD8u: goto label_18ebd8;
            case 0x18EC0Cu: goto label_18ec0c;
            case 0x18EC60u: goto label_18ec60;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E74Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x18E754u;
label_18e754:
    // 0x18e754: 0x8e250484  lw          $a1, 0x484($s1)
    ctx->pc = 0x18e754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18e758:
    // 0x18e758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e75c:
    // 0x18e75c: 0x8e262724  lw          $a2, 0x2724($s1)
    ctx->pc = 0x18e75cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18e760:
    // 0x18e760: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18e760u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_18e764:
    // 0x18e764: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x18e764u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_18e768:
    // 0x18e768: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x18e768u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18e76c:
    // 0x18e76c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x18e76cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_18e770:
    // 0x18e770: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18e770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_18e774:
    // 0x18e774: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x18e774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_18e778:
    // 0x18e778: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x18e778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_18e77c:
    // 0x18e77c: 0xae240470  sw          $a0, 0x470($s1)
    ctx->pc = 0x18e77cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1136), GPR_U32(ctx, 4));
label_18e780:
    // 0x18e780: 0x8e25271c  lw          $a1, 0x271C($s1)
    ctx->pc = 0x18e780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10012)));
label_18e784:
    // 0x18e784: 0x8e262724  lw          $a2, 0x2724($s1)
    ctx->pc = 0x18e784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18e788:
    // 0x18e788: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18e788u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_18e78c:
    // 0x18e78c: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x18e78cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_18e790:
    // 0x18e790: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x18e790u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18e794:
    // 0x18e794: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x18e794u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_18e798:
    // 0x18e798: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18e798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_18e79c:
    // 0x18e79c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x18e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_18e7a0:
    // 0x18e7a0: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x18e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_18e7a4:
    // 0x18e7a4: 0xae240474  sw          $a0, 0x474($s1)
    ctx->pc = 0x18e7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1140), GPR_U32(ctx, 4));
label_18e7a8:
    // 0x18e7a8: 0x1000013a  b           . + 4 + (0x13A << 2)
label_18e7ac:
    if (ctx->pc == 0x18E7ACu) {
        ctx->pc = 0x18E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7A8u;
        // 0x18e7ac: 0xae232720  sw          $v1, 0x2720($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E7B0u;
        goto label_18e7b0;
    }
    ctx->pc = 0x18E7A8u;
    {
        const bool branch_taken_0x18e7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7A8u;
        // 0x18e7ac: 0xae232720  sw          $v1, 0x2720($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7a8) {
            ctx->pc = 0x18EC94u;
            goto label_18ec94;
        }
    }
    ctx->pc = 0x18E7B0u;
label_18e7b0:
    // 0x18e7b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e7b4:
    // 0x18e7b4: 0xae222720  sw          $v0, 0x2720($s1)
    ctx->pc = 0x18e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 2));
label_18e7b8:
    // 0x18e7b8: 0x8e250484  lw          $a1, 0x484($s1)
    ctx->pc = 0x18e7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18e7bc:
    // 0x18e7bc: 0x8e23271c  lw          $v1, 0x271C($s1)
    ctx->pc = 0x18e7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10012)));
label_18e7c0:
    // 0x18e7c0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x18e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_18e7c4:
    // 0x18e7c4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_18e7c8:
    if (ctx->pc == 0x18E7C8u) {
        ctx->pc = 0x18E7CCu;
        goto label_18e7cc;
    }
    ctx->pc = 0x18E7C4u;
    {
        const bool branch_taken_0x18e7c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18e7c4) {
            ctx->pc = 0x18E7F0u;
            goto label_18e7f0;
        }
    }
    ctx->pc = 0x18E7CCu;
label_18e7cc:
    // 0x18e7cc: 0x8e242724  lw          $a0, 0x2724($s1)
    ctx->pc = 0x18e7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18e7d0:
    // 0x18e7d0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x18e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_18e7d4:
    // 0x18e7d4: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x18e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18e7d8:
    // 0x18e7d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18e7dc:
    // 0x18e7dc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e7e0:
    // 0x18e7e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18e7e4:
    // 0x18e7e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18e7e8:
    // 0x18e7e8: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x18e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_18e7ec:
    // 0x18e7ec: 0xae220470  sw          $v0, 0x470($s1)
    ctx->pc = 0x18e7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1136), GPR_U32(ctx, 2));
label_18e7f0:
    // 0x18e7f0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18e7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_18e7f4:
    // 0x18e7f4: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x18e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18e7f8:
    // 0x18e7f8: 0x24a52900  addiu       $a1, $a1, 0x2900
    ctx->pc = 0x18e7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10496));
label_18e7fc:
    // 0x18e7fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18e800:
    // 0x18e800: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x18e800u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_18e804:
    // 0x18e804: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x18e804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e808:
    // 0x18e808: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18e808u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_18e80c:
    // 0x18e80c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x18e80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_18e810:
    // 0x18e810: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x18e810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18e814:
    // 0x18e814: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18e814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_18e818:
    // 0x18e818: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18e818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18e81c:
    // 0x18e81c: 0xc063e40  jal         func_18F900
label_18e820:
    if (ctx->pc == 0x18E820u) {
        ctx->pc = 0x18E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E81Cu;
        // 0x18e820: 0x24520274  addiu       $s2, $v0, 0x274 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E824u;
        goto label_18e824;
    }
    ctx->pc = 0x18E81Cu;
    SET_GPR_U32(ctx, 31, 0x18E824u);
    ctx->pc = 0x18E820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E81Cu;
    // 0x18e820: 0x24520274  addiu       $s2, $v0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F900u, 0x18E81Cu, 0x18E824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E824u;
label_18e824:
    // 0x18e824: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18e824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18e828:
    // 0x18e828: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18e828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e82c:
    // 0x18e82c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x18e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_18e830:
    // 0x18e830: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18e830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18e834:
    // 0x18e834: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18e834u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18e838:
    // 0x18e838: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18e838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_18e83c:
    // 0x18e83c: 0xaca60254  sw          $a2, 0x254($a1)
    ctx->pc = 0x18e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 596), GPR_U32(ctx, 6));
label_18e840:
    // 0x18e840: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18e840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18e844:
    // 0x18e844: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x18e844u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18e848:
    // 0x18e848: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18e848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_18e84c:
    // 0x18e84c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x18e84cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_18e850:
    // 0x18e850: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x18e850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_18e854:
    // 0x18e854: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18e854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_18e858:
    // 0x18e858: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18e858u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_18e85c:
    // 0x18e85c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18e85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_18e860:
    // 0x18e860: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x18e860u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
label_18e864:
    // 0x18e864: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18e864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18e868:
    // 0x18e868: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x18e868u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18e86c:
    // 0x18e86c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18e86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_18e870:
    // 0x18e870: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x18e870u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_18e874:
    // 0x18e874: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x18e874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_18e878:
    // 0x18e878: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18e878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_18e87c:
    // 0x18e87c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18e87cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_18e880:
    // 0x18e880: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18e880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_18e884:
    // 0x18e884: 0xaca00154  sw          $zero, 0x154($a1)
    ctx->pc = 0x18e884u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 0));
label_18e888:
    // 0x18e888: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18e888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18e88c:
    // 0x18e88c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x18e88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18e890:
    // 0x18e890: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x18e890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e894:
    // 0x18e894: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x18e894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e898:
    // 0x18e898: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x18e898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_18e89c:
    // 0x18e89c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x18e89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_18e8a0:
    // 0x18e8a0: 0xe4820274  swc1        $f2, 0x274($a0)
    ctx->pc = 0x18e8a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 628), bits); }
label_18e8a4:
    // 0x18e8a4: 0xe4810278  swc1        $f1, 0x278($a0)
    ctx->pc = 0x18e8a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 632), bits); }
label_18e8a8:
    // 0x18e8a8: 0xe480027c  swc1        $f0, 0x27C($a0)
    ctx->pc = 0x18e8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 636), bits); }
label_18e8ac:
    // 0x18e8ac: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_18e8b0:
    if (ctx->pc == 0x18E8B0u) {
        ctx->pc = 0x18E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8ACu;
        // 0x18e8b0: 0xac830280  sw          $v1, 0x280($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E8B4u;
        goto label_18e8b4;
    }
    ctx->pc = 0x18E8ACu;
    {
        const bool branch_taken_0x18e8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8ACu;
        // 0x18e8b0: 0xac830280  sw          $v1, 0x280($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e8ac) {
            ctx->pc = 0x18EC94u;
            goto label_18ec94;
        }
    }
    ctx->pc = 0x18E8B4u;
label_18e8b4:
    // 0x18e8b4: 0x8e250484  lw          $a1, 0x484($s1)
    ctx->pc = 0x18e8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18e8b8:
    // 0x18e8b8: 0x8e23271c  lw          $v1, 0x271C($s1)
    ctx->pc = 0x18e8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10012)));
label_18e8bc:
    // 0x18e8bc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x18e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_18e8c0:
    // 0x18e8c0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_18e8c4:
    if (ctx->pc == 0x18E8C4u) {
        ctx->pc = 0x18E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8C0u;
        // 0x18e8c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E8C8u;
        goto label_18e8c8;
    }
    ctx->pc = 0x18E8C0u;
    {
        const bool branch_taken_0x18e8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8C0u;
        // 0x18e8c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e8c0) {
            ctx->pc = 0x18E8F0u;
            goto label_18e8f0;
        }
    }
    ctx->pc = 0x18E8C8u;
label_18e8c8:
    // 0x18e8c8: 0x8e242724  lw          $a0, 0x2724($s1)
    ctx->pc = 0x18e8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18e8cc:
    // 0x18e8cc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x18e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_18e8d0:
    // 0x18e8d0: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x18e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18e8d4:
    // 0x18e8d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18e8d8:
    // 0x18e8d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e8dc:
    // 0x18e8dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18e8e0:
    // 0x18e8e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18e8e4:
    // 0x18e8e4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x18e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_18e8e8:
    // 0x18e8e8: 0xae220474  sw          $v0, 0x474($s1)
    ctx->pc = 0x18e8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1140), GPR_U32(ctx, 2));
label_18e8ec:
    // 0x18e8ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e8f0:
    // 0x18e8f0: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x18e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
label_18e8f4:
    // 0x18e8f4: 0xae232720  sw          $v1, 0x2720($s1)
    ctx->pc = 0x18e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 3));
label_18e8f8:
    // 0x18e8f8: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x18e8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_18e8fc:
    // 0x18e8fc: 0xae220494  sw          $v0, 0x494($s1)
    ctx->pc = 0x18e8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1172), GPR_U32(ctx, 2));
label_18e900:
    // 0x18e900: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18e900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_18e904:
    // 0x18e904: 0x24a52910  addiu       $a1, $a1, 0x2910
    ctx->pc = 0x18e904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10512));
label_18e908:
    // 0x18e908: 0xae220498  sw          $v0, 0x498($s1)
    ctx->pc = 0x18e908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1176), GPR_U32(ctx, 2));
label_18e90c:
    // 0x18e90c: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x18e90cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_18e910:
    // 0x18e910: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x18e910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e914:
    // 0x18e914: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x18e914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18e918:
    // 0x18e918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18e91c:
    // 0x18e91c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18e91cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_18e920:
    // 0x18e920: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x18e920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_18e924:
    // 0x18e924: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x18e924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18e928:
    // 0x18e928: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18e928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_18e92c:
    // 0x18e92c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18e930:
    // 0x18e930: 0xc063e40  jal         func_18F900
label_18e934:
    if (ctx->pc == 0x18E934u) {
        ctx->pc = 0x18E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E930u;
        // 0x18e934: 0x24520274  addiu       $s2, $v0, 0x274 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E938u;
        goto label_18e938;
    }
    ctx->pc = 0x18E930u;
    SET_GPR_U32(ctx, 31, 0x18E938u);
    ctx->pc = 0x18E934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E930u;
    // 0x18e934: 0x24520274  addiu       $s2, $v0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F900u, 0x18E930u, 0x18E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E938u;
label_18e938:
    // 0x18e938: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18e938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18e93c:
    // 0x18e93c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18e93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e940:
    // 0x18e940: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x18e940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_18e944:
    // 0x18e944: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18e944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18e948:
    // 0x18e948: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18e948u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18e94c:
    // 0x18e94c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18e94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_18e950:
    // 0x18e950: 0xaca60254  sw          $a2, 0x254($a1)
    ctx->pc = 0x18e950u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 596), GPR_U32(ctx, 6));
label_18e954:
    // 0x18e954: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18e954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18e958:
    // 0x18e958: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x18e958u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18e95c:
    // 0x18e95c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18e95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_18e960:
    // 0x18e960: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x18e960u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_18e964:
    // 0x18e964: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x18e964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_18e968:
    // 0x18e968: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18e968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_18e96c:
    // 0x18e96c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18e96cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_18e970:
    // 0x18e970: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18e970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_18e974:
    // 0x18e974: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x18e974u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
label_18e978:
    // 0x18e978: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18e978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18e97c:
    // 0x18e97c: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x18e97cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18e980:
    // 0x18e980: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18e980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_18e984:
    // 0x18e984: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x18e984u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_18e988:
    // 0x18e988: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x18e988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_18e98c:
    // 0x18e98c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18e98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_18e990:
    // 0x18e990: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18e990u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_18e994:
    // 0x18e994: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18e994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_18e998:
    // 0x18e998: 0xaca00154  sw          $zero, 0x154($a1)
    ctx->pc = 0x18e998u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 0));
label_18e99c:
    // 0x18e99c: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18e99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18e9a0:
    // 0x18e9a0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x18e9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18e9a4:
    // 0x18e9a4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x18e9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e9a8:
    // 0x18e9a8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x18e9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e9ac:
    // 0x18e9ac: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x18e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_18e9b0:
    // 0x18e9b0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x18e9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_18e9b4:
    // 0x18e9b4: 0xe4820274  swc1        $f2, 0x274($a0)
    ctx->pc = 0x18e9b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 628), bits); }
label_18e9b8:
    // 0x18e9b8: 0xe4810278  swc1        $f1, 0x278($a0)
    ctx->pc = 0x18e9b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 632), bits); }
label_18e9bc:
    // 0x18e9bc: 0xe480027c  swc1        $f0, 0x27C($a0)
    ctx->pc = 0x18e9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 636), bits); }
label_18e9c0:
    // 0x18e9c0: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_18e9c4:
    if (ctx->pc == 0x18E9C4u) {
        ctx->pc = 0x18E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9C0u;
        // 0x18e9c4: 0xac830280  sw          $v1, 0x280($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E9C8u;
        goto label_18e9c8;
    }
    ctx->pc = 0x18E9C0u;
    {
        const bool branch_taken_0x18e9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9C0u;
        // 0x18e9c4: 0xac830280  sw          $v1, 0x280($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9c0) {
            ctx->pc = 0x18EC94u;
            goto label_18ec94;
        }
    }
    ctx->pc = 0x18E9C8u;
label_18e9c8:
    // 0x18e9c8: 0x8e240484  lw          $a0, 0x484($s1)
    ctx->pc = 0x18e9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18e9cc:
    // 0x18e9cc: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18e9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18e9d0:
    // 0x18e9d0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_18e9d4:
    // 0x18e9d4: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x18e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18e9d8:
    // 0x18e9d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18e9dc:
    // 0x18e9dc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18e9e0:
    // 0x18e9e0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18e9e4:
    // 0x18e9e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_18e9e8:
    // 0x18e9e8: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x18e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_18e9ec:
    // 0x18e9ec: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_18e9f0:
    if (ctx->pc == 0x18E9F0u) {
        ctx->pc = 0x18E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9ECu;
        // 0x18e9f0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E9F4u;
        goto label_18e9f4;
    }
    ctx->pc = 0x18E9ECu;
    {
        const bool branch_taken_0x18e9ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9ECu;
        // 0x18e9f0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9ec) {
            ctx->pc = 0x18EA64u;
            goto label_18ea64;
        }
    }
    ctx->pc = 0x18E9F4u;
label_18e9f4:
    // 0x18e9f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18e9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_18e9f8:
    // 0x18e9f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e9fc:
    // 0x18e9fc: 0xc05f878  jal         func_17E1E0
label_18ea00:
    if (ctx->pc == 0x18EA00u) {
        ctx->pc = 0x18EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9FCu;
        // 0x18ea00: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA04u;
        goto label_18ea04;
    }
    ctx->pc = 0x18E9FCu;
    SET_GPR_U32(ctx, 31, 0x18EA04u);
    ctx->pc = 0x18EA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E9FCu;
    // 0x18ea00: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18E9FCu, 0x18EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA04u;
label_18ea04:
    // 0x18ea04: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18ea04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18ea08:
    // 0x18ea08: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18ea08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18ea0c:
    // 0x18ea0c: 0x320f809  jalr        $t9
label_18ea10:
    if (ctx->pc == 0x18EA10u) {
        ctx->pc = 0x18EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA0Cu;
        // 0x18ea10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA14u;
        goto label_18ea14;
    }
    ctx->pc = 0x18EA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18EA14u);
        ctx->pc = 0x18EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA0Cu;
        // 0x18ea10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EA0Cu, 0x18EA14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18EA14u;
label_18ea14:
    // 0x18ea14: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_18ea18:
    if (ctx->pc == 0x18EA18u) {
        ctx->pc = 0x18EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA14u;
        // 0x18ea18: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA1Cu;
        goto label_18ea1c;
    }
    ctx->pc = 0x18EA14u;
    {
        const bool branch_taken_0x18ea14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA14u;
        // 0x18ea18: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea14) {
            ctx->pc = 0x18EA60u;
            goto label_18ea60;
        }
    }
    ctx->pc = 0x18EA1Cu;
label_18ea1c:
    // 0x18ea1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18ea20:
    // 0x18ea20: 0xc05f878  jal         func_17E1E0
label_18ea24:
    if (ctx->pc == 0x18EA24u) {
        ctx->pc = 0x18EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA20u;
        // 0x18ea24: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA28u;
        goto label_18ea28;
    }
    ctx->pc = 0x18EA20u;
    SET_GPR_U32(ctx, 31, 0x18EA28u);
    ctx->pc = 0x18EA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA20u;
    // 0x18ea24: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18EA20u, 0x18EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA28u;
label_18ea28:
    // 0x18ea28: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x18ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18ea2c:
    // 0x18ea2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ea2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ea30:
    // 0x18ea30: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18ea30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18ea34:
    // 0x18ea34: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18ea38:
    // 0x18ea38: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18ea3c:
    // 0x18ea3c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18ea40:
    // 0x18ea40: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18ea44:
    // 0x18ea44: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18ea48:
    // 0x18ea48: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18ea4c:
    // 0x18ea4c: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x18ea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_18ea50:
    // 0x18ea50: 0xc0532f4  jal         func_14CBD0
label_18ea54:
    if (ctx->pc == 0x18EA54u) {
        ctx->pc = 0x18EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA50u;
        // 0x18ea54: 0x8e260450  lw          $a2, 0x450($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA58u;
        goto label_18ea58;
    }
    ctx->pc = 0x18EA50u;
    SET_GPR_U32(ctx, 31, 0x18EA58u);
    ctx->pc = 0x18EA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA50u;
    // 0x18ea54: 0x8e260450  lw          $a2, 0x450($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBD0u, 0x18EA50u, 0x18EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA58u;
label_18ea58:
    // 0x18ea58: 0x10000002  b           . + 4 + (0x2 << 2)
label_18ea5c:
    if (ctx->pc == 0x18EA5Cu) {
        ctx->pc = 0x18EA60u;
        goto label_18ea60;
    }
    ctx->pc = 0x18EA58u;
    {
        const bool branch_taken_0x18ea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea58) {
            ctx->pc = 0x18EA64u;
            goto label_18ea64;
        }
    }
    ctx->pc = 0x18EA60u;
label_18ea60:
    // 0x18ea60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18ea60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ea64:
    // 0x18ea64: 0x1240008b  beqz        $s2, . + 4 + (0x8B << 2)
label_18ea68:
    if (ctx->pc == 0x18EA68u) {
        ctx->pc = 0x18EA6Cu;
        goto label_18ea6c;
    }
    ctx->pc = 0x18EA64u;
    {
        const bool branch_taken_0x18ea64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea64) {
            ctx->pc = 0x18EC94u;
            goto label_18ec94;
        }
    }
    ctx->pc = 0x18EA6Cu;
label_18ea6c:
    // 0x18ea6c: 0x8e220450  lw          $v0, 0x450($s1)
    ctx->pc = 0x18ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18ea70:
    // 0x18ea70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18ea74:
    // 0x18ea74: 0xae220454  sw          $v0, 0x454($s1)
    ctx->pc = 0x18ea74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 2));
label_18ea78:
    // 0x18ea78: 0x8e220484  lw          $v0, 0x484($s1)
    ctx->pc = 0x18ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18ea7c:
    // 0x18ea7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18ea80:
    // 0x18ea80: 0xae220484  sw          $v0, 0x484($s1)
    ctx->pc = 0x18ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1156), GPR_U32(ctx, 2));
label_18ea84:
    // 0x18ea84: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x18ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18ea88:
    // 0x18ea88: 0x8e242724  lw          $a0, 0x2724($s1)
    ctx->pc = 0x18ea88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18ea8c:
    // 0x18ea8c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18ea90:
    // 0x18ea90: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18ea94:
    // 0x18ea94: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18ea98:
    // 0x18ea98: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18ea9c:
    // 0x18ea9c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18eaa0:
    // 0x18eaa0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18eaa4:
    // 0x18eaa4: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x18eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_18eaa8:
    // 0x18eaa8: 0xae220470  sw          $v0, 0x470($s1)
    ctx->pc = 0x18eaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1136), GPR_U32(ctx, 2));
label_18eaac:
    // 0x18eaac: 0x8e220484  lw          $v0, 0x484($s1)
    ctx->pc = 0x18eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18eab0:
    // 0x18eab0: 0x8e23271c  lw          $v1, 0x271C($s1)
    ctx->pc = 0x18eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10012)));
label_18eab4:
    // 0x18eab4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18eab8:
    // 0x18eab8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_18eabc:
    if (ctx->pc == 0x18EABCu) {
        ctx->pc = 0x18EAC0u;
        goto label_18eac0;
    }
    ctx->pc = 0x18EAB8u;
    {
        const bool branch_taken_0x18eab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18eab8) {
            ctx->pc = 0x18EAE4u;
            goto label_18eae4;
        }
    }
    ctx->pc = 0x18EAC0u;
label_18eac0:
    // 0x18eac0: 0x8e242724  lw          $a0, 0x2724($s1)
    ctx->pc = 0x18eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18eac4:
    // 0x18eac4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18eac8:
    // 0x18eac8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18eacc:
    // 0x18eacc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18ead0:
    // 0x18ead0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18ead4:
    // 0x18ead4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18ead8:
    // 0x18ead8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18eadc:
    // 0x18eadc: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x18eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_18eae0:
    // 0x18eae0: 0xae220474  sw          $v0, 0x474($s1)
    ctx->pc = 0x18eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1140), GPR_U32(ctx, 2));
label_18eae4:
    // 0x18eae4: 0xc062d50  jal         func_18B540
label_18eae8:
    if (ctx->pc == 0x18EAE8u) {
        ctx->pc = 0x18EAECu;
        goto label_18eaec;
    }
    ctx->pc = 0x18EAE4u;
    SET_GPR_U32(ctx, 31, 0x18EAECu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18EAE4u, 0x18EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAECu;
label_18eaec:
    // 0x18eaec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18eaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18eaf0:
    // 0x18eaf0: 0x240500e5  addiu       $a1, $zero, 0xE5
    ctx->pc = 0x18eaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
label_18eaf4:
    // 0x18eaf4: 0xc062b5c  jal         func_18AD70
label_18eaf8:
    if (ctx->pc == 0x18EAF8u) {
        ctx->pc = 0x18EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAF4u;
        // 0x18eaf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EAFCu;
        goto label_18eafc;
    }
    ctx->pc = 0x18EAF4u;
    SET_GPR_U32(ctx, 31, 0x18EAFCu);
    ctx->pc = 0x18EAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EAF4u;
    // 0x18eaf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18EAF4u, 0x18EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAFCu;
label_18eafc:
    // 0x18eafc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18eb00:
    // 0x18eb00: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x18eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_18eb04:
    // 0x18eb04: 0xae232720  sw          $v1, 0x2720($s1)
    ctx->pc = 0x18eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 3));
label_18eb08:
    // 0x18eb08: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x18eb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_18eb0c:
    // 0x18eb0c: 0xae220494  sw          $v0, 0x494($s1)
    ctx->pc = 0x18eb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1172), GPR_U32(ctx, 2));
label_18eb10:
    // 0x18eb10: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18eb10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_18eb14:
    // 0x18eb14: 0x24a52920  addiu       $a1, $a1, 0x2920
    ctx->pc = 0x18eb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10528));
label_18eb18:
    // 0x18eb18: 0xae220498  sw          $v0, 0x498($s1)
    ctx->pc = 0x18eb18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1176), GPR_U32(ctx, 2));
label_18eb1c:
    // 0x18eb1c: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x18eb1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_18eb20:
    // 0x18eb20: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x18eb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18eb24:
    // 0x18eb24: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x18eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18eb28:
    // 0x18eb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18eb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18eb2c:
    // 0x18eb2c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18eb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_18eb30:
    // 0x18eb30: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x18eb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_18eb34:
    // 0x18eb34: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x18eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18eb38:
    // 0x18eb38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_18eb3c:
    // 0x18eb3c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18eb40:
    // 0x18eb40: 0xc063e40  jal         func_18F900
label_18eb44:
    if (ctx->pc == 0x18EB44u) {
        ctx->pc = 0x18EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB40u;
        // 0x18eb44: 0x24520274  addiu       $s2, $v0, 0x274 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EB48u;
        goto label_18eb48;
    }
    ctx->pc = 0x18EB40u;
    SET_GPR_U32(ctx, 31, 0x18EB48u);
    ctx->pc = 0x18EB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB40u;
    // 0x18eb44: 0x24520274  addiu       $s2, $v0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F900u, 0x18EB40u, 0x18EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EB48u;
label_18eb48:
    // 0x18eb48: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18eb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18eb4c:
    // 0x18eb4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18eb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18eb50:
    // 0x18eb50: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x18eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_18eb54:
    // 0x18eb54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18eb58:
    // 0x18eb58: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18eb58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18eb5c:
    // 0x18eb5c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18eb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_18eb60:
    // 0x18eb60: 0xaca60254  sw          $a2, 0x254($a1)
    ctx->pc = 0x18eb60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 596), GPR_U32(ctx, 6));
label_18eb64:
    // 0x18eb64: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18eb64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18eb68:
    // 0x18eb68: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x18eb68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18eb6c:
    // 0x18eb6c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18eb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_18eb70:
    // 0x18eb70: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x18eb70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_18eb74:
    // 0x18eb74: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x18eb74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_18eb78:
    // 0x18eb78: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18eb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_18eb7c:
    // 0x18eb7c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18eb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_18eb80:
    // 0x18eb80: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18eb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_18eb84:
    // 0x18eb84: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x18eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
label_18eb88:
    // 0x18eb88: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18eb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18eb8c:
    // 0x18eb8c: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x18eb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18eb90:
    // 0x18eb90: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18eb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_18eb94:
    // 0x18eb94: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x18eb94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_18eb98:
    // 0x18eb98: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x18eb98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_18eb9c:
    // 0x18eb9c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18eb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_18eba0:
    // 0x18eba0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18eba0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_18eba4:
    // 0x18eba4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18eba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_18eba8:
    // 0x18eba8: 0xaca00154  sw          $zero, 0x154($a1)
    ctx->pc = 0x18eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 0));
label_18ebac:
    // 0x18ebac: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18ebacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18ebb0:
    // 0x18ebb0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x18ebb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18ebb4:
    // 0x18ebb4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x18ebb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ebb8:
    // 0x18ebb8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x18ebb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18ebbc:
    // 0x18ebbc: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x18ebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_18ebc0:
    // 0x18ebc0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x18ebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_18ebc4:
    // 0x18ebc4: 0xe4820274  swc1        $f2, 0x274($a0)
    ctx->pc = 0x18ebc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 628), bits); }
label_18ebc8:
    // 0x18ebc8: 0xe4810278  swc1        $f1, 0x278($a0)
    ctx->pc = 0x18ebc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 632), bits); }
label_18ebcc:
    // 0x18ebcc: 0xe480027c  swc1        $f0, 0x27C($a0)
    ctx->pc = 0x18ebccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 636), bits); }
label_18ebd0:
    // 0x18ebd0: 0x10000030  b           . + 4 + (0x30 << 2)
label_18ebd4:
    if (ctx->pc == 0x18EBD4u) {
        ctx->pc = 0x18EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBD0u;
        // 0x18ebd4: 0xac830280  sw          $v1, 0x280($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EBD8u;
        goto label_18ebd8;
    }
    ctx->pc = 0x18EBD0u;
    {
        const bool branch_taken_0x18ebd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBD0u;
        // 0x18ebd4: 0xac830280  sw          $v1, 0x280($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebd0) {
            ctx->pc = 0x18EC94u;
            goto label_18ec94;
        }
    }
    ctx->pc = 0x18EBD8u;
label_18ebd8:
    // 0x18ebd8: 0xc067f08  jal         func_19FC20
label_18ebdc:
    if (ctx->pc == 0x18EBDCu) {
        ctx->pc = 0x18EBE0u;
        goto label_18ebe0;
    }
    ctx->pc = 0x18EBD8u;
    SET_GPR_U32(ctx, 31, 0x18EBE0u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x18EBD8u, 0x18EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EBE0u;
label_18ebe0:
    // 0x18ebe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ebe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ebe4:
    // 0x18ebe4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_18ebe8:
    if (ctx->pc == 0x18EBE8u) {
        ctx->pc = 0x18EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBE4u;
        // 0x18ebe8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EBECu;
        goto label_18ebec;
    }
    ctx->pc = 0x18EBE4u;
    {
        const bool branch_taken_0x18ebe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBE4u;
        // 0x18ebe8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebe4) {
            ctx->pc = 0x18EC04u;
            goto label_18ec04;
        }
    }
    ctx->pc = 0x18EBECu;
label_18ebec:
    // 0x18ebec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18ebecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_18ebf0:
    // 0x18ebf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ebf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ebf4:
    // 0x18ebf4: 0x24a5fd68  addiu       $a1, $a1, -0x298
    ctx->pc = 0x18ebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966632));
label_18ebf8:
    // 0x18ebf8: 0xc064a64  jal         func_192990
label_18ebfc:
    if (ctx->pc == 0x18EBFCu) {
        ctx->pc = 0x18EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBF8u;
        // 0x18ebfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC00u;
        goto label_18ec00;
    }
    ctx->pc = 0x18EBF8u;
    SET_GPR_U32(ctx, 31, 0x18EC00u);
    ctx->pc = 0x18EBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EBF8u;
    // 0x18ebfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192990u, 0x18EBF8u, 0x18EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC00u;
label_18ec00:
    // 0x18ec00: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_18ec04:
    // 0x18ec04: 0x10000023  b           . + 4 + (0x23 << 2)
label_18ec08:
    if (ctx->pc == 0x18EC08u) {
        ctx->pc = 0x18EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC04u;
        // 0x18ec08: 0xae232720  sw          $v1, 0x2720($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC0Cu;
        goto label_18ec0c;
    }
    ctx->pc = 0x18EC04u;
    {
        const bool branch_taken_0x18ec04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC04u;
        // 0x18ec08: 0xae232720  sw          $v1, 0x2720($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec04) {
            ctx->pc = 0x18EC94u;
            goto label_18ec94;
        }
    }
    ctx->pc = 0x18EC0Cu;
label_18ec0c:
    // 0x18ec0c: 0xc067f08  jal         func_19FC20
label_18ec10:
    if (ctx->pc == 0x18EC10u) {
        ctx->pc = 0x18EC14u;
        goto label_18ec14;
    }
    ctx->pc = 0x18EC0Cu;
    SET_GPR_U32(ctx, 31, 0x18EC14u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x18EC0Cu, 0x18EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC14u;
label_18ec14:
    // 0x18ec14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ec14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ec18:
    // 0x18ec18: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_18ec1c:
    if (ctx->pc == 0x18EC1Cu) {
        ctx->pc = 0x18EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC18u;
        // 0x18ec1c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC20u;
        goto label_18ec20;
    }
    ctx->pc = 0x18EC18u;
    {
        const bool branch_taken_0x18ec18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC18u;
        // 0x18ec1c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec18) {
            ctx->pc = 0x18EC94u;
            goto label_18ec94;
        }
    }
    ctx->pc = 0x18EC20u;
label_18ec20:
    // 0x18ec20: 0xc064918  jal         func_192460
label_18ec24:
    if (ctx->pc == 0x18EC24u) {
        ctx->pc = 0x18EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC20u;
        // 0x18ec24: 0x24a5fd68  addiu       $a1, $a1, -0x298 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC28u;
        goto label_18ec28;
    }
    ctx->pc = 0x18EC20u;
    SET_GPR_U32(ctx, 31, 0x18EC28u);
    ctx->pc = 0x18EC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC20u;
    // 0x18ec24: 0x24a5fd68  addiu       $a1, $a1, -0x298 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x18EC20u, 0x18EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC28u;
label_18ec28:
    // 0x18ec28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ec28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ec2c:
    // 0x18ec2c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_18ec30:
    if (ctx->pc == 0x18EC30u) {
        ctx->pc = 0x18EC34u;
        goto label_18ec34;
    }
    ctx->pc = 0x18EC2Cu;
    {
        const bool branch_taken_0x18ec2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ec2c) {
            ctx->pc = 0x18EC94u;
            goto label_18ec94;
        }
    }
    ctx->pc = 0x18EC34u;
label_18ec34:
    // 0x18ec34: 0x8c850320  lw          $a1, 0x320($a0)
    ctx->pc = 0x18ec34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
label_18ec38:
    // 0x18ec38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18ec3c:
    // 0x18ec3c: 0x14a30015  bne         $a1, $v1, . + 4 + (0x15 << 2)
label_18ec40:
    if (ctx->pc == 0x18EC40u) {
        ctx->pc = 0x18EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC3Cu;
        // 0x18ec40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC44u;
        goto label_18ec44;
    }
    ctx->pc = 0x18EC3Cu;
    {
        const bool branch_taken_0x18ec3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x18EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC3Cu;
        // 0x18ec40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec3c) {
            ctx->pc = 0x18EC94u;
            goto label_18ec94;
        }
    }
    ctx->pc = 0x18EC44u;
label_18ec44:
    // 0x18ec44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ec44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ec48:
    // 0x18ec48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18ec48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ec4c:
    // 0x18ec4c: 0xc064f00  jal         func_193C00
label_18ec50:
    if (ctx->pc == 0x18EC50u) {
        ctx->pc = 0x18EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC4Cu;
        // 0x18ec50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC54u;
        goto label_18ec54;
    }
    ctx->pc = 0x18EC4Cu;
    SET_GPR_U32(ctx, 31, 0x18EC54u);
    ctx->pc = 0x18EC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC4Cu;
    // 0x18ec50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C00u, 0x18EC4Cu, 0x18EC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC54u;
label_18ec54:
    // 0x18ec54: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18ec58:
    // 0x18ec58: 0x1000000e  b           . + 4 + (0xE << 2)
label_18ec5c:
    if (ctx->pc == 0x18EC5Cu) {
        ctx->pc = 0x18EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC58u;
        // 0x18ec5c: 0xae232720  sw          $v1, 0x2720($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EC60u;
        goto label_18ec60;
    }
    ctx->pc = 0x18EC58u;
    {
        const bool branch_taken_0x18ec58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC58u;
        // 0x18ec5c: 0xae232720  sw          $v1, 0x2720($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec58) {
            ctx->pc = 0x18EC94u;
            goto label_18ec94;
        }
    }
    ctx->pc = 0x18EC60u;
label_18ec60:
    // 0x18ec60: 0xc067f08  jal         func_19FC20
label_18ec64:
    if (ctx->pc == 0x18EC64u) {
        ctx->pc = 0x18EC68u;
        goto label_18ec68;
    }
    ctx->pc = 0x18EC60u;
    SET_GPR_U32(ctx, 31, 0x18EC68u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x18EC60u, 0x18EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC68u;
label_18ec68:
    // 0x18ec68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ec68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ec6c:
    // 0x18ec6c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_18ec70:
    if (ctx->pc == 0x18EC70u) {
        ctx->pc = 0x18EC74u;
        goto label_18ec74;
    }
    ctx->pc = 0x18EC6Cu;
    {
        const bool branch_taken_0x18ec6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ec6c) {
            ctx->pc = 0x18EC7Cu;
            goto label_18ec7c;
        }
    }
    ctx->pc = 0x18EC74u;
label_18ec74:
    // 0x18ec74: 0xc064ba0  jal         func_192E80
label_18ec78:
    if (ctx->pc == 0x18EC78u) {
        ctx->pc = 0x18EC7Cu;
        goto label_18ec7c;
    }
    ctx->pc = 0x18EC74u;
    SET_GPR_U32(ctx, 31, 0x18EC7Cu);
    ctx->pc = 0x192E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192E80u, 0x18EC74u, 0x18EC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC7Cu;
label_18ec7c:
    // 0x18ec7c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x18ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_18ec80:
    // 0x18ec80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18ec80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ec84:
    // 0x18ec84: 0xa060002e  sb          $zero, 0x2E($v1)
    ctx->pc = 0x18ec84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 0));
label_18ec88:
    // 0x18ec88: 0x8f8383a0  lw          $v1, -0x7C60($gp)
    ctx->pc = 0x18ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_18ec8c:
    // 0x18ec8c: 0xaf80831c  sw          $zero, -0x7CE4($gp)
    ctx->pc = 0x18ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 0));
label_18ec90:
    // 0x18ec90: 0xa0640008  sb          $a0, 0x8($v1)
    ctx->pc = 0x18ec90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 4));
label_18ec94:
    // 0x18ec94: 0xae20045c  sw          $zero, 0x45C($s1)
    ctx->pc = 0x18ec94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1116), GPR_U32(ctx, 0));
label_18ec98:
    // 0x18ec98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18ec98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18ec9c:
    // 0x18ec9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ec9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18eca0:
    // 0x18eca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18eca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18eca4:
    // 0x18eca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18eca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18eca8:
    // 0x18eca8: 0x3e00008  jr          $ra
label_18ecac:
    if (ctx->pc == 0x18ECACu) {
        ctx->pc = 0x18ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECA8u;
        // 0x18ecac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ECB0u;
        goto label_fallthrough_0x18eca8;
    }
    ctx->pc = 0x18ECA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECA8u;
        // 0x18ecac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18ECA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18eca8:
    ctx->pc = 0x18ECB0u;
}
