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

// Function: entry_001cd6cc
// Address: 0x1cd6cc - 0x1cd6e4
void entry_001cd6cc_0x1cd6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd6cc_0x1cd6cc");
#endif

    switch (ctx->pc) {
        case 0x1cd6e0u: goto label_1cd6e0;
        default: break;
    }

    ctx->pc = 0x1cd6ccu;

    // 0x1cd6cc: 0x0  nop
    ctx->pc = 0x1cd6ccu;
    // NOP
    // 0x1cd6d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cd6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd6d4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cd6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cd6d8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD6D8u;
    SET_GPR_U32(ctx, 31, 0x1CD6E0u);
    ctx->pc = 0x1CD6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD6D8u;
    // 0x1cd6dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD6D8u, 0x1CD6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6E0u;
label_1cd6e0:
    // 0x1cd6e0: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1cd6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1cd6e4u;
}
