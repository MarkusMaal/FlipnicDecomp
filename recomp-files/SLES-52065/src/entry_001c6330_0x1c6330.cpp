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

// Function: entry_001c6330
// Address: 0x1c6330 - 0x1c6334
void entry_001c6330_0x1c6330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6330_0x1c6330");
#endif

    ctx->pc = 0x1c6330u;

    // 0x1c6330: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x1c6330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    ctx->pc = 0x1c6334u;
}
