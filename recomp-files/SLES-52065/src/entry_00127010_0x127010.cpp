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

// Function: entry_00127010
// Address: 0x127010 - 0x127014
void entry_00127010_0x127010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127010_0x127010");
#endif

    ctx->pc = 0x127010u;

    // 0x127010: 0x4601bdc1  sub.s       $f23, $f23, $f1
    ctx->pc = 0x127010u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
    ctx->pc = 0x127014u;
}
