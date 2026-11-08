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

// Function: entry_0010a3bc
// Address: 0x10a3bc - 0x10a3c0
void entry_0010a3bc_0x10a3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a3bc_0x10a3bc");
#endif

    ctx->pc = 0x10a3bcu;

    // 0x10a3bc: 0x0  nop
    ctx->pc = 0x10a3bcu;
    // NOP
    ctx->pc = 0x10a3c0u;
}
