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

// Function: entry_0019236c
// Address: 0x19236c - 0x192394
void entry_0019236c_0x19236c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019236c_0x19236c");
#endif

    ctx->pc = 0x19236cu;

    // 0x19236c: 0x0  nop
    ctx->pc = 0x19236cu;
    // NOP
    // 0x192370: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x192370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x192374: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x192374u;
    {
        const bool branch_taken_0x192374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192374u;
        // 0x192378: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192374) {
            ctx->pc = 0x192350u;
            return;
        }
    }
    ctx->pc = 0x19237Cu;
    // 0x19237c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19237Cu;
    {
        const bool branch_taken_0x19237c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x192380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19237Cu;
        // 0x192380: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19237c) {
            ctx->pc = 0x192394u;
            return;
        }
    }
    ctx->pc = 0x192384u;
    // 0x192384: 0x14a40003  bne         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192384u;
    {
        const bool branch_taken_0x192384 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x192388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192384u;
        // 0x192388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192384) {
            ctx->pc = 0x192394u;
            return;
        }
    }
    ctx->pc = 0x19238Cu;
    // 0x19238c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x19238Cu;
    {
        const bool branch_taken_0x19238c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19238Cu;
        // 0x192390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19238c) {
            ctx->pc = 0x192394u;
            return;
        }
    }
    ctx->pc = 0x192394u;
}
