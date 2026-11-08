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

// Function: entry_001e5e4c
// Address: 0x1e5e4c - 0x1e5e7c
void entry_001e5e4c_0x1e5e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5e4c_0x1e5e4c");
#endif

    ctx->pc = 0x1e5e4cu;

    // 0x1e5e4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e5e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5e50: 0x8f908784  lw          $s0, -0x787C($gp)
    ctx->pc = 0x1e5e50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1e5e54: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e5e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e5e58: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1e5e58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e5e5c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5E5Cu;
    {
        const bool branch_taken_0x1e5e5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E5Cu;
        // 0x1e5e60: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5e5c) {
            ctx->pc = 0x1E5E7Cu;
            return;
        }
    }
    ctx->pc = 0x1E5E64u;
    // 0x1e5e64: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e5e68: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e5e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e5e6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5e70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e5e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5e74: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E5E74u;
    {
        const bool branch_taken_0x1e5e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5e74) {
            ctx->pc = 0x1E5EE4u;
            return;
        }
    }
    ctx->pc = 0x1E5E7Cu;
}
