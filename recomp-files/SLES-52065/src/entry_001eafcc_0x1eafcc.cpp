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

// Function: entry_001eafcc
// Address: 0x1eafcc - 0x1eafdc
void entry_001eafcc_0x1eafcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eafcc_0x1eafcc");
#endif

    ctx->pc = 0x1eafccu;

    // 0x1eafcc: 0x8c880230  lw          $t0, 0x230($a0)
    ctx->pc = 0x1eafccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x1eafd0: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EAFD0u;
    {
        const bool branch_taken_0x1eafd0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eafd0) {
            ctx->pc = 0x1EAFDCu;
            return;
        }
    }
    ctx->pc = 0x1EAFD8u;
    // 0x1eafd8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1eafd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    ctx->pc = 0x1eafdcu;
}
