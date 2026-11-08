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

// Function: entry_00164644
// Address: 0x164644 - 0x164660
void entry_00164644_0x164644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164644_0x164644");
#endif

    ctx->pc = 0x164644u;

    // 0x164644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164648: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x164648u;
    {
        const bool branch_taken_0x164648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164648) {
            ctx->pc = 0x164714u;
            return;
        }
    }
    ctx->pc = 0x164650u;
    // 0x164650: 0x10910003  beq         $a0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x164650u;
    {
        const bool branch_taken_0x164650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x164654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164650u;
        // 0x164654: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164650) {
            ctx->pc = 0x164660u;
            return;
        }
    }
    ctx->pc = 0x164658u;
    // 0x164658: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x164658u;
    {
        const bool branch_taken_0x164658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164658) {
            ctx->pc = 0x164900u;
            return;
        }
    }
    ctx->pc = 0x164660u;
}
