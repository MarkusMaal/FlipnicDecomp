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

// Function: entry_001d1dac
// Address: 0x1d1dac - 0x1d1dd8
void entry_001d1dac_0x1d1dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1dac_0x1d1dac");
#endif

    ctx->pc = 0x1d1dacu;

    // 0x1d1dac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1db0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d1db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1db4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1db8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1dbc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d1dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d1dc0: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1d1dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x1d1dc4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d1dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1dc8: 0x8c24fd10  lw          $a0, -0x2F0($at)
    ctx->pc = 0x1d1dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966544)));
    // 0x1d1dcc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1dd0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d1dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d1dd4: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x1d1dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
    ctx->pc = 0x1d1dd8u;
}
