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

// Function: entry_001a8dd0
// Address: 0x1a8dd0 - 0x1a8dd8
void entry_001a8dd0_0x1a8dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8dd0_0x1a8dd0");
#endif

    ctx->pc = 0x1a8dd0u;

    // 0x1a8dd0: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1a8dd0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1a8dd4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1a8dd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->pc = 0x1a8dd8u;
}
