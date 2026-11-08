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

// Function: entry_00115b48
// Address: 0x115b48 - 0x115b80
void entry_00115b48_0x115b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115b48_0x115b48");
#endif

    ctx->pc = 0x115b48u;

    // 0x115b48: 0x8e440254  lw          $a0, 0x254($s2)
    ctx->pc = 0x115b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
    // 0x115b4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115b50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x115b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x115b54: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x115b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x115b58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x115b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x115b5c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x115b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x115b60: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x115b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x115b64: 0x31bbe  dsrl32      $v1, $v1, 14
    ctx->pc = 0x115b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 14));
    // 0x115b68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x115b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x115b6c: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x115b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x115b70: 0x31bbe  dsrl32      $v1, $v1, 14
    ctx->pc = 0x115b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 14));
    // 0x115b74: 0x31b80  sll         $v1, $v1, 14
    ctx->pc = 0x115b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
    // 0x115b78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x115b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x115b7c: 0xae420254  sw          $v0, 0x254($s2)
    ctx->pc = 0x115b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 596), GPR_U32(ctx, 2));
    ctx->pc = 0x115b80u;
}
