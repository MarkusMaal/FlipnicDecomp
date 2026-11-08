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

// Function: entry_001c6aa0
// Address: 0x1c6aa0 - 0x1c6ab4
void entry_001c6aa0_0x1c6aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6aa0_0x1c6aa0");
#endif

    switch (ctx->pc) {
        case 0x1c6aa8u: goto label_1c6aa8;
        default: break;
    }

    ctx->pc = 0x1c6aa0u;

    // 0x1c6aa0: 0xc071e1c  jal         func_1C7870
    ctx->pc = 0x1C6AA0u;
    SET_GPR_U32(ctx, 31, 0x1C6AA8u);
    ctx->pc = 0x1C6AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AA0u;
    // 0x1c6aa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7870u, 0x1C6AA0u, 0x1C6AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AA8u;
label_1c6aa8:
    // 0x1c6aa8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c6aac: 0x10000335  b           . + 4 + (0x335 << 2)
    ctx->pc = 0x1C6AACu;
    {
        const bool branch_taken_0x1c6aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AACu;
        // 0x1c6ab0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6aac) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6AB4u;
}
