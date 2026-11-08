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

// Function: entry_001b3d74
// Address: 0x1b3d74 - 0x1b3d8c
void entry_001b3d74_0x1b3d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3d74_0x1b3d74");
#endif

    ctx->pc = 0x1b3d74u;

    // 0x1b3d74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b3d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3d78: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1b3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b3d7c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b3d80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b3d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3d84: 0x84520008  lh          $s2, 0x8($v0)
    ctx->pc = 0x1b3d84u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b3d88: 0x0  nop
    ctx->pc = 0x1b3d88u;
    // NOP
    ctx->pc = 0x1b3d8cu;
}
