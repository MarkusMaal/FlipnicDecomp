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

// Function: FUN_001584e0
// Address: 0x1584e0 - 0x158648
void FUN_001584e0_0x1584e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001584e0_0x1584e0");
#endif

    switch (ctx->pc) {
        case 0x158518u: goto label_158518;
        case 0x158538u: goto label_158538;
        case 0x1585c8u: goto label_1585c8;
        default: break;
    }

    ctx->pc = 0x1584e0u;

    // 0x1584e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1584e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1584e4: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1584e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1584e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1584e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1584ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1584ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1584f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1584f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1584f4: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x1584f4u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x1584f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1584f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1584fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1584fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158500: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x158500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158504: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x158504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158508: 0x0  nop
    ctx->pc = 0x158508u;
    // NOP
    // 0x15850c: 0x0  nop
    ctx->pc = 0x15850cu;
    // NOP
    // 0x158510: 0xc0548c8  jal         func_152320
    ctx->pc = 0x158510u;
    SET_GPR_U32(ctx, 31, 0x158518u);
    ctx->pc = 0x152320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152320u, 0x158510u, 0x158518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158518u;
label_158518:
    // 0x158518: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x158518u;
    {
        const bool branch_taken_0x158518 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158518u;
        // 0x15851c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158518) {
            ctx->pc = 0x158564u;
            goto label_158564;
        }
    }
    ctx->pc = 0x158520u;
    // 0x158520: 0x7a060370  lq          $a2, 0x370($s0)
    ctx->pc = 0x158520u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x158524: 0x7e060000  sq          $a2, 0x0($s0)
    ctx->pc = 0x158524u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 6));
    // 0x158528: 0x7a060380  lq          $a2, 0x380($s0)
    ctx->pc = 0x158528u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x15852c: 0x7e060300  sq          $a2, 0x300($s0)
    ctx->pc = 0x15852cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 768), GPR_VEC(ctx, 6));
    // 0x158530: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x158530u;
    {
        const bool branch_taken_0x158530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158530u;
        // 0x158534: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158530) {
            ctx->pc = 0x158550u;
            goto label_158550;
        }
    }
    ctx->pc = 0x158538u;
label_158538:
    // 0x158538: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x158538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x15853c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15853cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x158540: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x158540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x158544: 0x78460390  lq          $a2, 0x390($v0)
    ctx->pc = 0x158544u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 912)));
    // 0x158548: 0x7c660270  sq          $a2, 0x270($v1)
    ctx->pc = 0x158548u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 624), GPR_VEC(ctx, 6));
    // 0x15854c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15854cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_158550:
    // 0x158550: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x158550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x158554: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x158554u;
    {
        const bool branch_taken_0x158554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158554u;
        // 0x158558: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158554) {
            ctx->pc = 0x158538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158538;
        }
    }
    ctx->pc = 0x15855Cu;
    // 0x15855c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x15855Cu;
    {
        const bool branch_taken_0x15855c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15855c) {
            ctx->pc = 0x158604u;
            goto label_158604;
        }
    }
    ctx->pc = 0x158564u;
label_158564:
    // 0x158564: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x158564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158568: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x158568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x15856c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x15856cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158570: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x158570u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x158574: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x158574u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x158578: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x158578u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x15857c: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x15857cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x158580: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x158580u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158584: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x158584u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158588: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x158588u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x15858c: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x15858cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x158590: 0xfa090000  sqc2        $vf9, 0x0($s0)
    ctx->pc = 0x158590u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x158594: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x158594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x158598: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x158598u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15859c: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x15859cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1585a0: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x1585a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1585a4: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x1585a4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1585a8: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1585a8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1585ac: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1585acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1585b0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1585b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1585b4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1585b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1585b8: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x1585b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1585bc: 0xf8490000  sqc2        $vf9, 0x0($v0)
    ctx->pc = 0x1585bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1585c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1585C0u;
    {
        const bool branch_taken_0x1585c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1585C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585C0u;
        // 0x1585c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585c0) {
            ctx->pc = 0x1585F8u;
            goto label_1585f8;
        }
    }
    ctx->pc = 0x1585C8u;
label_1585c8:
    // 0x1585c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1585c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1585cc: 0xac40027c  sw          $zero, 0x27C($v0)
    ctx->pc = 0x1585ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 636), GPR_U32(ctx, 0));
    // 0x1585d0: 0x24420270  addiu       $v0, $v0, 0x270
    ctx->pc = 0x1585d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x1585d4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1585d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1585d8: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x1585d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1585dc: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x1585dcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1585e0: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1585e0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1585e4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1585e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1585e8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1585e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1585ec: 0x4be8324a  vmaddz.xyzw $vf9, $vf6, $vf8z
    ctx->pc = 0x1585ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1585f0: 0xf8490000  sqc2        $vf9, 0x0($v0)
    ctx->pc = 0x1585f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1585f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1585f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1585f8:
    // 0x1585f8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1585f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1585fc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1585FCu;
    {
        const bool branch_taken_0x1585fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585FCu;
        // 0x158600: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585fc) {
            ctx->pc = 0x1585C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1585c8;
        }
    }
    ctx->pc = 0x158604u;
label_158604:
    // 0x158604: 0x0  nop
    ctx->pc = 0x158604u;
    // NOP
    // 0x158608: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x158608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x15860c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15860cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158610: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x158610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158614: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x158614u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158618: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x158618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15861c: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x15861cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x158620: 0x4a0003bf  vwaitq
    ctx->pc = 0x158620u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x158624: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x158624u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158628: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x158628u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15862c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15862cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158630: 0xae0202f0  sw          $v0, 0x2F0($s0)
    ctx->pc = 0x158630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
    // 0x158634: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15863c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15863cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158640: 0x3e00008  jr          $ra
    ctx->pc = 0x158640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158640u;
        // 0x158644: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158648u;
}
