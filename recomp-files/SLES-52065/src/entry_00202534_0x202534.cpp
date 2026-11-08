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

// Function: entry_00202534
// Address: 0x202534 - 0x202558
void entry_00202534_0x202534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202534_0x202534");
#endif

    ctx->pc = 0x202534u;

    // 0x202534: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x202534u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x202538: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x202538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x20253c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x20253cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x202540: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x202540u;
    {
        const bool branch_taken_0x202540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x202544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202540u;
        // 0x202544: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202540) {
            ctx->pc = 0x202558u;
            return;
        }
    }
    ctx->pc = 0x202548u;
    // 0x202548: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x202548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x20254c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20254Cu;
    {
        const bool branch_taken_0x20254c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x202550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20254Cu;
        // 0x202550: 0x2482ffd0  addiu       $v0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20254c) {
            ctx->pc = 0x202564u;
            return;
        }
    }
    ctx->pc = 0x202554u;
    // 0x202554: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x202554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x202558u;
}
