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

// Function: entry_001b6950
// Address: 0x1b6950 - 0x1b6954
void entry_001b6950_0x1b6950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6950_0x1b6950");
#endif

    ctx->pc = 0x1b6950u;

    // 0x1b6950: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1b6950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    ctx->pc = 0x1b6954u;
}
