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

// Function: entry_00102ee8
// Address: 0x102ee8 - 0x102f00
void entry_00102ee8_0x102ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102ee8_0x102ee8");
#endif

    ctx->pc = 0x102ee8u;

    // 0x102ee8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x102ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102eec: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x102eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102ef0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x102ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x102ef4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x102ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x102ef8: 0x84650008  lh          $a1, 0x8($v1)
    ctx->pc = 0x102ef8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x102efc: 0x0  nop
    ctx->pc = 0x102efcu;
    // NOP
    ctx->pc = 0x102f00u;
}
