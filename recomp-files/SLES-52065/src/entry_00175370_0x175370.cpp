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

// Function: entry_00175370
// Address: 0x175370 - 0x1754ac
void entry_00175370_0x175370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175370_0x175370");
#endif

    switch (ctx->pc) {
        case 0x1753b0u: goto label_1753b0;
        case 0x1753dcu: goto label_1753dc;
        case 0x175414u: goto label_175414;
        default: break;
    }

    ctx->pc = 0x175370u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1754ACu;
}
