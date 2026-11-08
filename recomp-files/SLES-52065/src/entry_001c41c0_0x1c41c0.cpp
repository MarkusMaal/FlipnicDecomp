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

// Function: entry_001c41c0
// Address: 0x1c41c0 - 0x1c41c4
void entry_001c41c0_0x1c41c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c41c0_0x1c41c0");
#endif

    ctx->pc = 0x1c41c0u;

    // 0x1c41c0: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c41c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    ctx->pc = 0x1c41c4u;
}
