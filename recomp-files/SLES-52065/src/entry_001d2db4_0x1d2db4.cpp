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

// Function: entry_001d2db4
// Address: 0x1d2db4 - 0x1d2dd8
void entry_001d2db4_0x1d2db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2db4_0x1d2db4");
#endif

    ctx->pc = 0x1d2db4u;

    // 0x1d2db4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d2db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d2db8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d2db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d2dbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2dc0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d2dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d2dc4: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1d2dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x1d2dc8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d2dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d2dcc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2dd0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d2dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d2dd4: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1d2dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x1d2dd8u;
}
