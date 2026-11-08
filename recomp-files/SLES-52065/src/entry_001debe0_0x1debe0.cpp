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

// Function: entry_001debe0
// Address: 0x1debe0 - 0x1dec0c
void entry_001debe0_0x1debe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001debe0_0x1debe0");
#endif

    switch (ctx->pc) {
        case 0x1dec04u: goto label_1dec04;
        default: break;
    }

    ctx->pc = 0x1debe0u;

    // 0x1debe0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1debe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1debe4: 0x245072f8  addiu       $s0, $v0, 0x72F8
    ctx->pc = 0x1debe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29432));
    // 0x1debe8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1debe8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3872F8u));
    // 0x1debec: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1debecu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3872FCu));
    // 0x1debf0: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x1debf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1debf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEBF4u;
    {
        const bool branch_taken_0x1debf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBF4u;
        // 0x1debf8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1debf4) {
            ctx->pc = 0x1DEC0Cu;
            return;
        }
    }
    ctx->pc = 0x1DEBFCu;
    // 0x1debfc: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1DEBFCu;
    SET_GPR_U32(ctx, 31, 0x1DEC04u);
    ctx->pc = 0x1DEC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEBFCu;
    // 0x1dec00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1DEBFCu, 0x1DEC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEC04u;
label_1dec04:
    // 0x1dec04: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1dec04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1dec08: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1dec08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1dec0cu;
}
