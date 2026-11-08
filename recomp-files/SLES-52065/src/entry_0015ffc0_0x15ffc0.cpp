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

// Function: entry_0015ffc0
// Address: 0x15ffc0 - 0x15ffc4
void entry_0015ffc0_0x15ffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ffc0_0x15ffc0");
#endif

    ctx->pc = 0x15ffc0u;

    // 0x15ffc0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15ffc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x15ffc4u;
}
