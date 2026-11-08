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

// Function: entry_001df820
// Address: 0x1df820 - 0x1df858
void entry_001df820_0x1df820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df820_0x1df820");
#endif

    ctx->pc = 0x1df820u;

    // 0x1df820: 0x11020071  beq         $t0, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1DF820u;
    {
        const bool branch_taken_0x1df820 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF820u;
        // 0x1df824: 0x29020801  slti        $v0, $t0, 0x801 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2049) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df820) {
            ctx->pc = 0x1DF9E8u;
            return;
        }
    }
    ctx->pc = 0x1DF828u;
    // 0x1df828: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DF828u;
    {
        const bool branch_taken_0x1df828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF828u;
        // 0x1df82c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df828) {
            ctx->pc = 0x1DF868u;
            return;
        }
    }
    ctx->pc = 0x1DF830u;
    // 0x1df830: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1df830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1df834: 0x1102003e  beq         $t0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1DF834u;
    {
        const bool branch_taken_0x1df834 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF834u;
        // 0x1df838: 0x29020201  slti        $v0, $t0, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)513) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df834) {
            ctx->pc = 0x1DF930u;
            return;
        }
    }
    ctx->pc = 0x1DF83Cu;
    // 0x1df83c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF83Cu;
    {
        const bool branch_taken_0x1df83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF83Cu;
        // 0x1df840: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df83c) {
            ctx->pc = 0x1DF858u;
            return;
        }
    }
    ctx->pc = 0x1DF844u;
    // 0x1df844: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1df844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1df848: 0x11020033  beq         $t0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1DF848u;
    {
        const bool branch_taken_0x1df848 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF848u;
        // 0x1df84c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df848) {
            ctx->pc = 0x1DF918u;
            return;
        }
    }
    ctx->pc = 0x1DF850u;
    // 0x1df850: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1DF850u;
    {
        const bool branch_taken_0x1df850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF850u;
        // 0x1df854: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df850) {
            ctx->pc = 0x1DFA44u;
            return;
        }
    }
    ctx->pc = 0x1DF858u;
}
