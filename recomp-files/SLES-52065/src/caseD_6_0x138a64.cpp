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

// Function: caseD_6
// Address: 0x138a64 - 0x138a74
void caseD_6_0x138a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x138a64");
#endif

    ctx->pc = 0x138a64u;

    // 0x138a64: 0x8f8384d8  lw          $v1, -0x7B28($gp)
    ctx->pc = 0x138a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935768)));
    // 0x138a68: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x138a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x138a6c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x138a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x138a70: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x138a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    ctx->pc = 0x138a74u;
}
