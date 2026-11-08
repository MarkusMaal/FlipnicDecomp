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

// Function: entry_0015b21c
// Address: 0x15b21c - 0x15b220
void entry_0015b21c_0x15b21c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b21c_0x15b21c");
#endif

    ctx->pc = 0x15b21cu;

    // 0x15b21c: 0x46034981  sub.s       $f6, $f9, $f3
    ctx->pc = 0x15b21cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
    ctx->pc = 0x15b220u;
}
