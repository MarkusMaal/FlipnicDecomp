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

// Function: entry_00195b7c
// Address: 0x195b7c - 0x195b98
void entry_00195b7c_0x195b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195b7c_0x195b7c");
#endif

    ctx->pc = 0x195b7cu;

    // 0x195b7c: 0x0  nop
    ctx->pc = 0x195b7cu;
    // NOP
    // 0x195b80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x195b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195b84: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x195b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x195b88: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x195b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x195b8c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x195b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x195b90: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x195b90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x195b94: 0x0  nop
    ctx->pc = 0x195b94u;
    // NOP
    ctx->pc = 0x195b98u;
}
