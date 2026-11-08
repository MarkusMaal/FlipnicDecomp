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

// Function: entry_001e5d70
// Address: 0x1e5d70 - 0x1e5da0
void entry_001e5d70_0x1e5d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5d70_0x1e5d70");
#endif

    ctx->pc = 0x1e5d70u;

    // 0x1e5d70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e5d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5d74: 0x8f908754  lw          $s0, -0x78AC($gp)
    ctx->pc = 0x1e5d74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936404)));
    // 0x1e5d78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e5d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e5d7c: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1e5d7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e5d80: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5D80u;
    {
        const bool branch_taken_0x1e5d80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D80u;
        // 0x1e5d84: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d80) {
            ctx->pc = 0x1E5DA0u;
            return;
        }
    }
    ctx->pc = 0x1E5D88u;
    // 0x1e5d88: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e5d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e5d8c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e5d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e5d90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5d94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5d98: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E5D98u;
    {
        const bool branch_taken_0x1e5d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d98) {
            ctx->pc = 0x1E5DFCu;
            return;
        }
    }
    ctx->pc = 0x1E5DA0u;
}
