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

// Function: entry_001ed98c
// Address: 0x1ed98c - 0x1ed990
void entry_001ed98c_0x1ed98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed98c_0x1ed98c");
#endif

    ctx->pc = 0x1ed98cu;

    // 0x1ed98c: 0x3c100002  lui         $s0, 0x2
    ctx->pc = 0x1ed98cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2 << 16));
    ctx->pc = 0x1ed990u;
}
