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

// Function: entry_001d0078
// Address: 0x1d0078 - 0x1d007c
void entry_001d0078_0x1d0078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0078_0x1d0078");
#endif

    ctx->pc = 0x1d0078u;

    // 0x1d0078: 0xa2200061  sb          $zero, 0x61($s1)
    ctx->pc = 0x1d0078u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1d007cu;
}
