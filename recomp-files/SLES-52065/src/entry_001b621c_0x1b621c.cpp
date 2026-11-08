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

// Function: entry_001b621c
// Address: 0x1b621c - 0x1b6220
void entry_001b621c_0x1b621c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b621c_0x1b621c");
#endif

    ctx->pc = 0x1b621cu;

    // 0x1b621c: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x1b621cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    ctx->pc = 0x1b6220u;
}
