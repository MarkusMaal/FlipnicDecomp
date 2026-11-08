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

// Function: FUN_0013e700
// Address: 0x13e700 - 0x13e9e4
void FUN_0013e700_0x13e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013e700_0x13e700");
#endif

    switch (ctx->pc) {
        case 0x13e700u: goto label_13e700;
        case 0x13e704u: goto label_13e704;
        case 0x13e708u: goto label_13e708;
        case 0x13e70cu: goto label_13e70c;
        case 0x13e710u: goto label_13e710;
        case 0x13e714u: goto label_13e714;
        case 0x13e718u: goto label_13e718;
        case 0x13e71cu: goto label_13e71c;
        case 0x13e720u: goto label_13e720;
        case 0x13e724u: goto label_13e724;
        case 0x13e728u: goto label_13e728;
        case 0x13e72cu: goto label_13e72c;
        case 0x13e730u: goto label_13e730;
        case 0x13e734u: goto label_13e734;
        case 0x13e738u: goto label_13e738;
        case 0x13e73cu: goto label_13e73c;
        case 0x13e740u: goto label_13e740;
        case 0x13e744u: goto label_13e744;
        case 0x13e748u: goto label_13e748;
        case 0x13e74cu: goto label_13e74c;
        case 0x13e750u: goto label_13e750;
        case 0x13e754u: goto label_13e754;
        case 0x13e758u: goto label_13e758;
        case 0x13e75cu: goto label_13e75c;
        case 0x13e760u: goto label_13e760;
        case 0x13e764u: goto label_13e764;
        case 0x13e768u: goto label_13e768;
        case 0x13e76cu: goto label_13e76c;
        case 0x13e770u: goto label_13e770;
        case 0x13e774u: goto label_13e774;
        case 0x13e778u: goto label_13e778;
        case 0x13e77cu: goto label_13e77c;
        case 0x13e780u: goto label_13e780;
        case 0x13e784u: goto label_13e784;
        case 0x13e788u: goto label_13e788;
        case 0x13e78cu: goto label_13e78c;
        case 0x13e790u: goto label_13e790;
        case 0x13e794u: goto label_13e794;
        case 0x13e798u: goto label_13e798;
        case 0x13e79cu: goto label_13e79c;
        case 0x13e7a0u: goto label_13e7a0;
        case 0x13e7a4u: goto label_13e7a4;
        case 0x13e7a8u: goto label_13e7a8;
        case 0x13e7acu: goto label_13e7ac;
        case 0x13e7b0u: goto label_13e7b0;
        case 0x13e7b4u: goto label_13e7b4;
        case 0x13e7b8u: goto label_13e7b8;
        case 0x13e7bcu: goto label_13e7bc;
        case 0x13e7c0u: goto label_13e7c0;
        case 0x13e7c4u: goto label_13e7c4;
        case 0x13e7c8u: goto label_13e7c8;
        case 0x13e7ccu: goto label_13e7cc;
        case 0x13e7d0u: goto label_13e7d0;
        case 0x13e7d4u: goto label_13e7d4;
        case 0x13e7d8u: goto label_13e7d8;
        case 0x13e7dcu: goto label_13e7dc;
        case 0x13e7e0u: goto label_13e7e0;
        case 0x13e7e4u: goto label_13e7e4;
        case 0x13e7e8u: goto label_13e7e8;
        case 0x13e7ecu: goto label_13e7ec;
        case 0x13e7f0u: goto label_13e7f0;
        case 0x13e7f4u: goto label_13e7f4;
        case 0x13e7f8u: goto label_13e7f8;
        case 0x13e7fcu: goto label_13e7fc;
        case 0x13e800u: goto label_13e800;
        case 0x13e804u: goto label_13e804;
        case 0x13e808u: goto label_13e808;
        case 0x13e80cu: goto label_13e80c;
        case 0x13e810u: goto label_13e810;
        case 0x13e814u: goto label_13e814;
        case 0x13e818u: goto label_13e818;
        case 0x13e81cu: goto label_13e81c;
        case 0x13e820u: goto label_13e820;
        case 0x13e824u: goto label_13e824;
        case 0x13e828u: goto label_13e828;
        case 0x13e82cu: goto label_13e82c;
        case 0x13e830u: goto label_13e830;
        case 0x13e834u: goto label_13e834;
        case 0x13e838u: goto label_13e838;
        case 0x13e83cu: goto label_13e83c;
        case 0x13e840u: goto label_13e840;
        case 0x13e844u: goto label_13e844;
        case 0x13e848u: goto label_13e848;
        case 0x13e84cu: goto label_13e84c;
        case 0x13e850u: goto label_13e850;
        case 0x13e854u: goto label_13e854;
        case 0x13e858u: goto label_13e858;
        case 0x13e85cu: goto label_13e85c;
        case 0x13e860u: goto label_13e860;
        case 0x13e864u: goto label_13e864;
        case 0x13e868u: goto label_13e868;
        case 0x13e86cu: goto label_13e86c;
        case 0x13e870u: goto label_13e870;
        case 0x13e874u: goto label_13e874;
        case 0x13e878u: goto label_13e878;
        case 0x13e87cu: goto label_13e87c;
        case 0x13e880u: goto label_13e880;
        case 0x13e884u: goto label_13e884;
        case 0x13e888u: goto label_13e888;
        case 0x13e88cu: goto label_13e88c;
        case 0x13e890u: goto label_13e890;
        case 0x13e894u: goto label_13e894;
        case 0x13e898u: goto label_13e898;
        case 0x13e89cu: goto label_13e89c;
        case 0x13e8a0u: goto label_13e8a0;
        case 0x13e8a4u: goto label_13e8a4;
        case 0x13e8a8u: goto label_13e8a8;
        case 0x13e8acu: goto label_13e8ac;
        case 0x13e8b0u: goto label_13e8b0;
        case 0x13e8b4u: goto label_13e8b4;
        case 0x13e8b8u: goto label_13e8b8;
        case 0x13e8bcu: goto label_13e8bc;
        case 0x13e8c0u: goto label_13e8c0;
        case 0x13e8c4u: goto label_13e8c4;
        case 0x13e8c8u: goto label_13e8c8;
        case 0x13e8ccu: goto label_13e8cc;
        case 0x13e8d0u: goto label_13e8d0;
        case 0x13e8d4u: goto label_13e8d4;
        case 0x13e8d8u: goto label_13e8d8;
        case 0x13e8dcu: goto label_13e8dc;
        case 0x13e8e0u: goto label_13e8e0;
        case 0x13e8e4u: goto label_13e8e4;
        case 0x13e8e8u: goto label_13e8e8;
        case 0x13e8ecu: goto label_13e8ec;
        case 0x13e8f0u: goto label_13e8f0;
        case 0x13e8f4u: goto label_13e8f4;
        case 0x13e8f8u: goto label_13e8f8;
        case 0x13e8fcu: goto label_13e8fc;
        case 0x13e900u: goto label_13e900;
        case 0x13e904u: goto label_13e904;
        case 0x13e908u: goto label_13e908;
        case 0x13e90cu: goto label_13e90c;
        case 0x13e910u: goto label_13e910;
        case 0x13e914u: goto label_13e914;
        case 0x13e918u: goto label_13e918;
        case 0x13e91cu: goto label_13e91c;
        case 0x13e920u: goto label_13e920;
        case 0x13e924u: goto label_13e924;
        case 0x13e928u: goto label_13e928;
        case 0x13e92cu: goto label_13e92c;
        case 0x13e930u: goto label_13e930;
        case 0x13e934u: goto label_13e934;
        case 0x13e938u: goto label_13e938;
        case 0x13e93cu: goto label_13e93c;
        case 0x13e940u: goto label_13e940;
        case 0x13e944u: goto label_13e944;
        case 0x13e948u: goto label_13e948;
        case 0x13e94cu: goto label_13e94c;
        case 0x13e950u: goto label_13e950;
        case 0x13e954u: goto label_13e954;
        case 0x13e958u: goto label_13e958;
        case 0x13e95cu: goto label_13e95c;
        case 0x13e960u: goto label_13e960;
        case 0x13e964u: goto label_13e964;
        case 0x13e968u: goto label_13e968;
        case 0x13e96cu: goto label_13e96c;
        case 0x13e970u: goto label_13e970;
        case 0x13e974u: goto label_13e974;
        case 0x13e978u: goto label_13e978;
        case 0x13e97cu: goto label_13e97c;
        case 0x13e980u: goto label_13e980;
        case 0x13e984u: goto label_13e984;
        case 0x13e988u: goto label_13e988;
        case 0x13e98cu: goto label_13e98c;
        case 0x13e990u: goto label_13e990;
        case 0x13e994u: goto label_13e994;
        case 0x13e998u: goto label_13e998;
        case 0x13e99cu: goto label_13e99c;
        case 0x13e9a0u: goto label_13e9a0;
        case 0x13e9a4u: goto label_13e9a4;
        case 0x13e9a8u: goto label_13e9a8;
        case 0x13e9acu: goto label_13e9ac;
        case 0x13e9b0u: goto label_13e9b0;
        case 0x13e9b4u: goto label_13e9b4;
        case 0x13e9b8u: goto label_13e9b8;
        case 0x13e9bcu: goto label_13e9bc;
        case 0x13e9c0u: goto label_13e9c0;
        case 0x13e9c4u: goto label_13e9c4;
        case 0x13e9c8u: goto label_13e9c8;
        case 0x13e9ccu: goto label_13e9cc;
        case 0x13e9d0u: goto label_13e9d0;
        case 0x13e9d4u: goto label_13e9d4;
        case 0x13e9d8u: goto label_13e9d8;
        case 0x13e9dcu: goto label_13e9dc;
        case 0x13e9e0u: goto label_13e9e0;
        default: break;
    }

    ctx->pc = 0x13e700u;

