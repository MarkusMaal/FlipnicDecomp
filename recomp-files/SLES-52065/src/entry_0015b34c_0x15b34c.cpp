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

// Function: entry_0015b34c
// Address: 0x15b34c - 0x15b350
void entry_0015b34c_0x15b34c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b34c_0x15b34c");
#endif

    ctx->pc = 0x15b34cu;

    // 0x15b34c: 0x46012181  sub.s       $f6, $f4, $f1
    ctx->pc = 0x15b34cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    ctx->pc = 0x15b350u;
}
