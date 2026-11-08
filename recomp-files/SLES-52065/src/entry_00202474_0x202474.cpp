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

// Function: entry_00202474
// Address: 0x202474 - 0x20248c
void entry_00202474_0x202474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202474_0x202474");
#endif

    ctx->pc = 0x202474u;

    // 0x202474: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x202474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x202478: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x202478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x20247c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x20247Cu;
    {
        const bool branch_taken_0x20247c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20247Cu;
        // 0x202480: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20247c) {
            ctx->pc = 0x202440u;
            return;
        }
    }
    ctx->pc = 0x202484u;
    // 0x202484: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x202484u;
    {
        const bool branch_taken_0x202484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202484u;
        // 0x202488: 0x28420009  slti        $v0, $v0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202484) {
            ctx->pc = 0x202498u;
            return;
        }
    }
    ctx->pc = 0x20248Cu;
}
