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

// Function: entry_00133624
// Address: 0x133624 - 0x133688
void entry_00133624_0x133624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133624_0x133624");
#endif

    ctx->pc = 0x133624u;

    // 0x133624: 0x908c0040  lbu         $t4, 0x40($a0)
    ctx->pc = 0x133624u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x133628: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x133628u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x13362c: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x13362cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x133630: 0x640b0002  daddiu      $t3, $zero, 0x2
    ctx->pc = 0x133630u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x133634: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x133634u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x133638: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x133638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x13363c: 0x64090008  daddiu      $t1, $zero, 0x8
    ctx->pc = 0x13363cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x133640: 0x2406ffcf  addiu       $a2, $zero, -0x31
    ctx->pc = 0x133640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x133644: 0x64070020  daddiu      $a3, $zero, 0x20
    ctx->pc = 0x133644u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
    // 0x133648: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x133648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x13364c: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x13364cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x133650: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x133650u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x133654: 0xa08a0040  sb          $t2, 0x40($a0)
    ctx->pc = 0x133654u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 10));
    // 0x133658: 0x908a0040  lbu         $t2, 0x40($a0)
    ctx->pc = 0x133658u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13365c: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x13365cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x133660: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x133660u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x133664: 0xa0880040  sb          $t0, 0x40($a0)
    ctx->pc = 0x133664u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 8));
    // 0x133668: 0x90880040  lbu         $t0, 0x40($a0)
    ctx->pc = 0x133668u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13366c: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x13366cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x133670: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x133670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x133674: 0xa0860040  sb          $a2, 0x40($a0)
    ctx->pc = 0x133674u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x133678: 0x90860040  lbu         $a2, 0x40($a0)
    ctx->pc = 0x133678u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13367c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x13367cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x133680: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x133680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x133684: 0xa0830040  sb          $v1, 0x40($a0)
    ctx->pc = 0x133684u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x133688u;
}
