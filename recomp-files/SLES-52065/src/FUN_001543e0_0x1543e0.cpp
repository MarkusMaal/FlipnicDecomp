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

// Function: FUN_001543e0
// Address: 0x1543e0 - 0x154580
void FUN_001543e0_0x1543e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001543e0_0x1543e0");
#endif

    switch (ctx->pc) {
        case 0x154420u: goto label_154420;
        case 0x154554u: goto label_154554;
        default: break;
    }

    ctx->pc = 0x1543e0u;

    // 0x1543e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1543e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1543e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1543e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1543e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1543e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1543ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1543ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1543f0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1543f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1543f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1543f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1543f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1543f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1543fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1543fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x154400: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x154400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154404: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x154404u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x154408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x154408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15440c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x15440cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x154410: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x154410u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x154414: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x154414u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x154418: 0xc054e18  jal         func_153860
    ctx->pc = 0x154418u;
    SET_GPR_U32(ctx, 31, 0x154420u);
    ctx->pc = 0x15441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154418u;
    // 0x15441c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x153860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153860u, 0x154418u, 0x154420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154420u;
label_154420:
    // 0x154420: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x154420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154424: 0x0  nop
    ctx->pc = 0x154424u;
    // NOP
    // 0x154428: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x154428u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x15442c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x15442cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154430: 0x0  nop
    ctx->pc = 0x154430u;
    // NOP
    // 0x154434: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x154434u;
    {
        const bool branch_taken_0x154434 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x154438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154434u;
        // 0x154438: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154434) {
            ctx->pc = 0x15444Cu;
            goto label_15444c;
        }
    }
    ctx->pc = 0x15443Cu;
    // 0x15443c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15443cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x154440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154444: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x154444u;
    {
        const bool branch_taken_0x154444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154444u;
        // 0x154448: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154444) {
            ctx->pc = 0x15455Cu;
            goto label_15455c;
        }
    }
    ctx->pc = 0x15444Cu;
label_15444c:
    // 0x15444c: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x15444cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154450: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x154450u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x154454: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x154454u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x154458: 0x0  nop
    ctx->pc = 0x154458u;
    // NOP
    // 0x15445c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x15445cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x154460: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x154460u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154464: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x154464u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154468: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x154468u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15446c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x15446cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x154470: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x154470u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x154474: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x154474u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154478: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x154478u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15447c: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x15447cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154480: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x154480u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154484: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x154484u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154488: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x154488u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15448c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15448cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154490: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x154490u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x154494: 0x4a0003bf  vwaitq
    ctx->pc = 0x154494u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x154498: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x154498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15449c: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x15449cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1544a0: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1544a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1544a4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1544a4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1544a8: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1544a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1544ac: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x1544acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1544b0: 0x4615b000  add.s       $f0, $f22, $f21
    ctx->pc = 0x1544b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x1544b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1544b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1544b8: 0x0  nop
    ctx->pc = 0x1544b8u;
    // NOP
    // 0x1544bc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1544BCu;
    {
        const bool branch_taken_0x1544bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1544bc) {
            ctx->pc = 0x1544E4u;
            goto label_1544e4;
        }
    }
    ctx->pc = 0x1544C4u;
    // 0x1544c4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1544c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1544c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1544c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1544cc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1544ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1544d0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1544d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1544d4: 0x0  nop
    ctx->pc = 0x1544d4u;
    // NOP
    // 0x1544d8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1544d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1544dc: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x1544dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1544e0: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x1544e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_1544e4:
    // 0x1544e4: 0xc7a50060  lwc1        $f5, 0x60($sp)
    ctx->pc = 0x1544e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1544e8: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1544e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1544ec: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x1544ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1544f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1544f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1544f4: 0xc7a60078  lwc1        $f6, 0x78($sp)
    ctx->pc = 0x1544f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1544f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1544f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1544fc: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1544fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154500: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x154500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x154504: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x154504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154508: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x154508u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15450c: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x15450cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x154510: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x154510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x154514: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x154514u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x154518: 0x46042800  add.s       $f0, $f5, $f4
    ctx->pc = 0x154518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x15451c: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x15451cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x154520: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x154520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x154524: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x154524u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x154528: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x154528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x15452c: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x15452cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x154530: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x154530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x154534: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x154534u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x154538: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x154538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x15453c: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x15453cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x154540: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x154540u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x154544: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x154544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x154548: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x154548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x15454c: 0xc0552e8  jal         func_154BA0
    ctx->pc = 0x15454Cu;
    SET_GPR_U32(ctx, 31, 0x154554u);
    ctx->pc = 0x154550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15454Cu;
    // 0x154550: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x154BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154BA0u, 0x15454Cu, 0x154554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154554u;
label_154554:
    // 0x154554: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x154554u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x154558: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x154558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15455c:
    // 0x15455c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x15455cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x154560: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x154560u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154564: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x154564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x154568: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x154568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15456c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15456cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x154570: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x154570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154574: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x154574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154578: 0x3e00008  jr          $ra
    ctx->pc = 0x154578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154578u;
        // 0x15457c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154580u;
}
