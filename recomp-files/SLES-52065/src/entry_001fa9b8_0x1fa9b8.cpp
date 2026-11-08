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

// Function: entry_001fa9b8
// Address: 0x1fa9b8 - 0x1fa9bc
void entry_001fa9b8_0x1fa9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa9b8_0x1fa9b8");
#endif

    ctx->pc = 0x1fa9b8u;

    // 0x1fa9b8: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x1fa9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->pc = 0x1fa9bcu;
}
