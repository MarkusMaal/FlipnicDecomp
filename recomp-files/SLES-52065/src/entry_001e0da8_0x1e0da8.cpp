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

// Function: entry_001e0da8
// Address: 0x1e0da8 - 0x1e0db0
void entry_001e0da8_0x1e0da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0da8_0x1e0da8");
#endif

    ctx->pc = 0x1e0da8u;

    // 0x1e0da8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1e0da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1e0dac: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x1e0dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x1e0db0u;
}
