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

// Function: entry_001219e8
// Address: 0x1219e8 - 0x121a0c
void entry_001219e8_0x1219e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001219e8_0x1219e8");
#endif

    switch (ctx->pc) {
        case 0x1219f0u: goto label_1219f0;
        case 0x121a04u: goto label_121a04;
        default: break;
    }

    ctx->pc = 0x1219e8u;

    // 0x1219e8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1219E8u;
    SET_GPR_U32(ctx, 31, 0x1219F0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1219E8u, 0x1219F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219F0u;
label_1219f0:
    // 0x1219f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1219f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1219f4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1219F4u;
    {
        const bool branch_taken_0x1219f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1219F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219F4u;
        // 0x1219f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219f4) {
            ctx->pc = 0x121A0Cu;
            return;
        }
    }
    ctx->pc = 0x1219FCu;
    // 0x1219fc: 0xc048ecc  jal         func_123B30
    ctx->pc = 0x1219FCu;
    SET_GPR_U32(ctx, 31, 0x121A04u);
    ctx->pc = 0x121A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219FCu;
    // 0x121a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123B30u, 0x1219FCu, 0x121A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A04u;
label_121a04:
    // 0x121a04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x121a0cu;
}
