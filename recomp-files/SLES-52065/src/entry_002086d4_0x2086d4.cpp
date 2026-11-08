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

// Function: entry_002086d4
// Address: 0x2086d4 - 0x2086e0
void entry_002086d4_0x2086d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002086d4_0x2086d4");
#endif

    switch (ctx->pc) {
        case 0x2086dcu: goto label_2086dc;
        default: break;
    }

    ctx->pc = 0x2086d4u;

    // 0x2086d4: 0xc081efa  jal         func_207BE8
    ctx->pc = 0x2086D4u;
    SET_GPR_U32(ctx, 31, 0x2086DCu);
    ctx->pc = 0x2086D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2086D4u;
    // 0x2086d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207BE8u, 0x2086D4u, 0x2086DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2086DCu;
label_2086dc:
    // 0x2086dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2086dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x2086e0u;
}
