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

// Function: FUN_00174eb0
// Address: 0x174eb0 - 0x176074
void FUN_00174eb0_0x174eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00174eb0_0x174eb0");
#endif

    switch (ctx->pc) {
        case 0x174edcu: goto label_174edc;
        case 0x174f1cu: goto label_174f1c;
        case 0x174f48u: goto label_174f48;
        case 0x174f80u: goto label_174f80;
        case 0x175020u: goto label_175020;
        case 0x175060u: goto label_175060;
        case 0x1750a0u: goto label_1750a0;
        case 0x1750ccu: goto label_1750cc;
        case 0x175104u: goto label_175104;
        case 0x1751a8u: goto label_1751a8;
        case 0x1751e8u: goto label_1751e8;
        case 0x175228u: goto label_175228;
        case 0x175254u: goto label_175254;
        case 0x17528cu: goto label_17528c;
        case 0x175330u: goto label_175330;
        case 0x175370u: goto label_175370;
        case 0x1753b0u: goto label_1753b0;
        case 0x1753dcu: goto label_1753dc;
        case 0x175414u: goto label_175414;
        case 0x1754b8u: goto label_1754b8;
        case 0x1754f8u: goto label_1754f8;
        case 0x175538u: goto label_175538;
        case 0x175564u: goto label_175564;
        case 0x17559cu: goto label_17559c;
        case 0x175640u: goto label_175640;
        case 0x175680u: goto label_175680;
        case 0x1756c0u: goto label_1756c0;
        case 0x1756ecu: goto label_1756ec;
        case 0x175724u: goto label_175724;
        case 0x1757c8u: goto label_1757c8;
        case 0x175808u: goto label_175808;
        case 0x175848u: goto label_175848;
        case 0x175874u: goto label_175874;
        case 0x1758acu: goto label_1758ac;
        case 0x175950u: goto label_175950;
        case 0x175990u: goto label_175990;
        case 0x1759d0u: goto label_1759d0;
        case 0x1759fcu: goto label_1759fc;
        case 0x175a34u: goto label_175a34;
        case 0x175ad8u: goto label_175ad8;
        case 0x175b18u: goto label_175b18;
        case 0x175b58u: goto label_175b58;
        case 0x175b84u: goto label_175b84;
        case 0x175bbcu: goto label_175bbc;
        case 0x175c60u: goto label_175c60;
        case 0x175ca0u: goto label_175ca0;
        case 0x175ce0u: goto label_175ce0;
        case 0x175d0cu: goto label_175d0c;
        case 0x175d44u: goto label_175d44;
        case 0x175de8u: goto label_175de8;
        case 0x175e28u: goto label_175e28;
        case 0x175e68u: goto label_175e68;
        case 0x175e94u: goto label_175e94;
        case 0x175eccu: goto label_175ecc;
        case 0x175f70u: goto label_175f70;
        case 0x175fb4u: goto label_175fb4;
        case 0x176028u: goto label_176028;
        default: break;
    }

    ctx->pc = 0x174eb0u;

    // 0x174eb0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x174eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x174eb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x174eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x174eb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x174eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x174ebc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x174ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x174ec0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x174ec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ec4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x174ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x174ec8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x174ec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ecc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x174eccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x174ed0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ed4: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x174ED4u;
    {
        const bool branch_taken_0x174ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174ED4u;
        // 0x174ed8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ed4) {
            ctx->pc = 0x175044u;
            goto label_175044;
        }
    }
    ctx->pc = 0x174EDCu;
label_174edc:
    // 0x174edc: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x174edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x174ee0: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x174ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x174ee4: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x174ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x174ee8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x174ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x174eec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174ef0: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x174ef0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174ef4: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x174ef4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x174ef8: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x174ef8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x174efc: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x174efcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x174f00: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x174f00u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x174f04: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x174f04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174f08: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x174f08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174f0c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x174f0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174f10: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x174f10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x174f14: 0xc045b20  jal         func_116C80
    ctx->pc = 0x174F14u;
    SET_GPR_U32(ctx, 31, 0x174F1Cu);
    ctx->pc = 0x174F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174F14u;
    // 0x174f18: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x174F14u, 0x174F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F1Cu;
label_174f1c:
    // 0x174f1c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x174f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174f20: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x174f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x174f24: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x174f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x174f28: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x174f28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x174f2c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x174f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x174f30: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x174f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x174f34: 0x0  nop
    ctx->pc = 0x174f34u;
    // NOP
    // 0x174f38: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x174f38u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x174f3c: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x174f3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x174f40: 0xc045b20  jal         func_116C80
    ctx->pc = 0x174F40u;
    SET_GPR_U32(ctx, 31, 0x174F48u);
    ctx->pc = 0x174F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174F40u;
    // 0x174f44: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x174F40u, 0x174F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F48u;
label_174f48:
    // 0x174f48: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x174f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x174f4c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x174f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x174f50: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x174f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x174f54: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x174f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x174f58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x174f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x174f5c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x174f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174f60: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x174f60u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x174f64: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x174f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x174f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174f6c: 0x0  nop
    ctx->pc = 0x174f6cu;
    // NOP
    // 0x174f70: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x174f70u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x174f74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x174f74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x174f78: 0xc045b20  jal         func_116C80
    ctx->pc = 0x174F78u;
    SET_GPR_U32(ctx, 31, 0x174F80u);
    ctx->pc = 0x174F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174F78u;
    // 0x174f7c: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x174F78u, 0x174F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F80u;
label_174f80:
    // 0x174f80: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x174f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174f84: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x174f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x174f88: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x174f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x174f8c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x174f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x174f90: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x174f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x174f94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x174f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x174f98: 0x0  nop
    ctx->pc = 0x174f98u;
    // NOP
    // 0x174f9c: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x174f9cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x174fa0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x174fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x174fa4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x174fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x174fa8: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x174fa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x174fac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x174facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174fb0: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x174fb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x174fb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x174fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x174fb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x174fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174fbc: 0x0  nop
    ctx->pc = 0x174fbcu;
    // NOP
    // 0x174fc0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x174fc0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174fc4: 0x0  nop
    ctx->pc = 0x174fc4u;
    // NOP
    // 0x174fc8: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x174FC8u;
    {
        const bool branch_taken_0x174fc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x174FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FC8u;
        // 0x174fcc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174fc8) {
            ctx->pc = 0x175018u;
            goto label_175018;
        }
    }
    ctx->pc = 0x174FD0u;
    // 0x174fd0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x174fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174fd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x174fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x174fd8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x174fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174fdc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x174fdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x174fe0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x174fe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x174fe4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x174fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x174fe8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x174fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174fec: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x174fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174ff0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x174ff0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x174ff4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x174ff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x174ff8: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x174ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x174ffc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x174ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175000: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x175000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175004: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175004u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175008: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17500c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x17500cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x175010: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x175010u;
    {
        const bool branch_taken_0x175010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175010u;
        // 0x175014: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175010) {
            ctx->pc = 0x175020u;
            goto label_175020;
        }
    }
    ctx->pc = 0x175018u;
