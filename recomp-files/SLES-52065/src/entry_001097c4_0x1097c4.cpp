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

// Function: entry_001097c4
// Address: 0x1097c4 - 0x109898
void entry_001097c4_0x1097c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001097c4_0x1097c4");
#endif

    switch (ctx->pc) {
        case 0x109838u: goto label_109838;
        case 0x109890u: goto label_109890;
        default: break;
    }

    ctx->pc = 0x1097c4u;

    // 0x1097c4: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1097c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1097c8: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x1097c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1097cc: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1097ccu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1097d0: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1097d0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1097d4: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1097d4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1097d8: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x1097d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1097dc: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x1097dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1097e0: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x1097e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1097e4: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x1097e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1097e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1097e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1097ec: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1097ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1097f0: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x1097f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1097f4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1097f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1097f8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1097f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1097fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1097fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x109800: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x109800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x109804: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x109804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x109808: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x109808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10980c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x10980cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x109810: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x109810u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x109814: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x109814u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x109818: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x109818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x10981c: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x10981cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x109820: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x109820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x109824: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x109824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x109828: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x109828u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x10982c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x10982cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x109830: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x109830u;
    SET_GPR_U32(ctx, 31, 0x109838u);
    ctx->pc = 0x109834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109830u;
    // 0x109834: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x109830u, 0x109838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109838u;
label_109838:
    // 0x109838: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x109838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10983c: 0x0  nop
    ctx->pc = 0x10983cu;
    // NOP
    // 0x109840: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x109840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x109844: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x109844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x109848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x109848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10984c: 0x0  nop
    ctx->pc = 0x10984cu;
    // NOP
    // 0x109850: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x109850u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x109854: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x109854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x109858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x109858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10985c: 0x0  nop
    ctx->pc = 0x10985cu;
    // NOP
    // 0x109860: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x109860u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x109864: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x109864u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x109868: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x109868u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10986c: 0x0  nop
    ctx->pc = 0x10986cu;
    // NOP
    // 0x109870: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x109870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x109874: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x109874u;
    {
        const bool branch_taken_0x109874 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x109874) {
            ctx->pc = 0x109898u;
            return;
        }
    }
    ctx->pc = 0x10987Cu;
    // 0x10987c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10987cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x109880: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x109880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109884: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x109884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x109888: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x109888u;
    SET_GPR_U32(ctx, 31, 0x109890u);
    ctx->pc = 0x10988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109888u;
    // 0x10988c: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x109888u, 0x109890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109890u;
label_109890:
    // 0x109890: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x109890u;
    {
        const bool branch_taken_0x109890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109890u;
        // 0x109894: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109890) {
            ctx->pc = 0x1098B0u;
            return;
        }
    }
    ctx->pc = 0x109898u;
}
