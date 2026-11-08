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

// Function: entry_001dc568
// Address: 0x1dc568 - 0x1dc56c
void entry_001dc568_0x1dc568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc568_0x1dc568");
#endif

    ctx->pc = 0x1dc568u;

    // 0x1dc568: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x1dc568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x1dc56cu;
}
