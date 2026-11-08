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

// Function: entry_0011760c
// Address: 0x11760c - 0x117614
void entry_0011760c_0x11760c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011760c_0x11760c");
#endif

    ctx->pc = 0x11760cu;

    // 0x11760c: 0xc0828ce  jal         func_20A338
    ctx->pc = 0x11760Cu;
    SET_GPR_U32(ctx, 31, 0x117614u);
    ctx->pc = 0x117610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11760Cu;
    // 0x117610: 0x2484d8f0  addiu       $a0, $a0, -0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A338u, 0x11760Cu, 0x117614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117614u;
}
