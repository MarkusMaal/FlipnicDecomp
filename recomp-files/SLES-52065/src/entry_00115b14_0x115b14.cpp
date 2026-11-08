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

// Function: entry_00115b14
// Address: 0x115b14 - 0x115b48
void entry_00115b14_0x115b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115b14_0x115b14");
#endif

    ctx->pc = 0x115b14u;

    // 0x115b14: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x115b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x115b18: 0x8e450254  lw          $a1, 0x254($s2)
    ctx->pc = 0x115b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
    // 0x115b1c: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x115b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
    // 0x115b20: 0x22380  sll         $a0, $v0, 14
    ctx->pc = 0x115b20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x115b24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115b28: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x115b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x115b2c: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x115b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x115b30: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x115b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x115b34: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x115b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x115b38: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x115b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x115b3c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x115b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x115b40: 0xae430254  sw          $v1, 0x254($s2)
    ctx->pc = 0x115b40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 596), GPR_U32(ctx, 3));
    // 0x115b44: 0xae420260  sw          $v0, 0x260($s2)
    ctx->pc = 0x115b44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
    ctx->pc = 0x115b48u;
}
