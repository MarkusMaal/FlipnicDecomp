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

// Function: entry_0010e504
// Address: 0x10e504 - 0x10e514
void entry_0010e504_0x10e504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e504_0x10e504");
#endif

    ctx->pc = 0x10e504u;

    // 0x10e504: 0x0  nop
    ctx->pc = 0x10e504u;
    // NOP
    // 0x10e508: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x10e508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x10e50c: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x10E50Cu;
    {
        const bool branch_taken_0x10e50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e50c) {
            ctx->pc = 0x10E49Cu;
            return;
        }
    }
    ctx->pc = 0x10E514u;
}
