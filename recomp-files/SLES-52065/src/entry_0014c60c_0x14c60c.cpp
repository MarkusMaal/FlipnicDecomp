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

// Function: entry_0014c60c
// Address: 0x14c60c - 0x14c620
void entry_0014c60c_0x14c60c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c60c_0x14c60c");
#endif

    ctx->pc = 0x14c60cu;

    // 0x14c60c: 0x0  nop
    ctx->pc = 0x14c60cu;
    // NOP
    // 0x14c610: 0x1653ffe6  bne         $s2, $s3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x14C610u;
    {
        const bool branch_taken_0x14c610 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        if (branch_taken_0x14c610) {
            ctx->pc = 0x14C5ACu;
            return;
        }
    }
    ctx->pc = 0x14C618u;
    // 0x14c618: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x14C618u;
    {
        const bool branch_taken_0x14c618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c618) {
            ctx->pc = 0x14C680u;
            return;
        }
    }
    ctx->pc = 0x14C620u;
}
