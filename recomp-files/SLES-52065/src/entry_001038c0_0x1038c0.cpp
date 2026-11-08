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

// Function: entry_001038c0
// Address: 0x1038c0 - 0x1038e4
void entry_001038c0_0x1038c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001038c0_0x1038c0");
#endif

    switch (ctx->pc) {
        case 0x1038c8u: goto label_1038c8;
        case 0x1038d8u: goto label_1038d8;
        default: break;
    }

    ctx->pc = 0x1038c0u;

    // 0x1038c0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1038C0u;
    SET_GPR_U32(ctx, 31, 0x1038C8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1038C0u, 0x1038C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038C8u;
label_1038c8:
    // 0x1038c8: 0x10400653  beqz        $v0, . + 4 + (0x653 << 2)
    ctx->pc = 0x1038C8u;
    {
        const bool branch_taken_0x1038c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1038c8) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x1038D0u;
    // 0x1038d0: 0xc056360  jal         func_158D80
    ctx->pc = 0x1038D0u;
    SET_GPR_U32(ctx, 31, 0x1038D8u);
    ctx->pc = 0x1038D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038D0u;
    // 0x1038d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1038D0u, 0x1038D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038D8u;
label_1038d8:
    // 0x1038d8: 0x1000064f  b           . + 4 + (0x64F << 2)
    ctx->pc = 0x1038D8u;
    {
        const bool branch_taken_0x1038d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1038d8) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x1038E0u;
    // 0x1038e0: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x1038e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    ctx->pc = 0x1038e4u;
}