label_13e700:
    // 0x13e700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13e700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13e704:
    // 0x13e704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13e704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13e708:
    // 0x13e708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13e70c:
    // 0x13e70c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13e710:
    // 0x13e710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13e714:
    // 0x13e714: 0x8c820124  lw          $v0, 0x124($a0)
    ctx->pc = 0x13e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
label_13e718:
    // 0x13e718: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x13e718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_13e71c:
    // 0x13e71c: 0x8c820124  lw          $v0, 0x124($a0)
    ctx->pc = 0x13e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
label_13e720:
    // 0x13e720: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x13e720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e724:
    // 0x13e724: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x13e724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e728:
    // 0x13e728: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13e728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13e72c:
    // 0x13e72c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x13e72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_13e730:
    // 0x13e730: 0x8c840124  lw          $a0, 0x124($a0)
    ctx->pc = 0x13e730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
label_13e734:
    // 0x13e734: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13e734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e738:
    // 0x13e738: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x13e738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e73c:
    // 0x13e73c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x13e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_13e740:
    // 0x13e740: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13e740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_13e744:
    // 0x13e744: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13e744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13e748:
    // 0x13e748: 0x0  nop
    ctx->pc = 0x13e748u;
    // NOP
label_13e74c:
    // 0x13e74c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13e74cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_13e750:
    // 0x13e750: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13e750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e754:
    // 0x13e754: 0x0  nop
    ctx->pc = 0x13e754u;
    // NOP
