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

// Function: entry_0011e498
// Address: 0x11e498 - 0x11e4ac
void entry_0011e498_0x11e498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e498_0x11e498");
#endif

    switch (ctx->pc) {
        case 0x11e4a4u: goto label_11e4a4;
        default: break;
    }

    ctx->pc = 0x11e498u;

    // 0x11e498: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e49c: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x11E49Cu;
    SET_GPR_U32(ctx, 31, 0x11E4A4u);
    ctx->pc = 0x11E4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E49Cu;
    // 0x11e4a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x11E49Cu, 0x11E4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4A4u;
label_11e4a4:
    // 0x11e4a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11E4A4u;
    {
        const bool branch_taken_0x11e4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e4a4) {
            ctx->pc = 0x11E4F0u;
            return;
        }
    }
    ctx->pc = 0x11E4ACu;
}
