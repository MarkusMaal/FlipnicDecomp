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

// Function: entry_001f4484
// Address: 0x1f4484 - 0x1f4488
void entry_001f4484_0x1f4484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4484_0x1f4484");
#endif

    ctx->pc = 0x1f4484u;

    // 0x1f4484: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x1f4484u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    ctx->pc = 0x1f4488u;
}
