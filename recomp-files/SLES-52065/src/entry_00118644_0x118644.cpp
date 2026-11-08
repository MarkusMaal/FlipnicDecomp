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

// Function: entry_00118644
// Address: 0x118644 - 0x118648
void entry_00118644_0x118644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118644_0x118644");
#endif

    ctx->pc = 0x118644u;

    // 0x118644: 0x0  nop
    ctx->pc = 0x118644u;
    // NOP
    ctx->pc = 0x118648u;
}
