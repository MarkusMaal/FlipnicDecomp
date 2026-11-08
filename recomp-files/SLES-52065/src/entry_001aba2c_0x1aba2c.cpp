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

// Function: entry_001aba2c
// Address: 0x1aba2c - 0x1aba34
void entry_001aba2c_0x1aba2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aba2c_0x1aba2c");
#endif

    ctx->pc = 0x1aba2cu;

    // 0x1aba2c: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1ABA2Cu;
    {
        const bool branch_taken_0x1aba2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aba2c) {
            ctx->pc = 0x1ABB7Cu;
            return;
        }
    }
    ctx->pc = 0x1ABA34u;
}
