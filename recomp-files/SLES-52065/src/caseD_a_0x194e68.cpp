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

// Function: caseD_a
// Address: 0x194e68 - 0x194e88
void caseD_a_0x194e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x194e68");
#endif

    ctx->pc = 0x194e68u;

    // 0x194e68: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x194e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x194e6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194e70: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x194E70u;
    {
        const bool branch_taken_0x194e70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x194e70) {
            ctx->pc = 0x194F58u;
            return;
        }
    }
    ctx->pc = 0x194E78u;
    // 0x194e78: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194E78u;
    {
        const bool branch_taken_0x194e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x194e78) {
            ctx->pc = 0x194E88u;
            return;
        }
    }
    ctx->pc = 0x194E80u;
    // 0x194e80: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x194E80u;
    {
        const bool branch_taken_0x194e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194e80) {
            ctx->pc = 0x19502Cu;
            return;
        }
    }
    ctx->pc = 0x194E88u;
}