label_13e758:
    // 0x13e758: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_13e75c:
    if (ctx->pc == 0x13E75Cu) {
        ctx->pc = 0x13E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E758u;
        // 0x13e75c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E760u;
        goto label_13e760;
    }
    ctx->pc = 0x13E758u;
    {
        const bool branch_taken_0x13e758 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E758u;
        // 0x13e75c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e758) {
            ctx->pc = 0x13E764u;
            goto label_13e764;
        }
    }
    ctx->pc = 0x13E760u;
label_13e760:
    // 0x13e760: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13e760u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e764:
    // 0x13e764: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_13e768:
    if (ctx->pc == 0x13E768u) {
        ctx->pc = 0x13E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E764u;
        // 0x13e768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E76Cu;
        goto label_13e76c;
    }
    ctx->pc = 0x13E764u;
    {
        const bool branch_taken_0x13e764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E764u;
        // 0x13e768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e764) {
            ctx->pc = 0x13E770u;
            goto label_13e770;
        }
    }
    ctx->pc = 0x13E76Cu;
label_13e76c:
    // 0x13e76c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x13e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_13e770:
    // 0x13e770: 0x8e240124  lw          $a0, 0x124($s1)
    ctx->pc = 0x13e770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_13e774:
    // 0x13e774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13e774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e778:
    // 0x13e778: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13e778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e77c:
    // 0x13e77c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x13e77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e780:
    // 0x13e780: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x13e780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_13e784:
    // 0x13e784: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x13e784u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e788:
    // 0x13e788: 0x0  nop
    ctx->pc = 0x13e788u;
    // NOP
