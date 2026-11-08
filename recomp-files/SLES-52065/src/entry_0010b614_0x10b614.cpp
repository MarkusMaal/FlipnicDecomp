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

// Function: entry_0010b614
// Address: 0x10b614 - 0x10b6e4
void entry_0010b614_0x10b614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b614_0x10b614");
#endif

    switch (ctx->pc) {
        case 0x10b6dcu: goto label_10b6dc;
        default: break;
    }

    ctx->pc = 0x10b614u;

    // 0x10b614: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x10b614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10b618: 0x1483006e  bne         $a0, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x10B618u;
    {
        const bool branch_taken_0x10b618 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B618u;
        // 0x10b61c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b618) {
            ctx->pc = 0x10B7D4u;
            return;
        }
    }
    ctx->pc = 0x10B620u;
    // 0x10b620: 0x26030230  addiu       $v1, $s0, 0x230
    ctx->pc = 0x10b620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x10b624: 0x7a060230  lq          $a2, 0x230($s0)
    ctx->pc = 0x10b624u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x10b628: 0x7e060010  sq          $a2, 0x10($s0)
    ctx->pc = 0x10b628u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 6));
    // 0x10b62c: 0x8e022320  lw          $v0, 0x2320($s0)
    ctx->pc = 0x10b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8992)));
    // 0x10b630: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10b630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10b634: 0xae022320  sw          $v0, 0x2320($s0)
    ctx->pc = 0x10b634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8992), GPR_U32(ctx, 2));
    // 0x10b638: 0x8e022320  lw          $v0, 0x2320($s0)
    ctx->pc = 0x10b638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8992)));
    // 0x10b63c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x10B63Cu;
    {
        const bool branch_taken_0x10b63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B63Cu;
        // 0x10b640: 0x3c023fd9  lui         $v0, 0x3FD9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b63c) {
            ctx->pc = 0x10B6E4u;
            return;
        }
    }
    ctx->pc = 0x10B644u;
    // 0x10b644: 0x8e04231c  lw          $a0, 0x231C($s0)
    ctx->pc = 0x10b644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
    // 0x10b648: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x10b648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x10b64c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x10b64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10b650: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x10b650u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b654: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x10b654u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x10b658: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x10b658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x10b65c: 0xc6002320  lwc1        $f0, 0x2320($s0)
    ctx->pc = 0x10b65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b660: 0x8e02231c  lw          $v0, 0x231C($s0)
    ctx->pc = 0x10b660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
    // 0x10b664: 0xc6012324  lwc1        $f1, 0x2324($s0)
    ctx->pc = 0x10b664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10b668: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x10b668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x10b66c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10b66cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10b670: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x10b670u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x10b674: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x10b674u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x10b678: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x10b678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b67c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x10b67cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x10b680: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x10b680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x10b684: 0x8e02231c  lw          $v0, 0x231C($s0)
    ctx->pc = 0x10b684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
    // 0x10b688: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x10b688u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10b68c: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x10b68cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10b690: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x10b690u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10b694: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x10b694u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10b698: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x10b698u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x10b69c: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x10b69cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10b6a0: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x10b6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10b6a4: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x10b6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10b6a8: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x10b6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x10b6ac: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x10b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x10b6b0: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x10b6b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b6b4: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x10b6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x10b6b8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x10b6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b6bc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x10b6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6c0: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10b6c4: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
    // 0x10b6c8: 0x8e0543dc  lw          $a1, 0x43DC($s0)
    ctx->pc = 0x10b6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17372)));
    // 0x10b6cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10b6d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10b6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10b6d4: 0xc0466e4  jal         func_119B90
    ctx->pc = 0x10B6D4u;
    SET_GPR_U32(ctx, 31, 0x10B6DCu);
    ctx->pc = 0x10B6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6D4u;
    // 0x10b6d8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B90u, 0x10B6D4u, 0x10B6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B6DCu;
label_10b6dc:
    // 0x10b6dc: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x10B6DCu;
    {
        const bool branch_taken_0x10b6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b6dc) {
            ctx->pc = 0x10B814u;
            return;
        }
    }
    ctx->pc = 0x10B6E4u;
}
