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

// Function: entry_0016ae60
// Address: 0x16ae60 - 0x16ae64
void entry_0016ae60_0x16ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ae60_0x16ae60");
#endif

    ctx->pc = 0x16ae60u;

    // 0x16ae60: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    ctx->pc = 0x16ae64u;
}