label_175018:
    // 0x175018: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x175018u;
    SET_GPR_U32(ctx, 31, 0x175020u);
    ctx->pc = 0x17501Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175018u;
    // 0x17501c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x175018u, 0x175020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175020u;
label_175020:
    // 0x175020: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x175020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175024: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175028: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17502c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17502cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x175030: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x175030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x175034: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x175034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175038: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x175038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17503c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17503cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175040: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x175040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_175044:
    // 0x175044: 0x0  nop
    ctx->pc = 0x175044u;
    // NOP
    // 0x175048: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x175048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17504c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x17504cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175050: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x175050u;
    {
        const bool branch_taken_0x175050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175050) {
            ctx->pc = 0x174EDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174edc;
        }
    }
    ctx->pc = 0x175058u;
    // 0x175058: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x175058u;
    {
        const bool branch_taken_0x175058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175058u;
        // 0x17505c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175058) {
            ctx->pc = 0x1751CCu;
            goto label_1751cc;
        }
    }
    ctx->pc = 0x175060u;
label_175060:
    // 0x175060: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x175060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x175064: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x175064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x175068: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x175068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x17506c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17506cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x175070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175074: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x175074u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175078: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x175078u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17507c: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x17507cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x175080: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x175080u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x175084: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x175084u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x175088: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x175088u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17508c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x17508cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175090: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x175090u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175094: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x175094u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x175098: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175098u;
    SET_GPR_U32(ctx, 31, 0x1750A0u);
    ctx->pc = 0x17509Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175098u;
    // 0x17509c: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175098u, 0x1750A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1750A0u;
label_1750a0:
    // 0x1750a0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1750a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1750a4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1750a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1750a8: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1750a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1750ac: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1750acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1750b0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1750b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1750b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1750b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1750b8: 0x0  nop
    ctx->pc = 0x1750b8u;
    // NOP
    // 0x1750bc: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x1750bcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1750c0: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x1750c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1750c4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1750C4u;
    SET_GPR_U32(ctx, 31, 0x1750CCu);
    ctx->pc = 0x1750C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1750C4u;
    // 0x1750c8: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1750C4u, 0x1750CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1750CCu;
label_1750cc:
    // 0x1750cc: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1750ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1750d0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1750d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1750d4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1750d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1750d8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1750d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1750dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1750dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1750e0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1750e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1750e4: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x1750e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1750e8: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1750e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x1750ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1750ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1750f0: 0x0  nop
    ctx->pc = 0x1750f0u;
    // NOP
    // 0x1750f4: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x1750f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1750f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1750f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1750fc: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1750FCu;
    SET_GPR_U32(ctx, 31, 0x175104u);
    ctx->pc = 0x175100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1750FCu;
    // 0x175100: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1750FCu, 0x175104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175104u;
label_175104:
    // 0x175104: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x175104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175108: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x17510c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x17510cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175110: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175114: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175118: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17511c: 0x0  nop
    ctx->pc = 0x17511cu;
    // NOP
    // 0x175120: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175120u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175124: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175128: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x175128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17512c: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x17512cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175130: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x175130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175134: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x175134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x175138: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x175138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17513c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17513cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175140: 0x0  nop
    ctx->pc = 0x175140u;
    // NOP
    // 0x175144: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x175144u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175148: 0x0  nop
    ctx->pc = 0x175148u;
    // NOP
    // 0x17514c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x17514Cu;
    {
        const bool branch_taken_0x17514c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x175150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17514Cu;
        // 0x175150: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17514c) {
            ctx->pc = 0x17519Cu;
            goto label_17519c;
        }
    }
    ctx->pc = 0x175154u;
    // 0x175154: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x175154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175158: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17515c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x17515cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175160: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x175160u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x175164: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175168: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x175168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x17516c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x17516cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175170: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x175170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175174: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175174u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175178: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17517c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x17517cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x175180: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x175180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175184: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x175184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175188: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17518c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x17518cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175190: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x175190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x175194: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x175194u;
    {
        const bool branch_taken_0x175194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175194u;
        // 0x175198: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175194) {
            ctx->pc = 0x1751A8u;
            goto label_1751a8;
        }
    }
    ctx->pc = 0x17519Cu;
label_17519c:
    // 0x17519c: 0x0  nop
    ctx->pc = 0x17519cu;
    // NOP
    // 0x1751a0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1751A0u;
    SET_GPR_U32(ctx, 31, 0x1751A8u);
    ctx->pc = 0x1751A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1751A0u;
    // 0x1751a4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1751A0u, 0x1751A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1751A8u;
label_1751a8:
    // 0x1751a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1751a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1751ac: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1751acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1751b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1751b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1751b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1751b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1751b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1751b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1751bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1751bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1751c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1751c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1751c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1751c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1751c8: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x1751c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_1751cc:
    // 0x1751cc: 0x0  nop
    ctx->pc = 0x1751ccu;
    // NOP
    // 0x1751d0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1751d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1751d4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1751d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1751d8: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x1751D8u;
    {
        const bool branch_taken_0x1751d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1751d8) {
            ctx->pc = 0x175060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175060;
        }
    }
    ctx->pc = 0x1751E0u;
    // 0x1751e0: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1751E0u;
    {
        const bool branch_taken_0x1751e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1751E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751E0u;
        // 0x1751e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751e0) {
            ctx->pc = 0x175354u;
            goto label_175354;
        }
    }
    ctx->pc = 0x1751E8u;
label_1751e8:
    // 0x1751e8: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1751e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1751ec: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1751ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1751f0: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x1751f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1751f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1751f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1751f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1751f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1751fc: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1751fcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175200: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x175200u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x175204: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x175204u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x175208: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x175208u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x17520c: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x17520cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x175210: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x175210u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175214: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x175214u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175218: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x175218u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17521c: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x17521cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x175220: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175220u;
    SET_GPR_U32(ctx, 31, 0x175228u);
    ctx->pc = 0x175224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175220u;
    // 0x175224: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175220u, 0x175228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175228u;
label_175228:
    // 0x175228: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x175228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17522c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x17522cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175230: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175234: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175238: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x17523c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17523cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175240: 0x0  nop
    ctx->pc = 0x175240u;
    // NOP
    // 0x175244: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175244u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175248: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x175248u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x17524c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17524Cu;
    SET_GPR_U32(ctx, 31, 0x175254u);
    ctx->pc = 0x175250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17524Cu;
    // 0x175250: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17524Cu, 0x175254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175254u;
