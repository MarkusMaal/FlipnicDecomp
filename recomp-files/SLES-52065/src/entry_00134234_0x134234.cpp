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

// Function: entry_00134234
// Address: 0x134234 - 0x134250
void entry_00134234_0x134234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134234_0x134234");
#endif

    switch (ctx->pc) {
        case 0x13423cu: goto label_13423c;
        default: break;
    }

    ctx->pc = 0x134234u;

label_134234:
    // 0x134234: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x134234u;
    SET_GPR_U32(ctx, 31, 0x13423Cu);
    ctx->pc = 0x134238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134234u;
    // 0x134238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x134234u, 0x13423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13423Cu;
label_13423c:
    // 0x13423c: 0x0  nop
    ctx->pc = 0x13423cu;
    // NOP
    // 0x134240: 0x0  nop
    ctx->pc = 0x134240u;
    // NOP
    // 0x134244: 0x0  nop
    ctx->pc = 0x134244u;
    // NOP
    // 0x134248: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x134248u;
    {
        const bool branch_taken_0x134248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134248) {
            ctx->pc = 0x134234u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134234;
        }
    }
    ctx->pc = 0x134250u;
}
