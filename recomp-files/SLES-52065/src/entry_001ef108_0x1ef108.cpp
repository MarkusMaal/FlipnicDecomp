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

// Function: entry_001ef108
// Address: 0x1ef108 - 0x1ef130
void entry_001ef108_0x1ef108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef108_0x1ef108");
#endif

    ctx->pc = 0x1ef108u;

    // 0x1ef108: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1ef108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ef10c: 0x18600080  blez        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x1EF10Cu;
    {
        const bool branch_taken_0x1ef10c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1EF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF10Cu;
        // 0x1ef110: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef10c) {
            ctx->pc = 0x1EF310u;
            return;
        }
    }
    ctx->pc = 0x1EF114u;
    // 0x1ef114: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x1ef114u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1ef118: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ef118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef11c: 0x1860007c  blez        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x1EF11Cu;
    {
        const bool branch_taken_0x1ef11c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1EF120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF11Cu;
        // 0x1ef120: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef11c) {
            ctx->pc = 0x1EF310u;
            return;
        }
    }
    ctx->pc = 0x1EF124u;
    // 0x1ef124: 0x24e90050  addiu       $t1, $a3, 0x50
    ctx->pc = 0x1ef124u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x1ef128: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x1ef128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1ef12c: 0x0  nop
    ctx->pc = 0x1ef12cu;
    // NOP
    ctx->pc = 0x1ef130u;
}
