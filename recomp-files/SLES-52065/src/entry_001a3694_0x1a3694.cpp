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

// Function: entry_001a3694
// Address: 0x1a3694 - 0x1a36c0
void entry_001a3694_0x1a3694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3694_0x1a3694");
#endif

    ctx->pc = 0x1a3694u;

    // 0x1a3694: 0x8e2a068c  lw          $t2, 0x68C($s1)
    ctx->pc = 0x1a3694u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
    // 0x1a3698: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a3698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a369c: 0xa082a  slt         $at, $zero, $t2
    ctx->pc = 0x1a369cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1a36a0: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x1A36A0u;
    {
        const bool branch_taken_0x1a36a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36A0u;
        // 0x1a36a4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36a0) {
            ctx->pc = 0x1A37D4u;
            return;
        }
    }
    ctx->pc = 0x1A36A8u;
    // 0x1a36a8: 0x29410009  slti        $at, $t2, 0x9
    ctx->pc = 0x1a36a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a36ac: 0x14200039  bnez        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x1A36ACu;
    {
        const bool branch_taken_0x1a36ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36ACu;
        // 0x1a36b0: 0x2548fff8  addiu       $t0, $t2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36ac) {
            ctx->pc = 0x1A3794u;
            return;
        }
    }
    ctx->pc = 0x1A36B4u;
    // 0x1a36b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a36b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36b8: 0x8f8b85f4  lw          $t3, -0x7A0C($gp)
    ctx->pc = 0x1a36b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a36bc: 0x0  nop
    ctx->pc = 0x1a36bcu;
    // NOP
    ctx->pc = 0x1a36c0u;
}
