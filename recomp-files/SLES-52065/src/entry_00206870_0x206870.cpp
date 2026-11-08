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

// Function: entry_00206870
// Address: 0x206870 - 0x206878
void entry_00206870_0x206870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206870_0x206870");
#endif

    ctx->pc = 0x206870u;

    // 0x206870: 0xc081a24  jal         func_206890
    ctx->pc = 0x206870u;
    SET_GPR_U32(ctx, 31, 0x206878u);
    ctx->pc = 0x206874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206870u;
    // 0x206874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206890u, 0x206870u, 0x206878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206878u;
}