label_13e78c:
    // 0x13e78c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13e78cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_13e790:
    // 0x13e790: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13e790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e794:
    // 0x13e794: 0x0  nop
    ctx->pc = 0x13e794u;
    // NOP
label_13e798:
    // 0x13e798: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_13e79c:
    if (ctx->pc == 0x13E79Cu) {
        ctx->pc = 0x13E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E798u;
        // 0x13e79c: 0x24860004  addiu       $a2, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E7A0u;
        goto label_13e7a0;
    }
    ctx->pc = 0x13E798u;
    {
        const bool branch_taken_0x13e798 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E798u;
        // 0x13e79c: 0x24860004  addiu       $a2, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e798) {
            ctx->pc = 0x13E7A4u;
            goto label_13e7a4;
        }
    }
    ctx->pc = 0x13E7A0u;
label_13e7a0:
    // 0x13e7a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13e7a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e7a4:
    // 0x13e7a4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_13e7a8:
    if (ctx->pc == 0x13E7A8u) {
        ctx->pc = 0x13E7ACu;
        goto label_13e7ac;
    }
    ctx->pc = 0x13E7A4u;
    {
        const bool branch_taken_0x13e7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e7a4) {
            ctx->pc = 0x13E7ECu;
            goto label_13e7ec;
        }
    }
    ctx->pc = 0x13E7ACu;
label_13e7ac:
    // 0x13e7ac: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x13e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_13e7b0:
    // 0x13e7b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_13e7b4:
    if (ctx->pc == 0x13E7B4u) {
        ctx->pc = 0x13E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E7B0u;
        // 0x13e7b4: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E7B8u;
        goto label_13e7b8;
    }
    ctx->pc = 0x13E7B0u;
    {
        const bool branch_taken_0x13e7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E7B0u;
        // 0x13e7b4: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e7b0) {
            ctx->pc = 0x13E7D0u;
            goto label_13e7d0;
        }
    }
    ctx->pc = 0x13E7B8u;
label_13e7b8:
    // 0x13e7b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x13e7b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e7bc:
    // 0x13e7bc: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x13e7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e7c0:
    // 0x13e7c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13e7c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_13e7c4:
    // 0x13e7c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13e7c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13e7c8:
    // 0x13e7c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_13e7cc:
    if (ctx->pc == 0x13E7CCu) {
        ctx->pc = 0x13E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E7C8u;
        // 0x13e7cc: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E7D0u;
        goto label_13e7d0;
    }
    ctx->pc = 0x13E7C8u;
    {
        const bool branch_taken_0x13e7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E7C8u;
        // 0x13e7cc: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e7c8) {
            ctx->pc = 0x13E7ECu;
            goto label_13e7ec;
        }
    }
    ctx->pc = 0x13E7D0u;
label_13e7d0:
    // 0x13e7d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e7d4:
    // 0x13e7d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e7d8:
    // 0x13e7d8: 0x0  nop
    ctx->pc = 0x13e7d8u;
    // NOP
