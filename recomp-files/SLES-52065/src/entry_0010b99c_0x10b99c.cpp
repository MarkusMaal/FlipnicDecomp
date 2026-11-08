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

// Function: entry_0010b99c
// Address: 0x10b99c - 0x10b9ac
void entry_0010b99c_0x10b99c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b99c_0x10b99c");
#endif

    ctx->pc = 0x10b99cu;

    // 0x10b99c: 0x0  nop
    ctx->pc = 0x10b99cu;
    // NOP
    // 0x10b9a0: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x10b9a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x10b9a4: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x10B9A4u;
    {
        const bool branch_taken_0x10b9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b9a4) {
            ctx->pc = 0x10B904u;
            return;
        }
    }
    ctx->pc = 0x10B9ACu;
}
