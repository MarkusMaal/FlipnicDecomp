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

// Function: FUN_00109750
// Address: 0x109750 - 0x109a14
void FUN_00109750_0x109750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00109750_0x109750");
#endif

    switch (ctx->pc) {
        case 0x109838u: goto label_109838;
        case 0x109890u: goto label_109890;
        case 0x1098acu: goto label_1098ac;
        case 0x1098c0u: goto label_1098c0;
        case 0x10990cu: goto label_10990c;
        case 0x109944u: goto label_109944;
        case 0x1099f0u: goto label_1099f0;
        default: break;
    }

    ctx->pc = 0x109750u;

    // 0x109750: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x109750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x109754: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x109754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109758: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x109758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10975c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10975cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x109760: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x109760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x109764: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x109764u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109768: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x109768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10976c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x10976cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109770: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x109770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x109774: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x109774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x109778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10977c: 0x11220009  beq         $t1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10977Cu;
    {
        const bool branch_taken_0x10977c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x109780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10977Cu;
        // 0x109780: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10977c) {
            ctx->pc = 0x1097A4u;
            goto label_1097a4;
        }
    }
    ctx->pc = 0x109784u;
    // 0x109784: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x109784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x109788: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x109788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10978c: 0x84630062  lh          $v1, 0x62($v1)
    ctx->pc = 0x10978cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 98)));
    // 0x109790: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109790u;
    {
        const bool branch_taken_0x109790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x109794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109790u;
        // 0x109794: 0x240200e5  addiu       $v0, $zero, 0xE5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109790) {
            ctx->pc = 0x1097A8u;
            goto label_1097a8;
        }
    }
    ctx->pc = 0x109798u;
    // 0x109798: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x10979c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10979cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1097a0: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x1097a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
label_1097a4:
    // 0x1097a4: 0x240200e5  addiu       $v0, $zero, 0xE5
    ctx->pc = 0x1097a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
label_1097a8:
    // 0x1097a8: 0x11020043  beq         $t0, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1097A8u;
    {
        const bool branch_taken_0x1097a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1097ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097A8u;
        // 0x1097ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097a8) {
            ctx->pc = 0x1098B8u;
            goto label_1098b8;
        }
    }
    ctx->pc = 0x1097B0u;
    // 0x1097b0: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x1097b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x1097b4: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1097B4u;
    {
        const bool branch_taken_0x1097b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1097B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097B4u;
        // 0x1097b8: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097b4) {
            ctx->pc = 0x1097C4u;
            goto label_1097c4;
        }
    }
    ctx->pc = 0x1097BCu;
    // 0x1097bc: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1097BCu;
    {
        const bool branch_taken_0x1097bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1097C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097BCu;
        // 0x1097c0: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097bc) {
            ctx->pc = 0x10994Cu;
            goto label_10994c;
        }
    }
    ctx->pc = 0x1097C4u;
label_1097c4:
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
            goto label_109898;
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
            goto label_1098b0;
        }
    }
    ctx->pc = 0x109898u;
label_109898:
    // 0x109898: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x109898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10989c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10989cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098a0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1098a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1098a4: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x1098A4u;
    SET_GPR_U32(ctx, 31, 0x1098ACu);
    ctx->pc = 0x1098A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098A4u;
    // 0x1098a8: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x1098A4u, 0x1098ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098ACu;
label_1098ac:
    // 0x1098ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1098acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1098b0:
    // 0x1098b0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1098B0u;
    {
        const bool branch_taken_0x1098b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1098B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098B0u;
        // 0x1098b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098b0) {
            ctx->pc = 0x1099F8u;
            goto label_1099f8;
        }
    }
    ctx->pc = 0x1098B8u;
