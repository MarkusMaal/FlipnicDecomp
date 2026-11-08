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

// Function: entry_00174724
// Address: 0x174724 - 0x174730
void entry_00174724_0x174724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174724_0x174724");
#endif

    ctx->pc = 0x174724u;

    // 0x174724: 0x0  nop
    ctx->pc = 0x174724u;
    // NOP
    // 0x174728: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174728u;
    SET_GPR_U32(ctx, 31, 0x174730u);
    ctx->pc = 0x17472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174728u;
    // 0x17472c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174728u, 0x174730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174730u;
}
