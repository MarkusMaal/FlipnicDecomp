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

// Function: entry_002026f8
// Address: 0x2026f8 - 0x202704
void entry_002026f8_0x2026f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002026f8_0x2026f8");
#endif

    switch (ctx->pc) {
        case 0x202700u: goto label_202700;
        default: break;
    }

    ctx->pc = 0x2026f8u;

    // 0x2026f8: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x2026F8u;
    SET_GPR_U32(ctx, 31, 0x202700u);
    ctx->pc = 0x2026FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026F8u;
    // 0x2026fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x2026F8u, 0x202700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202700u;
label_202700:
    // 0x202700: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x202700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202704u;
}
