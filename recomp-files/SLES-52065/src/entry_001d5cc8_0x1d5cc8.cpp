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

// Function: entry_001d5cc8
// Address: 0x1d5cc8 - 0x1d5ce8
void entry_001d5cc8_0x1d5cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5cc8_0x1d5cc8");
#endif

    switch (ctx->pc) {
        case 0x1d5cd8u: goto label_1d5cd8;
        default: break;
    }

    ctx->pc = 0x1d5cc8u;

label_1d5cc8:
    // 0x1d5cc8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d5cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d5ccc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d5cccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d5cd0: 0xc0774f8  jal         func_1DD3E0
    ctx->pc = 0x1D5CD0u;
    SET_GPR_U32(ctx, 31, 0x1D5CD8u);
    ctx->pc = 0x1D5CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CD0u;
    // 0x1d5cd4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3E0u, 0x1D5CD0u, 0x1D5CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CD8u;
label_1d5cd8:
    // 0x1d5cd8: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5CD8u;
    {
        const bool branch_taken_0x1d5cd8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d5cd8) {
            ctx->pc = 0x1D5CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5CD8u;
            // 0x1d5cdc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5cc8;
        }
    }
    ctx->pc = 0x1D5CE0u;
    // 0x1d5ce0: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x1D5CE0u;
    {
        const bool branch_taken_0x1d5ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ce0) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5CE8u;
}
