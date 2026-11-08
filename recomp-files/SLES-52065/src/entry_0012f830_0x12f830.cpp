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

// Function: entry_0012f830
// Address: 0x12f830 - 0x12f860
void entry_0012f830_0x12f830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f830_0x12f830");
#endif

    ctx->pc = 0x12f830u;

    // 0x12f830: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x12f830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12f834: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12f834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12f838: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F838u;
    {
        const bool branch_taken_0x12f838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x12f838) {
            ctx->pc = 0x12F860u;
            return;
        }
    }
    ctx->pc = 0x12F840u;
    // 0x12f840: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x12f840u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x12f844: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x12f844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x12f848: 0x24423e74  addiu       $v0, $v0, 0x3E74
    ctx->pc = 0x12f848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15988));
    // 0x12f84c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12f84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12f850: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x12f850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12f854: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x12f854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x12f858: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12F858u;
    {
        const bool branch_taken_0x12f858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F858u;
        // 0x12f85c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f858) {
            ctx->pc = 0x12F870u;
            return;
        }
    }
    ctx->pc = 0x12F860u;
}
