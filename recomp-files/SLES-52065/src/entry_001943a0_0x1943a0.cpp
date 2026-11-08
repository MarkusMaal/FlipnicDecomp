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

// Function: entry_001943a0
// Address: 0x1943a0 - 0x1943a4
void entry_001943a0_0x1943a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001943a0_0x1943a0");
#endif

    ctx->pc = 0x1943a0u;

    // 0x1943a0: 0x8e900664  lw          $s0, 0x664($s4)
    ctx->pc = 0x1943a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    ctx->pc = 0x1943a4u;
}
