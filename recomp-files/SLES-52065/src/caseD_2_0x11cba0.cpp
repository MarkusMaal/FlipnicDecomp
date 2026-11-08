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

// Function: caseD_2
// Address: 0x11cba0 - 0x11cbf4
void caseD_2_0x11cba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x11cba0");
#endif

    ctx->pc = 0x11cba0u;

    // 0x11cba0: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x11cba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11cba4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x11cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11cba8: 0x10830139  beq         $a0, $v1, . + 4 + (0x139 << 2)
    ctx->pc = 0x11CBA8u;
    {
        const bool branch_taken_0x11cba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11cba8) {
            ctx->pc = 0x11D090u;
            return;
        }
    }
    ctx->pc = 0x11CBB0u;
    // 0x11cbb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11cbb4: 0x10830136  beq         $a0, $v1, . + 4 + (0x136 << 2)
    ctx->pc = 0x11CBB4u;
    {
        const bool branch_taken_0x11cbb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11cbb4) {
            ctx->pc = 0x11D090u;
            return;
        }
    }
    ctx->pc = 0x11CBBCu;
    // 0x11cbbc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x11cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11cbc0: 0x108300c8  beq         $a0, $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x11CBC0u;
    {
        const bool branch_taken_0x11cbc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11cbc0) {
            ctx->pc = 0x11CEE4u;
            return;
        }
    }
    ctx->pc = 0x11CBC8u;
    // 0x11cbc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11cbcc: 0x108300c5  beq         $a0, $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x11CBCCu;
    {
        const bool branch_taken_0x11cbcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11cbcc) {
            ctx->pc = 0x11CEE4u;
            return;
        }
    }
    ctx->pc = 0x11CBD4u;
    // 0x11cbd4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x11cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11cbd8: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11CBD8u;
    {
        const bool branch_taken_0x11cbd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11cbd8) {
            ctx->pc = 0x11CBF4u;
            return;
        }
    }
    ctx->pc = 0x11CBE0u;
    // 0x11cbe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cbe4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CBE4u;
    {
        const bool branch_taken_0x11cbe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11cbe4) {
            ctx->pc = 0x11CBF4u;
            return;
        }
    }
    ctx->pc = 0x11CBECu;
    // 0x11cbec: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x11CBECu;
    {
        const bool branch_taken_0x11cbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cbec) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11CBF4u;
}
