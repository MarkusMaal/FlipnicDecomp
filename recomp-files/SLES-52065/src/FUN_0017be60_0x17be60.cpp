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

// Function: FUN_0017be60
// Address: 0x17be60 - 0x17be88
void FUN_0017be60_0x17be60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017be60_0x17be60");
#endif

    switch (ctx->pc) {
        case 0x17be74u: goto label_17be74;
        default: break;
    }

    ctx->pc = 0x17be60u;

    // 0x17be60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17be60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17be64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17be64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17be68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17be68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17be6c: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x17BE6Cu;
    SET_GPR_U32(ctx, 31, 0x17BE74u);
    ctx->pc = 0x17BE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BE6Cu;
    // 0x17be70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x17BE6Cu, 0x17BE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE74u;
label_17be74:
    // 0x17be74: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x17be74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x17be78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17be78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17be7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17be7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17be80: 0x3e00008  jr          $ra
    ctx->pc = 0x17BE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE80u;
        // 0x17be84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BE88u;
}
