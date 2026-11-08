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

// Function: entry_00109048
// Address: 0x109048 - 0x109064
void entry_00109048_0x109048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109048_0x109048");
#endif

    switch (ctx->pc) {
        case 0x109050u: goto label_109050;
        case 0x10905cu: goto label_10905c;
        default: break;
    }

    ctx->pc = 0x109048u;

    // 0x109048: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x109048u;
    SET_GPR_U32(ctx, 31, 0x109050u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x109048u, 0x109050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109050u;
label_109050:
    // 0x109050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x109050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109054: 0xc049f0c  jal         func_127C30
    ctx->pc = 0x109054u;
    SET_GPR_U32(ctx, 31, 0x10905Cu);
    ctx->pc = 0x109058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109054u;
    // 0x109058: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C30u, 0x109054u, 0x10905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10905Cu;
label_10905c:
    // 0x10905c: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x10905Cu;
    {
        const bool branch_taken_0x10905c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10905c) {
            ctx->pc = 0x10929Cu;
            return;
        }
    }
    ctx->pc = 0x109064u;
}
