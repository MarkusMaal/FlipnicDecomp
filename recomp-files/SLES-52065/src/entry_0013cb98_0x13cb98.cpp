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

// Function: entry_0013cb98
// Address: 0x13cb98 - 0x13cb9c
void entry_0013cb98_0x13cb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cb98_0x13cb98");
#endif

    ctx->pc = 0x13cb98u;

    // 0x13cb98: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x13cb98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x13cb9cu;
}
