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

// Function: entry_001751e8
// Address: 0x1751e8 - 0x175324
void entry_001751e8_0x1751e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001751e8_0x1751e8");
#endif

    switch (ctx->pc) {
        case 0x175228u: goto label_175228;
        case 0x175254u: goto label_175254;
        case 0x17528cu: goto label_17528c;
        default: break;
    }

    ctx->pc = 0x1751e8u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x175324u;
}
