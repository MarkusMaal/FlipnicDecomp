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

// Function: entry_001b32e4
// Address: 0x1b32e4 - 0x1b32e8
void entry_001b32e4_0x1b32e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b32e4_0x1b32e4");
#endif

    ctx->pc = 0x1b32e4u;

    // 0x1b32e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b32e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x1b32e8u;
}
