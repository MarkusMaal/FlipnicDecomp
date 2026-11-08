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

// Function: entry_001e5ae0
// Address: 0x1e5ae0 - 0x1e5aec
void entry_001e5ae0_0x1e5ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5ae0_0x1e5ae0");
#endif

    ctx->pc = 0x1e5ae0u;

    // 0x1e5ae0: 0x83a20068  lb          $v0, 0x68($sp)
    ctx->pc = 0x1e5ae0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5ae4: 0xafb20078  sw          $s2, 0x78($sp)
    ctx->pc = 0x1e5ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 18));
    // 0x1e5ae8: 0xa3a2007f  sb          $v0, 0x7F($sp)
    ctx->pc = 0x1e5ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1e5aecu;
}
