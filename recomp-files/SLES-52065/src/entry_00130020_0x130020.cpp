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

// Function: entry_00130020
// Address: 0x130020 - 0x130044
void entry_00130020_0x130020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130020_0x130020");
#endif

    switch (ctx->pc) {
        case 0x13002cu: goto label_13002c;
        default: break;
    }

    ctx->pc = 0x130020u;

    // 0x130020: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x130020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x130024: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x130024u;
    SET_GPR_U32(ctx, 31, 0x13002Cu);
    ctx->pc = 0x130028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130024u;
    // 0x130028: 0xaf908588  sw          $s0, -0x7A78($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935944), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x130024u, 0x13002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13002Cu;
label_13002c:
    // 0x13002c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13002Cu;
    {
        const bool branch_taken_0x13002c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13002Cu;
        // 0x130030: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13002c) {
            ctx->pc = 0x130044u;
            return;
        }
    }
    ctx->pc = 0x130034u;
    // 0x130034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130038: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x130038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x13003c: 0xc04c37c  jal         func_130DF0
    ctx->pc = 0x13003Cu;
    SET_GPR_U32(ctx, 31, 0x130044u);
    ctx->pc = 0x130040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13003Cu;
    // 0x130040: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DF0u, 0x13003Cu, 0x130044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130044u;
}
