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

// Function: entry_00175808
// Address: 0x175808 - 0x175944
void entry_00175808_0x175808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175808_0x175808");
#endif

    switch (ctx->pc) {
        case 0x175848u: goto label_175848;
        case 0x175874u: goto label_175874;
        case 0x1758acu: goto label_1758ac;
        default: break;
    }

    ctx->pc = 0x175808u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x175944u;
}
