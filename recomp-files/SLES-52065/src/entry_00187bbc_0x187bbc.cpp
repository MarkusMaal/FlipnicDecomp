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

// Function: entry_00187bbc
// Address: 0x187bbc - 0x187bc0
void entry_00187bbc_0x187bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187bbc_0x187bbc");
#endif

    ctx->pc = 0x187bbcu;

    // 0x187bbc: 0x0  nop
    ctx->pc = 0x187bbcu;
    // NOP
    ctx->pc = 0x187bc0u;
}
