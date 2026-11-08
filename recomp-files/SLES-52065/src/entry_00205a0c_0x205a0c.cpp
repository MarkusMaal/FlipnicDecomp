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

// Function: entry_00205a0c
// Address: 0x205a0c - 0x205a10
void entry_00205a0c_0x205a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205a0c_0x205a0c");
#endif

    ctx->pc = 0x205a0cu;

    // 0x205a0c: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x205a0cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    ctx->pc = 0x205a10u;
}
