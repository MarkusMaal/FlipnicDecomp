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

// Function: entry_0015d040
// Address: 0x15d040 - 0x15d05c
void entry_0015d040_0x15d040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d040_0x15d040");
#endif

    switch (ctx->pc) {
        case 0x15d04cu: goto label_15d04c;
        default: break;
    }

    ctx->pc = 0x15d040u;

label_15d040:
    // 0x15d040: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x15d040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x15d044: 0xc041cc0  jal         func_107300
    ctx->pc = 0x15D044u;
    SET_GPR_U32(ctx, 31, 0x15D04Cu);
    ctx->pc = 0x15D048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D044u;
    // 0x15d048: 0x8c442cd8  lw          $a0, 0x2CD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107300u, 0x15D044u, 0x15D04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D04Cu;
label_15d04c:
    // 0x15d04c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15d04cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15d050: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x15d050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15d054: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15D054u;
    {
        const bool branch_taken_0x15d054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D054u;
        // 0x15d058: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d054) {
            ctx->pc = 0x15D040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d040;
        }
    }
    ctx->pc = 0x15D05Cu;
}
