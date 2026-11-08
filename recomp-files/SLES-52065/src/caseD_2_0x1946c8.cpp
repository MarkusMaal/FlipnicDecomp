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
// Address: 0x1946c8 - 0x1946e4
void caseD_2_0x1946c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1946c8");
#endif

    ctx->pc = 0x1946c8u;

    // 0x1946c8: 0x8e830328  lw          $v1, 0x328($s4)
    ctx->pc = 0x1946c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 808)));
    // 0x1946cc: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1946ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1946d0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1946d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1946d4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1946D4u;
    {
        const bool branch_taken_0x1946d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1946d4) {
            ctx->pc = 0x1946E4u;
            return;
        }
    }
    ctx->pc = 0x1946DCu;
    // 0x1946dc: 0x14800049  bnez        $a0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1946DCu;
    {
        const bool branch_taken_0x1946dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1946dc) {
            ctx->pc = 0x194804u;
            return;
        }
    }
    ctx->pc = 0x1946E4u;
}
