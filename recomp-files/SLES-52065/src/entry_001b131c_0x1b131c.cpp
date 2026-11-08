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

// Function: entry_001b131c
// Address: 0x1b131c - 0x1b1320
void entry_001b131c_0x1b131c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b131c_0x1b131c");
#endif

    ctx->pc = 0x1b131cu;

    // 0x1b131c: 0x26840118  addiu       $a0, $s4, 0x118
    ctx->pc = 0x1b131cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 280));
    ctx->pc = 0x1b1320u;
}
