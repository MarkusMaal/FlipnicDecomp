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

// Function: caseD_9
// Address: 0x1954f0 - 0x19551c
void caseD_9_0x1954f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1954f0");
#endif

    ctx->pc = 0x1954f0u;

    // 0x1954f0: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x1954f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1954f4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1954f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1954f8: 0x12220021  beq         $s1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1954F8u;
    {
        const bool branch_taken_0x1954f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1954FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954F8u;
        // 0x1954fc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954f8) {
            ctx->pc = 0x195580u;
            return;
        }
    }
    ctx->pc = 0x195500u;
    // 0x195500: 0x12220012  beq         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x195500u;
    {
        const bool branch_taken_0x195500 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x195500) {
            ctx->pc = 0x19554Cu;
            return;
        }
    }
    ctx->pc = 0x195508u;
    // 0x195508: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19550c: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19550Cu;
    {
        const bool branch_taken_0x19550c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x19550c) {
            ctx->pc = 0x19551Cu;
            return;
        }
    }
    ctx->pc = 0x195514u;
    // 0x195514: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x195514u;
    {
        const bool branch_taken_0x195514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195514) {
            ctx->pc = 0x1955B0u;
            return;
        }
    }
    ctx->pc = 0x19551Cu;
}
