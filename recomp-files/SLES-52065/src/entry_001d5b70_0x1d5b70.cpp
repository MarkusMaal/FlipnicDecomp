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

// Function: entry_001d5b70
// Address: 0x1d5b70 - 0x1d5b90
void entry_001d5b70_0x1d5b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5b70_0x1d5b70");
#endif

    switch (ctx->pc) {
        case 0x1d5b80u: goto label_1d5b80;
        default: break;
    }

    ctx->pc = 0x1d5b70u;

label_1d5b70:
    // 0x1d5b70: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d5b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d5b74: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d5b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d5b78: 0xc0773e0  jal         func_1DCF80
    ctx->pc = 0x1D5B78u;
    SET_GPR_U32(ctx, 31, 0x1D5B80u);
    ctx->pc = 0x1D5B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5B78u;
    // 0x1d5b7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF80u, 0x1D5B78u, 0x1D5B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B80u;
label_1d5b80:
    // 0x1d5b80: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5B80u;
    {
        const bool branch_taken_0x1d5b80 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d5b80) {
            ctx->pc = 0x1D5B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5B80u;
            // 0x1d5b84: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5b70;
        }
    }
    ctx->pc = 0x1D5B88u;
    // 0x1d5b88: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x1D5B88u;
    {
        const bool branch_taken_0x1d5b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b88) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5B90u;
}
