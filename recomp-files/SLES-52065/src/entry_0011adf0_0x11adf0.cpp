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

// Function: entry_0011adf0
// Address: 0x11adf0 - 0x11ae14
void entry_0011adf0_0x11adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011adf0_0x11adf0");
#endif

    switch (ctx->pc) {
        case 0x11ae08u: goto label_11ae08;
        default: break;
    }

    ctx->pc = 0x11adf0u;

    // 0x11adf0: 0x8e030538  lw          $v1, 0x538($s0)
    ctx->pc = 0x11adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
    // 0x11adf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11adf8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11ADF8u;
    {
        const bool branch_taken_0x11adf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADF8u;
        // 0x11adfc: 0x260503c4  addiu       $a1, $s0, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 964));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11adf8) {
            ctx->pc = 0x11AE14u;
            return;
        }
    }
    ctx->pc = 0x11AE00u;
    // 0x11ae00: 0xc046dc0  jal         func_11B700
    ctx->pc = 0x11AE00u;
    SET_GPR_U32(ctx, 31, 0x11AE08u);
    ctx->pc = 0x11AE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE00u;
    // 0x11ae04: 0x260500f4  addiu       $a1, $s0, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B700u, 0x11AE00u, 0x11AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE08u;
label_11ae08:
    // 0x11ae08: 0xa20003c4  sb          $zero, 0x3C4($s0)
    ctx->pc = 0x11ae08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 964), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ae0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11AE0Cu;
    {
        const bool branch_taken_0x11ae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE0Cu;
        // 0x11ae10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae0c) {
            ctx->pc = 0x11AE2Cu;
            return;
        }
    }
    ctx->pc = 0x11AE14u;
}
