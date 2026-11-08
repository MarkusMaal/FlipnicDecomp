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

// Function: entry_001e010c
// Address: 0x1e010c - 0x1e0110
void entry_001e010c_0x1e010c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e010c_0x1e010c");
#endif

    ctx->pc = 0x1e010cu;

    // 0x1e010c: 0x8ec9a088  lw          $t1, -0x5F78($s6)
    ctx->pc = 0x1e010cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294942856)));
    ctx->pc = 0x1e0110u;
}
