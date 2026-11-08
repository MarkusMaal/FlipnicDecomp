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

// Function: entry_001b729c
// Address: 0x1b729c - 0x1b72a8
void entry_001b729c_0x1b729c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b729c_0x1b729c");
#endif

    ctx->pc = 0x1b729cu;

    // 0x1b729c: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x1b729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1b72a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b72a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b72a4: 0xa0640034  sb          $a0, 0x34($v1)
    ctx->pc = 0x1b72a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 52), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1b72a8u;
}
