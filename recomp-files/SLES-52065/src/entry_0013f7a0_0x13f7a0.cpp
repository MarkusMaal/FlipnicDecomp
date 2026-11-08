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

// Function: entry_0013f7a0
// Address: 0x13f7a0 - 0x13f7ac
void entry_0013f7a0_0x13f7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f7a0_0x13f7a0");
#endif

    ctx->pc = 0x13f7a0u;

    // 0x13f7a0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13f7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13f7a4: 0xc04fdf8  jal         func_13F7E0
    ctx->pc = 0x13F7A4u;
    SET_GPR_U32(ctx, 31, 0x13F7ACu);
    ctx->pc = 0x13F7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F7A4u;
    // 0x13f7a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F7E0u, 0x13F7A4u, 0x13F7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F7ACu;
}
