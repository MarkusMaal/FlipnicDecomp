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

// Function: FUN_001583b0
// Address: 0x1583b0 - 0x1584dc
void FUN_001583b0_0x1583b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001583b0_0x1583b0");
#endif

    switch (ctx->pc) {
        case 0x1583e0u: goto label_1583e0;
        case 0x1583ecu: goto label_1583ec;
        default: break;
    }

    ctx->pc = 0x1583b0u;

    // 0x1583b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1583b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1583b4: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1583b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1583b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1583b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1583bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1583bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1583c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1583c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1583c4: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x1583c4u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x1583c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1583c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1583cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1583ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1583d0: 0x0  nop
    ctx->pc = 0x1583d0u;
    // NOP
    // 0x1583d4: 0x0  nop
    ctx->pc = 0x1583d4u;
    // NOP
    // 0x1583d8: 0xc0548e8  jal         func_1523A0
    ctx->pc = 0x1583D8u;
    SET_GPR_U32(ctx, 31, 0x1583E0u);
    ctx->pc = 0x1523A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523A0u, 0x1583D8u, 0x1583E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583E0u;
label_1583e0:
    // 0x1583e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1583e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1583e4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1583E4u;
    {
        const bool branch_taken_0x1583e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1583E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583E4u;
        // 0x1583e8: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583e4) {
            ctx->pc = 0x15842Cu;
            goto label_15842c;
        }
    }
    ctx->pc = 0x1583ECu;
label_1583ec:
    // 0x1583ec: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1583ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1583f0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1583f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1583f4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1583f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1583f8: 0xac60027c  sw          $zero, 0x27C($v1)
    ctx->pc = 0x1583f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 636), GPR_U32(ctx, 0));
    // 0x1583fc: 0x24650270  addiu       $a1, $v1, 0x270
    ctx->pc = 0x1583fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 624));
    // 0x158400: 0x78660270  lq          $a2, 0x270($v1)
    ctx->pc = 0x158400u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 624)));
    // 0x158404: 0x7c460390  sq          $a2, 0x390($v0)
    ctx->pc = 0x158404u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 912), GPR_VEC(ctx, 6));
    // 0x158408: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x158408u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15840c: 0xd8e50010  lqc2        $vf5, 0x10($a3)
    ctx->pc = 0x15840cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x158410: 0xd8e60020  lqc2        $vf6, 0x20($a3)
    ctx->pc = 0x158410u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x158414: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x158414u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x158418: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x158418u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x15841c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x15841cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158420: 0x4be8324a  vmaddz.xyzw $vf9, $vf6, $vf8z
    ctx->pc = 0x158420u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x158424: 0xf8a90000  sqc2        $vf9, 0x0($a1)
    ctx->pc = 0x158424u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x158428: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x158428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15842c:
    // 0x15842c: 0x0  nop
    ctx->pc = 0x15842cu;
    // NOP
    // 0x158430: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x158430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x158434: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x158434u;
    {
        const bool branch_taken_0x158434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158434u;
        // 0x158438: 0x41940  sll         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158434) {
            ctx->pc = 0x1583ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1583ec;
        }
    }
    ctx->pc = 0x15843Cu;
    // 0x15843c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15843cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x158440: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x158440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x158444: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x158444u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x158448: 0x7e060370  sq          $a2, 0x370($s0)
    ctx->pc = 0x158448u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 880), GPR_VEC(ctx, 6));
    // 0x15844c: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x15844cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x158450: 0x7a060300  lq          $a2, 0x300($s0)
    ctx->pc = 0x158450u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x158454: 0x7e060380  sq          $a2, 0x380($s0)
    ctx->pc = 0x158454u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 896), GPR_VEC(ctx, 6));
    // 0x158458: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x158458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15845c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15845cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158460: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x158460u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x158464: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x158464u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x158468: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x158468u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15846c: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x15846cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x158470: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x158470u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158474: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x158474u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158478: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x158478u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x15847c: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x15847cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x158480: 0xfa090000  sqc2        $vf9, 0x0($s0)
    ctx->pc = 0x158480u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x158484: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x158484u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158488: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x158488u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x15848c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x15848cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x158490: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x158490u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158494: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x158494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158498: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x158498u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x15849c: 0x4be8324a  vmaddz.xyzw $vf9, $vf6, $vf8z
    ctx->pc = 0x15849cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1584a0: 0xf8490000  sqc2        $vf9, 0x0($v0)
    ctx->pc = 0x1584a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1584a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1584a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1584a8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1584a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1584ac: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1584acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1584b0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1584b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1584b4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1584b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1584b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1584b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1584bc: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1584bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1584c0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1584c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1584c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1584c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1584c8: 0xae0202f0  sw          $v0, 0x2F0($s0)
    ctx->pc = 0x1584c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
    // 0x1584cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1584ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1584d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1584d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1584d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1584D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1584D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1584D4u;
        // 0x1584d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1584D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1584DCu;
}
