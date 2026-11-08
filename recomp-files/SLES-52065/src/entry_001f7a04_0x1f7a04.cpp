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

// Function: entry_001f7a04
// Address: 0x1f7a04 - 0x1f7a08
void entry_001f7a04_0x1f7a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7a04_0x1f7a04");
#endif

    ctx->pc = 0x1f7a04u;

    // 0x1f7a04: 0x2630d680  addiu       $s0, $s1, -0x2980
    ctx->pc = 0x1f7a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    ctx->pc = 0x1f7a08u;
}
