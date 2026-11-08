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

// Function: entry_00200d94
// Address: 0x200d94 - 0x200da0
void entry_00200d94_0x200d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200d94_0x200d94");
#endif

    ctx->pc = 0x200d94u;

    // 0x200d94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d98: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x200D98u;
    SET_GPR_U32(ctx, 31, 0x200DA0u);
    ctx->pc = 0x200D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D98u;
    // 0x200d9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x200D98u, 0x200DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200DA0u;
}
