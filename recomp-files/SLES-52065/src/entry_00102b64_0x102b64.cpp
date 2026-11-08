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

// Function: entry_00102b64
// Address: 0x102b64 - 0x102b68
void entry_00102b64_0x102b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102b64_0x102b64");
#endif

    ctx->pc = 0x102b64u;

    // 0x102b64: 0x0  nop
    ctx->pc = 0x102b64u;
    // NOP
    ctx->pc = 0x102b68u;
}
