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

// Function: entry_00191b14
// Address: 0x191b14 - 0x191b2c
void entry_00191b14_0x191b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191b14_0x191b14");
#endif

    ctx->pc = 0x191b14u;

    // 0x191b14: 0x0  nop
    ctx->pc = 0x191b14u;
    // NOP
    // 0x191b18: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x191b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x191b1c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x191B1Cu;
    {
        const bool branch_taken_0x191b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191b1c) {
            ctx->pc = 0x191AB0u;
            return;
        }
    }
    ctx->pc = 0x191B24u;
    // 0x191b24: 0x100001ff  b           . + 4 + (0x1FF << 2)
    ctx->pc = 0x191B24u;
    {
        const bool branch_taken_0x191b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191b24) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191B2Cu;
}
