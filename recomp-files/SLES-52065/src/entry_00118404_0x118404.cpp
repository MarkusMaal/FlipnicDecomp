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

// Function: entry_00118404
// Address: 0x118404 - 0x118408
void entry_00118404_0x118404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118404_0x118404");
#endif

    ctx->pc = 0x118404u;

    // 0x118404: 0x0  nop
    ctx->pc = 0x118404u;
    // NOP
    ctx->pc = 0x118408u;
}
