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

// Function: entry_0011d870
// Address: 0x11d870 - 0x11d884
void entry_0011d870_0x11d870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d870_0x11d870");
#endif

    switch (ctx->pc) {
        case 0x11d87cu: goto label_11d87c;
        default: break;
    }

    ctx->pc = 0x11d870u;

    // 0x11d870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d874: 0xc080702  jal         func_201C08
    ctx->pc = 0x11D874u;
    SET_GPR_U32(ctx, 31, 0x11D87Cu);
    ctx->pc = 0x11D878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D874u;
    // 0x11d878: 0x27a50370  addiu       $a1, $sp, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11D874u, 0x11D87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D87Cu;
label_11d87c:
    // 0x11d87c: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x11D87Cu;
    {
        const bool branch_taken_0x11d87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d87c) {
            ctx->pc = 0x11DA5Cu;
            return;
        }
    }
    ctx->pc = 0x11D884u;
}
