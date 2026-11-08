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

// Function: entry_00174edc
// Address: 0x174edc - 0x175018
void entry_00174edc_0x174edc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174edc_0x174edc");
#endif

    switch (ctx->pc) {
        case 0x174f1cu: goto label_174f1c;
        case 0x174f48u: goto label_174f48;
        case 0x174f80u: goto label_174f80;
        default: break;
    }

    ctx->pc = 0x174edcu;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x175018u;
}
