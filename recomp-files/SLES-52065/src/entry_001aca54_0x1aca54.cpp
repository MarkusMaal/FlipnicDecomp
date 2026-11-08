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

// Function: entry_001aca54
// Address: 0x1aca54 - 0x1aca58
void entry_001aca54_0x1aca54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aca54_0x1aca54");
#endif

    ctx->pc = 0x1aca54u;

    // 0x1aca54: 0xa202001c  sb          $v0, 0x1C($s0)
    ctx->pc = 0x1aca54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1aca58u;
}
