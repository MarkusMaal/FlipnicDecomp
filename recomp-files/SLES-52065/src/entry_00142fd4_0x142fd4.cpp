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

// Function: entry_00142fd4
// Address: 0x142fd4 - 0x142fd8
void entry_00142fd4_0x142fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142fd4_0x142fd4");
#endif

    ctx->pc = 0x142fd4u;

    // 0x142fd4: 0x0  nop
    ctx->pc = 0x142fd4u;
    // NOP
    ctx->pc = 0x142fd8u;
}
