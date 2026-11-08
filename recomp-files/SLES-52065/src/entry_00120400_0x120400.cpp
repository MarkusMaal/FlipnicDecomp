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

// Function: entry_00120400
// Address: 0x120400 - 0x1204a4
void entry_00120400_0x120400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120400_0x120400");
#endif

    ctx->pc = 0x120400u;

    // 0x120400: 0x96870070  lhu         $a3, 0x70($s4)
    ctx->pc = 0x120400u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x120404: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x120404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x120408: 0x32c67fff  andi        $a2, $s6, 0x7FFF
    ctx->pc = 0x120408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)32767);
    // 0x12040c: 0x315b821  addu        $s7, $t8, $s5
    ctx->pc = 0x12040cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x120410: 0x2de2025  or          $a0, $s6, $fp
    ctx->pc = 0x120410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) | GPR_U64(ctx, 30));
    // 0x120414: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x120414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x120418: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x120418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x12041c: 0xa6830070  sh          $v1, 0x70($s4)
    ctx->pc = 0x12041cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 112), (uint16_t)GPR_U32(ctx, 3));
    // 0x120420: 0x92860077  lbu         $a2, 0x77($s4)
    ctx->pc = 0x120420u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 119)));
    // 0x120424: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x120424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x120428: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x120428u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x12042c: 0x64030008  daddiu      $v1, $zero, 0x8
    ctx->pc = 0x12042cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x120430: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x120430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x120434: 0xa2830077  sb          $v1, 0x77($s4)
    ctx->pc = 0x120434u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 119), (uint8_t)GPR_U32(ctx, 3));
    // 0x120438: 0x92860071  lbu         $a2, 0x71($s4)
    ctx->pc = 0x120438u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 113)));
    // 0x12043c: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x12043cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x120440: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x120440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x120444: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x120444u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x120448: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x120448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x12044c: 0xa2830071  sb          $v1, 0x71($s4)
    ctx->pc = 0x12044cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 113), (uint8_t)GPR_U32(ctx, 3));
    // 0x120450: 0xa2ef0003  sb          $t7, 0x3($s7)
    ctx->pc = 0x120450u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 15));
    // 0x120454: 0xa2e00002  sb          $zero, 0x2($s7)
    ctx->pc = 0x120454u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x120458: 0xaee50004  sw          $a1, 0x4($s7)
    ctx->pc = 0x120458u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 5));
    // 0x12045c: 0xa6ed0000  sh          $t5, 0x0($s7)
    ctx->pc = 0x12045cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x120460: 0xaeec0008  sw          $t4, 0x8($s7)
    ctx->pc = 0x120460u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 12));
    // 0x120464: 0xaeeb000c  sw          $t3, 0xC($s7)
    ctx->pc = 0x120464u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 11));
    // 0x120468: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x120468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x12046c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x12046cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x120470: 0xa2ef0013  sb          $t7, 0x13($s7)
    ctx->pc = 0x120470u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 19), (uint8_t)GPR_U32(ctx, 15));
    // 0x120474: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x120474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x120478: 0xa2e00012  sb          $zero, 0x12($s7)
    ctx->pc = 0x120478u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x12047c: 0xaee30014  sw          $v1, 0x14($s7)
    ctx->pc = 0x12047cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 3));
    // 0x120480: 0xa6f60010  sh          $s6, 0x10($s7)
    ctx->pc = 0x120480u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 16), (uint16_t)GPR_U32(ctx, 22));
    // 0x120484: 0xaeec0018  sw          $t4, 0x18($s7)
    ctx->pc = 0x120484u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 12));
    // 0x120488: 0xaee4001c  sw          $a0, 0x1C($s7)
    ctx->pc = 0x120488u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 28), GPR_U32(ctx, 4));
    // 0x12048c: 0xa2e90023  sb          $t1, 0x23($s7)
    ctx->pc = 0x12048cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 35), (uint8_t)GPR_U32(ctx, 9));
    // 0x120490: 0xa2e00022  sb          $zero, 0x22($s7)
    ctx->pc = 0x120490u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x120494: 0xaee00024  sw          $zero, 0x24($s7)
    ctx->pc = 0x120494u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 36), GPR_U32(ctx, 0));
    // 0x120498: 0xa6e00020  sh          $zero, 0x20($s7)
    ctx->pc = 0x120498u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x12049c: 0xaee00028  sw          $zero, 0x28($s7)
    ctx->pc = 0x12049cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 40), GPR_U32(ctx, 0));
    // 0x1204a0: 0xaee8002c  sw          $t0, 0x2C($s7)
    ctx->pc = 0x1204a0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 44), GPR_U32(ctx, 8));
    ctx->pc = 0x1204a4u;
}
