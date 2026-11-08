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

// Function: entry_001e4cb4
// Address: 0x1e4cb4 - 0x1e4cb8
void entry_001e4cb4_0x1e4cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4cb4_0x1e4cb4");
#endif

    ctx->pc = 0x1e4cb4u;

    // 0x1e4cb4: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1e4cb4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1e4cb8u;
}
