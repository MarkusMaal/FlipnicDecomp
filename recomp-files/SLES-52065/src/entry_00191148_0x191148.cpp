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

// Function: entry_00191148
// Address: 0x191148 - 0x191160
void entry_00191148_0x191148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191148_0x191148");
#endif

    ctx->pc = 0x191148u;

    // 0x191148: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x191148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x19114c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191150: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191150u;
    {
        const bool branch_taken_0x191150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x191150) {
            ctx->pc = 0x191160u;
            return;
        }
    }
    ctx->pc = 0x191158u;
    // 0x191158: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x191158u;
    {
        const bool branch_taken_0x191158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191158u;
        // 0x19115c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191158) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x191160u;
}
