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

// Function: FUN_001e2c00
// Address: 0x1e2c00 - 0x1e2c1c
void FUN_001e2c00_0x1e2c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e2c00_0x1e2c00");
#endif

    switch (ctx->pc) {
        case 0x1e2c10u: goto label_1e2c10;
        default: break;
    }

    ctx->pc = 0x1e2c00u;

    // 0x1e2c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2c08: 0xc07951c  jal         func_1E5470
    ctx->pc = 0x1E2C08u;
    SET_GPR_U32(ctx, 31, 0x1E2C10u);
    ctx->pc = 0x1E2C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2C08u;
    // 0x1e2c0c: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5470u, 0x1E2C08u, 0x1E2C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2C10u;
label_1e2c10:
    // 0x1e2c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2c14: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C14u;
        // 0x1e2c18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2C1Cu;
}
