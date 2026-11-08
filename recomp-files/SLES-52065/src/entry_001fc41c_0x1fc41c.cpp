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

// Function: entry_001fc41c
// Address: 0x1fc41c - 0x1fc428
void entry_001fc41c_0x1fc41c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc41c_0x1fc41c");
#endif

    ctx->pc = 0x1fc41cu;

    // 0x1fc41c: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x1fc41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1fc420: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1fc420u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1fc424: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x1fc424u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    ctx->pc = 0x1fc428u;
}
