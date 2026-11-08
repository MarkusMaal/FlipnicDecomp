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

// Function: entry_001a1ea0
// Address: 0x1a1ea0 - 0x1a1ec4
void entry_001a1ea0_0x1a1ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1ea0_0x1a1ea0");
#endif

    switch (ctx->pc) {
        case 0x1a1ea8u: goto label_1a1ea8;
        default: break;
    }

    ctx->pc = 0x1a1ea0u;

    // 0x1a1ea0: 0xc045ae8  jal         func_116BA0
    ctx->pc = 0x1A1EA0u;
    SET_GPR_U32(ctx, 31, 0x1A1EA8u);
    ctx->pc = 0x116BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116BA0u, 0x1A1EA0u, 0x1A1EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1EA8u;
label_1a1ea8:
    // 0x1a1ea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1eac: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1EACu;
    {
        const bool branch_taken_0x1a1eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a1eac) {
            ctx->pc = 0x1A1ECCu;
            return;
        }
    }
    ctx->pc = 0x1A1EB4u;
    // 0x1a1eb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1EB4u;
    {
        const bool branch_taken_0x1a1eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1eb4) {
            ctx->pc = 0x1A1EC4u;
            return;
        }
    }
    ctx->pc = 0x1A1EBCu;
    // 0x1a1ebc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1EBCu;
    {
        const bool branch_taken_0x1a1ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EBCu;
        // 0x1a1ec0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ebc) {
            ctx->pc = 0x1A1ED4u;
            return;
        }
    }
    ctx->pc = 0x1A1EC4u;
}
