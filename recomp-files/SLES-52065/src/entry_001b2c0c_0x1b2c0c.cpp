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

// Function: entry_001b2c0c
// Address: 0x1b2c0c - 0x1b2c28
void entry_001b2c0c_0x1b2c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2c0c_0x1b2c0c");
#endif

    switch (ctx->pc) {
        case 0x1b2c14u: goto label_1b2c14;
        default: break;
    }

    ctx->pc = 0x1b2c0cu;

    // 0x1b2c0c: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1B2C0Cu;
    SET_GPR_U32(ctx, 31, 0x1B2C14u);
    ctx->pc = 0x1B2C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C0Cu;
    // 0x1b2c10: 0x260500bc  addiu       $a1, $s0, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1B2C0Cu, 0x1B2C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C14u;
label_1b2c14:
    // 0x1b2c14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2c18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b2c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b2c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2c20: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C20u;
        // 0x1b2c24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2C28u;
}
