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

// Function: entry_00115cb0
// Address: 0x115cb0 - 0x115cec
void entry_00115cb0_0x115cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115cb0_0x115cb0");
#endif

    ctx->pc = 0x115cb0u;

    // 0x115cb0: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x115cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x115cb4: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x115cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x115cb8: 0x246302e0  addiu       $v1, $v1, 0x2E0
    ctx->pc = 0x115cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x115cbc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x115cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x115cc0: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x115cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x115cc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x115cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x115cc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x115cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x115ccc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x115CCCu;
    {
        const bool branch_taken_0x115ccc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CCCu;
        // 0x115cd0: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ccc) {
            ctx->pc = 0x115CF0u;
            return;
        }
    }
    ctx->pc = 0x115CD4u;
    // 0x115cd4: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x115CD4u;
    {
        const bool branch_taken_0x115cd4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CD4u;
        // 0x115cd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cd4) {
            ctx->pc = 0x115CF0u;
            return;
        }
    }
    ctx->pc = 0x115CDCu;
    // 0x115cdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x115cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115ce0: 0x16a20002  bne         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x115CE0u;
    {
        const bool branch_taken_0x115ce0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x115CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CE0u;
        // 0x115ce4: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ce0) {
            ctx->pc = 0x115CECu;
            return;
        }
    }
    ctx->pc = 0x115CE8u;
    // 0x115ce8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x115ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x115cecu;
}
