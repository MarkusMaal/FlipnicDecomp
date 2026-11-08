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

// Function: entry_00126fd4
// Address: 0x126fd4 - 0x126fdc
void entry_00126fd4_0x126fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126fd4_0x126fd4");
#endif

    ctx->pc = 0x126fd4u;

    // 0x126fd4: 0x0  nop
    ctx->pc = 0x126fd4u;
    // NOP
    // 0x126fd8: 0x4601bdc0  add.s       $f23, $f23, $f1
    ctx->pc = 0x126fd8u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
    ctx->pc = 0x126fdcu;
}
