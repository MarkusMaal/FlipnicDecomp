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

// Function: entry_0012146c
// Address: 0x12146c - 0x121490
void entry_0012146c_0x12146c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012146c_0x12146c");
#endif

    ctx->pc = 0x12146cu;

    // 0x12146c: 0x951823  subu        $v1, $a0, $s5
    ctx->pc = 0x12146cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x121470: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x121470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x121474: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x121474u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x121478: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x121478u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12147c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x12147Cu;
    {
        const bool branch_taken_0x12147c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x121480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12147Cu;
        // 0x121480: 0x285082b  sltu        $at, $s4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12147c) {
            ctx->pc = 0x121490u;
            return;
        }
    }
    ctx->pc = 0x121484u;
    // 0x121484: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x121484u;
    {
        const bool branch_taken_0x121484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x121488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121484u;
        // 0x121488: 0x151880  sll         $v1, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121484) {
            ctx->pc = 0x121490u;
            return;
        }
    }
    ctx->pc = 0x12148Cu;
    // 0x12148c: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x12148cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    ctx->pc = 0x121490u;
}
