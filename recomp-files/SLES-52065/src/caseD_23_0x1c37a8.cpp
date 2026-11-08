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

// Function: caseD_23
// Address: 0x1c37a8 - 0x1c37d4
void caseD_23_0x1c37a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_23_0x1c37a8");
#endif

    switch (ctx->pc) {
        case 0x1c37b0u: goto label_1c37b0;
        default: break;
    }

    ctx->pc = 0x1c37a8u;

    // 0x1c37a8: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C37A8u;
    SET_GPR_U32(ctx, 31, 0x1C37B0u);
    ctx->pc = 0x1C37ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C37A8u;
    // 0x1c37ac: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C37A8u, 0x1C37B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C37B0u;
label_1c37b0:
    // 0x1c37b0: 0x14400315  bnez        $v0, . + 4 + (0x315 << 2)
    ctx->pc = 0x1C37B0u;
    {
        const bool branch_taken_0x1c37b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C37B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37B0u;
        // 0x1c37b4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37b0) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C37B8u;
    // 0x1c37b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c37bc: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x1c37bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x1c37c0: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x1c37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c37c4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C37C4u;
    {
        const bool branch_taken_0x1c37c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C37C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37C4u;
        // 0x1c37c8: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37c4) {
            ctx->pc = 0x1C37D4u;
            return;
        }
    }
    ctx->pc = 0x1C37CCu;
    // 0x1c37cc: 0x1000030e  b           . + 4 + (0x30E << 2)
    ctx->pc = 0x1C37CCu;
    {
        const bool branch_taken_0x1c37cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37CCu;
        // 0x1c37d0: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37cc) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C37D4u;
}