label_1098b8:
    // 0x1098b8: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1098B8u;
    SET_GPR_U32(ctx, 31, 0x1098C0u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1098B8u, 0x1098C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098C0u;
label_1098c0:
    // 0x1098c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1098c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1098c4: 0x0  nop
    ctx->pc = 0x1098c4u;
    // NOP
    // 0x1098c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1098c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1098cc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1098ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1098d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1098d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1098d4: 0x0  nop
    ctx->pc = 0x1098d4u;
    // NOP
    // 0x1098d8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1098d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1098dc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1098dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1098e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1098e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1098e4: 0x0  nop
    ctx->pc = 0x1098e4u;
    // NOP
    // 0x1098e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1098e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1098ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1098ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1098f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1098f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1098f4: 0x0  nop
    ctx->pc = 0x1098f4u;
    // NOP
    // 0x1098f8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1098f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1098fc: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1098FCu;
    {
        const bool branch_taken_0x1098fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x109900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098FCu;
        // 0x109900: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098fc) {
            ctx->pc = 0x109970u;
            goto label_109970;
        }
    }
    ctx->pc = 0x109904u;
    // 0x109904: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x109904u;
    SET_GPR_U32(ctx, 31, 0x10990Cu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x109904u, 0x10990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10990Cu;
label_10990c:
    // 0x10990c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10990cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109910: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x109910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x109914: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x109914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x109918: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x109918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10991c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x10991cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x109920: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x109920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x109924: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x109924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x109928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x109928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10992c: 0x0  nop
    ctx->pc = 0x10992cu;
    // NOP
    // 0x109930: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x109930u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x109934: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x109934u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x109938: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x109938u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10993c: 0xc042118  jal         func_108460
    ctx->pc = 0x10993Cu;
    SET_GPR_U32(ctx, 31, 0x109944u);
    ctx->pc = 0x109940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10993Cu;
    // 0x109940: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10993Cu, 0x109944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109944u;
label_109944:
    // 0x109944: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x109944u;
    {
        const bool branch_taken_0x109944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109944) {
            ctx->pc = 0x10996Cu;
            goto label_10996c;
        }
    }
    ctx->pc = 0x10994Cu;
label_10994c:
    // 0x10994c: 0x84500062  lh          $s0, 0x62($v0)
    ctx->pc = 0x10994cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 98)));
    // 0x109950: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109950u;
    {
        const bool branch_taken_0x109950 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x109950) {
            ctx->pc = 0x109964u;
            goto label_109964;
        }
    }
    ctx->pc = 0x109958u;
    // 0x109958: 0x2a020080  slti        $v0, $s0, 0x80
    ctx->pc = 0x109958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x10995c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10995Cu;
    {
        const bool branch_taken_0x10995c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10995c) {
            ctx->pc = 0x10996Cu;
            goto label_10996c;
        }
    }
    ctx->pc = 0x109964u;
label_109964:
    // 0x109964: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x109964u;
    {
        const bool branch_taken_0x109964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109964u;
        // 0x109968: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109964) {
            ctx->pc = 0x1099F4u;
            goto label_1099f4;
        }
    }
    ctx->pc = 0x10996Cu;
label_10996c:
    // 0x10996c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x10996cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_109970:
    // 0x109970: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x109970u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x109974: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x109974u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x109978: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x109978u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10997c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x10997cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x109980: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x109980u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x109984: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x109984u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x109988: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x109988u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10998c: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x10998cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x109990: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x109990u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x109994: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x109994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x109998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10999c: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x10999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1099a0: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1099a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x1099a4: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x1099a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1099a8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1099a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1099ac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1099acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1099b0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1099b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1099b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1099b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1099b8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1099b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1099bc: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x1099bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1099c0: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x1099c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1099c4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1099c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1099c8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1099c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1099cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1099ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1099d0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1099d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1099d4: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x1099d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1099d8: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x1099d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1099dc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1099dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1099e0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1099e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1099e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1099e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1099e8: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x1099E8u;
    SET_GPR_U32(ctx, 31, 0x1099F0u);
    ctx->pc = 0x1099ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1099E8u;
    // 0x1099ec: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x1099E8u, 0x1099F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1099F0u;
label_1099f0:
    // 0x1099f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1099f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1099f4:
    // 0x1099f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1099f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1099f8:
    // 0x1099f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1099f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1099fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1099fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109a00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x109a00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109a04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x109a04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109a08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x109a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x109A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A0Cu;
        // 0x109a10: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109A14u;
}
