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

// Function: entry_002090b0
// Address: 0x2090b0 - 0x2090b4
void entry_002090b0_0x2090b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002090b0_0x2090b0");
#endif

    ctx->pc = 0x2090b0u;

    // 0x2090b0: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x2090b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    ctx->pc = 0x2090b4u;
}
