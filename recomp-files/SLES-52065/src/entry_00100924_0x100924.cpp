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

// Function: entry_00100924
// Address: 0x100924 - 0x100938
void entry_00100924_0x100924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100924_0x100924");
#endif

    ctx->pc = 0x100924u;

    // 0x100924: 0x0  nop
    ctx->pc = 0x100924u;
    // NOP
    // 0x100928: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x100928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x10092c: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x10092Cu;
    {
        const bool branch_taken_0x10092c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10092c) {
            ctx->pc = 0x1008A4u;
            return;
        }
    }
    ctx->pc = 0x100934u;
    // 0x100934: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x100934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x100938u;
}
