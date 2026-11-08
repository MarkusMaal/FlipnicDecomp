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

// Function: entry_001a1ba8
// Address: 0x1a1ba8 - 0x1a1bd0
void entry_001a1ba8_0x1a1ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1ba8_0x1a1ba8");
#endif

    switch (ctx->pc) {
        case 0x1a1bc0u: goto label_1a1bc0;
        default: break;
    }

    ctx->pc = 0x1a1ba8u;

    // 0x1a1ba8: 0x8e840670  lw          $a0, 0x670($s4)
    ctx->pc = 0x1a1ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x1a1bac: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1BACu;
    {
        const bool branch_taken_0x1a1bac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1bac) {
            ctx->pc = 0x1A1BD0u;
            return;
        }
    }
    ctx->pc = 0x1A1BB4u;
    // 0x1a1bb4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a1bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a1bb8: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1A1BB8u;
    SET_GPR_U32(ctx, 31, 0x1A1BC0u);
    ctx->pc = 0x1A1BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1BB8u;
    // 0x1a1bbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A1BB8u, 0x1A1BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BC0u;
label_1a1bc0:
    // 0x1a1bc0: 0x8e840670  lw          $a0, 0x670($s4)
    ctx->pc = 0x1a1bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x1a1bc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a1bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1bc8: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1A1BC8u;
    SET_GPR_U32(ctx, 31, 0x1A1BD0u);
    ctx->pc = 0x1A1BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1BC8u;
    // 0x1a1bcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A1BC8u, 0x1A1BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BD0u;
}
