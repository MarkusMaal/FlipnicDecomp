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

// Function: entry_00121be8
// Address: 0x121be8 - 0x121c0c
void entry_00121be8_0x121be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121be8_0x121be8");
#endif

    switch (ctx->pc) {
        case 0x121bf0u: goto label_121bf0;
        case 0x121c04u: goto label_121c04;
        default: break;
    }

    ctx->pc = 0x121be8u;

    // 0x121be8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x121BE8u;
    SET_GPR_U32(ctx, 31, 0x121BF0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x121BE8u, 0x121BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BF0u;
label_121bf0:
    // 0x121bf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121bf4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121BF4u;
    {
        const bool branch_taken_0x121bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x121BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BF4u;
        // 0x121bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121bf4) {
            ctx->pc = 0x121C0Cu;
            return;
        }
    }
    ctx->pc = 0x121BFCu;
    // 0x121bfc: 0xc0494b0  jal         func_1252C0
    ctx->pc = 0x121BFCu;
    SET_GPR_U32(ctx, 31, 0x121C04u);
    ctx->pc = 0x121C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BFCu;
    // 0x121c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1252C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1252C0u, 0x121BFCu, 0x121C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C04u;
label_121c04:
    // 0x121c04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x121c0cu;
}
