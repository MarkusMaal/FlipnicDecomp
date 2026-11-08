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

// Function: entry_001eda94
// Address: 0x1eda94 - 0x1eda9c
void entry_001eda94_0x1eda94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eda94_0x1eda94");
#endif

    ctx->pc = 0x1eda94u;

    // 0x1eda94: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1eda94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1eda98: 0x8c44c7ec  lw          $a0, -0x3814($v0)
    ctx->pc = 0x1eda98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38C7ECu));
    ctx->pc = 0x1eda9cu;
}
