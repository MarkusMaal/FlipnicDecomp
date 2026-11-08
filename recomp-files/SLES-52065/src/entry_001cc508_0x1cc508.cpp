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

// Function: entry_001cc508
// Address: 0x1cc508 - 0x1cc534
void entry_001cc508_0x1cc508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc508_0x1cc508");
#endif

    ctx->pc = 0x1cc508u;

    // 0x1cc508: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cc508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cc50c: 0x8c24c6f4  lw          $a0, -0x390C($at)
    ctx->pc = 0x1cc50cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22C6F4u));
    // 0x1cc510: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1cc510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1cc514: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1cc514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cc518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cc518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cc51c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1cc51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1cc520: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cc520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cc524: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1cc524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cc528: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cc528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cc52c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1cc52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1cc530: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cc530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1cc534u;
}
