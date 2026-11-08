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

// Function: entry_0017a584
// Address: 0x17a584 - 0x17a588
void entry_0017a584_0x17a584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a584_0x17a584");
#endif

    ctx->pc = 0x17a584u;

    // 0x17a584: 0x0  nop
    ctx->pc = 0x17a584u;
    // NOP
    ctx->pc = 0x17a588u;
}
