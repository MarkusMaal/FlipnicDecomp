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

// Function: entry_001a0074
// Address: 0x1a0074 - 0x1a0088
void entry_001a0074_0x1a0074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0074_0x1a0074");
#endif

    ctx->pc = 0x1a0074u;

    // 0x1a0074: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a0074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0078: 0x8d280034  lw          $t0, 0x34($t1)
    ctx->pc = 0x1a0078u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x1a007c: 0x8d290038  lw          $t1, 0x38($t1)
    ctx->pc = 0x1a007cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x1a0080: 0xc064d84  jal         func_193610
    ctx->pc = 0x1A0080u;
    SET_GPR_U32(ctx, 31, 0x1A0088u);
    ctx->pc = 0x1A0084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0080u;
    // 0x1a0084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193610u, 0x1A0080u, 0x1A0088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0088u;
}
