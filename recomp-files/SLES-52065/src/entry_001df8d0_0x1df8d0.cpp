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

// Function: entry_001df8d0
// Address: 0x1df8d0 - 0x1df8d4
void entry_001df8d0_0x1df8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df8d0_0x1df8d0");
#endif

    ctx->pc = 0x1df8d0u;

    // 0x1df8d0: 0xac490010  sw          $t1, 0x10($v0)
    ctx->pc = 0x1df8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
    ctx->pc = 0x1df8d4u;
}
