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

// Function: entry_001ae81c
// Address: 0x1ae81c - 0x1ae820
void entry_001ae81c_0x1ae81c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae81c_0x1ae81c");
#endif

    ctx->pc = 0x1ae81cu;

    // 0x1ae81c: 0xa28206ba  sb          $v0, 0x6BA($s4)
    ctx->pc = 0x1ae81cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1722), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1ae820u;
}
