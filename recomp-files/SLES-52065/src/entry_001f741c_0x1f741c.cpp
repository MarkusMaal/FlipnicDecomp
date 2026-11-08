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

// Function: entry_001f741c
// Address: 0x1f741c - 0x1f7428
void entry_001f741c_0x1f741c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f741c_0x1f741c");
#endif

    ctx->pc = 0x1f741cu;

    // 0x1f741c: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x1f741cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x1f7420: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f7420u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f7424: 0x3c1e0039  lui         $fp, 0x39
    ctx->pc = 0x1f7424u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1f7428u;
}
