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

// Function: entry_0010bca0
// Address: 0x10bca0 - 0x10bcc0
void entry_0010bca0_0x10bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bca0_0x10bca0");
#endif

    ctx->pc = 0x10bca0u;

    // 0x10bca0: 0x908243f2  lbu         $v0, 0x43F2($a0)
    ctx->pc = 0x10bca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17394)));
    // 0x10bca4: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x10bca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x10bca8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10bca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10bcac: 0x3e00008  jr          $ra
    ctx->pc = 0x10BCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BCACu;
        // 0x10bcb0: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BCB4u;
    // 0x10bcb4: 0x0  nop
    ctx->pc = 0x10bcb4u;
    // NOP
    // 0x10bcb8: 0x0  nop
    ctx->pc = 0x10bcb8u;
    // NOP
    // 0x10bcbc: 0x0  nop
    ctx->pc = 0x10bcbcu;
    // NOP
    ctx->pc = 0x10bcc0u;
}
