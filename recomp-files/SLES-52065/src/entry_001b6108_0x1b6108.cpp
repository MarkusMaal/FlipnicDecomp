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

// Function: entry_001b6108
// Address: 0x1b6108 - 0x1b610c
void entry_001b6108_0x1b6108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6108_0x1b6108");
#endif

    ctx->pc = 0x1b6108u;

    // 0x1b6108: 0xae44002c  sw          $a0, 0x2C($s2)
    ctx->pc = 0x1b6108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 4));
    ctx->pc = 0x1b610cu;
}
