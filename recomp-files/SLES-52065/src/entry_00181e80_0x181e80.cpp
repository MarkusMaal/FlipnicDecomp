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

// Function: entry_00181e80
// Address: 0x181e80 - 0x181e88
void entry_00181e80_0x181e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181e80_0x181e80");
#endif

    ctx->pc = 0x181e80u;

    // 0x181e80: 0xc0401a4  jal         func_100690
    ctx->pc = 0x181E80u;
    SET_GPR_U32(ctx, 31, 0x181E88u);
    ctx->pc = 0x181E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181E80u;
    // 0x181e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x181E80u, 0x181E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E88u;
}
