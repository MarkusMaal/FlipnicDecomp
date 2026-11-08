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

// Function: FUN_00158040
// Address: 0x158040 - 0x15812c
void FUN_00158040_0x158040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158040_0x158040");
#endif

    switch (ctx->pc) {
        case 0x1580bcu: goto label_1580bc;
        default: break;
    }

    ctx->pc = 0x158040u;

    // 0x158040: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x158040u;
    {
        const bool branch_taken_0x158040 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x158044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158040u;
        // 0x158044: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158040) {
            ctx->pc = 0x15805Cu;
            goto label_15805c;
        }
    }
    ctx->pc = 0x158048u;
    // 0x158048: 0x78860370  lq          $a2, 0x370($a0)
    ctx->pc = 0x158048u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x15804c: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x15804cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x158050: 0x78860380  lq          $a2, 0x380($a0)
    ctx->pc = 0x158050u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x158054: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x158054u;
    {
        const bool branch_taken_0x158054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158054u;
        // 0x158058: 0x7c860300  sq          $a2, 0x300($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 768), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158054) {
            ctx->pc = 0x1580B4u;
            goto label_1580b4;
        }
    }
    ctx->pc = 0x15805Cu;
label_15805c:
    // 0x15805c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x15805cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x158060: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x158060u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x158064: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x158064u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x158068: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x158068u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x15806c: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x15806cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x158070: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x158070u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158074: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x158074u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158078: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x158078u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x15807c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x15807cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158080: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x158080u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x158084: 0xf8890000  sqc2        $vf9, 0x0($a0)
    ctx->pc = 0x158084u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x158088: 0x24820300  addiu       $v0, $a0, 0x300
    ctx->pc = 0x158088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    // 0x15808c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x15808cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x158090: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x158090u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x158094: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x158094u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x158098: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x158098u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x15809c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x15809cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1580a0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1580a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1580a4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1580a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1580a8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1580a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1580ac: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x1580acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1580b0: 0xf8490000  sqc2        $vf9, 0x0($v0)
    ctx->pc = 0x1580b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[9]));
label_1580b4:
    // 0x1580b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1580B4u;
    {
        const bool branch_taken_0x1580b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1580B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580B4u;
        // 0x1580b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1580b4) {
            ctx->pc = 0x1580ECu;
            goto label_1580ec;
        }
    }
    ctx->pc = 0x1580BCu;
label_1580bc:
    // 0x1580bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1580bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1580c0: 0xac40027c  sw          $zero, 0x27C($v0)
    ctx->pc = 0x1580c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 636), GPR_U32(ctx, 0));
    // 0x1580c4: 0x24420270  addiu       $v0, $v0, 0x270
    ctx->pc = 0x1580c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x1580c8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1580c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1580cc: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x1580ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1580d0: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x1580d0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1580d4: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1580d4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1580d8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1580d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1580dc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1580dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1580e0: 0x4be8324a  vmaddz.xyzw $vf9, $vf6, $vf8z
    ctx->pc = 0x1580e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1580e4: 0xf8490000  sqc2        $vf9, 0x0($v0)
    ctx->pc = 0x1580e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1580e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1580e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1580ec:
    // 0x1580ec: 0x0  nop
    ctx->pc = 0x1580ecu;
    // NOP
    // 0x1580f0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1580f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1580f4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1580F4u;
    {
        const bool branch_taken_0x1580f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1580F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580F4u;
        // 0x1580f8: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1580f4) {
            ctx->pc = 0x1580BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1580bc;
        }
    }
    ctx->pc = 0x1580FCu;
    // 0x1580fc: 0x24820300  addiu       $v0, $a0, 0x300
    ctx->pc = 0x1580fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    // 0x158100: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x158100u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158104: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x158104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158108: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x158108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15810c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15810cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158110: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x158110u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x158114: 0x4a0003bf  vwaitq
    ctx->pc = 0x158114u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x158118: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x158118u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15811c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15811cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x158120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158124: 0x3e00008  jr          $ra
    ctx->pc = 0x158124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158124u;
        // 0x158128: 0xac8202f0  sw          $v0, 0x2F0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15812Cu;
}
