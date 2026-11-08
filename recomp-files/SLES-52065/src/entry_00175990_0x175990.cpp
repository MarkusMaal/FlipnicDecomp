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

// Function: entry_00175990
// Address: 0x175990 - 0x175acc
void entry_00175990_0x175990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175990_0x175990");
#endif

    switch (ctx->pc) {
        case 0x1759d0u: goto label_1759d0;
        case 0x1759fcu: goto label_1759fc;
        case 0x175a34u: goto label_175a34;
        default: break;
    }

    ctx->pc = 0x175990u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x175ACCu;
}
