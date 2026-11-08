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

// Function: entry_0018fd68
// Address: 0x18fd68 - 0x18fd74
void entry_0018fd68_0x18fd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fd68_0x18fd68");
#endif

    ctx->pc = 0x18fd68u;

    // 0x18fd68: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x18fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18fd6c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18FD6Cu;
    {
        const bool branch_taken_0x18fd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fd6c) {
            ctx->pc = 0x18FD1Cu;
            return;
        }
    }
    ctx->pc = 0x18FD74u;
}
