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

// Function: entry_001fed80
// Address: 0x1fed80 - 0x1fed88
void entry_001fed80_0x1fed80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fed80_0x1fed80");
#endif

    ctx->pc = 0x1fed80u;

    // 0x1fed80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fed80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fed84: 0xafc2ddf8  sw          $v0, -0x2208($fp)
    ctx->pc = 0x1fed84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294958584), GPR_U32(ctx, 2));
    ctx->pc = 0x1fed88u;
}
