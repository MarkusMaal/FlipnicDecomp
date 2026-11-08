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

// Function: entry_001fc304
// Address: 0x1fc304 - 0x1fc30c
void entry_001fc304_0x1fc304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc304_0x1fc304");
#endif

    ctx->pc = 0x1fc304u;

    // 0x1fc304: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fc304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fc308: 0x24554ef0  addiu       $s5, $v0, 0x4EF0
    ctx->pc = 0x1fc308u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 20208));
    ctx->pc = 0x1fc30cu;
}
