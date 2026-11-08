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

// Function: entry_0010f274
// Address: 0x10f274 - 0x10f27c
void entry_0010f274_0x10f274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f274_0x10f274");
#endif

    ctx->pc = 0x10f274u;

    // 0x10f274: 0xc042118  jal         func_108460
    ctx->pc = 0x10F274u;
    SET_GPR_U32(ctx, 31, 0x10F27Cu);
    ctx->pc = 0x10F278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F274u;
    // 0x10f278: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10F274u, 0x10F27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F27Cu;
}
