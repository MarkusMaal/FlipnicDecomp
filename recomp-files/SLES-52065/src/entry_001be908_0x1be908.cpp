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

// Function: entry_001be908
// Address: 0x1be908 - 0x1be92c
void entry_001be908_0x1be908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be908_0x1be908");
#endif

    ctx->pc = 0x1be908u;

    // 0x1be908: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1be908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1be90c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1be90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1be910: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1be910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1be914: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1be914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1be918: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1be918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1be91c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE91Cu;
    {
        const bool branch_taken_0x1be91c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE91Cu;
        // 0x1be920: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be91c) {
            ctx->pc = 0x1BE92Cu;
            return;
        }
    }
    ctx->pc = 0x1BE924u;
    // 0x1be924: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE924u;
    {
        const bool branch_taken_0x1be924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE924u;
        // 0x1be928: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be924) {
            ctx->pc = 0x1BE930u;
            return;
        }
    }
    ctx->pc = 0x1BE92Cu;
}
