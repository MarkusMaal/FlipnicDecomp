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

// Function: SCEI_Presents
// Address: 0x1b64a0 - 0x1b64c0
void SCEI_Presents_0x1b64a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SCEI_Presents_0x1b64a0");
#endif

    switch (ctx->pc) {
        case 0x1b64a8u: goto label_1b64a8;
        case 0x1b64b8u: goto label_1b64b8;
        default: break;
    }

    ctx->pc = 0x1b64a0u;

    // 0x1b64a0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B64A0u;
    SET_GPR_U32(ctx, 31, 0x1B64A8u);
    ctx->pc = 0x1B64A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B64A0u;
    // 0x1b64a4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B64A0u, 0x1B64A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64A8u;
label_1b64a8:
    // 0x1b64a8: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x1B64A8u;
    {
        const bool branch_taken_0x1b64a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64a8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B64B0u;
    // 0x1b64b0: 0xc06f0c4  jal         func_1BC310
    ctx->pc = 0x1B64B0u;
    SET_GPR_U32(ctx, 31, 0x1B64B8u);
    ctx->pc = 0x1B64B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B64B0u;
    // 0x1b64b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC310u, 0x1B64B0u, 0x1B64B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64B8u;
label_1b64b8:
    // 0x1b64b8: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x1B64B8u;
    {
        const bool branch_taken_0x1b64b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64b8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B64C0u;
}
