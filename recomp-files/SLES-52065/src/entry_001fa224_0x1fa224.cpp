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

// Function: entry_001fa224
// Address: 0x1fa224 - 0x1fa228
void entry_001fa224_0x1fa224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa224_0x1fa224");
#endif

    ctx->pc = 0x1fa224u;

    // 0x1fa224: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x1fa224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    ctx->pc = 0x1fa228u;
}
