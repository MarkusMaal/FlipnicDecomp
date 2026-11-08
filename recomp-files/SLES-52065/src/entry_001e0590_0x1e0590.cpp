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

// Function: entry_001e0590
// Address: 0x1e0590 - 0x1e0594
void entry_001e0590_0x1e0590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0590_0x1e0590");
#endif

    ctx->pc = 0x1e0590u;

    // 0x1e0590: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e0590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1e0594u;
}