label_13e7dc:
    // 0x13e7dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13e7dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_13e7e0:
    // 0x13e7e0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x13e7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_13e7e4:
    // 0x13e7e4: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x13e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_13e7e8:
    // 0x13e7e8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x13e7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_13e7ec:
    // 0x13e7ec: 0x9222018b  lbu         $v0, 0x18B($s1)
    ctx->pc = 0x13e7ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 395)));
label_13e7f0:
    // 0x13e7f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_13e7f4:
    if (ctx->pc == 0x13E7F4u) {
        ctx->pc = 0x13E7F8u;
        goto label_13e7f8;
    }
    ctx->pc = 0x13E7F0u;
    {
        const bool branch_taken_0x13e7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e7f0) {
            ctx->pc = 0x13E82Cu;
            goto label_13e82c;
        }
    }
    ctx->pc = 0x13E7F8u;
label_13e7f8:
    // 0x13e7f8: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x13e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_13e7fc:
    // 0x13e7fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e800:
    // 0x13e800: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13e800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13e804:
    // 0x13e804: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13e804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13e808:
    // 0x13e808: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x13e808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e80c:
    // 0x13e80c: 0x8f3900a4  lw          $t9, 0xA4($t9)
    ctx->pc = 0x13e80cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 164)));
label_13e810:
    // 0x13e810: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x13e810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e814:
    // 0x13e814: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13e814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_13e818:
    // 0x13e818: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x13e818u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_13e81c:
    // 0x13e81c: 0x0  nop
    ctx->pc = 0x13e81cu;
    // NOP
label_13e820:
    // 0x13e820: 0x0  nop
    ctx->pc = 0x13e820u;
    // NOP
label_13e824:
    // 0x13e824: 0x320f809  jalr        $t9
label_13e828:
    if (ctx->pc == 0x13E828u) {
        ctx->pc = 0x13E82Cu;
        goto label_13e82c;
    }
    ctx->pc = 0x13E824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E82Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E824u, 0x13E82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E82Cu;
label_13e82c:
    // 0x13e82c: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x13e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_13e830:
    // 0x13e830: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x13e830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_13e834:
    // 0x13e834: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13e834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e838:
    // 0x13e838: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x13e838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13e83c:
    // 0x13e83c: 0xc05ff20  jal         func_17FC80
label_13e840:
    if (ctx->pc == 0x13E840u) {
        ctx->pc = 0x13E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E83Cu;
        // 0x13e840: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E844u;
        goto label_13e844;
    }
    ctx->pc = 0x13E83Cu;
    SET_GPR_U32(ctx, 31, 0x13E844u);
    ctx->pc = 0x13E840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E83Cu;
    // 0x13e840: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FC80u, 0x13E83Cu, 0x13E844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E844u;
label_13e844:
    // 0x13e844: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x13e844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_13e848:
    // 0x13e848: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x13e848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e84c:
    // 0x13e84c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x13e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_13e850:
    // 0x13e850: 0x1470004a  bne         $v1, $s0, . + 4 + (0x4A << 2)
label_13e854:
    if (ctx->pc == 0x13E854u) {
        ctx->pc = 0x13E858u;
        goto label_13e858;
    }
    ctx->pc = 0x13E850u;
    {
        const bool branch_taken_0x13e850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x13e850) {
            ctx->pc = 0x13E97Cu;
            goto label_13e97c;
        }
    }
    ctx->pc = 0x13E858u;
label_13e858:
    // 0x13e858: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x13e858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_13e85c:
    // 0x13e85c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_13e860:
    if (ctx->pc == 0x13E860u) {
        ctx->pc = 0x13E864u;
        goto label_13e864;
    }
    ctx->pc = 0x13E85Cu;
    {
        const bool branch_taken_0x13e85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e85c) {
            ctx->pc = 0x13E8D4u;
            goto label_13e8d4;
        }
    }
    ctx->pc = 0x13E864u;
label_13e864:
    // 0x13e864: 0x8e2301b0  lw          $v1, 0x1B0($s1)
    ctx->pc = 0x13e864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_13e868:
    // 0x13e868: 0x8e22019c  lw          $v0, 0x19C($s1)
    ctx->pc = 0x13e868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
