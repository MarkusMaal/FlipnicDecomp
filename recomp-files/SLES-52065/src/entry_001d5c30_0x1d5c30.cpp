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

// Function: entry_001d5c30
// Address: 0x1d5c30 - 0x1d5c50
void entry_001d5c30_0x1d5c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5c30_0x1d5c30");
#endif

    switch (ctx->pc) {
        case 0x1d5c40u: goto label_1d5c40;
        default: break;
    }

    ctx->pc = 0x1d5c30u;

label_1d5c30:
    // 0x1d5c30: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d5c30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d5c34: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d5c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d5c38: 0xc07744e  jal         func_1DD138
    ctx->pc = 0x1D5C38u;
    SET_GPR_U32(ctx, 31, 0x1D5C40u);
    ctx->pc = 0x1D5C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C38u;
    // 0x1d5c3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD138u, 0x1D5C38u, 0x1D5C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C40u;
label_1d5c40:
    // 0x1d5c40: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5C40u;
    {
        const bool branch_taken_0x1d5c40 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d5c40) {
            ctx->pc = 0x1D5C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5C40u;
            // 0x1d5c44: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5c30;
        }
    }
    ctx->pc = 0x1D5C48u;
    // 0x1d5c48: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x1D5C48u;
    {
        const bool branch_taken_0x1d5c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c48) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5C50u;
}
