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

// Function: entry_001d5bd8
// Address: 0x1d5bd8 - 0x1d5bf8
void entry_001d5bd8_0x1d5bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5bd8_0x1d5bd8");
#endif

    switch (ctx->pc) {
        case 0x1d5be8u: goto label_1d5be8;
        default: break;
    }

    ctx->pc = 0x1d5bd8u;

label_1d5bd8:
    // 0x1d5bd8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d5bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d5bdc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d5bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d5be0: 0xc0773f6  jal         func_1DCFD8
    ctx->pc = 0x1D5BE0u;
    SET_GPR_U32(ctx, 31, 0x1D5BE8u);
    ctx->pc = 0x1D5BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5BE0u;
    // 0x1d5be4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCFD8u, 0x1D5BE0u, 0x1D5BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5BE8u;
label_1d5be8:
    // 0x1d5be8: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5BE8u;
    {
        const bool branch_taken_0x1d5be8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d5be8) {
            ctx->pc = 0x1D5BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5BE8u;
            // 0x1d5bec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5bd8;
        }
    }
    ctx->pc = 0x1D5BF0u;
    // 0x1d5bf0: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x1D5BF0u;
    {
        const bool branch_taken_0x1d5bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5bf0) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5BF8u;
}
