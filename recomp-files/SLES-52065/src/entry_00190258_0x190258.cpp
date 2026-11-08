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

// Function: entry_00190258
// Address: 0x190258 - 0x190270
void entry_00190258_0x190258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190258_0x190258");
#endif

    ctx->pc = 0x190258u;

    // 0x190258: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x190258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19025c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x19025cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190260: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x190260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x190264: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x190264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x190268: 0x84710008  lh          $s1, 0x8($v1)
    ctx->pc = 0x190268u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19026c: 0x0  nop
    ctx->pc = 0x19026cu;
    // NOP
    ctx->pc = 0x190270u;
}
