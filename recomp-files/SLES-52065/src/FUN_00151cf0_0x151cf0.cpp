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

// Function: FUN_00151cf0
// Address: 0x151cf0 - 0x151d44
void FUN_00151cf0_0x151cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00151cf0_0x151cf0");
#endif

    switch (ctx->pc) {
        case 0x151d38u: goto label_151d38;
        default: break;
    }

    ctx->pc = 0x151cf0u;

    // 0x151cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x151cf4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x151cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x151cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151cfc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x151cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x151d00: 0x8c862c1c  lw          $a2, 0x2C1C($a0)
    ctx->pc = 0x151d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
    // 0x151d04: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x151d04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x151d08: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x151d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x151d0c: 0x90630043  lbu         $v1, 0x43($v1)
    ctx->pc = 0x151d0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 67)));
    // 0x151d10: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x151D10u;
    {
        const bool branch_taken_0x151d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x151D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D10u;
        // 0x151d14: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d10) {
            ctx->pc = 0x151D38u;
            goto label_151d38;
        }
    }
    ctx->pc = 0x151D18u;
    // 0x151d18: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x151d18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x151d1c: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x151d1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x151d20: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x151d20u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x151d24: 0x8c822c1c  lw          $v0, 0x2C1C($a0)
    ctx->pc = 0x151d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
    // 0x151d28: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x151d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x151d2c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x151d2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151d30: 0xc05fc4c  jal         func_17F130
    ctx->pc = 0x151D30u;
    SET_GPR_U32(ctx, 31, 0x151D38u);
    ctx->pc = 0x151D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151D30u;
    // 0x151d34: 0x84450002  lh          $a1, 0x2($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F130u, 0x151D30u, 0x151D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151D38u;
label_151d38:
    // 0x151d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x151D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D3Cu;
        // 0x151d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151D44u;
}
