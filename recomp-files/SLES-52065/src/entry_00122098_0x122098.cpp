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

// Function: entry_00122098
// Address: 0x122098 - 0x1220a0
void entry_00122098_0x122098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122098_0x122098");
#endif

    ctx->pc = 0x122098u;

    // 0x122098: 0xc048974  jal         func_1225D0
    ctx->pc = 0x122098u;
    SET_GPR_U32(ctx, 31, 0x1220A0u);
    ctx->pc = 0x12209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122098u;
    // 0x12209c: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x122098u, 0x1220A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220A0u;
}
