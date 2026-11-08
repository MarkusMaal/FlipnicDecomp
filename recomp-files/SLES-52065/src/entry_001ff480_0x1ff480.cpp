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

// Function: entry_001ff480
// Address: 0x1ff480 - 0x1ff488
void entry_001ff480_0x1ff480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff480_0x1ff480");
#endif

    ctx->pc = 0x1ff480u;

    // 0x1ff480: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff484: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x1ff484u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x1ff488u;
}
