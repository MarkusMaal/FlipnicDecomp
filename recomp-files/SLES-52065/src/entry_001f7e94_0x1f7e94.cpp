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

// Function: entry_001f7e94
// Address: 0x1f7e94 - 0x1f7e9c
void entry_001f7e94_0x1f7e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7e94_0x1f7e94");
#endif

    ctx->pc = 0x1f7e94u;

    // 0x1f7e94: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x1f7e94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
    // 0x1f7e98: 0x3c170022  lui         $s7, 0x22
    ctx->pc = 0x1f7e98u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x1f7e9cu;
}
