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

// Function: entry_001949ec
// Address: 0x1949ec - 0x194a00
void entry_001949ec_0x1949ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001949ec_0x1949ec");
#endif

    ctx->pc = 0x1949ecu;

    // 0x1949ec: 0x0  nop
    ctx->pc = 0x1949ecu;
    // NOP
    // 0x1949f0: 0x501ffd1  bgez        $t0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1949F0u;
    {
        const bool branch_taken_0x1949f0 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x1949f0) {
            ctx->pc = 0x194938u;
            return;
        }
    }
    ctx->pc = 0x1949F8u;
    // 0x1949f8: 0x100004de  b           . + 4 + (0x4DE << 2)
    ctx->pc = 0x1949F8u;
    {
        const bool branch_taken_0x1949f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1949f8) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x194A00u;
}