label_13e86c:
    // 0x13e86c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x13e86cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_13e870:
    // 0x13e870: 0x0  nop
    ctx->pc = 0x13e870u;
    // NOP
label_13e874:
    // 0x13e874: 0x0  nop
    ctx->pc = 0x13e874u;
    // NOP
label_13e878:
    // 0x13e878: 0x2812  mflo        $a1
    ctx->pc = 0x13e878u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_13e87c:
    // 0x13e87c: 0xc04fc44  jal         func_13F110
label_13e880:
    if (ctx->pc == 0x13E880u) {
        ctx->pc = 0x13E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E87Cu;
        // 0x13e880: 0x262401a0  addiu       $a0, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E884u;
        goto label_13e884;
    }
    ctx->pc = 0x13E87Cu;
    SET_GPR_U32(ctx, 31, 0x13E884u);
    ctx->pc = 0x13E880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E87Cu;
    // 0x13e880: 0x262401a0  addiu       $a0, $s1, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x13E87Cu, 0x13E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E884u;
label_13e884:
    // 0x13e884: 0x8e2501b0  lw          $a1, 0x1B0($s1)
    ctx->pc = 0x13e884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_13e888:
    // 0x13e888: 0x8e23019c  lw          $v1, 0x19C($s1)
    ctx->pc = 0x13e888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
label_13e88c:
    // 0x13e88c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e890:
    // 0x13e890: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x13e890u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_13e894:
    // 0x13e894: 0x0  nop
    ctx->pc = 0x13e894u;
    // NOP
label_13e898:
    // 0x13e898: 0x0  nop
    ctx->pc = 0x13e898u;
    // NOP
label_13e89c:
    // 0x13e89c: 0x1810  mfhi        $v1
    ctx->pc = 0x13e89cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_13e8a0:
    // 0x13e8a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_13e8a4:
    // 0x13e8a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13e8a8:
    // 0x13e8a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13e8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e8ac:
    // 0x13e8ac: 0xc04fccc  jal         func_13F330
label_13e8b0:
    if (ctx->pc == 0x13E8B0u) {
        ctx->pc = 0x13E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E8ACu;
        // 0x13e8b0: 0x2624019c  addiu       $a0, $s1, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 412));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E8B4u;
        goto label_13e8b4;
    }
    ctx->pc = 0x13E8ACu;
    SET_GPR_U32(ctx, 31, 0x13E8B4u);
    ctx->pc = 0x13E8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E8ACu;
    // 0x13e8b0: 0x2624019c  addiu       $a0, $s1, 0x19C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 412));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F330u, 0x13E8ACu, 0x13E8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E8B4u;
label_13e8b4:
    // 0x13e8b4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13e8b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13e8b8:
    // 0x13e8b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13e8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e8bc:
    // 0x13e8bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e8c0:
    // 0x13e8c0: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x13e8c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_13e8c4:
    // 0x13e8c4: 0x320f809  jalr        $t9
label_13e8c8:
    if (ctx->pc == 0x13E8C8u) {
        ctx->pc = 0x13E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E8C4u;
        // 0x13e8c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E8CCu;
        goto label_13e8cc;
    }
    ctx->pc = 0x13E8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E8CCu);
        ctx->pc = 0x13E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E8C4u;
        // 0x13e8c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E8C4u, 0x13E8CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E8CCu;
label_13e8cc:
    // 0x13e8cc: 0x10000029  b           . + 4 + (0x29 << 2)
label_13e8d0:
    if (ctx->pc == 0x13E8D0u) {
        ctx->pc = 0x13E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E8CCu;
        // 0x13e8d0: 0x8e230124  lw          $v1, 0x124($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E8D4u;
        goto label_13e8d4;
    }
    ctx->pc = 0x13E8CCu;
    {
        const bool branch_taken_0x13e8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E8CCu;
        // 0x13e8d0: 0x8e230124  lw          $v1, 0x124($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e8cc) {
            ctx->pc = 0x13E974u;
            goto label_13e974;
        }
    }
    ctx->pc = 0x13E8D4u;
