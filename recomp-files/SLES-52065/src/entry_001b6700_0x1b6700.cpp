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

// Function: entry_001b6700
// Address: 0x1b6700 - 0x1b6720
void entry_001b6700_0x1b6700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6700_0x1b6700");
#endif

    switch (ctx->pc) {
        case 0x1b6708u: goto label_1b6708;
        case 0x1b6718u: goto label_1b6718;
        default: break;
    }

    ctx->pc = 0x1b6700u;

    // 0x1b6700: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6700u;
    SET_GPR_U32(ctx, 31, 0x1B6708u);
    ctx->pc = 0x1B6704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6700u;
    // 0x1b6704: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6700u, 0x1B6708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6708u;
label_1b6708:
    // 0x1b6708: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1B6708u;
    {
        const bool branch_taken_0x1b6708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6708) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6710u;
    // 0x1b6710: 0xc0731c8  jal         func_1CC720
    ctx->pc = 0x1B6710u;
    SET_GPR_U32(ctx, 31, 0x1B6718u);
    ctx->pc = 0x1B6714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6710u;
    // 0x1b6714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC720u, 0x1B6710u, 0x1B6718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6718u;
label_1b6718:
    // 0x1b6718: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1B6718u;
    {
        const bool branch_taken_0x1b6718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6718) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6720u;
}
