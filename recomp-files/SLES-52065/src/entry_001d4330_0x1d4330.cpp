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

// Function: entry_001d4330
// Address: 0x1d4330 - 0x1d4334
void entry_001d4330_0x1d4330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4330_0x1d4330");
#endif

    ctx->pc = 0x1d4330u;

    // 0x1d4330: 0x2484028c  addiu       $a0, $a0, 0x28C
    ctx->pc = 0x1d4330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 652));
    ctx->pc = 0x1d4334u;
}
