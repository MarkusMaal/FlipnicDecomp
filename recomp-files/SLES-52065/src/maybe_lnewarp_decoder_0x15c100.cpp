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

// Function: maybe_lnewarp_decoder
// Address: 0x15c100 - 0x15c130
void maybe_lnewarp_decoder_0x15c100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("maybe_lnewarp_decoder_0x15c100");
#endif

    ctx->pc = 0x15c100u;

    // 0x15c100: 0x8c822c1c  lw          $v0, 0x2C1C($a0)
    ctx->pc = 0x15c100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
    // 0x15c104: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x15c104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15c108: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15c108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15c10c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15c110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c114: 0x8444000a  lh          $a0, 0xA($v0)
    ctx->pc = 0x15c114u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x15c118: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x15c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x15c11c: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x15c11cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15c120: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c128: 0x3e00008  jr          $ra
    ctx->pc = 0x15C128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C128u;
        // 0x15c12c: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C130u;
}
