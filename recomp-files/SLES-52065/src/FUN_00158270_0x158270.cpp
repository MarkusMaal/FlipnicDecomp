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

// Function: FUN_00158270
// Address: 0x158270 - 0x1583a4
void FUN_00158270_0x158270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158270_0x158270");
#endif

    switch (ctx->pc) {
        case 0x158320u: goto label_158320;
        case 0x158328u: goto label_158328;
        default: break;
    }

    ctx->pc = 0x158270u;

    // 0x158270: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x158270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x158274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x158278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15827c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15827cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158280: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x158280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158284: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x158284u;
    {
        const bool branch_taken_0x158284 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x158288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158284u;
        // 0x158288: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158284) {
            ctx->pc = 0x1582A0u;
            goto label_1582a0;
        }
    }
    ctx->pc = 0x15828Cu;
    // 0x15828c: 0x7a260370  lq          $a2, 0x370($s1)
    ctx->pc = 0x15828cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x158290: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x158290u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
    // 0x158294: 0x7a260380  lq          $a2, 0x380($s1)
    ctx->pc = 0x158294u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x158298: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x158298u;
    {
        const bool branch_taken_0x158298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158298u;
        // 0x15829c: 0x7e260300  sq          $a2, 0x300($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 768), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158298) {
            ctx->pc = 0x1582FCu;
            goto label_1582fc;
        }
    }
    ctx->pc = 0x1582A0u;
label_1582a0:
    // 0x1582a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1582a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1582a4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1582a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1582a8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1582a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1582ac: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x1582acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1582b0: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x1582b0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1582b4: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x1582b4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1582b8: 0xda280000  lqc2        $vf8, 0x0($s1)
    ctx->pc = 0x1582b8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1582bc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1582bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1582c0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1582c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1582c4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1582c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1582c8: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x1582c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1582cc: 0xfa290000  sqc2        $vf9, 0x0($s1)
    ctx->pc = 0x1582ccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1582d0: 0x26220300  addiu       $v0, $s1, 0x300
    ctx->pc = 0x1582d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x1582d4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1582d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1582d8: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x1582d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1582dc: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x1582dcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1582e0: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x1582e0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1582e4: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1582e4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1582e8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1582e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1582ec: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1582ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1582f0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1582f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1582f4: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x1582f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1582f8: 0xf8490000  sqc2        $vf9, 0x0($v0)
    ctx->pc = 0x1582f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[9]));
label_1582fc:
    // 0x1582fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1582fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x158300: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x158300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158308: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x158308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15830c: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x15830cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x158310: 0x0  nop
    ctx->pc = 0x158310u;
    // NOP
    // 0x158314: 0x0  nop
    ctx->pc = 0x158314u;
    // NOP
    // 0x158318: 0xc0548c8  jal         func_152320
    ctx->pc = 0x158318u;
    SET_GPR_U32(ctx, 31, 0x158320u);
    ctx->pc = 0x152320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152320u, 0x158318u, 0x158320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158320u;
label_158320:
    // 0x158320: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x158320u;
    {
        const bool branch_taken_0x158320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158320u;
        // 0x158324: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158320) {
            ctx->pc = 0x158358u;
            goto label_158358;
        }
    }
    ctx->pc = 0x158328u;
label_158328:
    // 0x158328: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x158328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15832c: 0xac40027c  sw          $zero, 0x27C($v0)
    ctx->pc = 0x15832cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 636), GPR_U32(ctx, 0));
    // 0x158330: 0x24420270  addiu       $v0, $v0, 0x270
    ctx->pc = 0x158330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x158334: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x158334u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x158338: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x158338u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15833c: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x15833cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x158340: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x158340u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158344: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x158344u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158348: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x158348u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x15834c: 0x4be8324a  vmaddz.xyzw $vf9, $vf6, $vf8z
    ctx->pc = 0x15834cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x158350: 0xf8490000  sqc2        $vf9, 0x0($v0)
    ctx->pc = 0x158350u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x158354: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x158354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_158358:
    // 0x158358: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x158358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15835c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x15835Cu;
    {
        const bool branch_taken_0x15835c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15835Cu;
        // 0x158360: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15835c) {
            ctx->pc = 0x158328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158328;
        }
    }
    ctx->pc = 0x158364u;
    // 0x158364: 0x26220300  addiu       $v0, $s1, 0x300
    ctx->pc = 0x158364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x158368: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x158368u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15836c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x15836cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158370: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x158370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158374: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x158374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158378: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x158378u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x15837c: 0x4a0003bf  vwaitq
    ctx->pc = 0x15837cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x158380: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x158380u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158384: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x158384u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x158388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15838c: 0xae2202f0  sw          $v0, 0x2F0($s1)
    ctx->pc = 0x15838cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 2));
    // 0x158390: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158394: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15839c: 0x3e00008  jr          $ra
    ctx->pc = 0x15839Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1583A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15839Cu;
        // 0x1583a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15839Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1583A4u;
}
