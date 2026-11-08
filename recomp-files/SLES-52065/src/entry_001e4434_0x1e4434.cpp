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

// Function: entry_001e4434
// Address: 0x1e4434 - 0x1e4458
void entry_001e4434_0x1e4434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4434_0x1e4434");
#endif

    ctx->pc = 0x1e4434u;

    // 0x1e4434: 0x0  nop
    ctx->pc = 0x1e4434u;
    // NOP
    // 0x1e4438: 0xa2030051  sb          $v1, 0x51($s0)
    ctx->pc = 0x1e4438u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e443c: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e443cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x1e4440: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e4440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4444: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1e4444u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4448: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e444c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e444cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4450: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4450u;
        // 0x1e4454: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4458u;
}
