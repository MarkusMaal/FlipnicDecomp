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

// Function: entry_001674bc
// Address: 0x1674bc - 0x1674c4
void entry_001674bc_0x1674bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001674bc_0x1674bc");
#endif

    ctx->pc = 0x1674bcu;

    // 0x1674bc: 0xc054810  jal         func_152040
    ctx->pc = 0x1674BCu;
    SET_GPR_U32(ctx, 31, 0x1674C4u);
    ctx->pc = 0x1674C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1674BCu;
    // 0x1674c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152040u, 0x1674BCu, 0x1674C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674C4u;
}
