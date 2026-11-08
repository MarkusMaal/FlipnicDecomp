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

// Function: entry_00111634
// Address: 0x111634 - 0x111644
void entry_00111634_0x111634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111634_0x111634");
#endif

    ctx->pc = 0x111634u;

    // 0x111634: 0x0  nop
    ctx->pc = 0x111634u;
    // NOP
    // 0x111638: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x111638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11163c: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x11163Cu;
    SET_GPR_U32(ctx, 31, 0x111644u);
    ctx->pc = 0x111640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11163Cu;
    // 0x111640: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x11163Cu, 0x111644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111644u;
}
