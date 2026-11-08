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

// Function: Boot_TitleScreen
// Address: 0x1b64e0 - 0x1b6500
void Boot_TitleScreen_0x1b64e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Boot_TitleScreen_0x1b64e0");
#endif

    switch (ctx->pc) {
        case 0x1b64e8u: goto label_1b64e8;
        case 0x1b64f8u: goto label_1b64f8;
        default: break;
    }

    ctx->pc = 0x1b64e0u;

    // 0x1b64e0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B64E0u;
    SET_GPR_U32(ctx, 31, 0x1B64E8u);
    ctx->pc = 0x1B64E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B64E0u;
    // 0x1b64e4: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B64E0u, 0x1B64E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64E8u;
label_1b64e8:
    // 0x1b64e8: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x1B64E8u;
    {
        const bool branch_taken_0x1b64e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64e8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B64F0u;
    // 0x1b64f0: 0xc06f144  jal         func_1BC510
    ctx->pc = 0x1B64F0u;
    SET_GPR_U32(ctx, 31, 0x1B64F8u);
    ctx->pc = 0x1B64F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B64F0u;
    // 0x1b64f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC510u, 0x1B64F0u, 0x1B64F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64F8u;
label_1b64f8:
    // 0x1b64f8: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x1B64F8u;
    {
        const bool branch_taken_0x1b64f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64f8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6500u;
}
