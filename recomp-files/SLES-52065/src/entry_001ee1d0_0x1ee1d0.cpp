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

// Function: entry_001ee1d0
// Address: 0x1ee1d0 - 0x1ee1e8
void entry_001ee1d0_0x1ee1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee1d0_0x1ee1d0");
#endif

    ctx->pc = 0x1ee1d0u;

    // 0x1ee1d0: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x1ee1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1ee1d4: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1ee1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1ee1d8: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1ee1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1ee1dc: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1ee1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1ee1e0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1ee1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1ee1e4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1ee1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x1ee1e8u;
}
