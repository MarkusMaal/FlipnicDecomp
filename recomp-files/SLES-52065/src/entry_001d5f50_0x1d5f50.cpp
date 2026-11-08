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

// Function: entry_001d5f50
// Address: 0x1d5f50 - 0x1d5f54
void entry_001d5f50_0x1d5f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5f50_0x1d5f50");
#endif

    ctx->pc = 0x1d5f50u;

    // 0x1d5f50: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d5f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    ctx->pc = 0x1d5f54u;
}
