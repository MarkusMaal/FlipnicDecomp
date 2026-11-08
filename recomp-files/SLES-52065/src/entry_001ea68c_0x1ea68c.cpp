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

// Function: entry_001ea68c
// Address: 0x1ea68c - 0x1ea6a0
void entry_001ea68c_0x1ea68c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea68c_0x1ea68c");
#endif

    ctx->pc = 0x1ea68cu;

    // 0x1ea68c: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1ea68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1ea690: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1ea690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ea694: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1ea694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ea698: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x1ea698u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ea69c: 0x0  nop
    ctx->pc = 0x1ea69cu;
    // NOP
    ctx->pc = 0x1ea6a0u;
}