label_175254:
    // 0x175254: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175258: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x17525c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x17525cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175260: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175264: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175268: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x175268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17526c: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x17526cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175270: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x175270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x175274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175278: 0x0  nop
    ctx->pc = 0x175278u;
    // NOP
    // 0x17527c: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x17527cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175280: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x175280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x175284: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175284u;
    SET_GPR_U32(ctx, 31, 0x17528Cu);
    ctx->pc = 0x175288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175284u;
    // 0x175288: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175284u, 0x17528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17528Cu;
label_17528c:
    // 0x17528c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x17528cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175290: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175294: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175298: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x17529c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x17529cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1752a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1752a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1752a4: 0x0  nop
    ctx->pc = 0x1752a4u;
    // NOP
    // 0x1752a8: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x1752a8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1752ac: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1752acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1752b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1752b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1752b4: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x1752b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1752b8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1752b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1752bc: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x1752bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1752c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1752c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1752c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1752c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1752c8: 0x0  nop
    ctx->pc = 0x1752c8u;
    // NOP
    // 0x1752cc: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1752ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1752d0: 0x0  nop
    ctx->pc = 0x1752d0u;
    // NOP
    // 0x1752d4: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1752D4u;
    {
        const bool branch_taken_0x1752d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1752D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1752D4u;
        // 0x1752d8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1752d4) {
            ctx->pc = 0x175324u;
            goto label_175324;
        }
    }
    ctx->pc = 0x1752DCu;
    // 0x1752dc: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1752dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1752e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1752e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1752e4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1752e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1752e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1752e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1752ec: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1752ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1752f0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1752f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1752f4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1752f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1752f8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1752f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1752fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1752fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175300: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175304: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x175304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x175308: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x175308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17530c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x17530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175310: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175314: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175318: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x175318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x17531c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17531Cu;
    {
        const bool branch_taken_0x17531c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17531Cu;
        // 0x175320: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17531c) {
            ctx->pc = 0x175330u;
            goto label_175330;
        }
    }
    ctx->pc = 0x175324u;
label_175324:
    // 0x175324: 0x0  nop
    ctx->pc = 0x175324u;
    // NOP
    // 0x175328: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x175328u;
    SET_GPR_U32(ctx, 31, 0x175330u);
    ctx->pc = 0x17532Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175328u;
    // 0x17532c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x175328u, 0x175330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175330u;
label_175330:
    // 0x175330: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x175330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175334: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175338: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17533c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17533cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x175340: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x175340u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x175344: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x175344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175348: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x175348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17534c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175350: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x175350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_175354:
    // 0x175354: 0x0  nop
    ctx->pc = 0x175354u;
    // NOP
    // 0x175358: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x175358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x17535c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x17535cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175360: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x175360u;
    {
        const bool branch_taken_0x175360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175360) {
            ctx->pc = 0x1751E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1751e8;
        }
    }
    ctx->pc = 0x175368u;
    // 0x175368: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x175368u;
    {
        const bool branch_taken_0x175368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175368u;
        // 0x17536c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175368) {
            ctx->pc = 0x1754DCu;
            goto label_1754dc;
        }
    }
    ctx->pc = 0x175370u;
label_175370:
    // 0x175370: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x175370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x175374: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x175374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x175378: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x175378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x17537c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17537cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x175380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175384: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x175384u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175388: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x175388u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17538c: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x17538cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x175390: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x175390u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x175394: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x175394u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x175398: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x175398u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17539c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x17539cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1753a0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1753a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1753a4: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x1753a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1753a8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1753A8u;
    SET_GPR_U32(ctx, 31, 0x1753B0u);
    ctx->pc = 0x1753ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1753A8u;
    // 0x1753ac: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1753A8u, 0x1753B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1753B0u;
label_1753b0:
    // 0x1753b0: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1753b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1753b4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1753b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1753b8: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1753b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1753bc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1753bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1753c0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1753c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1753c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1753c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1753c8: 0x0  nop
    ctx->pc = 0x1753c8u;
    // NOP
    // 0x1753cc: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x1753ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1753d0: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x1753d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1753d4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1753D4u;
    SET_GPR_U32(ctx, 31, 0x1753DCu);
    ctx->pc = 0x1753D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1753D4u;
    // 0x1753d8: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1753D4u, 0x1753DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1753DCu;
label_1753dc:
    // 0x1753dc: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1753dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1753e0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1753e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1753e4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1753e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1753e8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1753e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1753ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1753ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1753f0: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1753f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1753f4: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x1753f4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1753f8: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1753f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x1753fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1753fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175400: 0x0  nop
    ctx->pc = 0x175400u;
    // NOP
    // 0x175404: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x175404u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175408: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x175408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17540c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17540Cu;
    SET_GPR_U32(ctx, 31, 0x175414u);
    ctx->pc = 0x175410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17540Cu;
    // 0x175410: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17540Cu, 0x175414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175414u;
label_175414:
    // 0x175414: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x175414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175418: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x17541c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x17541cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175420: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175424: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175428: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17542c: 0x0  nop
    ctx->pc = 0x17542cu;
    // NOP
    // 0x175430: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175430u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175434: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175438: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x175438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17543c: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x17543cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175440: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x175440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175444: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x175444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x175448: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x175448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17544c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17544cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175450: 0x0  nop
    ctx->pc = 0x175450u;
    // NOP
    // 0x175454: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x175454u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175458: 0x0  nop
    ctx->pc = 0x175458u;
    // NOP
    // 0x17545c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x17545Cu;
    {
        const bool branch_taken_0x17545c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x175460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17545Cu;
        // 0x175460: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17545c) {
            ctx->pc = 0x1754ACu;
            goto label_1754ac;
        }
    }
    ctx->pc = 0x175464u;
    // 0x175464: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x175464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175468: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17546c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x17546cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175470: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x175470u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x175474: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175478: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x175478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x17547c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x17547cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175480: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x175480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175484: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175484u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175488: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17548c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x17548cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x175490: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x175490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175494: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x175494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175498: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175498u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17549c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x17549cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1754a0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1754a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1754a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1754A4u;
    {
        const bool branch_taken_0x1754a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1754A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754A4u;
        // 0x1754a8: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754a4) {
            ctx->pc = 0x1754B8u;
            goto label_1754b8;
        }
    }
    ctx->pc = 0x1754ACu;
label_1754ac:
    // 0x1754ac: 0x0  nop
    ctx->pc = 0x1754acu;
    // NOP
    // 0x1754b0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1754B0u;
    SET_GPR_U32(ctx, 31, 0x1754B8u);
    ctx->pc = 0x1754B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1754B0u;
    // 0x1754b4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1754B0u, 0x1754B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1754B8u;
