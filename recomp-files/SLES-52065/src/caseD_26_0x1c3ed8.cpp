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

// Function: caseD_26
// Address: 0x1c3ed8 - 0x1c3f04
void caseD_26_0x1c3ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_26_0x1c3ed8");
#endif

    switch (ctx->pc) {
        case 0x1c3ee0u: goto label_1c3ee0;
        default: break;
    }

    ctx->pc = 0x1c3ed8u;

    // 0x1c3ed8: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C3ED8u;
    SET_GPR_U32(ctx, 31, 0x1C3EE0u);
    ctx->pc = 0x1C3EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3ED8u;
    // 0x1c3edc: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C3ED8u, 0x1C3EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3EE0u;
label_1c3ee0:
    // 0x1c3ee0: 0x14400149  bnez        $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x1C3EE0u;
    {
        const bool branch_taken_0x1c3ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3ee0) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3EE8u;
    // 0x1c3ee8: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x1c3ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c3eec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c3eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3ef0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3EF0u;
    {
        const bool branch_taken_0x1c3ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EF0u;
        // 0x1c3ef4: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ef0) {
            ctx->pc = 0x1C3F04u;
            return;
        }
    }
    ctx->pc = 0x1C3EF8u;
    // 0x1c3ef8: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1c3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1c3efc: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x1C3EFCu;
    {
        const bool branch_taken_0x1c3efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EFCu;
        // 0x1c3f00: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3efc) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3F04u;
}
