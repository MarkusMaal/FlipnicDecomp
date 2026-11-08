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

// Function: entry_0012f0c0
// Address: 0x12f0c0 - 0x12f0e4
void entry_0012f0c0_0x12f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f0c0_0x12f0c0");
#endif

    ctx->pc = 0x12f0c0u;

    // 0x12f0c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12f0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12f0c4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x12f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x12f0c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12f0cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12f0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12f0d0: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x12f0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x12f0d4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F0D4u;
    {
        const bool branch_taken_0x12f0d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0D4u;
        // 0x12f0d8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0d4) {
            ctx->pc = 0x12F0E4u;
            return;
        }
    }
    ctx->pc = 0x12F0DCu;
    // 0x12f0dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12F0DCu;
    {
        const bool branch_taken_0x12f0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0DCu;
        // 0x12f0e0: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0dc) {
            ctx->pc = 0x12F0E8u;
            return;
        }
    }
    ctx->pc = 0x12F0E4u;
}
