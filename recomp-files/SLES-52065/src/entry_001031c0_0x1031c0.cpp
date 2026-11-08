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

// Function: entry_001031c0
// Address: 0x1031c0 - 0x1031c8
void entry_001031c0_0x1031c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001031c0_0x1031c0");
#endif

    ctx->pc = 0x1031c0u;

    // 0x1031c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1031c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1031c4: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1031c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    ctx->pc = 0x1031c8u;
}
