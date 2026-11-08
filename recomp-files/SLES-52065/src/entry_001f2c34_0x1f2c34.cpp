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

// Function: entry_001f2c34
// Address: 0x1f2c34 - 0x1f2c54
void entry_001f2c34_0x1f2c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2c34_0x1f2c34");
#endif

    ctx->pc = 0x1f2c34u;

    // 0x1f2c34: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1f2c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f2c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2c3c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1f2c3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2c40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f2c40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2c44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f2c44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2c48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f2c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C4Cu;
        // 0x1f2c50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2C54u;
}
