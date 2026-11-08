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

// Function: entry_001afde4
// Address: 0x1afde4 - 0x1afdf4
void entry_001afde4_0x1afde4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afde4_0x1afde4");
#endif

    ctx->pc = 0x1afde4u;

    // 0x1afde4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFDE4u;
    {
        const bool branch_taken_0x1afde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afde4) {
            ctx->pc = 0x1AFDF4u;
            return;
        }
    }
    ctx->pc = 0x1AFDECu;
    // 0x1afdec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFDECu;
    {
        const bool branch_taken_0x1afdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afdec) {
            ctx->pc = 0x1AFDFCu;
            return;
        }
    }
    ctx->pc = 0x1AFDF4u;
}
