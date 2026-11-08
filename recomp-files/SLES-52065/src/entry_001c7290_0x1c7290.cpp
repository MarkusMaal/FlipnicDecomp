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

// Function: entry_001c7290
// Address: 0x1c7290 - 0x1c7294
void entry_001c7290_0x1c7290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7290_0x1c7290");
#endif

    ctx->pc = 0x1c7290u;

    // 0x1c7290: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c7290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->pc = 0x1c7294u;
}
