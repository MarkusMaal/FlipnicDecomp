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

// Function: entry_001955b0
// Address: 0x1955b0 - 0x1955cc
void entry_001955b0_0x1955b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001955b0_0x1955b0");
#endif

    switch (ctx->pc) {
        case 0x1955b8u: goto label_1955b8;
        case 0x1955c4u: goto label_1955c4;
        default: break;
    }

    ctx->pc = 0x1955b0u;

    // 0x1955b0: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1955B0u;
    SET_GPR_U32(ctx, 31, 0x1955B8u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1955B0u, 0x1955B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955B8u;
label_1955b8:
    // 0x1955b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1955b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955bc: 0xc049ff0  jal         func_127FC0
    ctx->pc = 0x1955BCu;
    SET_GPR_U32(ctx, 31, 0x1955C4u);
    ctx->pc = 0x1955C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955BCu;
    // 0x1955c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127FC0u, 0x1955BCu, 0x1955C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955C4u;
label_1955c4:
    // 0x1955c4: 0x100001e7  b           . + 4 + (0x1E7 << 2)
    ctx->pc = 0x1955C4u;
    {
        const bool branch_taken_0x1955c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1955c4) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x1955CCu;
}
