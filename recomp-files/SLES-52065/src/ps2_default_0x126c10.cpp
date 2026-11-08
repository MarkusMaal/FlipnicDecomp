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

// Function: default
// Address: 0x126c10 - 0x126c2c
void ps2_default_0x126c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x126c10");
#endif

    switch (ctx->pc) {
        case 0x126c18u: goto label_126c18;
        default: break;
    }

    ctx->pc = 0x126c10u;

    // 0x126c10: 0xc0497f0  jal         func_125FC0
    ctx->pc = 0x126C10u;
    SET_GPR_U32(ctx, 31, 0x126C18u);
    ctx->pc = 0x126C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C10u;
    // 0x126c14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125FC0u, 0x126C10u, 0x126C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C18u;
label_126c18:
    // 0x126c18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x126c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126c1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x126c1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126c20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x126c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126c24: 0x3e00008  jr          $ra
    ctx->pc = 0x126C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C24u;
        // 0x126c28: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126C2Cu;
}
