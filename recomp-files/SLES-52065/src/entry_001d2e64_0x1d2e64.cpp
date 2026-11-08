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

// Function: entry_001d2e64
// Address: 0x1d2e64 - 0x1d2e78
void entry_001d2e64_0x1d2e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2e64_0x1d2e64");
#endif

    ctx->pc = 0x1d2e64u;

    // 0x1d2e64: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1d2e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d2e68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d2e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2e6c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2e70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2e74: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1d2e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x1d2e78u;
}
