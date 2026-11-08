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

// Function: entry_001e4b88
// Address: 0x1e4b88 - 0x1e4b9c
void entry_001e4b88_0x1e4b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4b88_0x1e4b88");
#endif

    ctx->pc = 0x1e4b88u;

    // 0x1e4b88: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1e4b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1e4b8c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e4b90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e4b94: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1e4b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1e4b98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1e4b9cu;
}
