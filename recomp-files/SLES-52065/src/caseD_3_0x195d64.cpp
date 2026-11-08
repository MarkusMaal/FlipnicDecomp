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

// Function: caseD_3
// Address: 0x195d64 - 0x195d74
void caseD_3_0x195d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x195d64");
#endif

    ctx->pc = 0x195d64u;

    // 0x195d64: 0x0  nop
    ctx->pc = 0x195d64u;
    // NOP
    // 0x195d68: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x195D68u;
    {
        const bool branch_taken_0x195d68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x195d68) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x195D70u;
    // 0x195d70: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x195d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x195d74u;
}
