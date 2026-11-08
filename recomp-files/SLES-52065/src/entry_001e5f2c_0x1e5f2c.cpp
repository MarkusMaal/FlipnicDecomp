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

// Function: entry_001e5f2c
// Address: 0x1e5f2c - 0x1e5f5c
void entry_001e5f2c_0x1e5f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5f2c_0x1e5f2c");
#endif

    ctx->pc = 0x1e5f2cu;

    // 0x1e5f2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e5f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5f30: 0x8f908788  lw          $s0, -0x7878($gp)
    ctx->pc = 0x1e5f30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936456)));
    // 0x1e5f34: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e5f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e5f38: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1e5f38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e5f3c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5F3Cu;
    {
        const bool branch_taken_0x1e5f3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F3Cu;
        // 0x1e5f40: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f3c) {
            ctx->pc = 0x1E5F5Cu;
            return;
        }
    }
    ctx->pc = 0x1E5F44u;
    // 0x1e5f44: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e5f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e5f48: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e5f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e5f4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5f50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e5f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5f54: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E5F54u;
    {
        const bool branch_taken_0x1e5f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5f54) {
            ctx->pc = 0x1E5FC4u;
            return;
        }
    }
    ctx->pc = 0x1E5F5Cu;
}
