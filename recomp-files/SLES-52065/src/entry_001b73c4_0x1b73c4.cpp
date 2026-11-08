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

// Function: entry_001b73c4
// Address: 0x1b73c4 - 0x1b73c8
void entry_001b73c4_0x1b73c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b73c4_0x1b73c4");
#endif

    ctx->pc = 0x1b73c4u;

    // 0x1b73c4: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x1b73c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    ctx->pc = 0x1b73c8u;
}
