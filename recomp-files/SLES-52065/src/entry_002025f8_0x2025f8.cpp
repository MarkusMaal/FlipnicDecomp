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

// Function: entry_002025f8
// Address: 0x2025f8 - 0x2025fc
void entry_002025f8_0x2025f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002025f8_0x2025f8");
#endif

    ctx->pc = 0x2025f8u;

    // 0x2025f8: 0x2a61023  subu        $v0, $s5, $a2
    ctx->pc = 0x2025f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    ctx->pc = 0x2025fcu;
}
