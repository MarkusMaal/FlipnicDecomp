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

// Function: entry_0011b2fc
// Address: 0x11b2fc - 0x11b300
void entry_0011b2fc_0x11b2fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b2fc_0x11b2fc");
#endif

    ctx->pc = 0x11b2fcu;

    // 0x11b2fc: 0x0  nop
    ctx->pc = 0x11b2fcu;
    // NOP
    ctx->pc = 0x11b300u;
}
