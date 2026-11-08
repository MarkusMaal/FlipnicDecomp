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

// Function: entry_001eb010
// Address: 0x1eb010 - 0x1eb014
void entry_001eb010_0x1eb010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb010_0x1eb010");
#endif

    ctx->pc = 0x1eb010u;

    // 0x1eb010: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x1eb010u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
    ctx->pc = 0x1eb014u;
}
