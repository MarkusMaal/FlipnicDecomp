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

// Function: entry_002075e0
// Address: 0x2075e0 - 0x2075e4
void entry_002075e0_0x2075e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002075e0_0x2075e0");
#endif

    ctx->pc = 0x2075e0u;

    // 0x2075e0: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2075e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    ctx->pc = 0x2075e4u;
}
