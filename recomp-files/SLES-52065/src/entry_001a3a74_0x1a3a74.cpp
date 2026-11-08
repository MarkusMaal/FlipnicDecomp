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

// Function: entry_001a3a74
// Address: 0x1a3a74 - 0x1a3aa0
void entry_001a3a74_0x1a3a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3a74_0x1a3a74");
#endif

    ctx->pc = 0x1a3a74u;

    // 0x1a3a74: 0x8e29068c  lw          $t1, 0x68C($s1)
    ctx->pc = 0x1a3a74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
    // 0x1a3a78: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1a3a78u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a7c: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x1a3a7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1a3a80: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x1A3A80u;
    {
        const bool branch_taken_0x1a3a80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A80u;
        // 0x1a3a84: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a80) {
            ctx->pc = 0x1A3BB4u;
            return;
        }
    }
    ctx->pc = 0x1A3A88u;
    // 0x1a3a88: 0x29210009  slti        $at, $t1, 0x9
    ctx->pc = 0x1a3a88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a3a8c: 0x14200039  bnez        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x1A3A8Cu;
    {
        const bool branch_taken_0x1a3a8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A8Cu;
        // 0x1a3a90: 0x2527fff8  addiu       $a3, $t1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a8c) {
            ctx->pc = 0x1A3B74u;
            return;
        }
    }
    ctx->pc = 0x1A3A94u;
    // 0x1a3a94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a3a94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a98: 0x8f8a85f4  lw          $t2, -0x7A0C($gp)
    ctx->pc = 0x1a3a98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a3a9c: 0x0  nop
    ctx->pc = 0x1a3a9cu;
    // NOP
    ctx->pc = 0x1a3aa0u;
}
