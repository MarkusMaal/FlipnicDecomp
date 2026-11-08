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

// Function: FUN_00226110
// Address: 0x226110 - 0x226148
void FUN_00226110_0x226110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00226110_0x226110");
#endif

    switch (ctx->pc) {
        case 0x226124u: goto label_226124;
        case 0x22613cu: goto label_22613c;
        default: break;
    }

    ctx->pc = 0x226110u;

    // 0x226110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x226114: 0x27848514  addiu       $a0, $gp, -0x7AEC
    ctx->pc = 0x226114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935828));
    // 0x226118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22611c: 0xc048920  jal         func_122480
    ctx->pc = 0x22611Cu;
    SET_GPR_U32(ctx, 31, 0x226124u);
    ctx->pc = 0x226120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22611Cu;
    // 0x226120: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x22611Cu, 0x226124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226124u;
label_226124:
    // 0x226124: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x226124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x226128: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x226128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x22612c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22612cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226130: 0x24a58670  addiu       $a1, $a1, -0x7990
    ctx->pc = 0x226130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936176));
    // 0x226134: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226134u;
    SET_GPR_U32(ctx, 31, 0x22613Cu);
    ctx->pc = 0x226138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226134u;
    // 0x226138: 0x24c66290  addiu       $a2, $a2, 0x6290 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226134u, 0x22613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22613Cu;
label_22613c:
    // 0x22613c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22613cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226140: 0x3e00008  jr          $ra
    ctx->pc = 0x226140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226140u;
        // 0x226144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226148u;
}
