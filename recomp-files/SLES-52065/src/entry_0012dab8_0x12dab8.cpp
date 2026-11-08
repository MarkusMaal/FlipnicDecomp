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

// Function: entry_0012dab8
// Address: 0x12dab8 - 0x12dad4
void entry_0012dab8_0x12dab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dab8_0x12dab8");
#endif

    switch (ctx->pc) {
        case 0x12dac4u: goto label_12dac4;
        default: break;
    }

    ctx->pc = 0x12dab8u;

label_12dab8:
    // 0x12dab8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x12dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x12dabc: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x12DABCu;
    SET_GPR_U32(ctx, 31, 0x12DAC4u);
    ctx->pc = 0x12DAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DABCu;
    // 0x12dac0: 0x248430b0  addiu       $a0, $a0, 0x30B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x12DABCu, 0x12DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAC4u;
label_12dac4:
    // 0x12dac4: 0x0  nop
    ctx->pc = 0x12dac4u;
    // NOP
    // 0x12dac8: 0x0  nop
    ctx->pc = 0x12dac8u;
    // NOP
    // 0x12dacc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12DACCu;
    {
        const bool branch_taken_0x12dacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dacc) {
            ctx->pc = 0x12DAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12dab8;
        }
    }
    ctx->pc = 0x12DAD4u;
}
