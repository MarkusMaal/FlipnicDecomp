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

// Function: entry_001734dc
// Address: 0x1734dc - 0x1734e4
void entry_001734dc_0x1734dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001734dc_0x1734dc");
#endif

    ctx->pc = 0x1734dcu;

    // 0x1734dc: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1734DCu;
    SET_GPR_U32(ctx, 31, 0x1734E4u);
    ctx->pc = 0x1734E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1734DCu;
    // 0x1734e0: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1734DCu, 0x1734E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1734E4u;
}
