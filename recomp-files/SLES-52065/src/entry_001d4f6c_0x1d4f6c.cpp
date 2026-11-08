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

// Function: entry_001d4f6c
// Address: 0x1d4f6c - 0x1d4f84
void entry_001d4f6c_0x1d4f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4f6c_0x1d4f6c");
#endif

    ctx->pc = 0x1d4f6cu;

    // 0x1d4f6c: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1d4f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d4f70: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1d4f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d4f74: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1d4f74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d4f78: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1d4f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d4f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F7Cu;
        // 0x1d4f80: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4F84u;
}
