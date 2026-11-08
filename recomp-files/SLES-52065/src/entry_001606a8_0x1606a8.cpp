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

// Function: entry_001606a8
// Address: 0x1606a8 - 0x1606b8
void entry_001606a8_0x1606a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001606a8_0x1606a8");
#endif

    ctx->pc = 0x1606a8u;

    // 0x1606a8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1606a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1606acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606b0: 0xc0583f0  jal         func_160FC0
    ctx->pc = 0x1606B0u;
    SET_GPR_U32(ctx, 31, 0x1606B8u);
    ctx->pc = 0x1606B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1606B0u;
    // 0x1606b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160FC0u, 0x1606B0u, 0x1606B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1606B8u;
}
