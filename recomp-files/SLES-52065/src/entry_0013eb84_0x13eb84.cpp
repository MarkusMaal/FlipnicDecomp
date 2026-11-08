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

// Function: entry_0013eb84
// Address: 0x13eb84 - 0x13eb88
void entry_0013eb84_0x13eb84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eb84_0x13eb84");
#endif

    ctx->pc = 0x13eb84u;

    // 0x13eb84: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x13eb84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    ctx->pc = 0x13eb88u;
}
