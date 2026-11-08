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

// Function: entry_0016e098
// Address: 0x16e098 - 0x16e0a0
void entry_0016e098_0x16e098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e098_0x16e098");
#endif

    ctx->pc = 0x16e098u;

    // 0x16e098: 0xc05ba10  jal         func_16E840
    ctx->pc = 0x16E098u;
    SET_GPR_U32(ctx, 31, 0x16E0A0u);
    ctx->pc = 0x16E09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E098u;
    // 0x16e09c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E840u, 0x16E098u, 0x16E0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E0A0u;
}
