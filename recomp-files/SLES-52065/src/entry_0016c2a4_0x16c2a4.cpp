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

// Function: entry_0016c2a4
// Address: 0x16c2a4 - 0x16c2a8
void entry_0016c2a4_0x16c2a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c2a4_0x16c2a4");
#endif

    ctx->pc = 0x16c2a4u;

    // 0x16c2a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16c2a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x16c2a8u;
}
