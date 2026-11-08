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

// Function: entry_001d3eec
// Address: 0x1d3eec - 0x1d3ef0
void entry_001d3eec_0x1d3eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3eec_0x1d3eec");
#endif

    ctx->pc = 0x1d3eecu;

    // 0x1d3eec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d3eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1d3ef0u;
}
