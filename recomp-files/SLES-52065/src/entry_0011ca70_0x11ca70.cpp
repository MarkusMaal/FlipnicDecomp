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

// Function: entry_0011ca70
// Address: 0x11ca70 - 0x11ca74
void entry_0011ca70_0x11ca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ca70_0x11ca70");
#endif

    ctx->pc = 0x11ca70u;

    // 0x11ca70: 0x3c080004  lui         $t0, 0x4
    ctx->pc = 0x11ca70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4 << 16));
    ctx->pc = 0x11ca74u;
}
