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

// Function: entry_0019c4c8
// Address: 0x19c4c8 - 0x19c4e0
void entry_0019c4c8_0x19c4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c4c8_0x19c4c8");
#endif

    switch (ctx->pc) {
        case 0x19c4d0u: goto label_19c4d0;
        case 0x19c4d8u: goto label_19c4d8;
        default: break;
    }

    ctx->pc = 0x19c4c8u;

    // 0x19c4c8: 0xc067188  jal         func_19C620
    ctx->pc = 0x19C4C8u;
    SET_GPR_U32(ctx, 31, 0x19C4D0u);
    ctx->pc = 0x19C620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C620u, 0x19C4C8u, 0x19C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C4D0u;
label_19c4d0:
    // 0x19c4d0: 0xc0671cc  jal         func_19C730
    ctx->pc = 0x19C4D0u;
    SET_GPR_U32(ctx, 31, 0x19C4D8u);
    ctx->pc = 0x19C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4D0u;
    // 0x19c4d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C730u, 0x19C4D0u, 0x19C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C4D8u;
label_19c4d8:
    // 0x19c4d8: 0xc067310  jal         func_19CC40
    ctx->pc = 0x19C4D8u;
    SET_GPR_U32(ctx, 31, 0x19C4E0u);
    ctx->pc = 0x19C4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4D8u;
    // 0x19c4dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CC40u, 0x19C4D8u, 0x19C4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C4E0u;
}
