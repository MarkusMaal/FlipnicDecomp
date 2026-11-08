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

// Function: entry_001f11d0
// Address: 0x1f11d0 - 0x1f11f0
void entry_001f11d0_0x1f11d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f11d0_0x1f11d0");
#endif

    ctx->pc = 0x1f11d0u;

    // 0x1f11d0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f11d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f11d4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f11d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f11d8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f11d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f11dc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f11dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f11e0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f11e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f11e4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f11e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f11e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F11E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11E8u;
        // 0x1f11ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F11E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F11F0u;
}
