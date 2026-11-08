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

// Function: entry_0014c73c
// Address: 0x14c73c - 0x14c750
void entry_0014c73c_0x14c73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c73c_0x14c73c");
#endif

    ctx->pc = 0x14c73cu;

    // 0x14c73c: 0x0  nop
    ctx->pc = 0x14c73cu;
    // NOP
    // 0x14c740: 0x1632ffe6  bne         $s1, $s2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x14C740u;
    {
        const bool branch_taken_0x14c740 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x14c740) {
            ctx->pc = 0x14C6DCu;
            return;
        }
    }
    ctx->pc = 0x14C748u;
    // 0x14c748: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x14C748u;
    {
        const bool branch_taken_0x14c748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c748) {
            ctx->pc = 0x14C7B0u;
            return;
        }
    }
    ctx->pc = 0x14C750u;
}
