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

// Function: entry_001a1654
// Address: 0x1a1654 - 0x1a1668
void entry_001a1654_0x1a1654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1654_0x1a1654");
#endif

    switch (ctx->pc) {
        case 0x1a1660u: goto label_1a1660;
        default: break;
    }

    ctx->pc = 0x1a1654u;

    // 0x1a1654: 0x0  nop
    ctx->pc = 0x1a1654u;
    // NOP
    // 0x1a1658: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A1658u;
    SET_GPR_U32(ctx, 31, 0x1A1660u);
    ctx->pc = 0x1A165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1658u;
    // 0x1a165c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A1658u, 0x1A1660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1660u;
label_1a1660:
    // 0x1a1660: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x1A1660u;
    {
        const bool branch_taken_0x1a1660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1660) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
    ctx->pc = 0x1A1668u;
}
