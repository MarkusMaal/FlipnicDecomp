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

// Function: entry_0013cb9c
// Address: 0x13cb9c - 0x13cba0
void entry_0013cb9c_0x13cb9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cb9c_0x13cb9c");
#endif

    ctx->pc = 0x13cb9cu;

    // 0x13cb9c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x13cb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    ctx->pc = 0x13cba0u;
}