label_13e8d4:
    // 0x13e8d4: 0x8e250178  lw          $a1, 0x178($s1)
    ctx->pc = 0x13e8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
label_13e8d8:
    // 0x13e8d8: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
label_13e8dc:
    if (ctx->pc == 0x13E8DCu) {
        ctx->pc = 0x13E8E0u;
        goto label_13e8e0;
    }
    ctx->pc = 0x13E8D8u;
    {
        const bool branch_taken_0x13e8d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e8d8) {
            ctx->pc = 0x13E96Cu;
            goto label_13e96c;
        }
    }
    ctx->pc = 0x13E8E0u;
label_13e8e0:
    // 0x13e8e0: 0x8e24017c  lw          $a0, 0x17C($s1)
    ctx->pc = 0x13e8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
label_13e8e4:
    // 0x13e8e4: 0x8e23016c  lw          $v1, 0x16C($s1)
    ctx->pc = 0x13e8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
label_13e8e8:
    // 0x13e8e8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x13e8e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_13e8ec:
    // 0x13e8ec: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_13e8f0:
    if (ctx->pc == 0x13E8F0u) {
        ctx->pc = 0x13E8F4u;
        goto label_13e8f4;
    }
    ctx->pc = 0x13E8ECu;
    {
        const bool branch_taken_0x13e8ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e8ec) {
            ctx->pc = 0x13E96Cu;
            goto label_13e96c;
        }
    }
    ctx->pc = 0x13E8F4u;
label_13e8f4:
    // 0x13e8f4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x13e8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_13e8f8:
    // 0x13e8f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13e8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13e8fc:
    // 0x13e8fc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x13e8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_13e900:
    // 0x13e900: 0x80a40004  lb          $a0, 0x4($a1)
    ctx->pc = 0x13e900u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_13e904:
    // 0x13e904: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_13e908:
    if (ctx->pc == 0x13E908u) {
        ctx->pc = 0x13E90Cu;
        goto label_13e90c;
    }
    ctx->pc = 0x13E904u;
    {
        const bool branch_taken_0x13e904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e904) {
            ctx->pc = 0x13E96Cu;
            goto label_13e96c;
        }
    }
    ctx->pc = 0x13E90Cu;
label_13e90c:
    // 0x13e90c: 0x10000002  b           . + 4 + (0x2 << 2)
label_13e910:
    if (ctx->pc == 0x13E910u) {
        ctx->pc = 0x13E914u;
        goto label_13e914;
    }
    ctx->pc = 0x13E90Cu;
    {
        const bool branch_taken_0x13e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e90c) {
            ctx->pc = 0x13E918u;
            goto label_13e918;
        }
    }
    ctx->pc = 0x13E914u;
label_13e914:
    // 0x13e914: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13e914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13e918:
    // 0x13e918: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x13e918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_13e91c:
    // 0x13e91c: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x13e91cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_13e920:
    // 0x13e920: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_13e924:
    if (ctx->pc == 0x13E924u) {
        ctx->pc = 0x13E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E920u;
        // 0x13e924: 0x2a020008  slti        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E928u;
        goto label_13e928;
    }
    ctx->pc = 0x13E920u;
    {
        const bool branch_taken_0x13e920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E920u;
        // 0x13e924: 0x2a020008  slti        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e920) {
            ctx->pc = 0x13E930u;
            goto label_13e930;
        }
    }
    ctx->pc = 0x13E928u;
label_13e928:
    // 0x13e928: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_13e92c:
    if (ctx->pc == 0x13E92Cu) {
        ctx->pc = 0x13E930u;
        goto label_13e930;
    }
    ctx->pc = 0x13E928u;
    {
        const bool branch_taken_0x13e928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e928) {
            ctx->pc = 0x13E914u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e914;
        }
    }
    ctx->pc = 0x13E930u;
label_13e930:
    // 0x13e930: 0xc0802aa  jal         func_200AA8
