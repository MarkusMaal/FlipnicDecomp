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

// Function: FUN_00152490
// Address: 0x152490 - 0x1525f8
void FUN_00152490_0x152490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152490_0x152490");
#endif

    switch (ctx->pc) {
        case 0x1524f0u: goto label_1524f0;
        case 0x152544u: goto label_152544;
        case 0x1525b0u: goto label_1525b0;
        case 0x1525c0u: goto label_1525c0;
        case 0x1525d0u: goto label_1525d0;
        default: break;
    }

    ctx->pc = 0x152490u;

    // 0x152490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x152490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x152494: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x152494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x152498: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x152498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15249c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x15249cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1524a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1524a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1524a4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1524a4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1524a8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1524a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1524ac: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1524acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1524b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1524b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1524b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1524b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1524b8: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x1524b8u;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
    // 0x1524bc: 0xc4940000  lwc1        $f20, 0x0($a0)
    ctx->pc = 0x1524bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1524c0: 0xc4950004  lwc1        $f21, 0x4($a0)
    ctx->pc = 0x1524c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1524c4: 0xc4960008  lwc1        $f22, 0x8($a0)
    ctx->pc = 0x1524c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1524c8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1524c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1524cc: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1524ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1524d0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1524d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1524d4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1524d4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1524d8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1524d8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1524dc: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1524dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1524e0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1524e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1524e4: 0x4482c000  mtc1        $v0, $f24
    ctx->pc = 0x1524e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1524e8: 0xc07ef00  jal         func_1FBC00
    ctx->pc = 0x1524E8u;
    SET_GPR_U32(ctx, 31, 0x1524F0u);
    ctx->pc = 0x1524ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1524E8u;
    // 0x1524ec: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBC00u, 0x1524E8u, 0x1524F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524F0u;
label_1524f0:
    // 0x1524f0: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x1524f0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x1524f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1524f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1524f8: 0x0  nop
    ctx->pc = 0x1524f8u;
    // NOP
    // 0x1524fc: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x1524fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152500: 0x0  nop
    ctx->pc = 0x152500u;
    // NOP
    // 0x152504: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x152504u;
    {
        const bool branch_taken_0x152504 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x152504) {
            ctx->pc = 0x152510u;
            goto label_152510;
        }
    }
    ctx->pc = 0x15250Cu;
    // 0x15250c: 0x4600bdc7  neg.s       $f23, $f23
    ctx->pc = 0x15250cu;
    ctx->f[23] = FPU_NEG_S(ctx->f[23]);
label_152510:
    // 0x152510: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x152510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x152514: 0x0  nop
    ctx->pc = 0x152514u;
    // NOP
    // 0x152518: 0x4618a832  c.eq.s      $f21, $f24
    ctx->pc = 0x152518u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15251c: 0x0  nop
    ctx->pc = 0x15251cu;
    // NOP
    // 0x152520: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x152520u;
    {
        const bool branch_taken_0x152520 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x152520) {
            ctx->pc = 0x152564u;
            goto label_152564;
        }
    }
    ctx->pc = 0x152528u;
    // 0x152528: 0x0  nop
    ctx->pc = 0x152528u;
    // NOP
    // 0x15252c: 0x0  nop
    ctx->pc = 0x15252cu;
    // NOP
    // 0x152530: 0x4618b303  div.s       $f12, $f22, $f24
    ctx->pc = 0x152530u;
    { if (ctx->f[24] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[22], ctx->f[24]); }
    // 0x152534: 0x0  nop
    ctx->pc = 0x152534u;
    // NOP
    // 0x152538: 0x0  nop
    ctx->pc = 0x152538u;
    // NOP
    // 0x15253c: 0xc07ef00  jal         func_1FBC00
    ctx->pc = 0x15253Cu;
    SET_GPR_U32(ctx, 31, 0x152544u);
    ctx->pc = 0x1FBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBC00u, 0x15253Cu, 0x152544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152544u;
label_152544:
    // 0x152544: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x152544u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x152548: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15254c: 0x0  nop
    ctx->pc = 0x15254cu;
    // NOP
    // 0x152550: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x152550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152554: 0x0  nop
    ctx->pc = 0x152554u;
    // NOP
    // 0x152558: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x152558u;
    {
        const bool branch_taken_0x152558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x152558) {
            ctx->pc = 0x152564u;
            goto label_152564;
        }
    }
    ctx->pc = 0x152560u;
    // 0x152560: 0x4600ad47  neg.s       $f21, $f21
    ctx->pc = 0x152560u;
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
label_152564:
    // 0x152564: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x152564u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x152568: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x152568u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15256c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x15256cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x152570: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x152570u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x152574: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x152574u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x152578: 0xfa040030  sqc2        $vf4, 0x30($s0)
    ctx->pc = 0x152578u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15257c: 0xfa050020  sqc2        $vf5, 0x20($s0)
    ctx->pc = 0x15257cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x152580: 0xfa060010  sqc2        $vf6, 0x10($s0)
    ctx->pc = 0x152580u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x152584: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x152584u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x152588: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15258c: 0x0  nop
    ctx->pc = 0x15258cu;
    // NOP
    // 0x152590: 0x46190032  c.eq.s      $f0, $f25
    ctx->pc = 0x152590u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152594: 0x0  nop
    ctx->pc = 0x152594u;
    // NOP
    // 0x152598: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x152598u;
    {
        const bool branch_taken_0x152598 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152598u;
        // 0x15259c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152598) {
            ctx->pc = 0x1525B4u;
            goto label_1525b4;
        }
    }
    ctx->pc = 0x1525A0u;
    // 0x1525a0: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x1525a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x1525a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1525a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1525a8: 0xc07d3d4  jal         func_1F4F50
    ctx->pc = 0x1525A8u;
    SET_GPR_U32(ctx, 31, 0x1525B0u);
    ctx->pc = 0x1525ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1525A8u;
    // 0x1525ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x1525A8u, 0x1525B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1525B0u;
label_1525b0:
    // 0x1525b0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1525b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_1525b4:
    // 0x1525b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1525b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1525b8: 0xc07d3fe  jal         func_1F4FF8
    ctx->pc = 0x1525B8u;
    SET_GPR_U32(ctx, 31, 0x1525C0u);
    ctx->pc = 0x1525BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1525B8u;
    // 0x1525bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x1525B8u, 0x1525C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1525C0u;
label_1525c0:
    // 0x1525c0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1525c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1525c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1525c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1525c8: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x1525C8u;
    SET_GPR_U32(ctx, 31, 0x1525D0u);
    ctx->pc = 0x1525CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1525C8u;
    // 0x1525cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x1525C8u, 0x1525D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1525D0u;
label_1525d0:
    // 0x1525d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1525d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1525d4: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1525d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1525d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1525d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1525dc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1525dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1525e0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1525e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1525e4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1525e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1525e8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1525e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1525ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1525ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1525f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1525F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1525F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525F0u;
        // 0x1525f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1525F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1525F8u;
}
