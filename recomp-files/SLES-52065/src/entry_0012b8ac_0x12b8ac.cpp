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

// Function: entry_0012b8ac
// Address: 0x12b8ac - 0x12b8c4
void entry_0012b8ac_0x12b8ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b8ac_0x12b8ac");
#endif

    switch (ctx->pc) {
        case 0x12b8c0u: goto label_12b8c0;
        default: break;
    }

    ctx->pc = 0x12b8acu;

    // 0x12b8ac: 0x8f83847c  lw          $v1, -0x7B84($gp)
    ctx->pc = 0x12b8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935676)));
    // 0x12b8b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B8B0u;
    {
        const bool branch_taken_0x12b8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8B0u;
        // 0x12b8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8b0) {
            ctx->pc = 0x12B8C4u;
            return;
        }
    }
    ctx->pc = 0x12B8B8u;
    // 0x12b8b8: 0xc04ae40  jal         func_12B900
    ctx->pc = 0x12B8B8u;
    SET_GPR_U32(ctx, 31, 0x12B8C0u);
    ctx->pc = 0x12B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B900u, 0x12B8B8u, 0x12B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B8C0u;
label_12b8c0:
    // 0x12b8c0: 0xaf80847c  sw          $zero, -0x7B84($gp)
    ctx->pc = 0x12b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935676), GPR_U32(ctx, 0));
    ctx->pc = 0x12b8c4u;
}
