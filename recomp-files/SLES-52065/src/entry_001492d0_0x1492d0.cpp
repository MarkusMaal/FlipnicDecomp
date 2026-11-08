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

// Function: entry_001492d0
// Address: 0x1492d0 - 0x1492f0
void entry_001492d0_0x1492d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001492d0_0x1492d0");
#endif

    switch (ctx->pc) {
        case 0x1492e8u: goto label_1492e8;
        default: break;
    }

    ctx->pc = 0x1492d0u;

    // 0x1492d0: 0x17c00007  bnez        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1492D0u;
    {
        const bool branch_taken_0x1492d0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1492d0) {
            ctx->pc = 0x1492F0u;
            return;
        }
    }
    ctx->pc = 0x1492D8u;
    // 0x1492d8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1492d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492dc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1492dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492e0: 0xc052dbc  jal         func_14B6F0
    ctx->pc = 0x1492E0u;
    SET_GPR_U32(ctx, 31, 0x1492E8u);
    ctx->pc = 0x1492E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1492E0u;
    // 0x1492e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F0u, 0x1492E0u, 0x1492E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1492E8u;
label_1492e8:
    // 0x1492e8: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x1492E8u;
    {
        const bool branch_taken_0x1492e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1492e8) {
            ctx->pc = 0x149550u;
            return;
        }
    }
    ctx->pc = 0x1492F0u;
}
