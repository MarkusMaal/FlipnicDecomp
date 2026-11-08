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

// Function: entry_0016f090
// Address: 0x16f090 - 0x16f0b0
void entry_0016f090_0x16f090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f090_0x16f090");
#endif

    ctx->pc = 0x16f090u;

    // 0x16f090: 0x84830216  lh          $v1, 0x216($a0)
    ctx->pc = 0x16f090u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 534)));
    // 0x16f094: 0x84820214  lh          $v0, 0x214($a0)
    ctx->pc = 0x16f094u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 532)));
    // 0x16f098: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x16f098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x16f09c: 0x3e00008  jr          $ra
    ctx->pc = 0x16F09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F09Cu;
        // 0x16f0a0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F0A4u;
    // 0x16f0a4: 0x0  nop
    ctx->pc = 0x16f0a4u;
    // NOP
    // 0x16f0a8: 0x0  nop
    ctx->pc = 0x16f0a8u;
    // NOP
    // 0x16f0ac: 0x0  nop
    ctx->pc = 0x16f0acu;
    // NOP
    ctx->pc = 0x16f0b0u;
}
