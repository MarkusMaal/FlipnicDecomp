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

// Function: entry_001e0d08
// Address: 0x1e0d08 - 0x1e0d0c
void entry_001e0d08_0x1e0d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0d08_0x1e0d08");
#endif

    ctx->pc = 0x1e0d08u;

    // 0x1e0d08: 0xacc0003c  sw          $zero, 0x3C($a2)
    ctx->pc = 0x1e0d08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 0));
    ctx->pc = 0x1e0d0cu;
}
