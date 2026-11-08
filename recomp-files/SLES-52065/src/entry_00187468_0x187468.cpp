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

// Function: entry_00187468
// Address: 0x187468 - 0x187514
void entry_00187468_0x187468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187468_0x187468");
#endif

    switch (ctx->pc) {
        case 0x18747cu: goto label_18747c;
        case 0x187500u: goto label_187500;
        default: break;
    }

    ctx->pc = 0x187468u;

    // 0x187468: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x187468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x18746c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18746Cu;
    {
        const bool branch_taken_0x18746c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18746Cu;
        // 0x187470: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18746c) {
            ctx->pc = 0x18741Cu;
            return;
        }
    }
    ctx->pc = 0x187474u;
    // 0x187474: 0xc07d334  jal         func_1F4CD0
    ctx->pc = 0x187474u;
    SET_GPR_U32(ctx, 31, 0x18747Cu);
    ctx->pc = 0x187478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187474u;
    // 0x187478: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CD0u, 0x187474u, 0x18747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18747Cu;
label_18747c:
    // 0x18747c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x18747cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x187480: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x187480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x187484: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x187484u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187488: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x187488u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18748c: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x18748cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x187490: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x187490u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x187494: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x187494u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187498: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x187498u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18749c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x18749cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1874a0: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1874a0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1874a4: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x1874a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874a8: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x1874a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874ac: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x1874acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874b0: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x1874b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1874b4: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x1874b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874b8: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x1874b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874bc: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x1874bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874c0: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x1874c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1874c4: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x1874c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874c8: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x1874c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874cc: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x1874ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874d0: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x1874d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1874d4: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x1874d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874d8: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x1874d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874dc: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x1874dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874e0: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x1874e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1874e4: 0xfa640000  sqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1874e4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1874e8: 0xfa650010  sqc2        $vf5, 0x10($s3)
    ctx->pc = 0x1874e8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1874ec: 0xfa660020  sqc2        $vf6, 0x20($s3)
    ctx->pc = 0x1874ecu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1874f0: 0xfa670030  sqc2        $vf7, 0x30($s3)
    ctx->pc = 0x1874f0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1874f4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1874f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1874f8: 0xc061d6c  jal         func_1875B0
    ctx->pc = 0x1874F8u;
    SET_GPR_U32(ctx, 31, 0x187500u);
    ctx->pc = 0x1874FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1874F8u;
    // 0x1874fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1875B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1875B0u, 0x1874F8u, 0x187500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187500u;
label_187500:
    // 0x187500: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x187500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187504: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x187504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x187508: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x187508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x18750c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18750Cu;
    {
        const bool branch_taken_0x18750c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18750Cu;
        // 0x187510: 0xafa20154  sw          $v0, 0x154($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18750c) {
            ctx->pc = 0x187548u;
            return;
        }
    }
    ctx->pc = 0x187514u;
}
