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

// Function: entry_001ee144
// Address: 0x1ee144 - 0x1ee154
void entry_001ee144_0x1ee144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee144_0x1ee144");
#endif

    switch (ctx->pc) {
        case 0x1ee14cu: goto label_1ee14c;
        default: break;
    }

    ctx->pc = 0x1ee144u;

    // 0x1ee144: 0xc07b83e  jal         func_1EE0F8
    ctx->pc = 0x1EE144u;
    SET_GPR_U32(ctx, 31, 0x1EE14Cu);
    ctx->pc = 0x1EE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0F8u, 0x1EE144u, 0x1EE14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE14Cu;
label_1ee14c:
    // 0x1ee14c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE14Cu;
    {
        const bool branch_taken_0x1ee14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE14Cu;
        // 0x1ee150: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee14c) {
            ctx->pc = 0x1EE160u;
            return;
        }
    }
    ctx->pc = 0x1EE154u;
}
