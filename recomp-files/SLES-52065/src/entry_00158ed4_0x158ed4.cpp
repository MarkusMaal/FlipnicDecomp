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

// Function: entry_00158ed4
// Address: 0x158ed4 - 0x158ee4
void entry_00158ed4_0x158ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158ed4_0x158ed4");
#endif

    switch (ctx->pc) {
        case 0x158ee0u: goto label_158ee0;
        default: break;
    }

    ctx->pc = 0x158ed4u;

    // 0x158ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x158ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ed8: 0xc05bda0  jal         func_16F680
    ctx->pc = 0x158ED8u;
    SET_GPR_U32(ctx, 31, 0x158EE0u);
    ctx->pc = 0x158EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158ED8u;
    // 0x158edc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F680u, 0x158ED8u, 0x158EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158EE0u;
label_158ee0:
    // 0x158ee0: 0xa24201f8  sb          $v0, 0x1F8($s2)
    ctx->pc = 0x158ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 504), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x158ee4u;
}
