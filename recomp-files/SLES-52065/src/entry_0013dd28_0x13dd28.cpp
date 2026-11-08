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

// Function: entry_0013dd28
// Address: 0x13dd28 - 0x13dd3c
void entry_0013dd28_0x13dd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dd28_0x13dd28");
#endif

    ctx->pc = 0x13dd28u;

    // 0x13dd28: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x13dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x13dd2c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x13dd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13dd30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13dd34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13dd38: 0x0  nop
    ctx->pc = 0x13dd38u;
    // NOP
    ctx->pc = 0x13dd3cu;
}
