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

// Function: entry_0015b2b4
// Address: 0x15b2b4 - 0x15b2b8
void entry_0015b2b4_0x15b2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b2b4_0x15b2b4");
#endif

    ctx->pc = 0x15b2b4u;

    // 0x15b2b4: 0x46025181  sub.s       $f6, $f10, $f2
    ctx->pc = 0x15b2b4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    ctx->pc = 0x15b2b8u;
}
