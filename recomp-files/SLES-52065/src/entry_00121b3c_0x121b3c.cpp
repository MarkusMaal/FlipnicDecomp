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

// Function: entry_00121b3c
// Address: 0x121b3c - 0x121b60
void entry_00121b3c_0x121b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121b3c_0x121b3c");
#endif

    switch (ctx->pc) {
        case 0x121b44u: goto label_121b44;
        case 0x121b58u: goto label_121b58;
        default: break;
    }

    ctx->pc = 0x121b3cu;

    // 0x121b3c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x121B3Cu;
    SET_GPR_U32(ctx, 31, 0x121B44u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x121B3Cu, 0x121B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B44u;
label_121b44:
    // 0x121b44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b48: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121B48u;
    {
        const bool branch_taken_0x121b48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x121B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B48u;
        // 0x121b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b48) {
            ctx->pc = 0x121B60u;
            return;
        }
    }
    ctx->pc = 0x121B50u;
    // 0x121b50: 0xc0494b0  jal         func_1252C0
    ctx->pc = 0x121B50u;
    SET_GPR_U32(ctx, 31, 0x121B58u);
    ctx->pc = 0x121B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B50u;
    // 0x121b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1252C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1252C0u, 0x121B50u, 0x121B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B58u;
label_121b58:
    // 0x121b58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x121b60u;
}
