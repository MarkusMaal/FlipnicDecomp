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

// Function: entry_001ed2cc
// Address: 0x1ed2cc - 0x1ed2d0
void entry_001ed2cc_0x1ed2cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed2cc_0x1ed2cc");
#endif

    ctx->pc = 0x1ed2ccu;

    // 0x1ed2cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ed2ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1ed2d0u;
}
