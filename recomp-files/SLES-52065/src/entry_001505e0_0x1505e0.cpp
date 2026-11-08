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

// Function: entry_001505e0
// Address: 0x1505e0 - 0x1505e4
void entry_001505e0_0x1505e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001505e0_0x1505e0");
#endif

    ctx->pc = 0x1505e0u;

    // 0x1505e0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1505e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->pc = 0x1505e4u;
}
