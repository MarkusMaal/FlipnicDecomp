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

// Function: entry_00147c94
// Address: 0x147c94 - 0x147cf4
void entry_00147c94_0x147c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147c94_0x147c94");
#endif

    ctx->pc = 0x147c94u;

    // 0x147c94: 0x908c0010  lbu         $t4, 0x10($a0)
    ctx->pc = 0x147c94u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147c98: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x147c98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x147c9c: 0x300b0003  andi        $t3, $zero, 0x3
    ctx->pc = 0x147c9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x147ca0: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x147ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x147ca4: 0x64090004  daddiu      $t1, $zero, 0x4
    ctx->pc = 0x147ca4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x147ca8: 0x2406ffcf  addiu       $a2, $zero, -0x31
    ctx->pc = 0x147ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x147cac: 0xb3900  sll         $a3, $t3, 4
    ctx->pc = 0x147cacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x147cb0: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x147cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x147cb4: 0x64050040  daddiu      $a1, $zero, 0x40
    ctx->pc = 0x147cb4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x147cb8: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x147cb8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x147cbc: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x147cbcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x147cc0: 0xa08a0010  sb          $t2, 0x10($a0)
    ctx->pc = 0x147cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 10));
    // 0x147cc4: 0x908a0010  lbu         $t2, 0x10($a0)
    ctx->pc = 0x147cc4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147cc8: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x147cc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x147ccc: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x147cccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x147cd0: 0xa0880010  sb          $t0, 0x10($a0)
    ctx->pc = 0x147cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 8));
    // 0x147cd4: 0x90880010  lbu         $t0, 0x10($a0)
    ctx->pc = 0x147cd4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147cd8: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x147cd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x147cdc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x147cdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x147ce0: 0xa0860010  sb          $a2, 0x10($a0)
    ctx->pc = 0x147ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x147ce4: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x147ce4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147ce8: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x147ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x147cec: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x147cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x147cf0: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x147cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x147cf4u;
}
