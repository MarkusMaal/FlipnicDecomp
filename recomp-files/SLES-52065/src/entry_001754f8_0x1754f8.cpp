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

// Function: entry_001754f8
// Address: 0x1754f8 - 0x175634
void entry_001754f8_0x1754f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001754f8_0x1754f8");
#endif

    switch (ctx->pc) {
        case 0x175538u: goto label_175538;
        case 0x175564u: goto label_175564;
        case 0x17559cu: goto label_17559c;
        default: break;
    }

    ctx->pc = 0x1754f8u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x175634u;
}
