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

// Function: entry_001fb5ec
// Address: 0x1fb5ec - 0x1fb5f0
void entry_001fb5ec_0x1fb5ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb5ec_0x1fb5ec");
#endif

    ctx->pc = 0x1fb5ecu;

    // 0x1fb5ec: 0x460c6282  mul.s       $f10, $f12, $f12
    ctx->pc = 0x1fb5ecu;
    ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    ctx->pc = 0x1fb5f0u;
}
