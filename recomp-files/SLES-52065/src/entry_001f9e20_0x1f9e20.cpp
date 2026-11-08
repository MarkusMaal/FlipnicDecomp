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

// Function: entry_001f9e20
// Address: 0x1f9e20 - 0x1f9e50
void entry_001f9e20_0x1f9e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9e20_0x1f9e20");
#endif

    ctx->pc = 0x1f9e20u;

    // 0x1f9e20: 0x14a20043  bne         $a1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1F9E20u;
    {
        const bool branch_taken_0x1f9e20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E20u;
        // 0x1f9e24: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e20) {
            ctx->pc = 0x1F9F30u;
            return;
        }
    }
    ctx->pc = 0x1F9E28u;
    // 0x1f9e28: 0x14850023  bne         $a0, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F9E28u;
    {
        const bool branch_taken_0x1f9e28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F9E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E28u;
        // 0x1f9e2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e28) {
            ctx->pc = 0x1F9EB8u;
            return;
        }
    }
    ctx->pc = 0x1F9E30u;
    // 0x1f9e30: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F9E30u;
    {
        const bool branch_taken_0x1f9e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E30u;
        // 0x1f9e34: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e30) {
            ctx->pc = 0x1F9E7Cu;
            return;
        }
    }
    ctx->pc = 0x1F9E38u;
    // 0x1f9e38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9E38u;
    {
        const bool branch_taken_0x1f9e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E38u;
        // 0x1f9e3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e38) {
            ctx->pc = 0x1F9E50u;
            return;
        }
    }
    ctx->pc = 0x1F9E40u;
    // 0x1f9e40: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9E40u;
    {
        const bool branch_taken_0x1f9e40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E40u;
        // 0x1f9e44: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e40) {
            ctx->pc = 0x1F9E68u;
            return;
        }
    }
    ctx->pc = 0x1F9E48u;
    // 0x1f9e48: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1F9E48u;
    {
        const bool branch_taken_0x1f9e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9e48) {
            ctx->pc = 0x1F9F30u;
            return;
        }
    }
    ctx->pc = 0x1F9E50u;
}
