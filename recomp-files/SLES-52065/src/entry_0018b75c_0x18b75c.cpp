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

// Function: entry_0018b75c
// Address: 0x18b75c - 0x18b77c
void entry_0018b75c_0x18b75c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b75c_0x18b75c");
#endif

    switch (ctx->pc) {
        case 0x18b76cu: goto label_18b76c;
        default: break;
    }

    ctx->pc = 0x18b75cu;

label_18b75c:
    // 0x18b75c: 0x8e222724  lw          $v0, 0x2724($s1)
    ctx->pc = 0x18b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18b760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b764: 0xc0531f4  jal         func_14C7D0
    ctx->pc = 0x18B764u;
    SET_GPR_U32(ctx, 31, 0x18B76Cu);
    ctx->pc = 0x18B768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B764u;
    // 0x18b768: 0x562821  addu        $a1, $v0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C7D0u, 0x18B764u, 0x18B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B76Cu;
label_18b76c:
    // 0x18b76c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x18b76cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x18b770: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x18b770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x18b774: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18B774u;
    {
        const bool branch_taken_0x18b774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B774u;
        // 0x18b778: 0x26d600a8  addiu       $s6, $s6, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b774) {
            ctx->pc = 0x18B75Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b75c;
        }
    }
    ctx->pc = 0x18B77Cu;
}
