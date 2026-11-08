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

// Function: caseD_fffffffb
// Address: 0x191b2c - 0x191b64
void caseD_fffffffb_0x191b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_fffffffb_0x191b2c");
#endif

    ctx->pc = 0x191b2cu;

    // 0x191b2c: 0x0  nop
    ctx->pc = 0x191b2cu;
    // NOP
    // 0x191b30: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x191b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x191b34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x191b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x191b38: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x191B38u;
    {
        const bool branch_taken_0x191b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x191B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B38u;
        // 0x191b3c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b38) {
            ctx->pc = 0x191BD4u;
            return;
        }
    }
    ctx->pc = 0x191B40u;
    // 0x191b40: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x191B40u;
    {
        const bool branch_taken_0x191b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x191b40) {
            ctx->pc = 0x191B64u;
            return;
        }
    }
    ctx->pc = 0x191B48u;
    // 0x191b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191b4c: 0x108201f5  beq         $a0, $v0, . + 4 + (0x1F5 << 2)
    ctx->pc = 0x191B4Cu;
    {
        const bool branch_taken_0x191b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x191b4c) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191B54u;
    // 0x191b54: 0x108001f3  beqz        $a0, . + 4 + (0x1F3 << 2)
    ctx->pc = 0x191B54u;
    {
        const bool branch_taken_0x191b54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x191b54) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191B5Cu;
    // 0x191b5c: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x191B5Cu;
    {
        const bool branch_taken_0x191b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191b5c) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191B64u;
}
