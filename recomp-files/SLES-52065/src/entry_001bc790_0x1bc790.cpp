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

// Function: entry_001bc790
// Address: 0x1bc790 - 0x1bc7ac
void entry_001bc790_0x1bc790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc790_0x1bc790");
#endif

    switch (ctx->pc) {
        case 0x1bc798u: goto label_1bc798;
        default: break;
    }

    ctx->pc = 0x1bc790u;

label_1bc790:
    // 0x1bc790: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1BC790u;
    SET_GPR_U32(ctx, 31, 0x1BC798u);
    ctx->pc = 0x1BC794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC790u;
    // 0x1bc794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1BC790u, 0x1BC798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC798u;
label_1bc798:
    // 0x1bc798: 0x0  nop
    ctx->pc = 0x1bc798u;
    // NOP
    // 0x1bc79c: 0x0  nop
    ctx->pc = 0x1bc79cu;
    // NOP
    // 0x1bc7a0: 0x0  nop
    ctx->pc = 0x1bc7a0u;
    // NOP
    // 0x1bc7a4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BC7A4u;
    {
        const bool branch_taken_0x1bc7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc7a4) {
            ctx->pc = 0x1BC790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc790;
        }
    }
    ctx->pc = 0x1BC7ACu;
}
