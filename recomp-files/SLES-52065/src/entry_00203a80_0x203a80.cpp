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

// Function: entry_00203a80
// Address: 0x203a80 - 0x203aa8
void entry_00203a80_0x203a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203a80_0x203a80");
#endif

    switch (ctx->pc) {
        case 0x203a90u: goto label_203a90;
        default: break;
    }

    ctx->pc = 0x203a80u;

    // 0x203a80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x203a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x203a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a88: 0xc080eaa  jal         func_203AA8
    ctx->pc = 0x203A88u;
    SET_GPR_U32(ctx, 31, 0x203A90u);
    ctx->pc = 0x203A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A88u;
    // 0x203a8c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AA8u, 0x203A88u, 0x203A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A90u;
label_203a90:
    // 0x203a90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x203a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203a94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x203a94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203a98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x203a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x203AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AA0u;
        // 0x203aa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203AA8u;
}
