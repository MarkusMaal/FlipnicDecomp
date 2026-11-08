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

// Function: entry_00128334
// Address: 0x128334 - 0x128340
void entry_00128334_0x128334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128334_0x128334");
#endif

    ctx->pc = 0x128334u;

    // 0x128334: 0x0  nop
    ctx->pc = 0x128334u;
    // NOP
    // 0x128338: 0xc0401a4  jal         func_100690
    ctx->pc = 0x128338u;
    SET_GPR_U32(ctx, 31, 0x128340u);
    ctx->pc = 0x12833Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128338u;
    // 0x12833c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x128338u, 0x128340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128340u;
}
