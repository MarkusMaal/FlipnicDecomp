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

// Function: entry_0013d390
// Address: 0x13d390 - 0x13d398
void entry_0013d390_0x13d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d390_0x13d390");
#endif

    ctx->pc = 0x13d390u;

    // 0x13d390: 0xc04fccc  jal         func_13F330
    ctx->pc = 0x13D390u;
    SET_GPR_U32(ctx, 31, 0x13D398u);
    ctx->pc = 0x13D394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D390u;
    // 0x13d394: 0x2604019c  addiu       $a0, $s0, 0x19C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 412));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F330u, 0x13D390u, 0x13D398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D398u;
}
