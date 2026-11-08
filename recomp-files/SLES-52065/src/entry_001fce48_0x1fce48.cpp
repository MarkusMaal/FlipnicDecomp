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

// Function: entry_001fce48
// Address: 0x1fce48 - 0x1fce4c
void entry_001fce48_0x1fce48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fce48_0x1fce48");
#endif

    ctx->pc = 0x1fce48u;

    // 0x1fce48: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1fce48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->pc = 0x1fce4cu;
}
