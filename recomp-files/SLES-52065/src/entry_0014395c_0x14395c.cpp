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

// Function: entry_0014395c
// Address: 0x14395c - 0x143968
void entry_0014395c_0x14395c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014395c_0x14395c");
#endif

    ctx->pc = 0x14395cu;

    // 0x14395c: 0x0  nop
    ctx->pc = 0x14395cu;
    // NOP
    // 0x143960: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x143960u;
    {
        const bool branch_taken_0x143960 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x143960) {
            ctx->pc = 0x1439A8u;
            return;
        }
    }
    ctx->pc = 0x143968u;
}
