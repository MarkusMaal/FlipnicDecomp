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

// Function: entry_001ab5d8
// Address: 0x1ab5d8 - 0x1ab5dc
void entry_001ab5d8_0x1ab5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab5d8_0x1ab5d8");
#endif

    ctx->pc = 0x1ab5d8u;

    // 0x1ab5d8: 0x8e8406f0  lw          $a0, 0x6F0($s4)
    ctx->pc = 0x1ab5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1776)));
    ctx->pc = 0x1ab5dcu;
}
