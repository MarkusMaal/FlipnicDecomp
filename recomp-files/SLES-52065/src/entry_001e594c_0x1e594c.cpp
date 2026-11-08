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

// Function: entry_001e594c
// Address: 0x1e594c - 0x1e5954
void entry_001e594c_0x1e594c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e594c_0x1e594c");
#endif

    ctx->pc = 0x1e594cu;

    // 0x1e594c: 0x83a20058  lb          $v0, 0x58($sp)
    ctx->pc = 0x1e594cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e5950: 0xa3a2006f  sb          $v0, 0x6F($sp)
    ctx->pc = 0x1e5950u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 111), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1e5954u;
}
