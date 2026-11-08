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

// Function: entry_001f3014
// Address: 0x1f3014 - 0x1f3028
void entry_001f3014_0x1f3014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3014_0x1f3014");
#endif

    switch (ctx->pc) {
        case 0x1f3020u: goto label_1f3020;
        default: break;
    }

    ctx->pc = 0x1f3014u;

    // 0x1f3014: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1f3014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1f3018: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1F3018u;
    SET_GPR_U32(ctx, 31, 0x1F3020u);
    ctx->pc = 0x1F301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3018u;
    // 0x1f301c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1F3018u, 0x1F3020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3020u;
label_1f3020:
    // 0x1f3020: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3020u;
    {
        const bool branch_taken_0x1f3020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3020u;
        // 0x1f3024: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3020) {
            ctx->pc = 0x1F302Cu;
            return;
        }
    }
    ctx->pc = 0x1F3028u;
}
