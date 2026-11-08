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

// Function: entry_0011a944
// Address: 0x11a944 - 0x11a94c
void entry_0011a944_0x11a944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a944_0x11a944");
#endif

    ctx->pc = 0x11a944u;

    // 0x11a944: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11a944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a948: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x11a948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x11a94cu;
}
