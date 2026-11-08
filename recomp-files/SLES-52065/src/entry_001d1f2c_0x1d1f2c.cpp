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

// Function: entry_001d1f2c
// Address: 0x1d1f2c - 0x1d1f54
void entry_001d1f2c_0x1d1f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1f2c_0x1d1f2c");
#endif

    ctx->pc = 0x1d1f2cu;

    // 0x1d1f2c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d1f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1f30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d1f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1f34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1f38: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d1f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d1f3c: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1d1f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x1d1f40: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d1f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1f44: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x1d1f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x1d1f48: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1f4c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d1f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d1f50: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x1d1f50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
    ctx->pc = 0x1d1f54u;
}
