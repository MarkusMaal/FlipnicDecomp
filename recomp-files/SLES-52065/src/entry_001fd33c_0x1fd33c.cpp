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

// Function: entry_001fd33c
// Address: 0x1fd33c - 0x1fd340
void entry_001fd33c_0x1fd33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd33c_0x1fd33c");
#endif

    ctx->pc = 0x1fd33cu;

    // 0x1fd33c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1fd33cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x1fd340u;
}
