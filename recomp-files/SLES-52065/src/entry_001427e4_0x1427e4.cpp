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

// Function: entry_001427e4
// Address: 0x1427e4 - 0x1427fc
void entry_001427e4_0x1427e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001427e4_0x1427e4");
#endif

    switch (ctx->pc) {
        case 0x1427f4u: goto label_1427f4;
        default: break;
    }

    ctx->pc = 0x1427e4u;

    // 0x1427e4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1427E4u;
    {
        const bool branch_taken_0x1427e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1427e4) {
            ctx->pc = 0x1427FCu;
            return;
        }
    }
    ctx->pc = 0x1427ECu;
    // 0x1427ec: 0xc050d1c  jal         func_143470
    ctx->pc = 0x1427ECu;
    SET_GPR_U32(ctx, 31, 0x1427F4u);
    ctx->pc = 0x143470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143470u, 0x1427ECu, 0x1427F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1427F4u;
label_1427f4:
    // 0x1427f4: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x1427F4u;
    {
        const bool branch_taken_0x1427f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1427F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427F4u;
        // 0x1427f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427f4) {
            ctx->pc = 0x142F4Cu;
            return;
        }
    }
    ctx->pc = 0x1427FCu;
}
