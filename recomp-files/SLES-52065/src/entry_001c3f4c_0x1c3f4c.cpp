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

// Function: entry_001c3f4c
// Address: 0x1c3f4c - 0x1c3f50
void entry_001c3f4c_0x1c3f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3f4c_0x1c3f4c");
#endif

    ctx->pc = 0x1c3f4cu;

    // 0x1c3f4c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c3f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1c3f50u;
}
