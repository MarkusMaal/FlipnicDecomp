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

// Function: entry_001f72ac
// Address: 0x1f72ac - 0x1f72d0
void entry_001f72ac_0x1f72ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f72ac_0x1f72ac");
#endif

    ctx->pc = 0x1f72acu;

    // 0x1f72ac: 0xae20bb24  sw          $zero, -0x44DC($s1)
    ctx->pc = 0x1f72acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294949668), GPR_U32(ctx, 0));
    // 0x1f72b0: 0xac52bb40  sw          $s2, -0x44C0($v0)
    ctx->pc = 0x1f72b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949696), GPR_U32(ctx, 18));
    // 0x1f72b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f72b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f72b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f72b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f72bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f72bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f72c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f72c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f72c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f72c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f72c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F72C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F72CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F72C8u;
        // 0x1f72cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F72C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F72D0u;
}
