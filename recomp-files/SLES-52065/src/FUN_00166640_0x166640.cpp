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

// Function: FUN_00166640
// Address: 0x166640 - 0x166998
void FUN_00166640_0x166640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00166640_0x166640");
#endif

    switch (ctx->pc) {
        case 0x166684u: goto label_166684;
        case 0x1666acu: goto label_1666ac;
        case 0x166870u: goto label_166870;
        case 0x166890u: goto label_166890;
        case 0x1668c0u: goto label_1668c0;
        case 0x1668e0u: goto label_1668e0;
        case 0x1668f4u: goto label_1668f4;
        case 0x1668fcu: goto label_1668fc;
        case 0x166938u: goto label_166938;
        case 0x166978u: goto label_166978;
        default: break;
    }

    ctx->pc = 0x166640u;

    // 0x166640: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x166640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x166644: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x166644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x166648: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x166648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16664c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16664cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x166650: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x166650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166654: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x166654u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x166658: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x166658u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16665c: 0x9082007a  lbu         $v0, 0x7A($a0)
    ctx->pc = 0x16665cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 122)));
    // 0x166660: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x166660u;
    {
        const bool branch_taken_0x166660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166660u;
        // 0x166664: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166660) {
            ctx->pc = 0x16668Cu;
            goto label_16668c;
        }
    }
    ctx->pc = 0x166668u;
    // 0x166668: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x166668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16666c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16666cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166670: 0xc62d0200  lwc1        $f13, 0x200($s1)
    ctx->pc = 0x166670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x166674: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x166674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x166678: 0x26060310  addiu       $a2, $s0, 0x310
    ctx->pc = 0x166678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x16667c: 0xc055038  jal         func_1540E0
    ctx->pc = 0x16667Cu;
    SET_GPR_U32(ctx, 31, 0x166684u);
    ctx->pc = 0x166680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16667Cu;
    // 0x166680: 0x26070290  addiu       $a3, $s0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1540E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1540E0u, 0x16667Cu, 0x166684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166684u;
label_166684:
    // 0x166684: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x166684u;
    {
        const bool branch_taken_0x166684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166684u;
        // 0x166688: 0x822201d0  lb          $v0, 0x1D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166684) {
            ctx->pc = 0x1667D8u;
            goto label_1667d8;
        }
    }
    ctx->pc = 0x16668Cu;
label_16668c:
    // 0x16668c: 0xc61401c0  lwc1        $f20, 0x1C0($s0)
    ctx->pc = 0x16668cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x166690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166694: 0xc6350200  lwc1        $f21, 0x200($s1)
    ctx->pc = 0x166694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x166698: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x166698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x16669c: 0x26060310  addiu       $a2, $s0, 0x310
    ctx->pc = 0x16669cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x1666a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1666a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1666a4: 0xc054ed0  jal         func_153B40
    ctx->pc = 0x1666A4u;
    SET_GPR_U32(ctx, 31, 0x1666ACu);
    ctx->pc = 0x1666A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1666A4u;
    // 0x1666a8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153B40u, 0x1666A4u, 0x1666ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1666ACu;
label_1666ac:
    // 0x1666ac: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x1666acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1666b0: 0x0  nop
    ctx->pc = 0x1666b0u;
    // NOP
    // 0x1666b4: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x1666b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1666b8: 0x0  nop
    ctx->pc = 0x1666b8u;
    // NOP
    // 0x1666bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1666BCu;
    {
        const bool branch_taken_0x1666bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1666C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666BCu;
        // 0x1666c0: 0x26020300  addiu       $v0, $s0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1666bc) {
            ctx->pc = 0x1666D4u;
            goto label_1666d4;
        }
    }
    ctx->pc = 0x1666C4u;
    // 0x1666c4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1666c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1666c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1666c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1666cc: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1666CCu;
    {
        const bool branch_taken_0x1666cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1666cc) {
            ctx->pc = 0x1667D4u;
            goto label_1667d4;
        }
    }
    ctx->pc = 0x1666D4u;
