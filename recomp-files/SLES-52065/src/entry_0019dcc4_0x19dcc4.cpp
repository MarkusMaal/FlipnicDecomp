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

// Function: entry_0019dcc4
// Address: 0x19dcc4 - 0x19dccc
void entry_0019dcc4_0x19dcc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dcc4_0x19dcc4");
#endif

    ctx->pc = 0x19dcc4u;

    // 0x19dcc4: 0xc063de0  jal         func_18F780
    ctx->pc = 0x19DCC4u;
    SET_GPR_U32(ctx, 31, 0x19DCCCu);
    ctx->pc = 0x19DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DCC4u;
    // 0x19dcc8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x19DCC4u, 0x19DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DCCCu;
}
