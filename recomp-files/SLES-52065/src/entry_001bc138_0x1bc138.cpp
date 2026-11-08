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

// Function: entry_001bc138
// Address: 0x1bc138 - 0x1bc15c
void entry_001bc138_0x1bc138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc138_0x1bc138");
#endif

    ctx->pc = 0x1bc138u;

    // 0x1bc138: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1bc138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1bc13c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bc13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1bc140: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1bc140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bc144: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc148: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1bc148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1bc14c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC14Cu;
    {
        const bool branch_taken_0x1bc14c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC14Cu;
        // 0x1bc150: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc14c) {
            ctx->pc = 0x1BC15Cu;
            return;
        }
    }
    ctx->pc = 0x1BC154u;
    // 0x1bc154: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC154u;
    {
        const bool branch_taken_0x1bc154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC154u;
        // 0x1bc158: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc154) {
            ctx->pc = 0x1BC160u;
            return;
        }
    }
    ctx->pc = 0x1BC15Cu;
}
