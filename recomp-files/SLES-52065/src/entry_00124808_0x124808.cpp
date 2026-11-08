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

// Function: entry_00124808
// Address: 0x124808 - 0x124830
void entry_00124808_0x124808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124808_0x124808");
#endif

    switch (ctx->pc) {
        case 0x124814u: goto label_124814;
        default: break;
    }

    ctx->pc = 0x124808u;

label_124808:
    // 0x124808: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x124808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x12480c: 0xc048148  jal         func_120520
    ctx->pc = 0x12480Cu;
    SET_GPR_U32(ctx, 31, 0x124814u);
    ctx->pc = 0x124810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12480Cu;
    // 0x124810: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x12480Cu, 0x124814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124814u;
label_124814:
    // 0x124814: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x124814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x124818: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x124818u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12481c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x12481cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x124820: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x124820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x124824: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x124824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x124828: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x124828u;
    {
        const bool branch_taken_0x124828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124828u;
        // 0x12482c: 0x26730090  addiu       $s3, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124828) {
            ctx->pc = 0x124808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124808;
        }
    }
    ctx->pc = 0x124830u;
}
