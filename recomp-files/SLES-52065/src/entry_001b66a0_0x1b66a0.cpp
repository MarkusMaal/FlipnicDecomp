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

// Function: entry_001b66a0
// Address: 0x1b66a0 - 0x1b66c0
void entry_001b66a0_0x1b66a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b66a0_0x1b66a0");
#endif

    switch (ctx->pc) {
        case 0x1b66a8u: goto label_1b66a8;
        case 0x1b66b8u: goto label_1b66b8;
        default: break;
    }

    ctx->pc = 0x1b66a0u;

    // 0x1b66a0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B66A0u;
    SET_GPR_U32(ctx, 31, 0x1B66A8u);
    ctx->pc = 0x1B66A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66A0u;
    // 0x1b66a4: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B66A0u, 0x1B66A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66A8u;
label_1b66a8:
    // 0x1b66a8: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1B66A8u;
    {
        const bool branch_taken_0x1b66a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b66a8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B66B0u;
    // 0x1b66b0: 0xc072544  jal         func_1C9510
    ctx->pc = 0x1B66B0u;
    SET_GPR_U32(ctx, 31, 0x1B66B8u);
    ctx->pc = 0x1B66B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66B0u;
    // 0x1b66b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9510u, 0x1B66B0u, 0x1B66B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66B8u;
label_1b66b8:
    // 0x1b66b8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1B66B8u;
    {
        const bool branch_taken_0x1b66b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b66b8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B66C0u;
}
