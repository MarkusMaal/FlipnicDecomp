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

// Function: entry_0018d28c
// Address: 0x18d28c - 0x18d294
void entry_0018d28c_0x18d28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d28c_0x18d28c");
#endif

    ctx->pc = 0x18d28cu;

    // 0x18d28c: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18D28Cu;
    SET_GPR_U32(ctx, 31, 0x18D294u);
    ctx->pc = 0x18D290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D28Cu;
    // 0x18d290: 0xae400490  sw          $zero, 0x490($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18D28Cu, 0x18D294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D294u;
}
