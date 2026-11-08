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

// Function: entry_001182b4
// Address: 0x1182b4 - 0x1182d4
void entry_001182b4_0x1182b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001182b4_0x1182b4");
#endif

    switch (ctx->pc) {
        case 0x1182c0u: goto label_1182c0;
        case 0x1182ccu: goto label_1182cc;
        default: break;
    }

    ctx->pc = 0x1182b4u;

    // 0x1182b4: 0x0  nop
    ctx->pc = 0x1182b4u;
    // NOP
    // 0x1182b8: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1182B8u;
    SET_GPR_U32(ctx, 31, 0x1182C0u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1182B8u, 0x1182C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182C0u;
label_1182c0:
    // 0x1182c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1182c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182c4: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1182C4u;
    SET_GPR_U32(ctx, 31, 0x1182CCu);
    ctx->pc = 0x1182C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1182C4u;
    // 0x1182c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x1182C4u, 0x1182CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182CCu;
label_1182cc:
    // 0x1182cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1182CCu;
    {
        const bool branch_taken_0x1182cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1182cc) {
            ctx->pc = 0x11830Cu;
            return;
        }
    }
    ctx->pc = 0x1182D4u;
}
