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

// Function: entry_001cc58c
// Address: 0x1cc58c - 0x1cc5b8
void entry_001cc58c_0x1cc58c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc58c_0x1cc58c");
#endif

    ctx->pc = 0x1cc58cu;

    // 0x1cc58c: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cc58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cc590: 0x8c24c6f4  lw          $a0, -0x390C($at)
    ctx->pc = 0x1cc590u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22C6F4u));
    // 0x1cc594: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1cc594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1cc598: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1cc598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cc59c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cc59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cc5a0: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1cc5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1cc5a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cc5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cc5a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1cc5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cc5ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cc5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cc5b0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1cc5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1cc5b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cc5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1cc5b8u;
}
