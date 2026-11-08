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

// Function: entry_0010e828
// Address: 0x10e828 - 0x10e834
void entry_0010e828_0x10e828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e828_0x10e828");
#endif

    ctx->pc = 0x10e828u;

    // 0x10e828: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x10e828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x10e82c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x10E82Cu;
    {
        const bool branch_taken_0x10e82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e82c) {
            ctx->pc = 0x10E7B8u;
            return;
        }
    }
    ctx->pc = 0x10E834u;
}
