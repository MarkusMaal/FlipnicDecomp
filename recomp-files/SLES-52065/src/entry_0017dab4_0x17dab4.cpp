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

// Function: entry_0017dab4
// Address: 0x17dab4 - 0x17dad8
void entry_0017dab4_0x17dab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dab4_0x17dab4");
#endif

    switch (ctx->pc) {
        case 0x17dabcu: goto label_17dabc;
        case 0x17dad4u: goto label_17dad4;
        default: break;
    }

    ctx->pc = 0x17dab4u;

    // 0x17dab4: 0xc04c0e0  jal         func_130380
    ctx->pc = 0x17DAB4u;
    SET_GPR_U32(ctx, 31, 0x17DABCu);
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x17DAB4u, 0x17DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DABCu;
label_17dabc:
    // 0x17dabc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x17dabcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x17dac0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x17dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17dac4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DAC4u;
    {
        const bool branch_taken_0x17dac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAC4u;
        // 0x17dac8: 0x27a40250  addiu       $a0, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dac4) {
            ctx->pc = 0x17DAD8u;
            return;
        }
    }
    ctx->pc = 0x17DACCu;
    // 0x17dacc: 0xc04c0e0  jal         func_130380
    ctx->pc = 0x17DACCu;
    SET_GPR_U32(ctx, 31, 0x17DAD4u);
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x17DACCu, 0x17DAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DAD4u;
label_17dad4:
    // 0x17dad4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x17dad4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x17dad8u;
}
