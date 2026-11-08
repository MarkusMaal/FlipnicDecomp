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

// Function: entry_001b6760
// Address: 0x1b6760 - 0x1b6780
void entry_001b6760_0x1b6760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6760_0x1b6760");
#endif

    switch (ctx->pc) {
        case 0x1b6768u: goto label_1b6768;
        case 0x1b6778u: goto label_1b6778;
        default: break;
    }

    ctx->pc = 0x1b6760u;

    // 0x1b6760: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6760u;
    SET_GPR_U32(ctx, 31, 0x1B6768u);
    ctx->pc = 0x1B6764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6760u;
    // 0x1b6764: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6760u, 0x1B6768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6768u;
label_1b6768:
    // 0x1b6768: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1B6768u;
    {
        const bool branch_taken_0x1b6768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6768) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6770u;
    // 0x1b6770: 0xc07334c  jal         func_1CCD30
    ctx->pc = 0x1B6770u;
    SET_GPR_U32(ctx, 31, 0x1B6778u);
    ctx->pc = 0x1B6774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6770u;
    // 0x1b6774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD30u, 0x1B6770u, 0x1B6778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6778u;
label_1b6778:
    // 0x1b6778: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1B6778u;
    {
        const bool branch_taken_0x1b6778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6778) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6780u;
}
