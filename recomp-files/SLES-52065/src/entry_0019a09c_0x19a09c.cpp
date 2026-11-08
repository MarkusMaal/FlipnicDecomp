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

// Function: entry_0019a09c
// Address: 0x19a09c - 0x19a0a0
void entry_0019a09c_0x19a09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a09c_0x19a09c");
#endif

    ctx->pc = 0x19a09cu;

    // 0x19a09c: 0xac850670  sw          $a1, 0x670($a0)
    ctx->pc = 0x19a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1648), GPR_U32(ctx, 5));
    ctx->pc = 0x19a0a0u;
}
