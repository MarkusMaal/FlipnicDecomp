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

// Function: entry_0018fd5c
// Address: 0x18fd5c - 0x18fd68
void entry_0018fd5c_0x18fd5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fd5c_0x18fd5c");
#endif

    ctx->pc = 0x18fd5cu;

    // 0x18fd5c: 0x8c820210  lw          $v0, 0x210($a0)
    ctx->pc = 0x18fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x18fd60: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FD60u;
    {
        const bool branch_taken_0x18fd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18fd60) {
            ctx->pc = 0x18FD74u;
            return;
        }
    }
    ctx->pc = 0x18FD68u;
}
