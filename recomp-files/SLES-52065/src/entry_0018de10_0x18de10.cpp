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

// Function: entry_0018de10
// Address: 0x18de10 - 0x18de18
void entry_0018de10_0x18de10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018de10_0x18de10");
#endif

    ctx->pc = 0x18de10u;

    // 0x18de10: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18DE10u;
    SET_GPR_U32(ctx, 31, 0x18DE18u);
    ctx->pc = 0x18DE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE10u;
    // 0x18de14: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18DE10u, 0x18DE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE18u;
}
