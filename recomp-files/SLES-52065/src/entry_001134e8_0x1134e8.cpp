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

// Function: entry_001134e8
// Address: 0x1134e8 - 0x1134f0
void entry_001134e8_0x1134e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001134e8_0x1134e8");
#endif

    ctx->pc = 0x1134e8u;

    // 0x1134e8: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x1134e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x1134ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1134ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1134f0u;
}
