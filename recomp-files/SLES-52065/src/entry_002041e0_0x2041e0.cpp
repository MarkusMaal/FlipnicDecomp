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

// Function: entry_002041e0
// Address: 0x2041e0 - 0x2041e4
void entry_002041e0_0x2041e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002041e0_0x2041e0");
#endif

    ctx->pc = 0x2041e0u;

    // 0x2041e0: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x2041e0u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    ctx->pc = 0x2041e4u;
}
