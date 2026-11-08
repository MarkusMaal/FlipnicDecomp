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

// Function: entry_001f2808
// Address: 0x1f2808 - 0x1f2810
void entry_001f2808_0x1f2808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2808_0x1f2808");
#endif

    ctx->pc = 0x1f2808u;

    // 0x1f2808: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f2808u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f280c: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f280cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1f2810u;
}
