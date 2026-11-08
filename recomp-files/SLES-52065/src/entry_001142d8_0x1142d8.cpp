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

// Function: entry_001142d8
// Address: 0x1142d8 - 0x1142dc
void entry_001142d8_0x1142d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001142d8_0x1142d8");
#endif

    ctx->pc = 0x1142d8u;

    // 0x1142d8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1142d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1142dcu;
}
