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

// Function: caseD_4
// Address: 0x1ad528 - 0x1ad538
void caseD_4_0x1ad528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1ad528");
#endif

    switch (ctx->pc) {
        case 0x1ad530u: goto label_1ad530;
        default: break;
    }

    ctx->pc = 0x1ad528u;

    // 0x1ad528: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AD528u;
    SET_GPR_U32(ctx, 31, 0x1AD530u);
    ctx->pc = 0x1AD52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD528u;
    // 0x1ad52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AD528u, 0x1AD530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD530u;
label_1ad530:
    // 0x1ad530: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x1AD530u;
    {
        const bool branch_taken_0x1ad530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad530) {
            ctx->pc = 0x1ADAB0u;
            return;
        }
    }
    ctx->pc = 0x1AD538u;
}
