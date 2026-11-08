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

// Function: entry_00121a90
// Address: 0x121a90 - 0x121ab4
void entry_00121a90_0x121a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121a90_0x121a90");
#endif

    switch (ctx->pc) {
        case 0x121a98u: goto label_121a98;
        case 0x121aacu: goto label_121aac;
        default: break;
    }

    ctx->pc = 0x121a90u;

    // 0x121a90: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x121A90u;
    SET_GPR_U32(ctx, 31, 0x121A98u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x121A90u, 0x121A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A98u;
label_121a98:
    // 0x121a98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a9c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121A9Cu;
    {
        const bool branch_taken_0x121a9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x121AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A9Cu;
        // 0x121aa0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a9c) {
            ctx->pc = 0x121AB4u;
            return;
        }
    }
    ctx->pc = 0x121AA4u;
    // 0x121aa4: 0xc049308  jal         func_124C20
    ctx->pc = 0x121AA4u;
    SET_GPR_U32(ctx, 31, 0x121AACu);
    ctx->pc = 0x121AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AA4u;
    // 0x121aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124C20u, 0x121AA4u, 0x121AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AACu;
label_121aac:
    // 0x121aac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ab0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x121ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x121ab4u;
}
