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

// Function: entry_001260c4
// Address: 0x1260c4 - 0x1260c8
void entry_001260c4_0x1260c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001260c4_0x1260c4");
#endif

    ctx->pc = 0x1260c4u;

    // 0x1260c4: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x1260c4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    ctx->pc = 0x1260c8u;
}
