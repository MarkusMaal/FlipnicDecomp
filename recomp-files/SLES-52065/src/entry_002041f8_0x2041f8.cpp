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

// Function: entry_002041f8
// Address: 0x2041f8 - 0x2041fc
void entry_002041f8_0x2041f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002041f8_0x2041f8");
#endif

    ctx->pc = 0x2041f8u;

    // 0x2041f8: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x2041f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2041fcu;
}
