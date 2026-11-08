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

// Function: entry_00148654
// Address: 0x148654 - 0x14867c
void entry_00148654_0x148654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148654_0x148654");
#endif

    ctx->pc = 0x148654u;

    // 0x148654: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x148654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x148658: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x148658u;
    {
        const bool branch_taken_0x148658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x148658) {
            ctx->pc = 0x14868Cu;
            return;
        }
    }
    ctx->pc = 0x148660u;
    // 0x148660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x148660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148664: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x148664u;
    {
        const bool branch_taken_0x148664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x148664) {
            ctx->pc = 0x148684u;
            return;
        }
    }
    ctx->pc = 0x14866Cu;
    // 0x14866c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14866Cu;
    {
        const bool branch_taken_0x14866c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14866c) {
            ctx->pc = 0x14867Cu;
            return;
        }
    }
    ctx->pc = 0x148674u;
    // 0x148674: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x148674u;
    {
        const bool branch_taken_0x148674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148674u;
        // 0x148678: 0x24021388  addiu       $v0, $zero, 0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148674) {
            ctx->pc = 0x1486A8u;
            return;
        }
    }
    ctx->pc = 0x14867Cu;
}
