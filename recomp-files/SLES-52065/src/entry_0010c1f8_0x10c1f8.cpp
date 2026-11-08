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

// Function: entry_0010c1f8
// Address: 0x10c1f8 - 0x10c1fc
void entry_0010c1f8_0x10c1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c1f8_0x10c1f8");
#endif

    ctx->pc = 0x10c1f8u;

    // 0x10c1f8: 0xae5101d4  sw          $s1, 0x1D4($s2)
    ctx->pc = 0x10c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 17));
    ctx->pc = 0x10c1fcu;
}
