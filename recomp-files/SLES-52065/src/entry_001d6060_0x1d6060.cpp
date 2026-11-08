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

// Function: entry_001d6060
// Address: 0x1d6060 - 0x1d6080
void entry_001d6060_0x1d6060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6060_0x1d6060");
#endif

    switch (ctx->pc) {
        case 0x1d6070u: goto label_1d6070;
        default: break;
    }

    ctx->pc = 0x1d6060u;

label_1d6060:
    // 0x1d6060: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d6060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d6064: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d6064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d6068: 0xc07747a  jal         func_1DD1E8
    ctx->pc = 0x1D6068u;
    SET_GPR_U32(ctx, 31, 0x1D6070u);
    ctx->pc = 0x1D606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6068u;
    // 0x1d606c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1E8u, 0x1D6068u, 0x1D6070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6070u;
label_1d6070:
    // 0x1d6070: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D6070u;
    {
        const bool branch_taken_0x1d6070 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d6070) {
            ctx->pc = 0x1D6074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6070u;
            // 0x1d6074: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6060;
        }
    }
    ctx->pc = 0x1D6078u;
    // 0x1d6078: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1D6078u;
    {
        const bool branch_taken_0x1d6078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6078) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D6080u;
}
