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

// Function: entry_001b6f68
// Address: 0x1b6f68 - 0x1b6f8c
void entry_001b6f68_0x1b6f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6f68_0x1b6f68");
#endif

    ctx->pc = 0x1b6f68u;

    // 0x1b6f68: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b6f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1b6f6c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b6f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b6f70: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b6f74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b6f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b6f78: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1b6f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1b6f7c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6F7Cu;
    {
        const bool branch_taken_0x1b6f7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F7Cu;
        // 0x1b6f80: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f7c) {
            ctx->pc = 0x1B6F8Cu;
            return;
        }
    }
    ctx->pc = 0x1B6F84u;
    // 0x1b6f84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6F84u;
    {
        const bool branch_taken_0x1b6f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F84u;
        // 0x1b6f88: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f84) {
            ctx->pc = 0x1B6F90u;
            return;
        }
    }
    ctx->pc = 0x1B6F8Cu;
}
