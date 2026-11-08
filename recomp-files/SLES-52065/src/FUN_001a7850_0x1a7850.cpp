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

// Function: FUN_001a7850
// Address: 0x1a7850 - 0x1a787c
void FUN_001a7850_0x1a7850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7850_0x1a7850");
#endif

    switch (ctx->pc) {
        case 0x1a7868u: goto label_1a7868;
        default: break;
    }

    ctx->pc = 0x1a7850u;

    // 0x1a7850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a7858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a785c: 0x8f8583a0  lw          $a1, -0x7C60($gp)
    ctx->pc = 0x1a785cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x1a7860: 0xc054660  jal         func_151980
    ctx->pc = 0x1A7860u;
    SET_GPR_U32(ctx, 31, 0x1A7868u);
    ctx->pc = 0x1A7864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7860u;
    // 0x1a7864: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1A7860u, 0x1A7868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7868u;
label_1a7868:
    // 0x1a7868: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x1a7868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a786c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a786cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7874: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7874u;
        // 0x1a7878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A787Cu;
}
