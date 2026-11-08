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

// Function: entry_001efba4
// Address: 0x1efba4 - 0x1efbc4
void entry_001efba4_0x1efba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efba4_0x1efba4");
#endif

    ctx->pc = 0x1efba4u;

    // 0x1efba4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1efba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1efba8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1efba8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1efbac: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1efbacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1efbb0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1efbb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1efbb4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1efbb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1efbb8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1efbb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1efbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBBCu;
        // 0x1efbc0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFBC4u;
}
