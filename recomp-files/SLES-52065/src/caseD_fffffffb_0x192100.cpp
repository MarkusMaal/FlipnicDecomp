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

// Function: caseD_fffffffb
// Address: 0x192100 - 0x192130
void caseD_fffffffb_0x192100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_fffffffb_0x192100");
#endif

    ctx->pc = 0x192100u;

    // 0x192100: 0x8cc50030  lw          $a1, 0x30($a2)
    ctx->pc = 0x192100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x192104: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x192104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192108: 0x10a30073  beq         $a1, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x192108u;
    {
        const bool branch_taken_0x192108 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x19210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192108u;
        // 0x19210c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192108) {
            ctx->pc = 0x1922D8u;
            return;
        }
    }
    ctx->pc = 0x192110u;
    // 0x192110: 0x10a40067  beq         $a1, $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x192110u;
    {
        const bool branch_taken_0x192110 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x192114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192110u;
        // 0x192114: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192110) {
            ctx->pc = 0x1922B0u;
            return;
        }
    }
    ctx->pc = 0x192118u;
    // 0x192118: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x192118u;
    {
        const bool branch_taken_0x192118 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x192118) {
            ctx->pc = 0x1921E8u;
            return;
        }
    }
    ctx->pc = 0x192120u;
    // 0x192120: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x192120u;
    {
        const bool branch_taken_0x192120 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x192120) {
            ctx->pc = 0x192130u;
            return;
        }
    }
    ctx->pc = 0x192128u;
    // 0x192128: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x192128u;
    {
        const bool branch_taken_0x192128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192128) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x192130u;
}
