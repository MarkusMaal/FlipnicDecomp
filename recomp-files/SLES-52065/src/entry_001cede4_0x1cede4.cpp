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

// Function: entry_001cede4
// Address: 0x1cede4 - 0x1cedfc
void entry_001cede4_0x1cede4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cede4_0x1cede4");
#endif

    switch (ctx->pc) {
        case 0x1cedecu: goto label_1cedec;
        default: break;
    }

    ctx->pc = 0x1cede4u;

    // 0x1cede4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1CEDE4u;
    SET_GPR_U32(ctx, 31, 0x1CEDECu);
    ctx->pc = 0x1CEDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEDE4u;
    // 0x1cede8: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1CEDE4u, 0x1CEDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEDECu;
label_1cedec:
    // 0x1cedec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEDECu;
    {
        const bool branch_taken_0x1cedec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDECu;
        // 0x1cedf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cedec) {
            ctx->pc = 0x1CEDFCu;
            return;
        }
    }
    ctx->pc = 0x1CEDF4u;
    // 0x1cedf4: 0xc06e244  jal         func_1B8910
    ctx->pc = 0x1CEDF4u;
    SET_GPR_U32(ctx, 31, 0x1CEDFCu);
    ctx->pc = 0x1B8910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8910u, 0x1CEDF4u, 0x1CEDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEDFCu;
}
