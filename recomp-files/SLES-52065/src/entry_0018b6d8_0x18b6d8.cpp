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

// Function: entry_0018b6d8
// Address: 0x18b6d8 - 0x18b6f0
void entry_0018b6d8_0x18b6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b6d8_0x18b6d8");
#endif

    ctx->pc = 0x18b6d8u;

    // 0x18b6d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x18b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18b6dc: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x18b6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x18b6e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18b6e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b6e8: 0x84550008  lh          $s5, 0x8($v0)
    ctx->pc = 0x18b6e8u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18b6ec: 0x0  nop
    ctx->pc = 0x18b6ecu;
    // NOP
    ctx->pc = 0x18b6f0u;
}
