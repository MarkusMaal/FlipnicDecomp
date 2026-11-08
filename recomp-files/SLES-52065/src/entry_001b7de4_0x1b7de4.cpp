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

// Function: entry_001b7de4
// Address: 0x1b7de4 - 0x1b7e04
void entry_001b7de4_0x1b7de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7de4_0x1b7de4");
#endif

    switch (ctx->pc) {
        case 0x1b7df0u: goto label_1b7df0;
        default: break;
    }

    ctx->pc = 0x1b7de4u;

    // 0x1b7de4: 0x0  nop
    ctx->pc = 0x1b7de4u;
    // NOP
    // 0x1b7de8: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B7DE8u;
    SET_GPR_U32(ctx, 31, 0x1B7DF0u);
    ctx->pc = 0x1B7DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7DE8u;
    // 0x1b7dec: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B7DE8u, 0x1B7DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DF0u;
label_1b7df0:
    // 0x1b7df0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b7df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1b7df4: 0x1462fff0  bne         $v1, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1B7DF4u;
    {
        const bool branch_taken_0x1b7df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7df4) {
            ctx->pc = 0x1B7DB8u;
            return;
        }
    }
    ctx->pc = 0x1B7DFCu;
    // 0x1b7dfc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B7DFCu;
    {
        const bool branch_taken_0x1b7dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DFCu;
        // 0x1b7e00: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7dfc) {
            ctx->pc = 0x1B7E68u;
            return;
        }
    }
    ctx->pc = 0x1B7E04u;
}
