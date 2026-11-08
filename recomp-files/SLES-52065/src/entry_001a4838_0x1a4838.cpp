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

// Function: entry_001a4838
// Address: 0x1a4838 - 0x1a4848
void entry_001a4838_0x1a4838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4838_0x1a4838");
#endif

    switch (ctx->pc) {
        case 0x1a4840u: goto label_1a4840;
        default: break;
    }

    ctx->pc = 0x1a4838u;

    // 0x1a4838: 0xc063de0  jal         func_18F780
    ctx->pc = 0x1A4838u;
    SET_GPR_U32(ctx, 31, 0x1A4840u);
    ctx->pc = 0x1A483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4838u;
    // 0x1a483c: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x1A4838u, 0x1A4840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4840u;
label_1a4840:
    // 0x1a4840: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A4840u;
    {
        const bool branch_taken_0x1a4840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4840) {
            ctx->pc = 0x1A486Cu;
            return;
        }
    }
    ctx->pc = 0x1A4848u;
}
