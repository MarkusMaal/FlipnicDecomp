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

// Function: entry_001ed0f4
// Address: 0x1ed0f4 - 0x1ed0f8
void entry_001ed0f4_0x1ed0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed0f4_0x1ed0f4");
#endif

    ctx->pc = 0x1ed0f4u;

    // 0x1ed0f4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1ed0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ed0f8u;
}
