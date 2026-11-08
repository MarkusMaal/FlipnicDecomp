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

// Function: entry_001bae74
// Address: 0x1bae74 - 0x1bae90
void entry_001bae74_0x1bae74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bae74_0x1bae74");
#endif

    ctx->pc = 0x1bae74u;

    // 0x1bae74: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x1bae74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1bae78: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x1bae78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1bae7c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAE7Cu;
    {
        const bool branch_taken_0x1bae7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bae7c) {
            ctx->pc = 0x1BAE90u;
            return;
        }
    }
    ctx->pc = 0x1BAE84u;
    // 0x1bae84: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1bae84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BAE88u;
    {
        const bool branch_taken_0x1bae88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE88u;
        // 0x1bae8c: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae88) {
            ctx->pc = 0x1BAE98u;
            return;
        }
    }
    ctx->pc = 0x1BAE90u;
}
