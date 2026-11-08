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

// Function: entry_001991d8
// Address: 0x1991d8 - 0x1991ec
void entry_001991d8_0x1991d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001991d8_0x1991d8");
#endif

    switch (ctx->pc) {
        case 0x1991e4u: goto label_1991e4;
        default: break;
    }

    ctx->pc = 0x1991d8u;

    // 0x1991d8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1991d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1991dc: 0xc064c0c  jal         func_193030
    ctx->pc = 0x1991DCu;
    SET_GPR_U32(ctx, 31, 0x1991E4u);
    ctx->pc = 0x1991E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1991DCu;
    // 0x1991e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193030u, 0x1991DCu, 0x1991E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991E4u;
label_1991e4:
    // 0x1991e4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1991E4u;
    {
        const bool branch_taken_0x1991e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1991e4) {
            ctx->pc = 0x199350u;
            return;
        }
    }
    ctx->pc = 0x1991ECu;
}
