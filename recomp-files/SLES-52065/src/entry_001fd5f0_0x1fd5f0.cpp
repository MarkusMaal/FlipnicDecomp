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

// Function: entry_001fd5f0
// Address: 0x1fd5f0 - 0x1fd5f4
void entry_001fd5f0_0x1fd5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd5f0_0x1fd5f0");
#endif

    ctx->pc = 0x1fd5f0u;

    // 0x1fd5f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fd5f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fd5f4u;
}
