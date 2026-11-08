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

// Function: entry_00157410
// Address: 0x157410 - 0x157414
void entry_00157410_0x157410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157410_0x157410");
#endif

    ctx->pc = 0x157410u;

    // 0x157410: 0x0  nop
    ctx->pc = 0x157410u;
    // NOP
    ctx->pc = 0x157414u;
}