label_1666d4:
    // 0x1666d4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1666d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1666d8: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x1666d8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1666dc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1666dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1666e0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1666e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1666e4: 0x0  nop
    ctx->pc = 0x1666e4u;
    // NOP
    // 0x1666e8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1666e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1666ec: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x1666ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1666f0: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x1666f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1666f4: 0xf8650000  sqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1666f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1666f8: 0x26040310  addiu       $a0, $s0, 0x310
    ctx->pc = 0x1666f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x1666fc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1666fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x166700: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x166700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x166704: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x166704u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x166708: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x166708u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16670c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16670cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166710: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x166710u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x166714: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x166714u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166718: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x166718u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16671c: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x16671cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x166720: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x166720u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x166724: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x166724u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166728: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x166728u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16672c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16672cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166730: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x166730u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166734: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x166734u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x166738: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x166738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x16673c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16673cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x166740: 0x4614a900  add.s       $f4, $f21, $f20
    ctx->pc = 0x166740u;
    ctx->f[4] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x166744: 0x26040290  addiu       $a0, $s0, 0x290
    ctx->pc = 0x166744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x166748: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x166748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16674c: 0x460429c3  div.s       $f7, $f5, $f4
    ctx->pc = 0x16674cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[5], ctx->f[4]); }
    // 0x166750: 0xc6020300  lwc1        $f2, 0x300($s0)
    ctx->pc = 0x166750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166754: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x166754u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x166758: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x166758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16675c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x16675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166760: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x166760u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x166764: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x166764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x166768: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x166768u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x16676c: 0x46023881  sub.s       $f2, $f7, $f2
    ctx->pc = 0x16676cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x166770: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x166770u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[4]));
    // 0x166774: 0x46022902  mul.s       $f4, $f5, $f2
    ctx->pc = 0x166774u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x166778: 0x4604085c  madd.s      $f1, $f1, $f4
    ctx->pc = 0x166778u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x16677c: 0xe6010290  swc1        $f1, 0x290($s0)
    ctx->pc = 0x16677cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
    // 0x166780: 0xe6060294  swc1        $f6, 0x294($s0)
    ctx->pc = 0x166780u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 660), bits); }
    // 0x166784: 0xc6030308  lwc1        $f3, 0x308($s0)
    ctx->pc = 0x166784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166788: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x166788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16678c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x16678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166790: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x166790u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x166794: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x166794u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x166798: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x166798u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[3]));
    // 0x16679c: 0x4604085c  madd.s      $f1, $f1, $f4
    ctx->pc = 0x16679cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x1667a0: 0xe6010298  swc1        $f1, 0x298($s0)
    ctx->pc = 0x1667a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
    // 0x1667a4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1667a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1667a8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1667a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1667ac: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1667acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1667b0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1667b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1667b4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1667b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1667b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1667b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1667bc: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1667bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1667c0: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x1667c0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1667c4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1667c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1667c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1667c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1667cc: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1667ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1667d0: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x1667d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_1667d4:
    // 0x1667d4: 0x822201d0  lb          $v0, 0x1D0($s1)
    ctx->pc = 0x1667d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 464)));
label_1667d8:
    // 0x1667d8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1667D8u;
    {
        const bool branch_taken_0x1667d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1667d8) {
            ctx->pc = 0x1667E8u;
            goto label_1667e8;
        }
    }
    ctx->pc = 0x1667E0u;
    // 0x1667e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1667e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1667e4: 0xa22201d0  sb          $v0, 0x1D0($s1)
    ctx->pc = 0x1667e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 464), (uint8_t)GPR_U32(ctx, 2));
label_1667e8:
    // 0x1667e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1667e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1667ec: 0x0  nop
    ctx->pc = 0x1667ecu;
    // NOP
    // 0x1667f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1667f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1667f4: 0x0  nop
    ctx->pc = 0x1667f4u;
    // NOP
    // 0x1667f8: 0x45010060  bc1t        . + 4 + (0x60 << 2)
    ctx->pc = 0x1667F8u;
    {
        const bool branch_taken_0x1667f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1667FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667F8u;
        // 0x1667fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667f8) {
            ctx->pc = 0x16697Cu;
            goto label_16697c;
        }
    }
    ctx->pc = 0x166800u;
    // 0x166800: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x166800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166804: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x166804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x166808: 0xc4740054  lwc1        $f20, 0x54($v1)
    ctx->pc = 0x166808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16680c: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x16680cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x166810: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x166810u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x166814: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x166814u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166818: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x166818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16681c: 0x0  nop
    ctx->pc = 0x16681cu;
    // NOP
    // 0x166820: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x166820u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x166824: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x166824u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166828: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x166828u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16682c: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x16682cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x166830: 0x822201d1  lb          $v0, 0x1D1($s1)
    ctx->pc = 0x166830u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 465)));
    // 0x166834: 0x4410017  bgez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x166834u;
    {
        const bool branch_taken_0x166834 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x166838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166834u;
        // 0x166838: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166834) {
            ctx->pc = 0x166894u;
            goto label_166894;
        }
    }
    ctx->pc = 0x16683Cu;
    // 0x16683c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x16683cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x166840: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x166840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x166844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166848: 0x0  nop
    ctx->pc = 0x166848u;
    // NOP
    // 0x16684c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x16684cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166850: 0x0  nop
    ctx->pc = 0x166850u;
    // NOP
    // 0x166854: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x166854u;
    {
        const bool branch_taken_0x166854 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x166854) {
            ctx->pc = 0x166878u;
            goto label_166878;
        }
    }
    ctx->pc = 0x16685Cu;
    // 0x16685c: 0x822201d0  lb          $v0, 0x1D0($s1)
    ctx->pc = 0x16685cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x166860: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x166860u;
    {
        const bool branch_taken_0x166860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166860u;
        // 0x166864: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166860) {
            ctx->pc = 0x166878u;
            goto label_166878;
        }
    }
    ctx->pc = 0x166868u;
    // 0x166868: 0xc042118  jal         func_108460
    ctx->pc = 0x166868u;
    SET_GPR_U32(ctx, 31, 0x166870u);
    ctx->pc = 0x16686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166868u;
    // 0x16686c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x166868u, 0x166870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166870u;
