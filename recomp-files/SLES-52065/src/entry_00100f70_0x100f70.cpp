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

// Function: entry_00100f70
// Address: 0x100f70 - 0x100f88
void entry_00100f70_0x100f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100f70_0x100f70");
#endif

    ctx->pc = 0x100f70u;

    // 0x100f70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x100f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100f74: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x100f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x100f78: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x100f78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x100f7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x100f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x100f80: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x100f80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x100f84: 0x0  nop
    ctx->pc = 0x100f84u;
    // NOP
    ctx->pc = 0x100f88u;
}