label_1754b8:
    // 0x1754b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1754b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1754bc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1754bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1754c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1754c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1754c4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1754c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1754c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1754c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1754cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1754ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1754d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1754d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1754d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1754d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1754d8: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x1754d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_1754dc:
    // 0x1754dc: 0x0  nop
    ctx->pc = 0x1754dcu;
    // NOP
    // 0x1754e0: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1754e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1754e4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1754e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1754e8: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x1754E8u;
    {
        const bool branch_taken_0x1754e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1754e8) {
            ctx->pc = 0x175370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175370;
        }
    }
    ctx->pc = 0x1754F0u;
    // 0x1754f0: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1754F0u;
    {
        const bool branch_taken_0x1754f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1754F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754F0u;
        // 0x1754f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754f0) {
            ctx->pc = 0x175664u;
            goto label_175664;
        }
    }
    ctx->pc = 0x1754F8u;
label_1754f8:
    // 0x1754f8: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1754f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1754fc: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1754fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x175500: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x175500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x175504: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x175504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x175508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17550c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x17550cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175510: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x175510u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x175514: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x175514u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x175518: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x175518u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x17551c: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x17551cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x175520: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x175520u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175524: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x175524u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175528: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x175528u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17552c: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x17552cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x175530: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175530u;
    SET_GPR_U32(ctx, 31, 0x175538u);
    ctx->pc = 0x175534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175530u;
    // 0x175534: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175530u, 0x175538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175538u;
label_175538:
    // 0x175538: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x175538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17553c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x17553cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175540: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175544: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175548: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x17554c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17554cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175550: 0x0  nop
    ctx->pc = 0x175550u;
    // NOP
    // 0x175554: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175554u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175558: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x175558u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x17555c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17555Cu;
    SET_GPR_U32(ctx, 31, 0x175564u);
    ctx->pc = 0x175560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17555Cu;
    // 0x175560: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17555Cu, 0x175564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175564u;
label_175564:
    // 0x175564: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175568: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x17556c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x17556cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175570: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175574: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175578: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x175578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17557c: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x17557cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175580: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x175580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x175584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175588: 0x0  nop
    ctx->pc = 0x175588u;
    // NOP
    // 0x17558c: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x17558cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175590: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x175590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x175594: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175594u;
    SET_GPR_U32(ctx, 31, 0x17559Cu);
    ctx->pc = 0x175598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175594u;
    // 0x175598: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175594u, 0x17559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17559Cu;
label_17559c:
    // 0x17559c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x17559cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1755a0: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1755a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1755a4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1755a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1755a8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1755a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1755ac: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1755acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1755b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1755b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1755b4: 0x0  nop
    ctx->pc = 0x1755b4u;
    // NOP
    // 0x1755b8: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x1755b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1755bc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1755bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1755c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1755c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1755c4: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x1755c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1755c8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1755c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1755cc: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x1755ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1755d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1755d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1755d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1755d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1755d8: 0x0  nop
    ctx->pc = 0x1755d8u;
    // NOP
    // 0x1755dc: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1755dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1755e0: 0x0  nop
    ctx->pc = 0x1755e0u;
    // NOP
    // 0x1755e4: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1755E4u;
    {
        const bool branch_taken_0x1755e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1755E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755E4u;
        // 0x1755e8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755e4) {
            ctx->pc = 0x175634u;
            goto label_175634;
        }
    }
    ctx->pc = 0x1755ECu;
    // 0x1755ec: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1755ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1755f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1755f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1755f4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1755f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1755f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1755f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1755fc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1755fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175600: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x175600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x175604: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x175604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175608: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x175608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17560c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17560cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175610: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175614: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x175614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x175618: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x175618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17561c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x17561cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175620: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175620u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175624: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175628: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x175628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x17562c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17562Cu;
    {
        const bool branch_taken_0x17562c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17562Cu;
        // 0x175630: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17562c) {
            ctx->pc = 0x175640u;
            goto label_175640;
        }
    }
    ctx->pc = 0x175634u;
label_175634:
    // 0x175634: 0x0  nop
    ctx->pc = 0x175634u;
    // NOP
    // 0x175638: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x175638u;
    SET_GPR_U32(ctx, 31, 0x175640u);
    ctx->pc = 0x17563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175638u;
    // 0x17563c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x175638u, 0x175640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175640u;
label_175640:
    // 0x175640: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x175640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175644: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175648: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17564c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x175650: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x175650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x175654: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x175654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175658: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x175658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17565c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17565cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175660: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x175660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_175664:
    // 0x175664: 0x0  nop
    ctx->pc = 0x175664u;
    // NOP
    // 0x175668: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x175668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x17566c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x17566cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175670: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x175670u;
    {
        const bool branch_taken_0x175670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175670) {
            ctx->pc = 0x1754F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1754f8;
        }
    }
    ctx->pc = 0x175678u;
    // 0x175678: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x175678u;
    {
        const bool branch_taken_0x175678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175678u;
        // 0x17567c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175678) {
            ctx->pc = 0x1757ECu;
            goto label_1757ec;
        }
    }
    ctx->pc = 0x175680u;
label_175680:
    // 0x175680: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x175680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x175684: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x175684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x175688: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x175688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x17568c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x17568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x175690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175694: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x175694u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175698: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x175698u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17569c: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x17569cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1756a0: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x1756a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1756a4: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x1756a4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1756a8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1756a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1756ac: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1756acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1756b0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1756b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1756b4: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x1756b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1756b8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1756B8u;
    SET_GPR_U32(ctx, 31, 0x1756C0u);
    ctx->pc = 0x1756BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1756B8u;
    // 0x1756bc: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1756B8u, 0x1756C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1756C0u;
label_1756c0:
    // 0x1756c0: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1756c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1756c4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1756c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1756c8: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1756c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1756cc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1756ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1756d0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1756d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1756d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1756d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1756d8: 0x0  nop
    ctx->pc = 0x1756d8u;
    // NOP
    // 0x1756dc: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x1756dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1756e0: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x1756e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1756e4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1756E4u;
    SET_GPR_U32(ctx, 31, 0x1756ECu);
    ctx->pc = 0x1756E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1756E4u;
    // 0x1756e8: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1756E4u, 0x1756ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1756ECu;
label_1756ec:
    // 0x1756ec: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1756ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1756f0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1756f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1756f4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1756f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1756f8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1756f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1756fc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1756fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175700: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x175700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175704: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175704u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175708: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x175708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x17570c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17570cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175710: 0x0  nop
    ctx->pc = 0x175710u;
    // NOP
    // 0x175714: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x175714u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175718: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x175718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17571c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17571Cu;
    SET_GPR_U32(ctx, 31, 0x175724u);
    ctx->pc = 0x175720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17571Cu;
    // 0x175720: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17571Cu, 0x175724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175724u;
