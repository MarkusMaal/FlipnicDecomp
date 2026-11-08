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

// Function: entry_001706a0
// Address: 0x1706a0 - 0x1706ac
void entry_001706a0_0x1706a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001706a0_0x1706a0");
#endif

    ctx->pc = 0x1706a0u;

    // 0x1706a0: 0x8c830238  lw          $v1, 0x238($a0)
    ctx->pc = 0x1706a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 568)));
    // 0x1706a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1706a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1706a8: 0xac830238  sw          $v1, 0x238($a0)
    ctx->pc = 0x1706a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 3));
    ctx->pc = 0x1706acu;
}
