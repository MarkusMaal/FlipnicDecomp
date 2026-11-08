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

// Function: entry_001f0f84
// Address: 0x1f0f84 - 0x1f0fa0
void entry_001f0f84_0x1f0f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0f84_0x1f0f84");
#endif

    ctx->pc = 0x1f0f84u;

    // 0x1f0f84: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f0f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f0f88: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f0f88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f0f8c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f0f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f0f90: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f0f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0f94: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f0f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0f98: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F98u;
        // 0x1f0f9c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0FA0u;
}
