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

// Function: entry_0017f848
// Address: 0x17f848 - 0x17f86c
void entry_0017f848_0x17f848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f848_0x17f848");
#endif

    ctx->pc = 0x17f848u;

    // 0x17f848: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x17f848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x17f84c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17f84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x17f850: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17f850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17f854: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17f854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17f858: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x17f858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x17f85c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F85Cu;
    {
        const bool branch_taken_0x17f85c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F85Cu;
        // 0x17f860: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f85c) {
            ctx->pc = 0x17F86Cu;
            return;
        }
    }
    ctx->pc = 0x17F864u;
    // 0x17f864: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17F864u;
    {
        const bool branch_taken_0x17f864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F864u;
        // 0x17f868: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f864) {
            ctx->pc = 0x17F870u;
            return;
        }
    }
    ctx->pc = 0x17F86Cu;
}
