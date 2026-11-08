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

// Function: entry_001f93fc
// Address: 0x1f93fc - 0x1f9404
void entry_001f93fc_0x1f93fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f93fc_0x1f93fc");
#endif

    ctx->pc = 0x1f93fcu;

    // 0x1f93fc: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F93FCu;
    SET_GPR_U32(ctx, 31, 0x1F9404u);
    ctx->pc = 0x1F9400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F93FCu;
    // 0x1f9400: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F93FCu, 0x1F9404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9404u;
}
