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

// Function: entry_0012ea6c
// Address: 0x12ea6c - 0x12ea78
void entry_0012ea6c_0x12ea6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ea6c_0x12ea6c");
#endif

    ctx->pc = 0x12ea6cu;

    // 0x12ea6c: 0x0  nop
    ctx->pc = 0x12ea6cu;
    // NOP
    // 0x12ea70: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x12EA70u;
    {
        const bool branch_taken_0x12ea70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ea70) {
            ctx->pc = 0x12EAD8u;
            return;
        }
    }
    ctx->pc = 0x12EA78u;
}
