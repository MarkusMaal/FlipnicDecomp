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

// Function: entry_00195d74
// Address: 0x195d74 - 0x195d84
void entry_00195d74_0x195d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195d74_0x195d74");
#endif

    ctx->pc = 0x195d74u;

    // 0x195d74: 0x0  nop
    ctx->pc = 0x195d74u;
    // NOP
    // 0x195d78: 0x1660f98c  bnez        $s3, . + 4 + (-0x674 << 2)
    ctx->pc = 0x195D78u;
    {
        const bool branch_taken_0x195d78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x195d78) {
            ctx->pc = 0x1943ACu;
            return;
        }
    }
    ctx->pc = 0x195D80u;
    // 0x195d80: 0xae900664  sw          $s0, 0x664($s4)
    ctx->pc = 0x195d80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1636), GPR_U32(ctx, 16));
    ctx->pc = 0x195d84u;
}
