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

// Function: FUN_00158130
// Address: 0x158130 - 0x158268
void FUN_00158130_0x158130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158130_0x158130");
#endif

    switch (ctx->pc) {
        case 0x158150u: goto label_158150;
        case 0x158160u: goto label_158160;
        case 0x158168u: goto label_158168;
        case 0x158178u: goto label_158178;
        case 0x158184u: goto label_158184;
        default: break;
    }

    ctx->pc = 0x158130u;

    // 0x158130: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x158130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x158134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x158138: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x158138u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x15813c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15813cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158140: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158144: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x158144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158148: 0xc082520  jal         func_209480
    ctx->pc = 0x158148u;
    SET_GPR_U32(ctx, 31, 0x158150u);
    ctx->pc = 0x15814Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158148u;
    // 0x15814c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x158148u, 0x158150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158150u;
label_158150:
    // 0x158150: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x158150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x158154: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x158154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158158: 0xc0820d8  jal         func_208360
    ctx->pc = 0x158158u;
    SET_GPR_U32(ctx, 31, 0x158160u);
    ctx->pc = 0x15815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158158u;
    // 0x15815c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x158158u, 0x158160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158160u;
label_158160:
    // 0x158160: 0xc082222  jal         func_208888
    ctx->pc = 0x158160u;
    SET_GPR_U32(ctx, 31, 0x158168u);
    ctx->pc = 0x158164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158160u;
    // 0x158164: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208888u, 0x158160u, 0x158168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158168u;
label_158168:
    // 0x158168: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x158168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15816c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15816cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158170: 0xc0548e8  jal         func_1523A0
    ctx->pc = 0x158170u;
    SET_GPR_U32(ctx, 31, 0x158178u);
    ctx->pc = 0x158174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158170u;
    // 0x158174: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1523A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523A0u, 0x158170u, 0x158178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158178u;
label_158178:
    // 0x158178: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x158178u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15817c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15817Cu;
    {
        const bool branch_taken_0x15817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15817Cu;
        // 0x158180: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15817c) {
            ctx->pc = 0x1581B4u;
            goto label_1581b4;
        }
    }
    ctx->pc = 0x158184u;
label_158184:
    // 0x158184: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x158184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x158188: 0xac40027c  sw          $zero, 0x27C($v0)
    ctx->pc = 0x158188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 636), GPR_U32(ctx, 0));
    // 0x15818c: 0x24420270  addiu       $v0, $v0, 0x270
    ctx->pc = 0x15818cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x158190: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x158190u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158194: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x158194u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x158198: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x158198u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x15819c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x15819cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1581a0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1581a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1581a4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1581a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1581a8: 0x4be8324a  vmaddz.xyzw $vf9, $vf6, $vf8z
    ctx->pc = 0x1581a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1581ac: 0xf8490000  sqc2        $vf9, 0x0($v0)
    ctx->pc = 0x1581acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1581b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1581b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1581b4:
    // 0x1581b4: 0x0  nop
    ctx->pc = 0x1581b4u;
    // NOP
    // 0x1581b8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1581b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1581bc: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1581BCu;
    {
        const bool branch_taken_0x1581bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1581C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581BCu;
        // 0x1581c0: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581bc) {
            ctx->pc = 0x158184u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158184;
        }
    }
    ctx->pc = 0x1581C4u;
    // 0x1581c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1581c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1581c8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1581c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1581cc: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x1581ccu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1581d0: 0x7e060370  sq          $a2, 0x370($s0)
    ctx->pc = 0x1581d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 880), GPR_VEC(ctx, 6));
    // 0x1581d4: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x1581d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x1581d8: 0x7a060300  lq          $a2, 0x300($s0)
    ctx->pc = 0x1581d8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x1581dc: 0x7e060380  sq          $a2, 0x380($s0)
    ctx->pc = 0x1581dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 896), GPR_VEC(ctx, 6));
    // 0x1581e0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1581e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1581e4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1581e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1581e8: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1581e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1581ec: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1581ecu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1581f0: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1581f0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1581f4: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x1581f4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1581f8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1581f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1581fc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1581fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158200: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x158200u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158204: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x158204u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x158208: 0xfa090000  sqc2        $vf9, 0x0($s0)
    ctx->pc = 0x158208u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x15820c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15820cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158210: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x158210u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x158214: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x158214u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x158218: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x158218u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15821c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x15821cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158220: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x158220u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158224: 0x4be8324a  vmaddz.xyzw $vf9, $vf6, $vf8z
    ctx->pc = 0x158224u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x158228: 0xf8490000  sqc2        $vf9, 0x0($v0)
    ctx->pc = 0x158228u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x15822c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15822cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158230: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x158230u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158234: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x158234u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158238: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x158238u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15823c: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x15823cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x158240: 0x4a0003bf  vwaitq
    ctx->pc = 0x158240u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x158244: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x158244u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158248: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x158248u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15824c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15824cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158250: 0xae0202f0  sw          $v0, 0x2F0($s0)
    ctx->pc = 0x158250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
    // 0x158254: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158258: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15825c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15825cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158260: 0x3e00008  jr          $ra
    ctx->pc = 0x158260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158260u;
        // 0x158264: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158268u;
}
