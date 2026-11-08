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

// Function: entry_001b3ef8
// Address: 0x1b3ef8 - 0x1b3efc
void entry_001b3ef8_0x1b3ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3ef8_0x1b3ef8");
#endif

    ctx->pc = 0x1b3ef8u;

    // 0x1b3ef8: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x1b3ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1b3efcu;
}
