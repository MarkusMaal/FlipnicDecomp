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

// Function: entry_001ff1f0
// Address: 0x1ff1f0 - 0x1ff1f4
void entry_001ff1f0_0x1ff1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff1f0_0x1ff1f0");
#endif

    ctx->pc = 0x1ff1f0u;

    // 0x1ff1f0: 0x2406007e  addiu       $a2, $zero, 0x7E
    ctx->pc = 0x1ff1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    ctx->pc = 0x1ff1f4u;
}
