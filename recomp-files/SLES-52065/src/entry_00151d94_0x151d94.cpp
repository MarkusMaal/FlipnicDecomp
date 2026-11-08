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

// Function: entry_00151d94
// Address: 0x151d94 - 0x151dac
void entry_00151d94_0x151d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151d94_0x151d94");
#endif

    ctx->pc = 0x151d94u;

    // 0x151d94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x151d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151d98: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x151d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x151d9c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x151d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x151da0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x151da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x151da4: 0x84520008  lh          $s2, 0x8($v0)
    ctx->pc = 0x151da4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x151da8: 0x0  nop
    ctx->pc = 0x151da8u;
    // NOP
    ctx->pc = 0x151dacu;
}
