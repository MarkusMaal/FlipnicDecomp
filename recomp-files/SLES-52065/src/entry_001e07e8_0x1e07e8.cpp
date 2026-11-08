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

// Function: entry_001e07e8
// Address: 0x1e07e8 - 0x1e07f0
void entry_001e07e8_0x1e07e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e07e8_0x1e07e8");
#endif

    ctx->pc = 0x1e07e8u;

    // 0x1e07e8: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x1e07e8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x1e07ec: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1e07ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1e07f0u;
}
