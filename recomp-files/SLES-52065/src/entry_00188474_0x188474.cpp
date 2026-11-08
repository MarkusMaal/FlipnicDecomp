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

// Function: entry_00188474
// Address: 0x188474 - 0x18848c
void entry_00188474_0x188474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188474_0x188474");
#endif

    ctx->pc = 0x188474u;

    // 0x188474: 0x8f838384  lw          $v1, -0x7C7C($gp)
    ctx->pc = 0x188474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x188478: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x188478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18847c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18847cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188480: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x188480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x188484: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x188484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x188488: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x188488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x18848cu;
}
