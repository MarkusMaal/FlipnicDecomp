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

// Function: entry_001106d8
// Address: 0x1106d8 - 0x1106e0
void entry_001106d8_0x1106d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001106d8_0x1106d8");
#endif

    ctx->pc = 0x1106d8u;

    // 0x1106d8: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x1106d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1106dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1106dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1106e0u;
}
