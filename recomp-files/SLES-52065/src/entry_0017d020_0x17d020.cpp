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

// Function: entry_0017d020
// Address: 0x17d020 - 0x17d03c
void entry_0017d020_0x17d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d020_0x17d020");
#endif

    switch (ctx->pc) {
        case 0x17d028u: goto label_17d028;
        default: break;
    }

    ctx->pc = 0x17d020u;

label_17d020:
    // 0x17d020: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x17D020u;
    SET_GPR_U32(ctx, 31, 0x17D028u);
    ctx->pc = 0x17D024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D020u;
    // 0x17d024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x17D020u, 0x17D028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D028u;
label_17d028:
    // 0x17d028: 0x0  nop
    ctx->pc = 0x17d028u;
    // NOP
    // 0x17d02c: 0x0  nop
    ctx->pc = 0x17d02cu;
    // NOP
    // 0x17d030: 0x0  nop
    ctx->pc = 0x17d030u;
    // NOP
    // 0x17d034: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17D034u;
    {
        const bool branch_taken_0x17d034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d034) {
            ctx->pc = 0x17D020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d020;
        }
    }
    ctx->pc = 0x17D03Cu;
}
