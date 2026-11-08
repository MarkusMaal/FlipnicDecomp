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

// Function: entry_001ab700
// Address: 0x1ab700 - 0x1ab704
void entry_001ab700_0x1ab700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab700_0x1ab700");
#endif

    ctx->pc = 0x1ab700u;

    // 0x1ab700: 0xa28306da  sb          $v1, 0x6DA($s4)
    ctx->pc = 0x1ab700u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1754), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1ab704u;
}
