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

// Function: entry_00126f74
// Address: 0x126f74 - 0x126f80
void entry_00126f74_0x126f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126f74_0x126f74");
#endif

    ctx->pc = 0x126f74u;

    // 0x126f74: 0x0  nop
    ctx->pc = 0x126f74u;
    // NOP
    // 0x126f78: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x126f78u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x126f7c: 0x4616ae01  sub.s       $f24, $f21, $f22
    ctx->pc = 0x126f7cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    ctx->pc = 0x126f80u;
}
