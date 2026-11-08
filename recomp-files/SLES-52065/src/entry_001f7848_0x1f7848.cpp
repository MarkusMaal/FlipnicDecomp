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

// Function: entry_001f7848
// Address: 0x1f7848 - 0x1f7850
void entry_001f7848_0x1f7848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7848_0x1f7848");
#endif

    ctx->pc = 0x1f7848u;

    // 0x1f7848: 0xc07db24  jal         func_1F6C90
    ctx->pc = 0x1F7848u;
    SET_GPR_U32(ctx, 31, 0x1F7850u);
    ctx->pc = 0x1F784Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7848u;
    // 0x1f784c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6C90u, 0x1F7848u, 0x1F7850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7850u;
}
