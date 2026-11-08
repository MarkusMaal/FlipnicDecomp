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

// Function: entry_001b8fa0
// Address: 0x1b8fa0 - 0x1b8fb0
void entry_001b8fa0_0x1b8fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8fa0_0x1b8fa0");
#endif

    switch (ctx->pc) {
        case 0x1b8fa8u: goto label_1b8fa8;
        default: break;
    }

    ctx->pc = 0x1b8fa0u;

    // 0x1b8fa0: 0xc07d3a0  jal         func_1F4E80
    ctx->pc = 0x1B8FA0u;
    SET_GPR_U32(ctx, 31, 0x1B8FA8u);
    ctx->pc = 0x1B8FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8FA0u;
    // 0x1b8fa4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E80u, 0x1B8FA0u, 0x1B8FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FA8u;
label_1b8fa8:
    // 0x1b8fa8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b8fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8fac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b8facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b8fb0u;
}
