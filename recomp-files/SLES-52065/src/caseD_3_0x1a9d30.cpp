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

// Function: caseD_3
// Address: 0x1a9d30 - 0x1a9d44
void caseD_3_0x1a9d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1a9d30");
#endif

    switch (ctx->pc) {
        case 0x1a9d3cu: goto label_1a9d3c;
        default: break;
    }

    ctx->pc = 0x1a9d30u;

    // 0x1a9d30: 0x8f8583a0  lw          $a1, -0x7C60($gp)
    ctx->pc = 0x1a9d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x1a9d34: 0xc054660  jal         func_151980
    ctx->pc = 0x1A9D34u;
    SET_GPR_U32(ctx, 31, 0x1A9D3Cu);
    ctx->pc = 0x1A9D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9D34u;
    // 0x1a9d38: 0x26a40930  addiu       $a0, $s5, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1A9D34u, 0x1A9D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D3Cu;
label_1a9d3c:
    // 0x1a9d3c: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A9D3Cu;
    SET_GPR_U32(ctx, 31, 0x1A9D44u);
    ctx->pc = 0x1A9D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9D3Cu;
    // 0x1a9d40: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A9D3Cu, 0x1A9D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D44u;
}
