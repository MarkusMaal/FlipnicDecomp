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

// Function: entry_001c6f7c
// Address: 0x1c6f7c - 0x1c6f80
void entry_001c6f7c_0x1c6f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6f7c_0x1c6f7c");
#endif

    ctx->pc = 0x1c6f7cu;

    // 0x1c6f7c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1c6f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x1c6f80u;
}
