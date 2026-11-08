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

// Function: entry_0016e5f4
// Address: 0x16e5f4 - 0x16e5fc
void entry_0016e5f4_0x16e5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e5f4_0x16e5f4");
#endif

    ctx->pc = 0x16e5f4u;

    // 0x16e5f4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x16E5F4u;
    {
        const bool branch_taken_0x16e5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e5f4) {
            ctx->pc = 0x16E70Cu;
            return;
        }
    }
    ctx->pc = 0x16E5FCu;
}
