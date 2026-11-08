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

// Function: entry_00142c0c
// Address: 0x142c0c - 0x142c24
void entry_00142c0c_0x142c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142c0c_0x142c0c");
#endif

    ctx->pc = 0x142c0cu;

    // 0x142c0c: 0x0  nop
    ctx->pc = 0x142c0cu;
    // NOP
    // 0x142c10: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142c14: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x142c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x142c18: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x142c18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x142c1c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x142C1Cu;
    {
        const bool branch_taken_0x142c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142c1c) {
            ctx->pc = 0x142BA0u;
            return;
        }
    }
    ctx->pc = 0x142C24u;
}
