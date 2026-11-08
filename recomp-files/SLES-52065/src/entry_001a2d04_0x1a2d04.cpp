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

// Function: entry_001a2d04
// Address: 0x1a2d04 - 0x1a2d08
void entry_001a2d04_0x1a2d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2d04_0x1a2d04");
#endif

    ctx->pc = 0x1a2d04u;

    // 0x1a2d04: 0xa3838250  sb          $v1, -0x7DB0($gp)
    ctx->pc = 0x1a2d04u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935120), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1a2d08u;
}
