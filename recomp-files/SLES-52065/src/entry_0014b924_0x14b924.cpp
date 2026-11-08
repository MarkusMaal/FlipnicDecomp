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

// Function: entry_0014b924
// Address: 0x14b924 - 0x14b928
void entry_0014b924_0x14b924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b924_0x14b924");
#endif

    ctx->pc = 0x14b924u;

    // 0x14b924: 0x0  nop
    ctx->pc = 0x14b924u;
    // NOP
    ctx->pc = 0x14b928u;
}
