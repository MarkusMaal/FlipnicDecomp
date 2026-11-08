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

// Function: entry_00171c1c
// Address: 0x171c1c - 0x171cb4
void entry_00171c1c_0x171c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171c1c_0x171c1c");
#endif

    switch (ctx->pc) {
        case 0x171c84u: goto label_171c84;
        default: break;
    }

    ctx->pc = 0x171c1cu;

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
    ctx->pc = 0x171cb4u;
}
