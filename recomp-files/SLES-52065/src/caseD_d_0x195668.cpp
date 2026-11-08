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

// Function: caseD_d
// Address: 0x195668 - 0x1956a0
void caseD_d_0x195668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x195668");
#endif

    ctx->pc = 0x195668u;

    // 0x195668: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x195668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19566c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19566cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x195670: 0x108300f2  beq         $a0, $v1, . + 4 + (0xF2 << 2)
    ctx->pc = 0x195670u;
    {
        const bool branch_taken_0x195670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x195674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195670u;
        // 0x195674: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195670) {
            ctx->pc = 0x195A3Cu;
            return;
        }
    }
    ctx->pc = 0x195678u;
    // 0x195678: 0x108300ad  beq         $a0, $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x195678u;
    {
        const bool branch_taken_0x195678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195678u;
        // 0x19567c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195678) {
            ctx->pc = 0x195930u;
            return;
        }
    }
    ctx->pc = 0x195680u;
    // 0x195680: 0x10870068  beq         $a0, $a3, . + 4 + (0x68 << 2)
    ctx->pc = 0x195680u;
    {
        const bool branch_taken_0x195680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x195680) {
            ctx->pc = 0x195824u;
            return;
        }
    }
    ctx->pc = 0x195688u;
    // 0x195688: 0x10800045  beqz        $a0, . + 4 + (0x45 << 2)
    ctx->pc = 0x195688u;
    {
        const bool branch_taken_0x195688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195688u;
        // 0x19568c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195688) {
            ctx->pc = 0x1957A0u;
            return;
        }
    }
    ctx->pc = 0x195690u;
    // 0x195690: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195690u;
    {
        const bool branch_taken_0x195690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195690) {
            ctx->pc = 0x1956A0u;
            return;
        }
    }
    ctx->pc = 0x195698u;
    // 0x195698: 0x100001b2  b           . + 4 + (0x1B2 << 2)
    ctx->pc = 0x195698u;
    {
        const bool branch_taken_0x195698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195698) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x1956A0u;
}
