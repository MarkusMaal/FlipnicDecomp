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

// Function: entry_0016d37c
// Address: 0x16d37c - 0x16d380
void entry_0016d37c_0x16d37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d37c_0x16d37c");
#endif

    ctx->pc = 0x16d37cu;

    // 0x16d37c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x16d37cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    ctx->pc = 0x16d380u;
}
