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

// Function: entry_00175e28
// Address: 0x175e28 - 0x175f64
void entry_00175e28_0x175e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175e28_0x175e28");
#endif

    switch (ctx->pc) {
        case 0x175e68u: goto label_175e68;
        case 0x175e94u: goto label_175e94;
        case 0x175eccu: goto label_175ecc;
        default: break;
    }

    ctx->pc = 0x175e28u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x175F64u;
}
