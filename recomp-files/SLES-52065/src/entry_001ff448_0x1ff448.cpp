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

// Function: entry_001ff448
// Address: 0x1ff448 - 0x1ff44c
void entry_001ff448_0x1ff448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff448_0x1ff448");
#endif

    ctx->pc = 0x1ff448u;

    // 0x1ff448: 0x2683d9c8  addiu       $v1, $s4, -0x2638
    ctx->pc = 0x1ff448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
    ctx->pc = 0x1ff44cu;
}
