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

// Function: entry_001fef04
// Address: 0x1fef04 - 0x1fef08
void entry_001fef04_0x1fef04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fef04_0x1fef04");
#endif

    ctx->pc = 0x1fef04u;

    // 0x1fef04: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x1fef04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1fef08u;
}
