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

// Function: entry_0010d08c
// Address: 0x10d08c - 0x10d0ac
void entry_0010d08c_0x10d08c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d08c_0x10d08c");
#endif

    ctx->pc = 0x10d08cu;

    // 0x10d08c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10d090: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10d090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10d094: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10d094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x10d098: 0x8c420650  lw          $v0, 0x650($v0)
    ctx->pc = 0x10d098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
    // 0x10d09c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D09Cu;
    {
        const bool branch_taken_0x10d09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d09c) {
            ctx->pc = 0x10D0ACu;
            return;
        }
    }
    ctx->pc = 0x10D0A4u;
    // 0x10d0a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10D0A4u;
    {
        const bool branch_taken_0x10d0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D0A4u;
        // 0x10d0a8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d0a4) {
            ctx->pc = 0x10D0C4u;
            return;
        }
    }
    ctx->pc = 0x10D0ACu;
}
