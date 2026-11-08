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

// Function: entry_00166c10
// Address: 0x166c10 - 0x166c5c
void entry_00166c10_0x166c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166c10_0x166c10");
#endif

    switch (ctx->pc) {
        case 0x166c54u: goto label_166c54;
        default: break;
    }

    ctx->pc = 0x166c10u;

    // 0x166c10: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x166c10u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166c14: 0x7e060290  sq          $a2, 0x290($s0)
    ctx->pc = 0x166c14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 656), GPR_VEC(ctx, 6));
    // 0x166c18: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x166c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x166c1c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x166c1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166c20: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x166c20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166c24: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x166c24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166c28: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x166c28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166c2c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x166c2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166c30: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x166c30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x166c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c3c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x166c3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x166c40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x166c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x166c48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x166c4c: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x166C4Cu;
    SET_GPR_U32(ctx, 31, 0x166C54u);
    ctx->pc = 0x166C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166C4Cu;
    // 0x166c50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x166C4Cu, 0x166C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166C54u;
label_166c54:
    // 0x166c54: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x166C54u;
    {
        const bool branch_taken_0x166c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C54u;
        // 0x166c58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c54) {
            ctx->pc = 0x166D38u;
            return;
        }
    }
    ctx->pc = 0x166C5Cu;
}
