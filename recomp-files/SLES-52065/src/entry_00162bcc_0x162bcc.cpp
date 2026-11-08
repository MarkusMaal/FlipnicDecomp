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

// Function: entry_00162bcc
// Address: 0x162bcc - 0x162bd4
void entry_00162bcc_0x162bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162bcc_0x162bcc");
#endif

    ctx->pc = 0x162bccu;

    // 0x162bcc: 0xc042118  jal         func_108460
    ctx->pc = 0x162BCCu;
    SET_GPR_U32(ctx, 31, 0x162BD4u);
    ctx->pc = 0x162BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162BCCu;
    // 0x162bd0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x162BCCu, 0x162BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162BD4u;
}
