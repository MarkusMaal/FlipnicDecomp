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

// Function: entry_0016c84c
// Address: 0x16c84c - 0x16c850
void entry_0016c84c_0x16c84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c84c_0x16c84c");
#endif

    ctx->pc = 0x16c84cu;

    // 0x16c84c: 0x8e2401d4  lw          $a0, 0x1D4($s1)
    ctx->pc = 0x16c84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    ctx->pc = 0x16c850u;
}
