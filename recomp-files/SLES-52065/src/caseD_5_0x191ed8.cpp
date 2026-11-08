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

// Function: caseD_5
// Address: 0x191ed8 - 0x191f08
void caseD_5_0x191ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x191ed8");
#endif

    ctx->pc = 0x191ed8u;

    // 0x191ed8: 0x8cc50030  lw          $a1, 0x30($a2)
    ctx->pc = 0x191ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x191edc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x191edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x191ee0: 0x10a30073  beq         $a1, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x191EE0u;
    {
        const bool branch_taken_0x191ee0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x191EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EE0u;
        // 0x191ee4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ee0) {
            ctx->pc = 0x1920B0u;
            return;
        }
    }
    ctx->pc = 0x191EE8u;
    // 0x191ee8: 0x10a40067  beq         $a1, $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x191EE8u;
    {
        const bool branch_taken_0x191ee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x191EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EE8u;
        // 0x191eec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ee8) {
            ctx->pc = 0x192088u;
            return;
        }
    }
    ctx->pc = 0x191EF0u;
    // 0x191ef0: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x191EF0u;
    {
        const bool branch_taken_0x191ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x191ef0) {
            ctx->pc = 0x191FC0u;
            return;
        }
    }
    ctx->pc = 0x191EF8u;
    // 0x191ef8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x191EF8u;
    {
        const bool branch_taken_0x191ef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x191ef8) {
            ctx->pc = 0x191F08u;
            return;
        }
    }
    ctx->pc = 0x191F00u;
    // 0x191f00: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x191F00u;
    {
        const bool branch_taken_0x191f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191f00) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191F08u;
}
