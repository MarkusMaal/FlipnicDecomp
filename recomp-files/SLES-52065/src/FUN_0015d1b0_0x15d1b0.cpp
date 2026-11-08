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

// Function: FUN_0015d1b0
// Address: 0x15d1b0 - 0x15d1f4
void FUN_0015d1b0_0x15d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015d1b0_0x15d1b0");
#endif

    switch (ctx->pc) {
        case 0x15d1d0u: goto label_15d1d0;
        case 0x15d1e0u: goto label_15d1e0;
        default: break;
    }

    ctx->pc = 0x15d1b0u;

    // 0x15d1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15d1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15d1b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15d1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15d1b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d1bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d1c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15d1c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d1c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15d1c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d1c8: 0xc0583d4  jal         func_160F50
    ctx->pc = 0x15D1C8u;
    SET_GPR_U32(ctx, 31, 0x15D1D0u);
    ctx->pc = 0x15D1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1C8u;
    // 0x15d1cc: 0x26242c00  addiu       $a0, $s1, 0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160F50u, 0x15D1C8u, 0x15D1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1D0u;
label_15d1d0:
    // 0x15d1d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d1d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d1d8: 0xc057480  jal         func_15D200
    ctx->pc = 0x15D1D8u;
    SET_GPR_U32(ctx, 31, 0x15D1E0u);
    ctx->pc = 0x15D1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1D8u;
    // 0x15d1dc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x15D1D8u, 0x15D1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1E0u;
label_15d1e0:
    // 0x15d1e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15d1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d1e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d1e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d1e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x15D1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1ECu;
        // 0x15d1f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D1F4u;
}
