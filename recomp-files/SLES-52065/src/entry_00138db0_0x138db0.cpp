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

// Function: entry_00138db0
// Address: 0x138db0 - 0x138db8
void entry_00138db0_0x138db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138db0_0x138db0");
#endif

    ctx->pc = 0x138db0u;

    // 0x138db0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x138db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x138db4: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x138db4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x138db8u;
}
