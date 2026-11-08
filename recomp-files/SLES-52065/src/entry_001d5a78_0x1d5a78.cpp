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

// Function: entry_001d5a78
// Address: 0x1d5a78 - 0x1d5aa0
void entry_001d5a78_0x1d5a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5a78_0x1d5a78");
#endif

    ctx->pc = 0x1d5a78u;

    // 0x1d5a78: 0x120200a5  beq         $s0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x1D5A78u;
    {
        const bool branch_taken_0x1d5a78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A78u;
        // 0x1d5a7c: 0x2a020021  slti        $v0, $s0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a78) {
            ctx->pc = 0x1D5D10u;
            return;
        }
    }
    ctx->pc = 0x1D5A80u;
    // 0x1d5a80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5A80u;
    {
        const bool branch_taken_0x1d5a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A80u;
        // 0x1d5a84: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a80) {
            ctx->pc = 0x1D5AA0u;
            return;
        }
    }
    ctx->pc = 0x1D5A88u;
    // 0x1d5a88: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1d5a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d5a8c: 0x12020096  beq         $s0, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x1D5A8Cu;
    {
        const bool branch_taken_0x1d5a8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A8Cu;
        // 0x1d5a90: 0x240209e4  addiu       $v0, $zero, 0x9E4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a8c) {
            ctx->pc = 0x1D5CE8u;
            return;
        }
    }
    ctx->pc = 0x1D5A94u;
    // 0x1d5a94: 0x100001b0  b           . + 4 + (0x1B0 << 2)
    ctx->pc = 0x1D5A94u;
    {
        const bool branch_taken_0x1d5a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5a94) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5A9Cu;
    // 0x1d5a9c: 0x0  nop
    ctx->pc = 0x1d5a9cu;
    // NOP
    ctx->pc = 0x1d5aa0u;
}
