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

// Function: entry_001edac4
// Address: 0x1edac4 - 0x1edacc
void entry_001edac4_0x1edac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001edac4_0x1edac4");
#endif

    ctx->pc = 0x1edac4u;

    // 0x1edac4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1edac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1edac8: 0x8c44c7ec  lw          $a0, -0x3814($v0)
    ctx->pc = 0x1edac8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38C7ECu));
    ctx->pc = 0x1edaccu;
}