label_175724:
    // 0x175724: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x175724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175728: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x17572c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x17572cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175730: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175734: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175734u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175738: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17573c: 0x0  nop
    ctx->pc = 0x17573cu;
    // NOP
    // 0x175740: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175740u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175744: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175748: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x175748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17574c: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x17574cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175750: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x175750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175754: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x175754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x175758: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x175758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17575c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17575cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175760: 0x0  nop
    ctx->pc = 0x175760u;
    // NOP
    // 0x175764: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x175764u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175768: 0x0  nop
    ctx->pc = 0x175768u;
    // NOP
    // 0x17576c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x17576Cu;
    {
        const bool branch_taken_0x17576c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x175770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17576Cu;
        // 0x175770: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17576c) {
            ctx->pc = 0x1757BCu;
            goto label_1757bc;
        }
    }
    ctx->pc = 0x175774u;
    // 0x175774: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x175774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175778: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17577c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x17577cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175780: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x175780u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x175784: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175788: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x175788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x17578c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x17578cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175790: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x175790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175794: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175794u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175798: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17579c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x17579cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1757a0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1757a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1757a4: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1757a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1757a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1757a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1757ac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1757acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1757b0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1757b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1757b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1757B4u;
    {
        const bool branch_taken_0x1757b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1757B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757B4u;
        // 0x1757b8: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757b4) {
            ctx->pc = 0x1757C8u;
            goto label_1757c8;
        }
    }
    ctx->pc = 0x1757BCu;
label_1757bc:
    // 0x1757bc: 0x0  nop
    ctx->pc = 0x1757bcu;
    // NOP
    // 0x1757c0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1757C0u;
    SET_GPR_U32(ctx, 31, 0x1757C8u);
    ctx->pc = 0x1757C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1757C0u;
    // 0x1757c4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1757C0u, 0x1757C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1757C8u;
label_1757c8:
    // 0x1757c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1757c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1757cc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1757ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1757d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1757d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1757d4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1757d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1757d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1757d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1757dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1757dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1757e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1757e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1757e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1757e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1757e8: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x1757e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_1757ec:
    // 0x1757ec: 0x0  nop
    ctx->pc = 0x1757ecu;
    // NOP
    // 0x1757f0: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x1757f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1757f4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1757f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1757f8: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x1757F8u;
    {
        const bool branch_taken_0x1757f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1757f8) {
            ctx->pc = 0x175680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175680;
        }
    }
    ctx->pc = 0x175800u;
    // 0x175800: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x175800u;
    {
        const bool branch_taken_0x175800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175800u;
        // 0x175804: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175800) {
            ctx->pc = 0x175974u;
            goto label_175974;
        }
    }
    ctx->pc = 0x175808u;
label_175808:
    // 0x175808: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x175808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x17580c: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x17580cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x175810: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x175810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x175814: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x175814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x175818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17581c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x17581cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175820: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x175820u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x175824: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x175824u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x175828: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x175828u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x17582c: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x17582cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x175830: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x175830u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175834: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x175834u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175838: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x175838u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17583c: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x17583cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x175840: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175840u;
    SET_GPR_U32(ctx, 31, 0x175848u);
    ctx->pc = 0x175844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175840u;
    // 0x175844: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175840u, 0x175848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175848u;
label_175848:
    // 0x175848: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x175848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17584c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x17584cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175850: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175854: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175858: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x17585c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17585cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175860: 0x0  nop
    ctx->pc = 0x175860u;
    // NOP
    // 0x175864: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175864u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175868: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x175868u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x17586c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17586Cu;
    SET_GPR_U32(ctx, 31, 0x175874u);
    ctx->pc = 0x175870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17586Cu;
    // 0x175870: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17586Cu, 0x175874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175874u;
label_175874:
    // 0x175874: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175878: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x17587c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x17587cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175880: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175884: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175888: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x175888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17588c: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x17588cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175890: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x175890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x175894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175898: 0x0  nop
    ctx->pc = 0x175898u;
    // NOP
    // 0x17589c: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x17589cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1758a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1758a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1758a4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1758A4u;
    SET_GPR_U32(ctx, 31, 0x1758ACu);
    ctx->pc = 0x1758A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1758A4u;
    // 0x1758a8: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1758A4u, 0x1758ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1758ACu;
label_1758ac:
    // 0x1758ac: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1758acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1758b0: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1758b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1758b4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1758b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1758b8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1758b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1758bc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1758bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1758c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1758c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1758c4: 0x0  nop
    ctx->pc = 0x1758c4u;
    // NOP
    // 0x1758c8: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x1758c8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1758cc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1758ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1758d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1758d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1758d4: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x1758d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1758d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1758d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1758dc: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x1758dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1758e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1758e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1758e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1758e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1758e8: 0x0  nop
    ctx->pc = 0x1758e8u;
    // NOP
    // 0x1758ec: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1758ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1758f0: 0x0  nop
    ctx->pc = 0x1758f0u;
    // NOP
    // 0x1758f4: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1758F4u;
    {
        const bool branch_taken_0x1758f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1758F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758F4u;
        // 0x1758f8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1758f4) {
            ctx->pc = 0x175944u;
            goto label_175944;
        }
    }
    ctx->pc = 0x1758FCu;
    // 0x1758fc: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1758fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175900: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175904: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x175904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175908: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x175908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17590c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x17590cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175910: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x175910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x175914: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x175914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175918: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x175918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17591c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17591cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175920: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175924: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x175924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x175928: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x175928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17592c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x17592cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175930: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175930u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175934: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175938: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x175938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x17593c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17593Cu;
    {
        const bool branch_taken_0x17593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17593Cu;
        // 0x175940: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17593c) {
            ctx->pc = 0x175950u;
            goto label_175950;
        }
    }
    ctx->pc = 0x175944u;
label_175944:
    // 0x175944: 0x0  nop
    ctx->pc = 0x175944u;
    // NOP
    // 0x175948: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x175948u;
    SET_GPR_U32(ctx, 31, 0x175950u);
    ctx->pc = 0x17594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175948u;
    // 0x17594c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x175948u, 0x175950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175950u;
label_175950:
    // 0x175950: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x175950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175954: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175958: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17595c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x175960: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x175960u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x175964: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x175964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175968: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x175968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17596c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175970: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x175970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_175974:
    // 0x175974: 0x0  nop
    ctx->pc = 0x175974u;
    // NOP
    // 0x175978: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x175978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x17597c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x17597cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175980: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x175980u;
    {
        const bool branch_taken_0x175980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175980) {
            ctx->pc = 0x175808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175808;
        }
    }
    ctx->pc = 0x175988u;
    // 0x175988: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x175988u;
    {
        const bool branch_taken_0x175988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175988u;
        // 0x17598c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175988) {
            ctx->pc = 0x175AFCu;
            goto label_175afc;
        }
    }
    ctx->pc = 0x175990u;
