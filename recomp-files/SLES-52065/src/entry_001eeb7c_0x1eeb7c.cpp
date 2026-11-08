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

// Function: entry_001eeb7c
// Address: 0x1eeb7c - 0x1eeb80
void entry_001eeb7c_0x1eeb7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eeb7c_0x1eeb7c");
#endif

    ctx->pc = 0x1eeb7cu;

    // 0x1eeb7c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1eeb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x1eeb80u;
}
