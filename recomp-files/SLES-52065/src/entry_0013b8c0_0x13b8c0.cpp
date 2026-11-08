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

// Function: entry_0013b8c0
// Address: 0x13b8c0 - 0x13b8c4
void entry_0013b8c0_0x13b8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b8c0_0x13b8c0");
#endif

    ctx->pc = 0x13b8c0u;

    // 0x13b8c0: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x13b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    ctx->pc = 0x13b8c4u;
}
