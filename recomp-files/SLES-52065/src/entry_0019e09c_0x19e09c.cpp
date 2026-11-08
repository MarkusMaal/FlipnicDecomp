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

// Function: entry_0019e09c
// Address: 0x19e09c - 0x19e0a0
void entry_0019e09c_0x19e09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e09c_0x19e09c");
#endif

    ctx->pc = 0x19e09cu;

    // 0x19e09c: 0x8ea30320  lw          $v1, 0x320($s5)
    ctx->pc = 0x19e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 800)));
    ctx->pc = 0x19e0a0u;
}
