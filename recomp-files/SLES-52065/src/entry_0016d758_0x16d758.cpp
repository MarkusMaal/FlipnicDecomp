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

// Function: entry_0016d758
// Address: 0x16d758 - 0x16d77c
void entry_0016d758_0x16d758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d758_0x16d758");
#endif

    ctx->pc = 0x16d758u;

    // 0x16d758: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x16D758u;
    {
        const bool branch_taken_0x16d758 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d758) {
            ctx->pc = 0x16D7A0u;
            return;
        }
    }
    ctx->pc = 0x16D760u;
    // 0x16d760: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x16d760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x16d764: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16d764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d768: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D768u;
    {
        const bool branch_taken_0x16d768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D768u;
        // 0x16d76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d768) {
            ctx->pc = 0x16D77Cu;
            return;
        }
    }
    ctx->pc = 0x16D770u;
    // 0x16d770: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d774: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16D774u;
    {
        const bool branch_taken_0x16d774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D774u;
        // 0x16d778: 0x2a010000  slti        $at, $s0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d774) {
            ctx->pc = 0x16D7A4u;
            return;
        }
    }
    ctx->pc = 0x16D77Cu;
}
