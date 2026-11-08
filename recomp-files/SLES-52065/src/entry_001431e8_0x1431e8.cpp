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

// Function: entry_001431e8
// Address: 0x1431e8 - 0x1431ec
void entry_001431e8_0x1431e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001431e8_0x1431e8");
#endif

    ctx->pc = 0x1431e8u;

    // 0x1431e8: 0xa083002b  sb          $v1, 0x2B($a0)
    ctx->pc = 0x1431e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 43), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1431ecu;
}
