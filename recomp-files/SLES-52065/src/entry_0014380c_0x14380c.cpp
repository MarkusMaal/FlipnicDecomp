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

// Function: entry_0014380c
// Address: 0x14380c - 0x143818
void entry_0014380c_0x14380c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014380c_0x14380c");
#endif

    ctx->pc = 0x14380cu;

    // 0x14380c: 0x0  nop
    ctx->pc = 0x14380cu;
    // NOP
    // 0x143810: 0x1260008f  beqz        $s3, . + 4 + (0x8F << 2)
    ctx->pc = 0x143810u;
    {
        const bool branch_taken_0x143810 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x143810) {
            ctx->pc = 0x143A50u;
            return;
        }
    }
    ctx->pc = 0x143818u;
}
