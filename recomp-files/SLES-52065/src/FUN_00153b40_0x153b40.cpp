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

// Function: FUN_00153b40
// Address: 0x153b40 - 0x153c54
void FUN_00153b40_0x153b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00153b40_0x153b40");
#endif

    ctx->pc = 0x153b40u;

    // 0x153b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x153b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x153b44: 0x27a20000  addiu       $v0, $sp, 0x0
    ctx->pc = 0x153b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x153b48: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x153b48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153b4c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x153b4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153b50: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153b50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153b54: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x153b54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153b58: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x153b58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153b5c: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x153b5cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153b60: 0x4bc521aa  vmul.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x153b60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153b64: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x153b64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153b68: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x153b68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153b70: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x153b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x153b74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153b78: 0x0  nop
    ctx->pc = 0x153b78u;
    // NOP
    // 0x153b7c: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x153b7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x153b80: 0x4bc529aa  vmul.xyz    $vf6, $vf5, $vf5
    ctx->pc = 0x153b80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153b84: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x153b84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153b88: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x153b88u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153b8c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x153b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x153b90: 0x4bc421aa  vmul.xyz    $vf6, $vf4, $vf4
    ctx->pc = 0x153b90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153b94: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x153b94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153b98: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x153b98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153b9c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x153b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153ba0: 0x460d6000  add.s       $f0, $f12, $f13
    ctx->pc = 0x153ba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x153ba4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x153ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x153ba8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x153ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x153bac: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x153bacu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x153bb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153bb4: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x153bb4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x153bb8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x153bb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x153bbc: 0x4602015d  msub.s      $f5, $f0, $f2
    ctx->pc = 0x153bbcu;
    ctx->f[5] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x153bc0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x153bc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153bc4: 0x0  nop
    ctx->pc = 0x153bc4u;
    // NOP
    // 0x153bc8: 0x46022834  c.lt.s      $f5, $f2
    ctx->pc = 0x153bc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153bcc: 0x0  nop
    ctx->pc = 0x153bccu;
    // NOP
    // 0x153bd0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x153BD0u;
    {
        const bool branch_taken_0x153bd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BD0u;
        // 0x153bd4: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bd0) {
            ctx->pc = 0x153BE4u;
            goto label_153be4;
        }
    }
    ctx->pc = 0x153BD8u;
    // 0x153bd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153bdc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x153BDCu;
    {
        const bool branch_taken_0x153bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BDCu;
        // 0x153be0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bdc) {
            ctx->pc = 0x153C4Cu;
            goto label_153c4c;
        }
    }
    ctx->pc = 0x153BE4u;
label_153be4:
    // 0x153be4: 0x0  nop
    ctx->pc = 0x153be4u;
    // NOP
    // 0x153be8: 0x0  nop
    ctx->pc = 0x153be8u;
    // NOP
    // 0x153bec: 0x0  nop
    ctx->pc = 0x153becu;
    // NOP
    // 0x153bf0: 0x46050144  c1          0x50144
    ctx->pc = 0x153bf0u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x153bf4: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x153bf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x153bf8: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x153bf8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x153bfc: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x153bfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x153c00: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x153c00u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x153c04: 0x0  nop
    ctx->pc = 0x153c04u;
    // NOP
    // 0x153c08: 0x0  nop
    ctx->pc = 0x153c08u;
    // NOP
    // 0x153c0c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x153c0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153c10: 0x0  nop
    ctx->pc = 0x153c10u;
    // NOP
    // 0x153c14: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x153C14u;
    {
        const bool branch_taken_0x153c14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C14u;
        // 0x153c18: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c14) {
            ctx->pc = 0x153C44u;
            goto label_153c44;
        }
    }
    ctx->pc = 0x153C1Cu;
    // 0x153c1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x153c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x153c20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153c24: 0x0  nop
    ctx->pc = 0x153c24u;
    // NOP
    // 0x153c28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153c28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153c2c: 0x0  nop
    ctx->pc = 0x153c2cu;
    // NOP
    // 0x153c30: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x153C30u;
    {
        const bool branch_taken_0x153c30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153c30) {
            ctx->pc = 0x153C40u;
            goto label_153c40;
        }
    }
    ctx->pc = 0x153C38u;
    // 0x153c38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x153C38u;
    {
        const bool branch_taken_0x153c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153c38) {
            ctx->pc = 0x153C48u;
            goto label_153c48;
        }
    }
    ctx->pc = 0x153C40u;
label_153c40:
    // 0x153c40: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x153c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_153c44:
    // 0x153c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153c48:
    // 0x153c48: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x153c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_153c4c:
    // 0x153c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x153C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153C54u;
}
