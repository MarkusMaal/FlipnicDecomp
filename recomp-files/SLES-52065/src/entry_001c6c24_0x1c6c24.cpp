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

// Function: entry_001c6c24
// Address: 0x1c6c24 - 0x1c6c2c
void entry_001c6c24_0x1c6c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6c24_0x1c6c24");
#endif

    ctx->pc = 0x1c6c24u;

    // 0x1c6c24: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6C24u;
    SET_GPR_U32(ctx, 31, 0x1C6C2Cu);
    ctx->pc = 0x1C6C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C24u;
    // 0x1c6c28: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6C24u, 0x1C6C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C2Cu;
}
