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

// Function: entry_001a1b3c
// Address: 0x1a1b3c - 0x1a1b64
void entry_001a1b3c_0x1a1b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1b3c_0x1a1b3c");
#endif

    switch (ctx->pc) {
        case 0x1a1b50u: goto label_1a1b50;
        case 0x1a1b58u: goto label_1a1b58;
        default: break;
    }

    ctx->pc = 0x1a1b3cu;

    // 0x1a1b3c: 0x8e860678  lw          $a2, 0x678($s4)
    ctx->pc = 0x1a1b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
    // 0x1a1b40: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a1b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1a1b44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a1b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b48: 0xc064a88  jal         func_192A20
    ctx->pc = 0x1A1B48u;
    SET_GPR_U32(ctx, 31, 0x1A1B50u);
    ctx->pc = 0x1A1B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B48u;
    // 0x1a1b4c: 0x24a50408  addiu       $a1, $a1, 0x408 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x1A1B48u, 0x1A1B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B50u;
label_1a1b50:
    // 0x1a1b50: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A1B50u;
    SET_GPR_U32(ctx, 31, 0x1A1B58u);
    ctx->pc = 0x1A1B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B50u;
    // 0x1a1b54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A1B50u, 0x1A1B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B58u;
label_1a1b58:
    // 0x1a1b58: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1A1B58u;
    {
        const bool branch_taken_0x1a1b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b58) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
    ctx->pc = 0x1A1B60u;
    // 0x1a1b60: 0x268408c0  addiu       $a0, $s4, 0x8C0
    ctx->pc = 0x1a1b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2240));
    ctx->pc = 0x1a1b64u;
}
