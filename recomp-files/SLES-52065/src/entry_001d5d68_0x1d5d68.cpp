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

// Function: entry_001d5d68
// Address: 0x1d5d68 - 0x1d5d80
void entry_001d5d68_0x1d5d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5d68_0x1d5d68");
#endif

    switch (ctx->pc) {
        case 0x1d5d74u: goto label_1d5d74;
        default: break;
    }

    ctx->pc = 0x1d5d68u;

    // 0x1d5d68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d5d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d6c: 0xc07540a  jal         func_1D5028
    ctx->pc = 0x1D5D6Cu;
    SET_GPR_U32(ctx, 31, 0x1D5D74u);
    ctx->pc = 0x1D5D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D6Cu;
    // 0x1d5d70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5028u, 0x1D5D6Cu, 0x1D5D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D74u;
label_1d5d74:
    // 0x1d5d74: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x1D5D74u;
    {
        const bool branch_taken_0x1d5d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d74) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5D7Cu;
    // 0x1d5d7c: 0x0  nop
    ctx->pc = 0x1d5d7cu;
    // NOP
    ctx->pc = 0x1d5d80u;
}
