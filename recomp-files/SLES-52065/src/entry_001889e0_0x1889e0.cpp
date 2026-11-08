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

// Function: entry_001889e0
// Address: 0x1889e0 - 0x1889e4
void entry_001889e0_0x1889e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001889e0_0x1889e0");
#endif

    ctx->pc = 0x1889e0u;

    // 0x1889e0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1889e0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x1889e4u;
}
