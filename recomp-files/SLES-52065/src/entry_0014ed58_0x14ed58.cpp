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

// Function: entry_0014ed58
// Address: 0x14ed58 - 0x14ed68
void entry_0014ed58_0x14ed58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ed58_0x14ed58");
#endif

    ctx->pc = 0x14ed58u;

    // 0x14ed58: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x14ED58u;
    {
        const bool branch_taken_0x14ed58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed58) {
            ctx->pc = 0x14EE98u;
            return;
        }
    }
    ctx->pc = 0x14ED60u;
    // 0x14ed60: 0x1251004d  beq         $s2, $s1, . + 4 + (0x4D << 2)
    ctx->pc = 0x14ED60u;
    {
        const bool branch_taken_0x14ed60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        if (branch_taken_0x14ed60) {
            ctx->pc = 0x14EE98u;
            return;
        }
    }
    ctx->pc = 0x14ED68u;
}
