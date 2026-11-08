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

// Function: entry_00119fc0
// Address: 0x119fc0 - 0x119fdc
void entry_00119fc0_0x119fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119fc0_0x119fc0");
#endif

    switch (ctx->pc) {
        case 0x119fc8u: goto label_119fc8;
        default: break;
    }

    ctx->pc = 0x119fc0u;

label_119fc0:
    // 0x119fc0: 0xc07ce72  jal         func_1F39C8
    ctx->pc = 0x119FC0u;
    SET_GPR_U32(ctx, 31, 0x119FC8u);
    ctx->pc = 0x119FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119FC0u;
    // 0x119fc4: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F39C8u, 0x119FC0u, 0x119FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FC8u;
label_119fc8:
    // 0x119fc8: 0x0  nop
    ctx->pc = 0x119fc8u;
    // NOP
    // 0x119fcc: 0x0  nop
    ctx->pc = 0x119fccu;
    // NOP
    // 0x119fd0: 0x0  nop
    ctx->pc = 0x119fd0u;
    // NOP
    // 0x119fd4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x119FD4u;
    {
        const bool branch_taken_0x119fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119fd4) {
            ctx->pc = 0x119FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119fc0;
        }
    }
    ctx->pc = 0x119FDCu;
}
