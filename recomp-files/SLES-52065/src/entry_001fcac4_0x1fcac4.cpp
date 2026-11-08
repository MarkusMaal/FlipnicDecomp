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

// Function: entry_001fcac4
// Address: 0x1fcac4 - 0x1fcad0
void entry_001fcac4_0x1fcac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcac4_0x1fcac4");
#endif

    ctx->pc = 0x1fcac4u;

    // 0x1fcac4: 0x8fb3002c  lw          $s3, 0x2C($sp)
    ctx->pc = 0x1fcac4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1fcac8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1fcac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1fcacc: 0x8fb50058  lw          $s5, 0x58($sp)
    ctx->pc = 0x1fcaccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->pc = 0x1fcad0u;
}
