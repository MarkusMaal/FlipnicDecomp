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

// Function: entry_00123d80
// Address: 0x123d80 - 0x123d9c
void entry_00123d80_0x123d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123d80_0x123d80");
#endif

    switch (ctx->pc) {
        case 0x123d88u: goto label_123d88;
        default: break;
    }

    ctx->pc = 0x123d80u;

label_123d80:
    // 0x123d80: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x123D80u;
    SET_GPR_U32(ctx, 31, 0x123D88u);
    ctx->pc = 0x123D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D80u;
    // 0x123d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x123D80u, 0x123D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D88u;
label_123d88:
    // 0x123d88: 0x0  nop
    ctx->pc = 0x123d88u;
    // NOP
    // 0x123d8c: 0x0  nop
    ctx->pc = 0x123d8cu;
    // NOP
    // 0x123d90: 0x0  nop
    ctx->pc = 0x123d90u;
    // NOP
    // 0x123d94: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x123D94u;
    {
        const bool branch_taken_0x123d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123d94) {
            ctx->pc = 0x123D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123d80;
        }
    }
    ctx->pc = 0x123D9Cu;
}
