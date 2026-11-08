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

// Function: entry_0010f65c
// Address: 0x10f65c - 0x10f664
void entry_0010f65c_0x10f65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f65c_0x10f65c");
#endif

    ctx->pc = 0x10f65cu;

    // 0x10f65c: 0xc043d28  jal         func_10F4A0
    ctx->pc = 0x10F65Cu;
    SET_GPR_U32(ctx, 31, 0x10F664u);
    ctx->pc = 0x10F660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F65Cu;
    // 0x10f660: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F4A0u, 0x10F65Cu, 0x10F664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F664u;
}
