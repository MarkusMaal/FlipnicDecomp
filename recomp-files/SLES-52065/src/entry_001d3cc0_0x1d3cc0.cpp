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

// Function: entry_001d3cc0
// Address: 0x1d3cc0 - 0x1d3cc4
void entry_001d3cc0_0x1d3cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3cc0_0x1d3cc0");
#endif

    ctx->pc = 0x1d3cc0u;

    // 0x1d3cc0: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x1d3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    ctx->pc = 0x1d3cc4u;
}
