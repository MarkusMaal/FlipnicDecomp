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

// Function: FUN_00157f60
// Address: 0x157f60 - 0x15803c
void FUN_00157f60_0x157f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157f60_0x157f60");
#endif

    switch (ctx->pc) {
        case 0x157f78u: goto label_157f78;
        case 0x157f84u: goto label_157f84;
        default: break;
    }

    ctx->pc = 0x157f60u;

    // 0x157f60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x157f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x157f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x157f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x157f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157f6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x157f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f70: 0xc07d334  jal         func_1F4CD0
    ctx->pc = 0x157F70u;
    SET_GPR_U32(ctx, 31, 0x157F78u);
    ctx->pc = 0x157F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F70u;
    // 0x157f74: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CD0u, 0x157F70u, 0x157F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F78u;
label_157f78:
    // 0x157f78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x157f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f7c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x157F7Cu;
    {
        const bool branch_taken_0x157f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F7Cu;
        // 0x157f80: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f7c) {
            ctx->pc = 0x157FB4u;
            goto label_157fb4;
        }
    }
    ctx->pc = 0x157F84u;
label_157f84:
    // 0x157f84: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x157f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x157f88: 0xac60027c  sw          $zero, 0x27C($v1)
    ctx->pc = 0x157f88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 636), GPR_U32(ctx, 0));
    // 0x157f8c: 0x24630270  addiu       $v1, $v1, 0x270
    ctx->pc = 0x157f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 624));
    // 0x157f90: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x157f90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x157f94: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x157f94u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x157f98: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x157f98u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x157f9c: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x157f9cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157fa0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x157fa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x157fa4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x157fa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x157fa8: 0x4be8324a  vmaddz.xyzw $vf9, $vf6, $vf8z
    ctx->pc = 0x157fa8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x157fac: 0xf8690000  sqc2        $vf9, 0x0($v1)
    ctx->pc = 0x157facu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x157fb0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x157fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_157fb4:
    // 0x157fb4: 0x0  nop
    ctx->pc = 0x157fb4u;
    // NOP
    // 0x157fb8: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x157fb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x157fbc: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x157FBCu;
    {
        const bool branch_taken_0x157fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FBCu;
        // 0x157fc0: 0x41940  sll         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157fbc) {
            ctx->pc = 0x157F84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157f84;
        }
    }
    ctx->pc = 0x157FC4u;
    // 0x157fc4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x157fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x157fc8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x157fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x157fcc: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x157fccu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x157fd0: 0x7e060370  sq          $a2, 0x370($s0)
    ctx->pc = 0x157fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 880), GPR_VEC(ctx, 6));
    // 0x157fd4: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x157fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x157fd8: 0x7a060300  lq          $a2, 0x300($s0)
    ctx->pc = 0x157fd8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x157fdc: 0x7e060380  sq          $a2, 0x380($s0)
    ctx->pc = 0x157fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 896), GPR_VEC(ctx, 6));
    // 0x157fe0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x157fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157fe4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x157fe4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157fe8: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x157fe8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x157fec: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x157fecu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x157ff0: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x157ff0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x157ff4: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x157ff4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x157ff8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x157ff8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x157ffc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x157ffcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158000: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x158000u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158004: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x158004u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x158008: 0xfa090000  sqc2        $vf9, 0x0($s0)
    ctx->pc = 0x158008u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x15800c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x15800cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158010: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x158010u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x158014: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x158014u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x158018: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x158018u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15801c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x15801cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158020: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x158020u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158024: 0x4be8324a  vmaddz.xyzw $vf9, $vf6, $vf8z
    ctx->pc = 0x158024u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x158028: 0xf8690000  sqc2        $vf9, 0x0($v1)
    ctx->pc = 0x158028u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x15802c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15802cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158034: 0x3e00008  jr          $ra
    ctx->pc = 0x158034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158034u;
        // 0x158038: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15803Cu;
}
