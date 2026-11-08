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

// Function: entry_00191bbc
// Address: 0x191bbc - 0x191bd4
void entry_00191bbc_0x191bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191bbc_0x191bbc");
#endif

    ctx->pc = 0x191bbcu;

    // 0x191bbc: 0x0  nop
    ctx->pc = 0x191bbcu;
    // NOP
    // 0x191bc0: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x191bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x191bc4: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x191BC4u;
    {
        const bool branch_taken_0x191bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191bc4) {
            ctx->pc = 0x191B84u;
            return;
        }
    }
    ctx->pc = 0x191BCCu;
    // 0x191bcc: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x191BCCu;
    {
        const bool branch_taken_0x191bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191bcc) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191BD4u;
}
