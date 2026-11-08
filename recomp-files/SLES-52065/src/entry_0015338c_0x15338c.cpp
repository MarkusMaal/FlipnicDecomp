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

// Function: entry_0015338c
// Address: 0x15338c - 0x153394
void entry_0015338c_0x15338c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015338c_0x15338c");
#endif

    ctx->pc = 0x15338cu;

    // 0x15338c: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x15338cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x153390: 0x460d6000  add.s       $f0, $f12, $f13
    ctx->pc = 0x153390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    ctx->pc = 0x153394u;
}
