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

// Function: entry_00175ca0
// Address: 0x175ca0 - 0x175ddc
void entry_00175ca0_0x175ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175ca0_0x175ca0");
#endif

    switch (ctx->pc) {
        case 0x175ce0u: goto label_175ce0;
        case 0x175d0cu: goto label_175d0c;
        case 0x175d44u: goto label_175d44;
        default: break;
    }

    ctx->pc = 0x175ca0u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x175DDCu;
}
