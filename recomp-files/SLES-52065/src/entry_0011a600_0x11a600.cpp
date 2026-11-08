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

// Function: entry_0011a600
// Address: 0x11a600 - 0x11a604
void entry_0011a600_0x11a600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a600_0x11a600");
#endif

    ctx->pc = 0x11a600u;

    // 0x11a600: 0x0  nop
    ctx->pc = 0x11a600u;
    // NOP
    ctx->pc = 0x11a604u;
}