label_13e934:
    if (ctx->pc == 0x13E934u) {
        ctx->pc = 0x13E938u;
        goto label_13e938;
    }
    ctx->pc = 0x13E930u;
    SET_GPR_U32(ctx, 31, 0x13E938u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x13E930u, 0x13E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E938u;
label_13e938:
    // 0x13e938: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x13e938u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_13e93c:
    // 0x13e93c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13e93cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13e940:
    // 0x13e940: 0x8e230178  lw          $v1, 0x178($s1)
    ctx->pc = 0x13e940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
label_13e944:
    // 0x13e944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e948:
    // 0x13e948: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x13e948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_13e94c:
    // 0x13e94c: 0x8e22017c  lw          $v0, 0x17C($s1)
    ctx->pc = 0x13e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
label_13e950:
    // 0x13e950: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13e950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_13e954:
    // 0x13e954: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13e958:
    // 0x13e958: 0x1810  mfhi        $v1
    ctx->pc = 0x13e958u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_13e95c:
    // 0x13e95c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13e960:
    // 0x13e960: 0x80450004  lb          $a1, 0x4($v0)
    ctx->pc = 0x13e960u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_13e964:
    // 0x13e964: 0x320f809  jalr        $t9
label_13e968:
    if (ctx->pc == 0x13E968u) {
        ctx->pc = 0x13E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E964u;
        // 0x13e968: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E96Cu;
        goto label_13e96c;
    }
    ctx->pc = 0x13E964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E96Cu);
        ctx->pc = 0x13E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E964u;
        // 0x13e968: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E964u, 0x13E96Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E96Cu;
label_13e96c:
    // 0x13e96c: 0xa220018b  sb          $zero, 0x18B($s1)
    ctx->pc = 0x13e96cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 395), (uint8_t)GPR_U32(ctx, 0));
label_13e970:
    // 0x13e970: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x13e970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_13e974:
    // 0x13e974: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13e974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e978:
    // 0x13e978: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x13e978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_13e97c:
    // 0x13e97c: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x13e97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_13e980:
    // 0x13e980: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13e980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_13e984:
    // 0x13e984: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13e984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e988:
    // 0x13e988: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x13e988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e98c:
    // 0x13e98c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x13e98cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e990:
    // 0x13e990: 0x0  nop
    ctx->pc = 0x13e990u;
    // NOP
label_13e994:
    // 0x13e994: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_13e998:
    if (ctx->pc == 0x13E998u) {
        ctx->pc = 0x13E99Cu;
        goto label_13e99c;
    }
    ctx->pc = 0x13E994u;
    {
        const bool branch_taken_0x13e994 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e994) {
            ctx->pc = 0x13E9D0u;
            goto label_13e9d0;
        }
    }
    ctx->pc = 0x13E99Cu;
label_13e99c:
    // 0x13e99c: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x13e99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e9a0:
    // 0x13e9a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13e9a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_13e9a4:
    // 0x13e9a4: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x13e9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
label_13e9a8:
    // 0x13e9a8: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x13e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_13e9ac:
    // 0x13e9ac: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x13e9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e9b0:
    // 0x13e9b0: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x13e9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e9b4:
    // 0x13e9b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13e9b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13e9b8:
    // 0x13e9b8: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x13e9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_13e9bc:
    // 0x13e9bc: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x13e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_13e9c0:
    // 0x13e9c0: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x13e9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e9c4:
    // 0x13e9c4: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x13e9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e9c8:
    // 0x13e9c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13e9c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13e9cc:
    // 0x13e9cc: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x13e9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_13e9d0:
    // 0x13e9d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13e9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13e9d4:
    // 0x13e9d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e9d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13e9d8:
    // 0x13e9d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e9d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13e9dc:
    // 0x13e9dc: 0x3e00008  jr          $ra
label_13e9e0:
    if (ctx->pc == 0x13E9E0u) {
        ctx->pc = 0x13E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E9DCu;
        // 0x13e9e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E9E4u;
        goto label_fallthrough_0x13e9dc;
    }
    ctx->pc = 0x13E9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E9DCu;
        // 0x13e9e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13e9dc:
    ctx->pc = 0x13E9E4u;
}
