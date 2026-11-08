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

// Function: entry_001e8a8c
// Address: 0x1e8a8c - 0x1e8aa4
void entry_001e8a8c_0x1e8a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8a8c_0x1e8a8c");
#endif

    ctx->pc = 0x1e8a8cu;

    // 0x1e8a8c: 0x0  nop
    ctx->pc = 0x1e8a8cu;
    // NOP
    // 0x1e8a90: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e8a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x1e8a94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e8a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8a98: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x1e8a98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A9Cu;
        // 0x1e8aa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8AA4u;
}
