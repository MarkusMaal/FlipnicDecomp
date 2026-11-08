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

// Function: entry_001ac910
// Address: 0x1ac910 - 0x1ac914
void entry_001ac910_0x1ac910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac910_0x1ac910");
#endif

    ctx->pc = 0x1ac910u;

    // 0x1ac910: 0xa22306da  sb          $v1, 0x6DA($s1)
    ctx->pc = 0x1ac910u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1754), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1ac914u;
}
