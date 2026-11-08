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

// Function: entry_001f59c8
// Address: 0x1f59c8 - 0x1f59e4
void entry_001f59c8_0x1f59c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f59c8_0x1f59c8");
#endif

    ctx->pc = 0x1f59c8u;

    // 0x1f59c8: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x1f59c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f59cc: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x1f59ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f59d0: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x1f59d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f59d4: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x1f59d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f59d8: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1f59d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f59dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F59DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59DCu;
        // 0x1f59e0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F59DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F59E4u;
}
