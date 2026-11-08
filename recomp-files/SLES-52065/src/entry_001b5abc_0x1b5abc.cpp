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

// Function: entry_001b5abc
// Address: 0x1b5abc - 0x1b5ac4
void entry_001b5abc_0x1b5abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5abc_0x1b5abc");
#endif

    ctx->pc = 0x1b5abcu;

    // 0x1b5abc: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1B5ABCu;
    SET_GPR_U32(ctx, 31, 0x1B5AC4u);
    ctx->pc = 0x1B5AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5ABCu;
    // 0x1b5ac0: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1B5ABCu, 0x1B5AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5AC4u;
}
