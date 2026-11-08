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

// Function: entry_001cb058
// Address: 0x1cb058 - 0x1cb05c
void entry_001cb058_0x1cb058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb058_0x1cb058");
#endif

    ctx->pc = 0x1cb058u;

    // 0x1cb058: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x1cb058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->pc = 0x1cb05cu;
}
