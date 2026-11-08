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

// Function: entry_0013ebb8
// Address: 0x13ebb8 - 0x13ebbc
void entry_0013ebb8_0x13ebb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ebb8_0x13ebb8");
#endif

    ctx->pc = 0x13ebb8u;

    // 0x13ebb8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x13ebb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x13ebbcu;
}
