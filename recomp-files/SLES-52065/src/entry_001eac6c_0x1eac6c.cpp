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

// Function: entry_001eac6c
// Address: 0x1eac6c - 0x1eac74
void entry_001eac6c_0x1eac6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eac6c_0x1eac6c");
#endif

    ctx->pc = 0x1eac6cu;

    // 0x1eac6c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1eac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1eac70: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1eac70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1eac74u;
}
