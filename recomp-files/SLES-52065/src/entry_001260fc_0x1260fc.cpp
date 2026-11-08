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

// Function: entry_001260fc
// Address: 0x1260fc - 0x126100
void entry_001260fc_0x1260fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001260fc_0x1260fc");
#endif

    ctx->pc = 0x1260fcu;

    // 0x1260fc: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x1260fcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    ctx->pc = 0x126100u;
}
