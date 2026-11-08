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

// Function: entry_0010929c
// Address: 0x10929c - 0x1092a0
void entry_0010929c_0x10929c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010929c_0x10929c");
#endif

    ctx->pc = 0x10929cu;

    // 0x10929c: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x10929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    ctx->pc = 0x1092a0u;
}
