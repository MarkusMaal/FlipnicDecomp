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

// Function: entry_001ecb64
// Address: 0x1ecb64 - 0x1ecb68
void entry_001ecb64_0x1ecb64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecb64_0x1ecb64");
#endif

    ctx->pc = 0x1ecb64u;

    // 0x1ecb64: 0x26b0c3d0  addiu       $s0, $s5, -0x3C30
    ctx->pc = 0x1ecb64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951888));
    ctx->pc = 0x1ecb68u;
}
