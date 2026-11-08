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

// Function: entry_00194964
// Address: 0x194964 - 0x194970
void entry_00194964_0x194964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194964_0x194964");
#endif

    ctx->pc = 0x194964u;

    // 0x194964: 0x0  nop
    ctx->pc = 0x194964u;
    // NOP
    // 0x194968: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x194968u;
    {
        const bool branch_taken_0x194968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194968) {
            ctx->pc = 0x194988u;
            return;
        }
    }
    ctx->pc = 0x194970u;
}