label_175990:
    // 0x175990: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x175990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x175994: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x175994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x175998: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x175998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x17599c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17599cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1759a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1759a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1759a4: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1759a4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1759a8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1759a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1759ac: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x1759acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1759b0: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x1759b0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1759b4: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x1759b4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1759b8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1759b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1759bc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1759bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1759c0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1759c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1759c4: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x1759c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1759c8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1759C8u;
    SET_GPR_U32(ctx, 31, 0x1759D0u);
    ctx->pc = 0x1759CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1759C8u;
    // 0x1759cc: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1759C8u, 0x1759D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1759D0u;
label_1759d0:
    // 0x1759d0: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1759d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1759d4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1759d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1759d8: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1759d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1759dc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1759dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1759e0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1759e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1759e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1759e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1759e8: 0x0  nop
    ctx->pc = 0x1759e8u;
    // NOP
    // 0x1759ec: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x1759ecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1759f0: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x1759f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1759f4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1759F4u;
    SET_GPR_U32(ctx, 31, 0x1759FCu);
    ctx->pc = 0x1759F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1759F4u;
    // 0x1759f8: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1759F4u, 0x1759FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1759FCu;
label_1759fc:
    // 0x1759fc: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1759fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175a00: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175a04: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175a08: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175a08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175a0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175a10: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x175a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175a14: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175a14u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175a18: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x175a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x175a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175a20: 0x0  nop
    ctx->pc = 0x175a20u;
    // NOP
    // 0x175a24: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x175a24u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175a28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x175a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x175a2c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175A2Cu;
    SET_GPR_U32(ctx, 31, 0x175A34u);
    ctx->pc = 0x175A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A2Cu;
    // 0x175a30: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175A2Cu, 0x175A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A34u;
label_175a34:
    // 0x175a34: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x175a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175a38: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175a3c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175a40: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175a44: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175a44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175a48: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175a4c: 0x0  nop
    ctx->pc = 0x175a4cu;
    // NOP
    // 0x175a50: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175a50u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175a54: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175a58: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x175a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x175a5c: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x175a5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175a60: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x175a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175a64: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x175a64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x175a68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x175a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175a6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175a6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175a70: 0x0  nop
    ctx->pc = 0x175a70u;
    // NOP
    // 0x175a74: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x175a74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175a78: 0x0  nop
    ctx->pc = 0x175a78u;
    // NOP
    // 0x175a7c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x175A7Cu;
    {
        const bool branch_taken_0x175a7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x175A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A7Cu;
        // 0x175a80: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175a7c) {
            ctx->pc = 0x175ACCu;
            goto label_175acc;
        }
    }
    ctx->pc = 0x175A84u;
    // 0x175a84: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x175a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175a88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175a8c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x175a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175a90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x175a90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x175a94: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175a94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175a98: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x175a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x175a9c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x175a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175aa0: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x175aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175aa4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175aa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175aa8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175aac: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x175aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x175ab0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x175ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175ab4: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x175ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175ab8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175ab8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175abc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175abcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175ac0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x175ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x175ac4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x175AC4u;
    {
        const bool branch_taken_0x175ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AC4u;
        // 0x175ac8: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ac4) {
            ctx->pc = 0x175AD8u;
            goto label_175ad8;
        }
    }
    ctx->pc = 0x175ACCu;
label_175acc:
    // 0x175acc: 0x0  nop
    ctx->pc = 0x175accu;
    // NOP
    // 0x175ad0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x175AD0u;
    SET_GPR_U32(ctx, 31, 0x175AD8u);
    ctx->pc = 0x175AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175AD0u;
    // 0x175ad4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x175AD0u, 0x175AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175AD8u;
label_175ad8:
    // 0x175ad8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x175ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175adc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175ae0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175ae4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x175ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x175ae8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x175ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x175aec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x175aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175af0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x175af0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x175af4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175af8: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x175af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_175afc:
    // 0x175afc: 0x0  nop
    ctx->pc = 0x175afcu;
    // NOP
    // 0x175b00: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x175b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x175b04: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x175b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175b08: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x175B08u;
    {
        const bool branch_taken_0x175b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175b08) {
            ctx->pc = 0x175990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175990;
        }
    }
    ctx->pc = 0x175B10u;
    // 0x175b10: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x175B10u;
    {
        const bool branch_taken_0x175b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B10u;
        // 0x175b14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b10) {
            ctx->pc = 0x175C84u;
            goto label_175c84;
        }
    }
    ctx->pc = 0x175B18u;
label_175b18:
    // 0x175b18: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x175b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x175b1c: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x175b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x175b20: 0x8e0500d0  lw          $a1, 0xD0($s0)
    ctx->pc = 0x175b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x175b24: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x175b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x175b28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175b2c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x175b2cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175b30: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x175b30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x175b34: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x175b34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x175b38: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x175b38u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x175b3c: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x175b3cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x175b40: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x175b40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175b44: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x175b44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175b48: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x175b48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175b4c: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x175b4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x175b50: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175B50u;
    SET_GPR_U32(ctx, 31, 0x175B58u);
    ctx->pc = 0x175B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B50u;
    // 0x175b54: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175B50u, 0x175B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B58u;
label_175b58:
    // 0x175b58: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x175b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175b5c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175b60: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175b64: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175b68: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175b6c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175b70: 0x0  nop
    ctx->pc = 0x175b70u;
    // NOP
    // 0x175b74: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175b74u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175b78: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x175b78u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175b7c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175B7Cu;
    SET_GPR_U32(ctx, 31, 0x175B84u);
    ctx->pc = 0x175B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B7Cu;
    // 0x175b80: 0xe7a000e0  swc1        $f0, 0xE0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175B7Cu, 0x175B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B84u;
label_175b84:
    // 0x175b84: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175b88: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175b8c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175b90: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175b90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175b94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175b98: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x175b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175b9c: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175b9cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175ba0: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x175ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x175ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175ba8: 0x0  nop
    ctx->pc = 0x175ba8u;
    // NOP
    // 0x175bac: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x175bacu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175bb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x175bb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x175bb4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175BB4u;
    SET_GPR_U32(ctx, 31, 0x175BBCu);
    ctx->pc = 0x175BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175BB4u;
    // 0x175bb8: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175BB4u, 0x175BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175BBCu;