label_166870:
    // 0x166870: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x166870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x166874: 0xa22201d0  sb          $v0, 0x1D0($s1)
    ctx->pc = 0x166874u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 464), (uint8_t)GPR_U32(ctx, 2));
label_166878:
    // 0x166878: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x166878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16687c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16687cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x166880: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x166884: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x166884u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x166888: 0xc0425a4  jal         func_109690
    ctx->pc = 0x166888u;
    SET_GPR_U32(ctx, 31, 0x166890u);
    ctx->pc = 0x16688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166888u;
    // 0x16688c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x166888u, 0x166890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166890u;
label_166890:
    // 0x166890: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x166890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_166894:
    // 0x166894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166898: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x166898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x16689c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16689cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668a0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1668a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1668a4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1668a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1668a8: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x1668a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1668ac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1668acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1668b0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1668b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1668b4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1668b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1668b8: 0xc0425d4  jal         func_109750
    ctx->pc = 0x1668B8u;
    SET_GPR_U32(ctx, 31, 0x1668C0u);
    ctx->pc = 0x1668BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668B8u;
    // 0x1668bc: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109750u, 0x1668B8u, 0x1668C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668C0u;
label_1668c0:
    // 0x1668c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1668c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1668c4: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1668c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1668c8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1668c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1668cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1668ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1668d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1668d4: 0xc46c004c  lwc1        $f12, 0x4C($v1)
    ctx->pc = 0x1668d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1668d8: 0xc056194  jal         func_158650
    ctx->pc = 0x1668D8u;
    SET_GPR_U32(ctx, 31, 0x1668E0u);
    ctx->pc = 0x1668DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668D8u;
    // 0x1668dc: 0x46140340  add.s       $f13, $f0, $f20 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x1668D8u, 0x1668E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668E0u;
label_1668e0:
    // 0x1668e0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1668e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1668e4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1668e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1668e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1668e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1668ec: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x1668ECu;
    SET_GPR_U32(ctx, 31, 0x1668F4u);
    ctx->pc = 0x1668F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668ECu;
    // 0x1668f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x1668ECu, 0x1668F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668F4u;
label_1668f4:
    // 0x1668f4: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1668F4u;
    SET_GPR_U32(ctx, 31, 0x1668FCu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1668F4u, 0x1668FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668FCu;
label_1668fc:
    // 0x1668fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1668fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166900: 0x0  nop
    ctx->pc = 0x166900u;
    // NOP
    // 0x166904: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x166904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x166908: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x166908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x16690c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x16690cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x166910: 0x3c024e80  lui         $v0, 0x4E80
    ctx->pc = 0x166910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20096 << 16));
    // 0x166914: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x166914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x166918: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x166918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16691c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x16691cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x166920: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x166920u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x166924: 0xc6000290  lwc1        $f0, 0x290($s0)
    ctx->pc = 0x166924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166928: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x166928u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x16692c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16692cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x166930: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x166930u;
    SET_GPR_U32(ctx, 31, 0x166938u);
    ctx->pc = 0x166934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166930u;
    // 0x166934: 0xe6000290  swc1        $f0, 0x290($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x166930u, 0x166938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166938u;
label_166938:
    // 0x166938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16693c: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x16693cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x166940: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x166940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x166944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166948: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x166948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16694c: 0x3c024e80  lui         $v0, 0x4E80
    ctx->pc = 0x16694cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20096 << 16));
    // 0x166950: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166954: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x166954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x166958: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x166958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16695c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x16695cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x166960: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x166960u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x166964: 0xc6000298  lwc1        $f0, 0x298($s0)
    ctx->pc = 0x166964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166968: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x166968u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x16696c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16696cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x166970: 0xc0564b8  jal         func_1592E0
    ctx->pc = 0x166970u;
    SET_GPR_U32(ctx, 31, 0x166978u);
    ctx->pc = 0x166974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166970u;
    // 0x166974: 0xe6000298  swc1        $f0, 0x298($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x166970u, 0x166978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166978u;
label_166978:
    // 0x166978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16697c:
    // 0x16697c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16697cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166980: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x166980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x166984: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x166984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166988: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x166988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16698c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16698cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166990: 0x3e00008  jr          $ra
    ctx->pc = 0x166990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166990u;
        // 0x166994: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166998u;
}
