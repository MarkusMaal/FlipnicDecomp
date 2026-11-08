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

// Function: caseD_1
// Address: 0x11c7f0 - 0x11c844
void caseD_1_0x11c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x11c7f0");
#endif

    ctx->pc = 0x11c7f0u;

    // 0x11c7f0: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x11c7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11c7f4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x11c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11c7f8: 0x108300e1  beq         $a0, $v1, . + 4 + (0xE1 << 2)
    ctx->pc = 0x11C7F8u;
    {
        const bool branch_taken_0x11c7f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c7f8) {
            ctx->pc = 0x11CB80u;
            return;
        }
    }
    ctx->pc = 0x11C800u;
    // 0x11c800: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11c800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c804: 0x108300de  beq         $a0, $v1, . + 4 + (0xDE << 2)
    ctx->pc = 0x11C804u;
    {
        const bool branch_taken_0x11c804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c804) {
            ctx->pc = 0x11CB80u;
            return;
        }
    }
    ctx->pc = 0x11C80Cu;
    // 0x11c80c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x11c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11c810: 0x1083007d  beq         $a0, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x11C810u;
    {
        const bool branch_taken_0x11c810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c810) {
            ctx->pc = 0x11CA08u;
            return;
        }
    }
    ctx->pc = 0x11C818u;
    // 0x11c818: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11c818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c81c: 0x10830046  beq         $a0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x11C81Cu;
    {
        const bool branch_taken_0x11c81c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c81c) {
            ctx->pc = 0x11C938u;
            return;
        }
    }
    ctx->pc = 0x11C824u;
    // 0x11c824: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x11c824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11c828: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C828u;
    {
        const bool branch_taken_0x11c828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c828) {
            ctx->pc = 0x11C844u;
            return;
        }
    }
    ctx->pc = 0x11C830u;
    // 0x11c830: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c834: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C834u;
    {
        const bool branch_taken_0x11c834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c834) {
            ctx->pc = 0x11C844u;
            return;
        }
    }
    ctx->pc = 0x11C83Cu;
    // 0x11c83c: 0x10000252  b           . + 4 + (0x252 << 2)
    ctx->pc = 0x11C83Cu;
    {
        const bool branch_taken_0x11c83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c83c) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11C844u;
}
