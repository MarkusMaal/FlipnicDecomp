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

// Function: entry_0017b52c
// Address: 0x17b52c - 0x17b530
void entry_0017b52c_0x17b52c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b52c_0x17b52c");
#endif

    ctx->pc = 0x17b52cu;

    // 0x17b52c: 0x8e04041c  lw          $a0, 0x41C($s0)
    ctx->pc = 0x17b52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    ctx->pc = 0x17b530u;
}
