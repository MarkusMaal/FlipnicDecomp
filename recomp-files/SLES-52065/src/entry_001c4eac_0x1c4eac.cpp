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

// Function: entry_001c4eac
// Address: 0x1c4eac - 0x1c4ec4
void entry_001c4eac_0x1c4eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4eac_0x1c4eac");
#endif

    switch (ctx->pc) {
        case 0x1c4eb4u: goto label_1c4eb4;
        default: break;
    }

    ctx->pc = 0x1c4eacu;

    // 0x1c4eac: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C4EACu;
    SET_GPR_U32(ctx, 31, 0x1C4EB4u);
    ctx->pc = 0x1C4EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4EACu;
    // 0x1c4eb0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C4EACu, 0x1C4EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4EB4u;
label_1c4eb4:
    // 0x1c4eb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4EB4u;
    {
        const bool branch_taken_0x1c4eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EB4u;
        // 0x1c4eb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4eb4) {
            ctx->pc = 0x1C4EC4u;
            return;
        }
    }
    ctx->pc = 0x1C4EBCu;
    // 0x1c4ebc: 0xc0713f8  jal         func_1C4FE0
    ctx->pc = 0x1C4EBCu;
    SET_GPR_U32(ctx, 31, 0x1C4EC4u);
    ctx->pc = 0x1C4EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4EBCu;
    // 0x1c4ec0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4FE0u, 0x1C4EBCu, 0x1C4EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4EC4u;
}
