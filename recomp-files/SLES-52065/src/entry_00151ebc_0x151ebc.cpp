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

// Function: entry_00151ebc
// Address: 0x151ebc - 0x151f00
void entry_00151ebc_0x151ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151ebc_0x151ebc");
#endif

    ctx->pc = 0x151ebcu;

    // 0x151ebc: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x151ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x151ec0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x151ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x151ec4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x151ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x151ec8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x151ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x151ecc: 0x8ca32c1c  lw          $v1, 0x2C1C($a1)
    ctx->pc = 0x151eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11292)));
    // 0x151ed0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x151ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x151ed4: 0x90630043  lbu         $v1, 0x43($v1)
    ctx->pc = 0x151ed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 67)));
    // 0x151ed8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x151ED8u;
    {
        const bool branch_taken_0x151ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x151EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151ED8u;
        // 0x151edc: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ed8) {
            ctx->pc = 0x151F00u;
            return;
        }
    }
    ctx->pc = 0x151EE0u;
    // 0x151ee0: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x151ee0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x151ee4: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x151ee4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x151ee8: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x151ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x151eec: 0x8ca22c1c  lw          $v0, 0x2C1C($a1)
    ctx->pc = 0x151eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11292)));
    // 0x151ef0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x151ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x151ef4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x151ef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151ef8: 0xc05fc4c  jal         func_17F130
    ctx->pc = 0x151EF8u;
    SET_GPR_U32(ctx, 31, 0x151F00u);
    ctx->pc = 0x151EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151EF8u;
    // 0x151efc: 0x84450002  lh          $a1, 0x2($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F130u, 0x151EF8u, 0x151F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F00u;
}
