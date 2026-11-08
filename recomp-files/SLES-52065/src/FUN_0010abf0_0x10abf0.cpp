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

// Function: FUN_0010abf0
// Address: 0x10abf0 - 0x10ac70
void FUN_0010abf0_0x10abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010abf0_0x10abf0");
#endif

    switch (ctx->pc) {
        case 0x10ac0cu: goto label_10ac0c;
        case 0x10ac18u: goto label_10ac18;
        case 0x10ac30u: goto label_10ac30;
        default: break;
    }

    ctx->pc = 0x10abf0u;

    // 0x10abf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10abf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10abf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10abf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10abf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10abf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10abfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10abfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10ac00: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10ac00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac04: 0xc05fe4c  jal         func_17F930
    ctx->pc = 0x10AC04u;
    SET_GPR_U32(ctx, 31, 0x10AC0Cu);
    ctx->pc = 0x10AC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC04u;
    // 0x10ac08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x10AC04u, 0x10AC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC0Cu;
label_10ac0c:
    // 0x10ac0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10ac0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac10: 0xc05fec0  jal         func_17FB00
    ctx->pc = 0x10AC10u;
    SET_GPR_U32(ctx, 31, 0x10AC18u);
    ctx->pc = 0x10AC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC10u;
    // 0x10ac14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB00u, 0x10AC10u, 0x10AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC18u;
label_10ac18:
    // 0x10ac18: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x10ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x10ac1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ac20: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x10ac20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10ac24: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x10ac24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10ac28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10AC28u;
    {
        const bool branch_taken_0x10ac28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC28u;
        // 0x10ac2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac28) {
            ctx->pc = 0x10AC48u;
            goto label_10ac48;
        }
    }
    ctx->pc = 0x10AC30u;
label_10ac30:
    // 0x10ac30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10ac34: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x10ac34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ac38: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x10ac38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ac3c: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x10ac3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10ac40: 0xfa060000  sqc2        $vf6, 0x0($s0)
    ctx->pc = 0x10ac40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10ac44: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x10ac44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_10ac48:
    // 0x10ac48: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x10ac48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x10ac4c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10AC4Cu;
    {
        const bool branch_taken_0x10ac4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC4Cu;
        // 0x10ac50: 0x61900  sll         $v1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac4c) {
            ctx->pc = 0x10AC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ac30;
        }
    }
    ctx->pc = 0x10AC54u;
    // 0x10ac54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x10ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x10ac58: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x10ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x10ac5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ac5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ac60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10ac60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ac64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10ac64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ac68: 0x3e00008  jr          $ra
    ctx->pc = 0x10AC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC68u;
        // 0x10ac6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AC70u;
}
