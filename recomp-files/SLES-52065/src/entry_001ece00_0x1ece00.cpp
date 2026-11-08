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

// Function: entry_001ece00
// Address: 0x1ece00 - 0x1ece04
void entry_001ece00_0x1ece00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ece00_0x1ece00");
#endif

    ctx->pc = 0x1ece00u;

    // 0x1ece00: 0x3c120039  lui         $s2, 0x39
    ctx->pc = 0x1ece00u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1ece04u;
}
