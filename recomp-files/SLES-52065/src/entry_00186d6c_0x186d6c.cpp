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

// Function: entry_00186d6c
// Address: 0x186d6c - 0x186dac
void entry_00186d6c_0x186d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186d6c_0x186d6c");
#endif

    ctx->pc = 0x186d6cu;

label_186d6c:
    // 0x186d6c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x186d6cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x186d70: 0x20840010  addi        $a0, $a0, 0x10
    ctx->pc = 0x186d70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x186d74: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x186d74u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x186d78: 0x4bc949ff  .word       0x4BC949FF                   # vclipw.xyz  $vf9, $vf9w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x186d78u;
    { __m128 fs = ctx->vu0_vf[9]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x186d7c: 0x4be861bc  vmulax.xyzw $ACC, $vf12, $vf8x
    ctx->pc = 0x186d7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186d80: 0x4be868bd  vmadday.xyzw $ACC, $vf13, $vf8y
    ctx->pc = 0x186d80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186d84: 0x4be870be  vmaddaz.xyzw $ACC, $vf14, $vf8z
    ctx->pc = 0x186d84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186d88: 0x4be87a4b  vmaddw.xyzw $vf9, $vf15, $vf8w
    ctx->pc = 0x186d88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x186d8c: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x186d8cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x186d90: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x186d90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x186d94: 0x1407fff5  bne         $zero, $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x186D94u;
    {
        const bool branch_taken_0x186d94 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        ctx->pc = 0x186D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D94u;
        // 0x186d98: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d94) {
            ctx->pc = 0x186D6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186d6c;
        }
    }
    ctx->pc = 0x186D9Cu;
    // 0x186d9c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x186D9Cu;
    {
        const bool branch_taken_0x186d9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x186DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D9Cu;
        // 0x186da0: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d9c) {
            ctx->pc = 0x186DACu;
            return;
        }
    }
    ctx->pc = 0x186DA4u;
    // 0x186da4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x186DA4u;
    {
        const bool branch_taken_0x186da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DA4u;
        // 0x186da8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186da4) {
            ctx->pc = 0x186DC0u;
            return;
        }
    }
    ctx->pc = 0x186DACu;
}
