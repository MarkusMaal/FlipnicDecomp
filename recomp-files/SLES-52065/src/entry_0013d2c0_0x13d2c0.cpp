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

// Function: entry_0013d2c0
// Address: 0x13d2c0 - 0x13d2c8
void entry_0013d2c0_0x13d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d2c0_0x13d2c0");
#endif

    ctx->pc = 0x13d2c0u;

    // 0x13d2c0: 0xc050c68  jal         func_1431A0
    ctx->pc = 0x13D2C0u;
    SET_GPR_U32(ctx, 31, 0x13D2C8u);
    ctx->pc = 0x13D2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D2C0u;
    // 0x13d2c4: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1431A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1431A0u, 0x13D2C0u, 0x13D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D2C8u;
}
