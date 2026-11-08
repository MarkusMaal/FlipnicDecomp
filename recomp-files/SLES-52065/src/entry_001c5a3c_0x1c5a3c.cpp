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

// Function: entry_001c5a3c
// Address: 0x1c5a3c - 0x1c5a48
void entry_001c5a3c_0x1c5a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5a3c_0x1c5a3c");
#endif

    ctx->pc = 0x1c5a3cu;

    // 0x1c5a3c: 0x0  nop
    ctx->pc = 0x1c5a3cu;
    // NOP
    // 0x1c5a40: 0xc06f8f4  jal         func_1BE3D0
    ctx->pc = 0x1C5A40u;
    SET_GPR_U32(ctx, 31, 0x1C5A48u);
    ctx->pc = 0x1C5A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A40u;
    // 0x1c5a44: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3D0u, 0x1C5A40u, 0x1C5A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A48u;
}
