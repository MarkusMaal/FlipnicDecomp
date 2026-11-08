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

// Function: entry_001b7fd0
// Address: 0x1b7fd0 - 0x1b7fd8
void entry_001b7fd0_0x1b7fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7fd0_0x1b7fd0");
#endif

    ctx->pc = 0x1b7fd0u;

    // 0x1b7fd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b7fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7fd4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1b7fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->pc = 0x1b7fd8u;
}
