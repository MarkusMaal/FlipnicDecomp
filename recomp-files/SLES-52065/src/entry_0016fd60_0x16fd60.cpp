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

// Function: entry_0016fd60
// Address: 0x16fd60 - 0x16fd64
void entry_0016fd60_0x16fd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fd60_0x16fd60");
#endif

    ctx->pc = 0x16fd60u;

    // 0x16fd60: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x16fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->pc = 0x16fd64u;
}
