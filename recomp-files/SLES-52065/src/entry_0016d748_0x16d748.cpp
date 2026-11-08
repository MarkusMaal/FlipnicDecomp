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

// Function: entry_0016d748
// Address: 0x16d748 - 0x16d758
void entry_0016d748_0x16d748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d748_0x16d748");
#endif

    switch (ctx->pc) {
        case 0x16d750u: goto label_16d750;
        default: break;
    }

    ctx->pc = 0x16d748u;

    // 0x16d748: 0xc042118  jal         func_108460
    ctx->pc = 0x16D748u;
    SET_GPR_U32(ctx, 31, 0x16D750u);
    ctx->pc = 0x16D74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D748u;
    // 0x16d74c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16D748u, 0x16D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D750u;
label_16d750:
    // 0x16d750: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x16D750u;
    {
        const bool branch_taken_0x16d750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D750u;
        // 0x16d754: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d750) {
            ctx->pc = 0x16D7D0u;
            return;
        }
    }
    ctx->pc = 0x16D758u;
}
