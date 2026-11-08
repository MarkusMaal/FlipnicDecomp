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

// Function: entry_001a4a74
// Address: 0x1a4a74 - 0x1a4a84
void entry_001a4a74_0x1a4a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4a74_0x1a4a74");
#endif

    ctx->pc = 0x1a4a74u;

    // 0x1a4a74: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a4a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1a4a78: 0xac620690  sw          $v0, 0x690($v1)
    ctx->pc = 0x1a4a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1680), GPR_U32(ctx, 2));
    // 0x1a4a7c: 0x8fb0003c  lw          $s0, 0x3C($sp)
    ctx->pc = 0x1a4a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1a4a80: 0x0  nop
    ctx->pc = 0x1a4a80u;
    // NOP
    ctx->pc = 0x1a4a84u;
}
