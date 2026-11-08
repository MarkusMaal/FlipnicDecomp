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

// Function: entry_0015bcb0
// Address: 0x15bcb0 - 0x15bcb4
void entry_0015bcb0_0x15bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bcb0_0x15bcb0");
#endif

    ctx->pc = 0x15bcb0u;

    // 0x15bcb0: 0xae3001d4  sw          $s0, 0x1D4($s1)
    ctx->pc = 0x15bcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 16));
    ctx->pc = 0x15bcb4u;
}
