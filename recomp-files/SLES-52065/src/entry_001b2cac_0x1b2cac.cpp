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

// Function: entry_001b2cac
// Address: 0x1b2cac - 0x1b2cc8
void entry_001b2cac_0x1b2cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2cac_0x1b2cac");
#endif

    switch (ctx->pc) {
        case 0x1b2cb4u: goto label_1b2cb4;
        default: break;
    }

    ctx->pc = 0x1b2cacu;

    // 0x1b2cac: 0xc0627e0  jal         func_189F80
    ctx->pc = 0x1B2CACu;
    SET_GPR_U32(ctx, 31, 0x1B2CB4u);
    ctx->pc = 0x1B2CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2CACu;
    // 0x1b2cb0: 0x260500bc  addiu       $a1, $s0, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F80u, 0x1B2CACu, 0x1B2CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2CB4u;
label_1b2cb4:
    // 0x1b2cb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2cb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b2cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2cbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b2cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CC0u;
        // 0x1b2cc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2CC8u;
}
