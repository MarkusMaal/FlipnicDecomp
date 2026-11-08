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

// Function: entry_001a6a8c
// Address: 0x1a6a8c - 0x1a6a90
void entry_001a6a8c_0x1a6a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6a8c_0x1a6a8c");
#endif

    ctx->pc = 0x1a6a8cu;

    // 0x1a6a8c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1a6a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x1a6a90u;
}
