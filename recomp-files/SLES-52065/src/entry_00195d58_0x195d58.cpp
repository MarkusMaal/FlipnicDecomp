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

// Function: entry_00195d58
// Address: 0x195d58 - 0x195d64
void entry_00195d58_0x195d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195d58_0x195d58");
#endif

    ctx->pc = 0x195d58u;

    // 0x195d58: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x195D58u;
    {
        const bool branch_taken_0x195d58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x195d58) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195D60u;
    // 0x195d60: 0xaf80831c  sw          $zero, -0x7CE4($gp)
    ctx->pc = 0x195d60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 0));
    ctx->pc = 0x195d64u;
}
