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

// Function: entry_001fd214
// Address: 0x1fd214 - 0x1fd218
void entry_001fd214_0x1fd214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd214_0x1fd214");
#endif

    ctx->pc = 0x1fd214u;

    // 0x1fd214: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x1fd214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    ctx->pc = 0x1fd218u;
}
