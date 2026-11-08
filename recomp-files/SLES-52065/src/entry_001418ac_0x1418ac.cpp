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

// Function: entry_001418ac
// Address: 0x1418ac - 0x1418b0
void entry_001418ac_0x1418ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001418ac_0x1418ac");
#endif

    ctx->pc = 0x1418acu;

    // 0x1418ac: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x1418acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    ctx->pc = 0x1418b0u;
}
