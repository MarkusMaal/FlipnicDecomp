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

// Function: entry_001bd900
// Address: 0x1bd900 - 0x1bd90c
void entry_001bd900_0x1bd900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd900_0x1bd900");
#endif

    ctx->pc = 0x1bd900u;

    // 0x1bd900: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1bd900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bd904: 0xc06f650  jal         func_1BD940
    ctx->pc = 0x1BD904u;
    SET_GPR_U32(ctx, 31, 0x1BD90Cu);
    ctx->pc = 0x1BD908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD904u;
    // 0x1bd908: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD940u, 0x1BD904u, 0x1BD90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD90Cu;
}