label_175bbc:
    // 0x175bbc: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x175bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175bc0: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175bc4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175bc8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175bcc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175bccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175bd0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175bd4: 0x0  nop
    ctx->pc = 0x175bd4u;
    // NOP
    // 0x175bd8: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175bd8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175bdc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175be0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x175be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x175be4: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x175be4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175be8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x175be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175bec: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x175becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x175bf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x175bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175bf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175bf8: 0x0  nop
    ctx->pc = 0x175bf8u;
    // NOP
    // 0x175bfc: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x175bfcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175c00: 0x0  nop
    ctx->pc = 0x175c00u;
    // NOP
    // 0x175c04: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x175C04u;
    {
        const bool branch_taken_0x175c04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x175C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C04u;
        // 0x175c08: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c04) {
            ctx->pc = 0x175C54u;
            goto label_175c54;
        }
    }
    ctx->pc = 0x175C0Cu;
    // 0x175c0c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x175c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175c10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175c14: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x175c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175c18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x175c18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x175c1c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175c20: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x175c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x175c24: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x175c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175c28: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x175c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175c2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175c2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175c30: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175c34: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x175c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x175c38: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x175c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175c3c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x175c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175c40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175c40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175c44: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175c44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175c48: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x175c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x175c4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x175C4Cu;
    {
        const bool branch_taken_0x175c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C4Cu;
        // 0x175c50: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c4c) {
            ctx->pc = 0x175C60u;
            goto label_175c60;
        }
    }
    ctx->pc = 0x175C54u;
label_175c54:
    // 0x175c54: 0x0  nop
    ctx->pc = 0x175c54u;
    // NOP
    // 0x175c58: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x175C58u;
    SET_GPR_U32(ctx, 31, 0x175C60u);
    ctx->pc = 0x175C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175C58u;
    // 0x175c5c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x175C58u, 0x175C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175C60u;
label_175c60:
    // 0x175c60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x175c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175c64: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175c68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175c6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x175c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x175c70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x175c70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x175c74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x175c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175c78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x175c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x175c7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175c80: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x175c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_175c84:
    // 0x175c84: 0x0  nop
    ctx->pc = 0x175c84u;
    // NOP
    // 0x175c88: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x175c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x175c8c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x175c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175c90: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x175C90u;
    {
        const bool branch_taken_0x175c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175c90) {
            ctx->pc = 0x175B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175b18;
        }
    }
    ctx->pc = 0x175C98u;
    // 0x175c98: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x175C98u;
    {
        const bool branch_taken_0x175c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C98u;
        // 0x175c9c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c98) {
            ctx->pc = 0x175E0Cu;
            goto label_175e0c;
        }
    }
    ctx->pc = 0x175CA0u;
label_175ca0:
    // 0x175ca0: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x175ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x175ca4: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x175ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x175ca8: 0x8e0500e0  lw          $a1, 0xE0($s0)
    ctx->pc = 0x175ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x175cac: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x175cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x175cb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175cb4: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x175cb4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175cb8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x175cb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x175cbc: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x175cbcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x175cc0: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x175cc0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x175cc4: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x175cc4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x175cc8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x175cc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175ccc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x175cccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175cd0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x175cd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175cd4: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x175cd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x175cd8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175CD8u;
    SET_GPR_U32(ctx, 31, 0x175CE0u);
    ctx->pc = 0x175CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175CD8u;
    // 0x175cdc: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175CD8u, 0x175CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175CE0u;
label_175ce0:
    // 0x175ce0: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x175ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175ce4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175ce8: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175cec: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175cecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175cf0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175cf4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175cf8: 0x0  nop
    ctx->pc = 0x175cf8u;
    // NOP
    // 0x175cfc: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175cfcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175d00: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x175d00u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175d04: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175D04u;
    SET_GPR_U32(ctx, 31, 0x175D0Cu);
    ctx->pc = 0x175D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D04u;
    // 0x175d08: 0xe7a000f0  swc1        $f0, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175D04u, 0x175D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D0Cu;
label_175d0c:
    // 0x175d0c: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175d10: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175d14: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175d18: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175d1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175d20: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x175d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175d24: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175d24u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175d28: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x175d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x175d2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175d30: 0x0  nop
    ctx->pc = 0x175d30u;
    // NOP
    // 0x175d34: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x175d34u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175d38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x175d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x175d3c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175D3Cu;
    SET_GPR_U32(ctx, 31, 0x175D44u);
    ctx->pc = 0x175D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D3Cu;
    // 0x175d40: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175D3Cu, 0x175D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D44u;
label_175d44:
    // 0x175d44: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x175d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175d48: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175d4c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175d50: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175d54: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175d54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175d58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175d5c: 0x0  nop
    ctx->pc = 0x175d5cu;
    // NOP
    // 0x175d60: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175d60u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175d64: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175d68: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x175d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x175d6c: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x175d6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175d70: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x175d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175d74: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x175d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x175d78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x175d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175d7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175d80: 0x0  nop
    ctx->pc = 0x175d80u;
    // NOP
    // 0x175d84: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x175d84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175d88: 0x0  nop
    ctx->pc = 0x175d88u;
    // NOP
    // 0x175d8c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x175D8Cu;
    {
        const bool branch_taken_0x175d8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x175D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D8Cu;
        // 0x175d90: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d8c) {
            ctx->pc = 0x175DDCu;
            goto label_175ddc;
        }
    }
    ctx->pc = 0x175D94u;
    // 0x175d94: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x175d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175d98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175d9c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x175d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175da0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x175da0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x175da4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175da4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175da8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x175da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x175dac: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x175dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175db0: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x175db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175db4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175db4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175db8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175dbc: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x175dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x175dc0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x175dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175dc4: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x175dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175dc8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175dc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175dcc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175dccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175dd0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x175dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x175dd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x175DD4u;
    {
        const bool branch_taken_0x175dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175DD4u;
        // 0x175dd8: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175dd4) {
            ctx->pc = 0x175DE8u;
            goto label_175de8;
        }
    }
    ctx->pc = 0x175DDCu;
label_175ddc:
    // 0x175ddc: 0x0  nop
    ctx->pc = 0x175ddcu;
    // NOP
    // 0x175de0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x175DE0u;
    SET_GPR_U32(ctx, 31, 0x175DE8u);
    ctx->pc = 0x175DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175DE0u;
    // 0x175de4: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x175DE0u, 0x175DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175DE8u;
label_175de8:
    // 0x175de8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x175de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175dec: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175df0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175df4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x175df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x175df8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x175df8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x175dfc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x175dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175e00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x175e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x175e04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175e08: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x175e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_175e0c:
    // 0x175e0c: 0x0  nop
    ctx->pc = 0x175e0cu;
    // NOP
    // 0x175e10: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x175e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x175e14: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x175e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175e18: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x175E18u;
    {
        const bool branch_taken_0x175e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175e18) {
            ctx->pc = 0x175CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175ca0;
        }
    }
    ctx->pc = 0x175E20u;
    // 0x175e20: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x175E20u;
    {
        const bool branch_taken_0x175e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E20u;
        // 0x175e24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175e20) {
            ctx->pc = 0x175F94u;
            goto label_175f94;
        }
    }
    ctx->pc = 0x175E28u;
