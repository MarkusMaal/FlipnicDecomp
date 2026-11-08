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

// Function: entry_0018e338
// Address: 0x18e338 - 0x18e348
void entry_0018e338_0x18e338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e338_0x18e338");
#endif

    switch (ctx->pc) {
        case 0x18e340u: goto label_18e340;
        default: break;
    }

    ctx->pc = 0x18e338u;

    // 0x18e338: 0xc063de0  jal         func_18F780
    ctx->pc = 0x18E338u;
    SET_GPR_U32(ctx, 31, 0x18E340u);
    ctx->pc = 0x18E33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E338u;
    // 0x18e33c: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x18E338u, 0x18E340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E340u;
label_18e340:
    // 0x18e340: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18E340u;
    {
        const bool branch_taken_0x18e340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e340) {
            ctx->pc = 0x18E350u;
            return;
        }
    }
    ctx->pc = 0x18E348u;
}
