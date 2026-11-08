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

// Function: entry_0012e500
// Address: 0x12e500 - 0x12e504
void entry_0012e500_0x12e500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e500_0x12e500");
#endif

    ctx->pc = 0x12e500u;

    // 0x12e500: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x12e500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    ctx->pc = 0x12e504u;
}
