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

// Function: entry_001c4fb0
// Address: 0x1c4fb0 - 0x1c4fb4
void entry_001c4fb0_0x1c4fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4fb0_0x1c4fb0");
#endif

    ctx->pc = 0x1c4fb0u;

    // 0x1c4fb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c4fb4u;
}
