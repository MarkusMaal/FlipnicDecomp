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

// Function: entry_0013d5c4
// Address: 0x13d5c4 - 0x13d5cc
void entry_0013d5c4_0x13d5c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d5c4_0x13d5c4");
#endif

    ctx->pc = 0x13d5c4u;

    // 0x13d5c4: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x13D5C4u;
    SET_GPR_U32(ctx, 31, 0x13D5CCu);
    ctx->pc = 0x13D5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D5C4u;
    // 0x13d5c8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x13D5C4u, 0x13D5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D5CCu;
}
