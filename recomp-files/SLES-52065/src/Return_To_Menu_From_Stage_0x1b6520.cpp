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

// Function: Return_To_Menu_From_Stage
// Address: 0x1b6520 - 0x1b6540
void Return_To_Menu_From_Stage_0x1b6520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Return_To_Menu_From_Stage_0x1b6520");
#endif

    switch (ctx->pc) {
        case 0x1b6528u: goto label_1b6528;
        case 0x1b6538u: goto label_1b6538;
        default: break;
    }

    ctx->pc = 0x1b6520u;

    // 0x1b6520: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6520u;
    SET_GPR_U32(ctx, 31, 0x1B6528u);
    ctx->pc = 0x1B6524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6520u;
    // 0x1b6524: 0x240400d8  addiu       $a0, $zero, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6520u, 0x1B6528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6528u;
label_1b6528:
    // 0x1b6528: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x1B6528u;
    {
        const bool branch_taken_0x1b6528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6528) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6530u;
    // 0x1b6530: 0xc06fa60  jal         func_1BE980
    ctx->pc = 0x1B6530u;
    SET_GPR_U32(ctx, 31, 0x1B6538u);
    ctx->pc = 0x1B6534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6530u;
    // 0x1b6534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE980u, 0x1B6530u, 0x1B6538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6538u;
label_1b6538:
    // 0x1b6538: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x1B6538u;
    {
        const bool branch_taken_0x1b6538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6538) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6540u;
}
