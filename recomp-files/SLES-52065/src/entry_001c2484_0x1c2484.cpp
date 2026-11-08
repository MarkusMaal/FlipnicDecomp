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

// Function: entry_001c2484
// Address: 0x1c2484 - 0x1c2488
void entry_001c2484_0x1c2484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2484_0x1c2484");
#endif

    ctx->pc = 0x1c2484u;

    // 0x1c2484: 0x8e230248  lw          $v1, 0x248($s1)
    ctx->pc = 0x1c2484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    ctx->pc = 0x1c2488u;
}
