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

// Function: entry_001ef59c
// Address: 0x1ef59c - 0x1ef5a0
void entry_001ef59c_0x1ef59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef59c_0x1ef59c");
#endif

    ctx->pc = 0x1ef59cu;

    // 0x1ef59c: 0x2670f900  addiu       $s0, $s3, -0x700
    ctx->pc = 0x1ef59cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965504));
    ctx->pc = 0x1ef5a0u;
}
