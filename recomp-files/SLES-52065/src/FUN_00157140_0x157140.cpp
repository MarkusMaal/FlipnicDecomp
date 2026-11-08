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

// Function: FUN_00157140
// Address: 0x157140 - 0x157198
void FUN_00157140_0x157140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157140_0x157140");
#endif

    switch (ctx->pc) {
        case 0x157148u: goto label_157148;
        default: break;
    }

    ctx->pc = 0x157140u;

    // 0x157140: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x157140u;
    {
        const bool branch_taken_0x157140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157140u;
        // 0x157144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157140) {
            ctx->pc = 0x15715Cu;
            goto label_15715c;
        }
    }
    ctx->pc = 0x157148u;
label_157148:
    // 0x157148: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x157148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15714c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15714cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x157150: 0xc4600280  lwc1        $f0, 0x280($v1)
    ctx->pc = 0x157150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157154: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x157154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x157158: 0xe4600280  swc1        $f0, 0x280($v1)
    ctx->pc = 0x157158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 640), bits); }
label_15715c:
    // 0x15715c: 0x0  nop
    ctx->pc = 0x15715cu;
    // NOP
    // 0x157160: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x157160u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x157164: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x157164u;
    {
        const bool branch_taken_0x157164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157164u;
        // 0x157168: 0x51940  sll         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157164) {
            ctx->pc = 0x157148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157148;
        }
    }
    ctx->pc = 0x15716Cu;
    // 0x15716c: 0x24830300  addiu       $v1, $a0, 0x300
    ctx->pc = 0x15716cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    // 0x157170: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x157170u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157174: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x157174u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x157178: 0x0  nop
    ctx->pc = 0x157178u;
    // NOP
    // 0x15717c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x15717cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x157180: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x157180u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157184: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x157184u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157188: 0xc48002f0  lwc1        $f0, 0x2F0($a0)
    ctx->pc = 0x157188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15718c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x15718cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x157190: 0x3e00008  jr          $ra
    ctx->pc = 0x157190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157190u;
        // 0x157194: 0xe48002f0  swc1        $f0, 0x2F0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 752), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157198u;
}
