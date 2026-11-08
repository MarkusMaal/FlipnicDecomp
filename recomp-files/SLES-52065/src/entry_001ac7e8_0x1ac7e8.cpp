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

// Function: entry_001ac7e8
// Address: 0x1ac7e8 - 0x1ac7ec
void entry_001ac7e8_0x1ac7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac7e8_0x1ac7e8");
#endif

    ctx->pc = 0x1ac7e8u;

    // 0x1ac7e8: 0x8e2406f0  lw          $a0, 0x6F0($s1)
    ctx->pc = 0x1ac7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
    ctx->pc = 0x1ac7ecu;
}
