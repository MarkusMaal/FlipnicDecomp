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

// Function: entry_00175060
// Address: 0x175060 - 0x17519c
void entry_00175060_0x175060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175060_0x175060");
#endif

    switch (ctx->pc) {
        case 0x1750a0u: goto label_1750a0;
        case 0x1750ccu: goto label_1750cc;
        case 0x175104u: goto label_175104;
        default: break;
    }

    ctx->pc = 0x175060u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x17519Cu;
}
