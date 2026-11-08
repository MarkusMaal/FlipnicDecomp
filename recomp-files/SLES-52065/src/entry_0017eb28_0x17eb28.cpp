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

// Function: entry_0017eb28
// Address: 0x17eb28 - 0x17eb30
void entry_0017eb28_0x17eb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eb28_0x17eb28");
#endif

    ctx->pc = 0x17eb28u;

    // 0x17eb28: 0xc048974  jal         func_1225D0
    ctx->pc = 0x17EB28u;
    SET_GPR_U32(ctx, 31, 0x17EB30u);
    ctx->pc = 0x17EB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB28u;
    // 0x17eb2c: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x17EB28u, 0x17EB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB30u;
}
