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

// Function: entry_00187a08
// Address: 0x187a08 - 0x187a2c
void entry_00187a08_0x187a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187a08_0x187a08");
#endif

    ctx->pc = 0x187a08u;

    // 0x187a08: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x187a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x187a0c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x187a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x187a10: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x187a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x187a14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x187a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x187a18: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x187a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x187a1c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x187A1Cu;
    {
        const bool branch_taken_0x187a1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A1Cu;
        // 0x187a20: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a1c) {
            ctx->pc = 0x187A2Cu;
            return;
        }
    }
    ctx->pc = 0x187A24u;
    // 0x187a24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x187A24u;
    {
        const bool branch_taken_0x187a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A24u;
        // 0x187a28: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a24) {
            ctx->pc = 0x187A30u;
            return;
        }
    }
    ctx->pc = 0x187A2Cu;
}
