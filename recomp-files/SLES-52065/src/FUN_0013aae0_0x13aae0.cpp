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

// Function: FUN_0013aae0
// Address: 0x13aae0 - 0x13ab2c
void FUN_0013aae0_0x13aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013aae0_0x13aae0");
#endif

    switch (ctx->pc) {
        case 0x13aafcu: goto label_13aafc;
        default: break;
    }

    ctx->pc = 0x13aae0u;

    // 0x13aae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13aae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13aae4: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x13aae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x13aae8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x13aae8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13aaec: 0x4be5217e  vftoi12.xyzw $vf5, $vf4
    ctx->pc = 0x13aaecu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(4096.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13aaf0: 0xf8650000  sqc2        $vf5, 0x0($v1)
    ctx->pc = 0x13aaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x13aaf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13AAF4u;
    {
        const bool branch_taken_0x13aaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAF4u;
        // 0x13aaf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aaf4) {
            ctx->pc = 0x13AB14u;
            goto label_13ab14;
        }
    }
    ctx->pc = 0x13AAFCu;
label_13aafc:
    // 0x13aafc: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x13aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x13ab00: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x13ab00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13ab04: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13ab08: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x13ab08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13ab0c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13ab0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13ab10: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x13ab10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_13ab14:
    // 0x13ab14: 0x0  nop
    ctx->pc = 0x13ab14u;
    // NOP
    // 0x13ab18: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x13ab18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13ab1c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13AB1Cu;
    {
        const bool branch_taken_0x13ab1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB1Cu;
        // 0x13ab20: 0x62880  sll         $a1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab1c) {
            ctx->pc = 0x13AAFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13aafc;
        }
    }
    ctx->pc = 0x13AB24u;
    // 0x13ab24: 0x3e00008  jr          $ra
    ctx->pc = 0x13AB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB24u;
        // 0x13ab28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AB2Cu;
}
