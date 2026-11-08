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

// Function: entry_0012e4c0
// Address: 0x12e4c0 - 0x12e4c8
void entry_0012e4c0_0x12e4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e4c0_0x12e4c0");
#endif

    ctx->pc = 0x12e4c0u;

    // 0x12e4c0: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x12e4c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x12e4c4: 0x0  nop
    ctx->pc = 0x12e4c4u;
    // NOP
    ctx->pc = 0x12e4c8u;
}
