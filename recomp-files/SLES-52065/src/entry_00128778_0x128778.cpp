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

// Function: entry_00128778
// Address: 0x128778 - 0x128784
void entry_00128778_0x128778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128778_0x128778");
#endif

    ctx->pc = 0x128778u;

    // 0x128778: 0x0  nop
    ctx->pc = 0x128778u;
    // NOP
    // 0x12877c: 0x0  nop
    ctx->pc = 0x12877cu;
    // NOP
    // 0x128780: 0x460200c3  div.s       $f3, $f0, $f2
    ctx->pc = 0x128780u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    ctx->pc = 0x128784u;
}
