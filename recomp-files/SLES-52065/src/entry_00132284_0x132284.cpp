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

// Function: entry_00132284
// Address: 0x132284 - 0x132288
void entry_00132284_0x132284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132284_0x132284");
#endif

    ctx->pc = 0x132284u;

    // 0x132284: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x132284u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    ctx->pc = 0x132288u;
}
