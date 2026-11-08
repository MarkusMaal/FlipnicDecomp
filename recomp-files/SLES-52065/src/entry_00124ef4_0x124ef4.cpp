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

// Function: entry_00124ef4
// Address: 0x124ef4 - 0x124f10
void entry_00124ef4_0x124ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124ef4_0x124ef4");
#endif

    switch (ctx->pc) {
        case 0x124f00u: goto label_124f00;
        default: break;
    }

    ctx->pc = 0x124ef4u;

label_124ef4:
    // 0x124ef4: 0x0  nop
    ctx->pc = 0x124ef4u;
    // NOP
    // 0x124ef8: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x124EF8u;
    SET_GPR_U32(ctx, 31, 0x124F00u);
    ctx->pc = 0x124EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124EF8u;
    // 0x124efc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x124EF8u, 0x124F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F00u;
label_124f00:
    // 0x124f00: 0x0  nop
    ctx->pc = 0x124f00u;
    // NOP
    // 0x124f04: 0x0  nop
    ctx->pc = 0x124f04u;
    // NOP
    // 0x124f08: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x124F08u;
    {
        const bool branch_taken_0x124f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124f08) {
            ctx->pc = 0x124EF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124ef4;
        }
    }
    ctx->pc = 0x124F10u;
}
