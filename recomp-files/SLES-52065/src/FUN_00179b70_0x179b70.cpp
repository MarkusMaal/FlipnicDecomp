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

// Function: FUN_00179b70
// Address: 0x179b70 - 0x179c04
void FUN_00179b70_0x179b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00179b70_0x179b70");
#endif

    switch (ctx->pc) {
        case 0x179b7cu: goto label_179b7c;
        case 0x179b94u: goto label_179b94;
        default: break;
    }

    ctx->pc = 0x179b70u;

    // 0x179b70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b74: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x179B74u;
    {
        const bool branch_taken_0x179b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B74u;
        // 0x179b78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b74) {
            ctx->pc = 0x179BF0u;
            goto label_179bf0;
        }
    }
    ctx->pc = 0x179B7Cu;
label_179b7c:
    // 0x179b7c: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x179b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x179b80: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x179b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x179b84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x179b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x179b88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x179b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x179b8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x179B8Cu;
    {
        const bool branch_taken_0x179b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B8Cu;
        // 0x179b90: 0x24680060  addiu       $t0, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b8c) {
            ctx->pc = 0x179BE0u;
            goto label_179be0;
        }
    }
    ctx->pc = 0x179B94u;
label_179b94:
    // 0x179b94: 0x0  nop
    ctx->pc = 0x179b94u;
    // NOP
    // 0x179b98: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x179b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x179b9c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x179b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x179ba0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x179ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x179ba4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x179ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x179ba8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x179ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x179bac: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x179bacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x179bb0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x179bb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179bb4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x179bb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179bb8: 0x4bc1086a  vmul.xyz    $vf1, $vf1, $vf1
    ctx->pc = 0x179bb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179bbc: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x179bbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179bc0: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x179bc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179bc4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x179bc4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179bc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179bcc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x179bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x179bd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x179bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x179bd4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x179bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x179bd8: 0xac624070  sw          $v0, 0x4070($v1)
    ctx->pc = 0x179bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16496), GPR_U32(ctx, 2));
    // 0x179bdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x179bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_179be0:
    // 0x179be0: 0x28e30040  slti        $v1, $a3, 0x40
    ctx->pc = 0x179be0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x179be4: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x179BE4u;
    {
        const bool branch_taken_0x179be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x179be4) {
            ctx->pc = 0x179B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179b94;
        }
    }
    ctx->pc = 0x179BECu;
    // 0x179bec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x179becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_179bf0:
    // 0x179bf0: 0x28c3003f  slti        $v1, $a2, 0x3F
    ctx->pc = 0x179bf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x179bf4: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x179BF4u;
    {
        const bool branch_taken_0x179bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x179BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BF4u;
        // 0x179bf8: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179bf4) {
            ctx->pc = 0x179B7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179b7c;
        }
    }
    ctx->pc = 0x179BFCu;
    // 0x179bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x179BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179C04u;
}
