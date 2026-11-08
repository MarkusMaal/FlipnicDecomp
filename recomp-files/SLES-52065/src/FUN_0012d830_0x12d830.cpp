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

// Function: FUN_0012d830
// Address: 0x12d830 - 0x12d85c
void FUN_0012d830_0x12d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012d830_0x12d830");
#endif

    switch (ctx->pc) {
        case 0x12d848u: goto label_12d848;
        default: break;
    }

    ctx->pc = 0x12d830u;

    // 0x12d830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12d830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12d834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12d838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12d83c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12d83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d840: 0xc04b638  jal         func_12D8E0
    ctx->pc = 0x12D840u;
    SET_GPR_U32(ctx, 31, 0x12D848u);
    ctx->pc = 0x12D844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D840u;
    // 0x12d844: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D8E0u, 0x12D840u, 0x12D848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D848u;
label_12d848:
    // 0x12d848: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x12d848u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d84c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12d84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12d850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d854: 0x3e00008  jr          $ra
    ctx->pc = 0x12D854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D854u;
        // 0x12d858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D85Cu;
}
