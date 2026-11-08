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

// Function: entry_0013227c
// Address: 0x13227c - 0x132280
void entry_0013227c_0x13227c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013227c_0x13227c");
#endif

    ctx->pc = 0x13227cu;

    // 0x13227c: 0x4617b582  mul.s       $f22, $f22, $f23
    ctx->pc = 0x13227cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[23]);
    ctx->pc = 0x132280u;
}
