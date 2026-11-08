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

// Function: FUN_00171c00
// Address: 0x171c00 - 0x171d18
void FUN_00171c00_0x171c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00171c00_0x171c00");
#endif

    switch (ctx->pc) {
        case 0x171c1cu: goto label_171c1c;
        case 0x171c84u: goto label_171c84;
        case 0x171cd4u: goto label_171cd4;
        case 0x171cecu: goto label_171cec;
        default: break;
    }

    ctx->pc = 0x171c00u;

    // 0x171c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x171c04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x171c04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171c08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x171c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x171c0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x171c10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x171c14: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x171C14u;
    {
        const bool branch_taken_0x171c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C14u;
        // 0x171c18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c14) {
            ctx->pc = 0x171CB4u;
            goto label_171cb4;
        }
    }
    ctx->pc = 0x171C1Cu;
label_171c1c:
    // 0x171c1c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x171c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171c20: 0xa3940  sll         $a3, $t2, 5
    ctx->pc = 0x171c20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x171c24: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x171c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x171c28: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x171c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x171c2c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x171c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x171c30: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x171c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x171c34: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x171c34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171c38: 0x4a20006a  vmul.w      $vf1, $vf0, $vf0
    ctx->pc = 0x171c38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x171c3c: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x171c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x171c40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x171c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171c44: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x171c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x171c48: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x171c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x171c4c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x171c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x171c50: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x171c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x171c54: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x171c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x171c58: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x171c58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171c5c: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x171c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x171c60: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x171c60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x171c64: 0xa2980  sll         $a1, $t2, 6
    ctx->pc = 0x171c64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
    // 0x171c68: 0x24c67630  addiu       $a2, $a2, 0x7630
    ctx->pc = 0x171c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30256));
    // 0x171c6c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x171c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x171c70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x171c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171c74: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x171c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x171c78: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x171c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x171c7c: 0xc05c5cc  jal         func_171730
    ctx->pc = 0x171C7Cu;
    SET_GPR_U32(ctx, 31, 0x171C84u);
    ctx->pc = 0x171C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C7Cu;
    // 0x171c80: 0x24650020  addiu       $a1, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171730u, 0x171C7Cu, 0x171C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C84u;
label_171c84:
    // 0x171c84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x171c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171c88: 0xa2140  sll         $a0, $t2, 5
    ctx->pc = 0x171c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x171c8c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x171c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x171c90: 0xa3180  sll         $a2, $t2, 6
    ctx->pc = 0x171c90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
    // 0x171c94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x171c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171c98: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x171c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x171c9c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x171c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x171ca0: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x171ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x171ca4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x171ca4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171ca8: 0x4a20006a  vmul.w      $vf1, $vf0, $vf0
    ctx->pc = 0x171ca8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x171cac: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x171cacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x171cb0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x171cb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_171cb4:
    // 0x171cb4: 0x0  nop
    ctx->pc = 0x171cb4u;
    // NOP
    // 0x171cb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x171cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171cbc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x171cbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171cc0: 0x143182a  slt         $v1, $t2, $v1
    ctx->pc = 0x171cc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x171cc4: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x171CC4u;
    {
        const bool branch_taken_0x171cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171CC4u;
        // 0x171cc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171cc4) {
            ctx->pc = 0x171C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171c1c;
        }
    }
    ctx->pc = 0x171CCCu;
    // 0x171ccc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x171CCCu;
    {
        const bool branch_taken_0x171ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171ccc) {
            ctx->pc = 0x171CF0u;
            goto label_171cf0;
        }
    }
    ctx->pc = 0x171CD4u;
label_171cd4:
    // 0x171cd4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x171cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x171cd8: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x171cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x171cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ce0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x171ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ce4: 0xc05c748  jal         func_171D20
    ctx->pc = 0x171CE4u;
    SET_GPR_U32(ctx, 31, 0x171CECu);
    ctx->pc = 0x171CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171CE4u;
    // 0x171ce8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171D20u, 0x171CE4u, 0x171CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171CECu;
label_171cec:
    // 0x171cec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x171cecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_171cf0:
    // 0x171cf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x171cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171cf4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x171cf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171cf8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x171cf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x171cfc: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x171CFCu;
    {
        const bool branch_taken_0x171cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x171cfc) {
            ctx->pc = 0x171CD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171cd4;
        }
    }
    ctx->pc = 0x171D04u;
    // 0x171d04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x171d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171d08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171d08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171d0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171d10: 0x3e00008  jr          $ra
    ctx->pc = 0x171D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D10u;
        // 0x171d14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171D18u;
}