label_175e28:
    // 0x175e28: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x175e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x175e2c: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x175e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x175e30: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x175e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x175e34: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x175e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x175e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175e3c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x175e3cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175e40: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x175e40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x175e44: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x175e44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x175e48: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x175e48u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x175e4c: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x175e4cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x175e50: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x175e50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175e54: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x175e54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175e58: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x175e58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175e5c: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x175e5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x175e60: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175E60u;
    SET_GPR_U32(ctx, 31, 0x175E68u);
    ctx->pc = 0x175E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175E60u;
    // 0x175e64: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175E60u, 0x175E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175E68u;
label_175e68:
    // 0x175e68: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x175e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175e6c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175e70: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175e74: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175e78: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175e7c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175e80: 0x0  nop
    ctx->pc = 0x175e80u;
    // NOP
    // 0x175e84: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175e84u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175e88: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x175e88u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175e8c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175E8Cu;
    SET_GPR_U32(ctx, 31, 0x175E94u);
    ctx->pc = 0x175E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175E8Cu;
    // 0x175e90: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175E8Cu, 0x175E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175E94u;
label_175e94:
    // 0x175e94: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175e98: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175e9c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175ea0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175ea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175ea4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175ea8: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x175ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175eac: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175eacu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175eb0: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x175eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x175eb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175eb8: 0x0  nop
    ctx->pc = 0x175eb8u;
    // NOP
    // 0x175ebc: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x175ebcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175ec0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x175ec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x175ec4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175EC4u;
    SET_GPR_U32(ctx, 31, 0x175ECCu);
    ctx->pc = 0x175EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175EC4u;
    // 0x175ec8: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175EC4u, 0x175ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175ECCu;
label_175ecc:
    // 0x175ecc: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x175eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175ed0: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175ed4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175ed8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175edc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175edcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175ee0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175ee4: 0x0  nop
    ctx->pc = 0x175ee4u;
    // NOP
    // 0x175ee8: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175ee8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175eec: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175ef0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x175ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x175ef4: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x175ef4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175ef8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x175ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175efc: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x175efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x175f00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x175f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175f04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175f04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175f08: 0x0  nop
    ctx->pc = 0x175f08u;
    // NOP
    // 0x175f0c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x175f0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175f10: 0x0  nop
    ctx->pc = 0x175f10u;
    // NOP
    // 0x175f14: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x175F14u;
    {
        const bool branch_taken_0x175f14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x175F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F14u;
        // 0x175f18: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f14) {
            ctx->pc = 0x175F64u;
            goto label_175f64;
        }
    }
    ctx->pc = 0x175F1Cu;
    // 0x175f1c: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x175f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175f20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175f24: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x175f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175f28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x175f28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x175f2c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175f30: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x175f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x175f34: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x175f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175f38: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x175f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175f3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175f3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175f40: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175f44: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x175f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x175f48: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x175f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175f4c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x175f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175f50: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175f50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175f54: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175f54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175f58: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x175f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x175f5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x175F5Cu;
    {
        const bool branch_taken_0x175f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F5Cu;
        // 0x175f60: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f5c) {
            ctx->pc = 0x175F70u;
            goto label_175f70;
        }
    }
    ctx->pc = 0x175F64u;
label_175f64:
    // 0x175f64: 0x0  nop
    ctx->pc = 0x175f64u;
    // NOP
    // 0x175f68: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x175F68u;
    SET_GPR_U32(ctx, 31, 0x175F70u);
    ctx->pc = 0x175F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175F68u;
    // 0x175f6c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x175F68u, 0x175F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175F70u;
label_175f70:
    // 0x175f70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x175f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175f74: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175f78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175f7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x175f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x175f80: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x175f80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x175f84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x175f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175f88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x175f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x175f8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175f90: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x175f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_175f94:
    // 0x175f94: 0x0  nop
    ctx->pc = 0x175f94u;
    // NOP
    // 0x175f98: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x175f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x175f9c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x175f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175fa0: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x175FA0u;
    {
        const bool branch_taken_0x175fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FA0u;
        // 0x175fa4: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fa0) {
            ctx->pc = 0x175E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175e28;
        }
    }
    ctx->pc = 0x175FA8u;
    // 0x175fa8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x175fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x175fac: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x175FACu;
    {
        const bool branch_taken_0x175fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FACu;
        // 0x175fb0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fac) {
            ctx->pc = 0x176044u;
            goto label_176044;
        }
    }
    ctx->pc = 0x175FB4u;
label_175fb4:
    // 0x175fb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x175fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175fb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175fbc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x175fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x175fc0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x175fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x175fc4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x175fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x175fc8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x175fc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175fcc: 0x0  nop
    ctx->pc = 0x175fccu;
    // NOP
    // 0x175fd0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x175FD0u;
    {
        const bool branch_taken_0x175fd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x175FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FD0u;
        // 0x175fd4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fd0) {
            ctx->pc = 0x176020u;
            goto label_176020;
        }
    }
    ctx->pc = 0x175FD8u;
    // 0x175fd8: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x175fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175fdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175fe0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x175fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175fe4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x175fe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x175fe8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175fec: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x175fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x175ff0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x175ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175ff4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x175ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175ff8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175ff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175ffc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176000: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x176000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x176004: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x176004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176008: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x176008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17600c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17600cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x176010: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176014: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x176014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x176018: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x176018u;
    {
        const bool branch_taken_0x176018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176018u;
        // 0x17601c: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176018) {
            ctx->pc = 0x176028u;
            goto label_176028;
        }
    }
    ctx->pc = 0x176020u;
label_176020:
    // 0x176020: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x176020u;
    SET_GPR_U32(ctx, 31, 0x176028u);
    ctx->pc = 0x176024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176020u;
    // 0x176024: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x176020u, 0x176028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176028u;
label_176028:
    // 0x176028: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x176028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17602c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x17602cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x176030: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x176030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x176034: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176038: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x176038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17603c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17603cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176040: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x176040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_176044:
    // 0x176044: 0x0  nop
    ctx->pc = 0x176044u;
    // NOP
    // 0x176048: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x176048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17604c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x17604cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x176050: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x176050u;
    {
        const bool branch_taken_0x176050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176050u;
        // 0x176054: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176050) {
            ctx->pc = 0x175FB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175fb4;
        }
    }
    ctx->pc = 0x176058u;
    // 0x176058: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x176058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17605c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17605cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176060: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x176060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x176064: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x176064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176068: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x176068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17606c: 0x3e00008  jr          $ra
    ctx->pc = 0x17606Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17606Cu;
        // 0x176070: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17606Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176074u;
}
