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

// Function: entry_0016b52c
// Address: 0x16b52c - 0x16b54c
void entry_0016b52c_0x16b52c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b52c_0x16b52c");
#endif

    ctx->pc = 0x16b52cu;

    // 0x16b52c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x16b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x16b530: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16b530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b534: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16B534u;
    {
        const bool branch_taken_0x16b534 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x16b534) {
            ctx->pc = 0x16B550u;
            return;
        }
    }
    ctx->pc = 0x16B53Cu;
    // 0x16b53c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B53Cu;
    {
        const bool branch_taken_0x16b53c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b53c) {
            ctx->pc = 0x16B54Cu;
            return;
        }
    }
    ctx->pc = 0x16B544u;
    // 0x16b544: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16B544u;
    {
        const bool branch_taken_0x16b544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B544u;
        // 0x16b548: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b544) {
            ctx->pc = 0x16B550u;
            return;
        }
    }
    ctx->pc = 0x16B54Cu;
}
