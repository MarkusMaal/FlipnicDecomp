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

// Function: entry_001c31dc
// Address: 0x1c31dc - 0x1c31e4
void entry_001c31dc_0x1c31dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c31dc_0x1c31dc");
#endif

    ctx->pc = 0x1c31dcu;

    // 0x1c31dc: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1C31DCu;
    SET_GPR_U32(ctx, 31, 0x1C31E4u);
    ctx->pc = 0x1C31E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31DCu;
    // 0x1c31e0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1C31DCu, 0x1C31E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31E4u;
}
