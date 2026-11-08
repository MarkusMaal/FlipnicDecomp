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

// Function: entry_001a397c
// Address: 0x1a397c - 0x1a3988
void entry_001a397c_0x1a397c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a397c_0x1a397c");
#endif

    ctx->pc = 0x1a397cu;

    // 0x1a397c: 0x8e320688  lw          $s2, 0x688($s1)
    ctx->pc = 0x1a397cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1672)));
    // 0x1a3980: 0x0  nop
    ctx->pc = 0x1a3980u;
    // NOP
    // 0x1a3984: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x1a3984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    ctx->pc = 0x1a3988u;
}
