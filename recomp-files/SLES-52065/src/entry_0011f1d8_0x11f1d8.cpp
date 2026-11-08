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

// Function: entry_0011f1d8
// Address: 0x11f1d8 - 0x11f1dc
void entry_0011f1d8_0x11f1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f1d8_0x11f1d8");
#endif

    ctx->pc = 0x11f1d8u;

    // 0x11f1d8: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x11f1d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->pc = 0x11f1dcu;
}
