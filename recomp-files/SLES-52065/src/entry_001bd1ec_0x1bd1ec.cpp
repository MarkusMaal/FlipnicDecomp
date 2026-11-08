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

// Function: entry_001bd1ec
// Address: 0x1bd1ec - 0x1bd1f8
void entry_001bd1ec_0x1bd1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd1ec_0x1bd1ec");
#endif

    ctx->pc = 0x1bd1ecu;

    // 0x1bd1ec: 0x0  nop
    ctx->pc = 0x1bd1ecu;
    // NOP
    // 0x1bd1f0: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1BD1F0u;
    SET_GPR_U32(ctx, 31, 0x1BD1F8u);
    ctx->pc = 0x1BD1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1F0u;
    // 0x1bd1f4: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1BD1F0u, 0x1BD1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1F8u;
}
