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

// Function: entry_00208f44
// Address: 0x208f44 - 0x208f48
void entry_00208f44_0x208f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208f44_0x208f44");
#endif

    ctx->pc = 0x208f44u;

    // 0x208f44: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x208f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    ctx->pc = 0x208f48u;
}
