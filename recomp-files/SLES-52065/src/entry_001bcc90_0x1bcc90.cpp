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

// Function: entry_001bcc90
// Address: 0x1bcc90 - 0x1bcc98
void entry_001bcc90_0x1bcc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcc90_0x1bcc90");
#endif

    ctx->pc = 0x1bcc90u;

    // 0x1bcc90: 0xc06f500  jal         func_1BD400
    ctx->pc = 0x1BCC90u;
    SET_GPR_U32(ctx, 31, 0x1BCC98u);
    ctx->pc = 0x1BCC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC90u;
    // 0x1bcc94: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD400u, 0x1BCC90u, 0x1BCC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC98u;
}
