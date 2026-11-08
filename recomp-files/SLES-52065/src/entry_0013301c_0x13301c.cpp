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

// Function: entry_0013301c
// Address: 0x13301c - 0x1333b8
void entry_0013301c_0x13301c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013301c_0x13301c");
#endif

    ctx->pc = 0x13301cu;

    // 0x13301c: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x13301cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133020: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x133020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x133024: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x133024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x133028: 0x3c13002b  lui         $s3, 0x2B
    ctx->pc = 0x133028u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)43 << 16));
    // 0x13302c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x13302cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x133030: 0x34660005  ori         $a2, $v1, 0x5
    ctx->pc = 0x133030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x133034: 0x3c19002b  lui         $t9, 0x2B
    ctx->pc = 0x133034u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)43 << 16));
    // 0x133038: 0x3c0d002b  lui         $t5, 0x2B
    ctx->pc = 0x133038u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)43 << 16));
    // 0x13303c: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x13303cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x133040: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x133040u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x133044: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x133044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x133048: 0x24140030  addiu       $s4, $zero, 0x30
    ctx->pc = 0x133048u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13304c: 0xa1220003  sb          $v0, 0x3($t1)
    ctx->pc = 0x13304cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x133050: 0x267362b0  addiu       $s3, $s3, 0x62B0
    ctx->pc = 0x133050u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 25264));
    // 0x133054: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x133054u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x133058: 0x34830404  ori         $v1, $a0, 0x404
    ctx->pc = 0x133058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x13305c: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x13305cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x133060: 0x34850104  ori         $a1, $a0, 0x104
    ctx->pc = 0x133060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)260);
    // 0x133064: 0xa5280000  sh          $t0, 0x0($t1)
    ctx->pc = 0x133064u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x133068: 0x3c046c04  lui         $a0, 0x6C04
    ctx->pc = 0x133068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27652 << 16));
    // 0x13306c: 0xad270008  sw          $a3, 0x8($t1)
    ctx->pc = 0x13306cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 7));
    // 0x133070: 0x34928000  ori         $s2, $a0, 0x8000
    ctx->pc = 0x133070u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x133074: 0xad26000c  sw          $a2, 0xC($t1)
    ctx->pc = 0x133074u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 6));
    // 0x133078: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x133078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
    // 0x13307c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x13307cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133080: 0x3c1e1400  lui         $fp, 0x1400
    ctx->pc = 0x133080u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)5120 << 16));
    // 0x133084: 0x27396350  addiu       $t9, $t9, 0x6350
    ctx->pc = 0x133084u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 25424));
    // 0x133088: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x133088u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13308c: 0x348f8014  ori         $t7, $a0, 0x8014
    ctx->pc = 0x13308cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32788);
    // 0x133090: 0x348e801b  ori         $t6, $a0, 0x801B
    ctx->pc = 0x133090u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32795);
    // 0x133094: 0x25ad6360  addiu       $t5, $t5, 0x6360
    ctx->pc = 0x133094u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 25440));
    // 0x133098: 0x348c8017  ori         $t4, $a0, 0x8017
    ctx->pc = 0x133098u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32791);
    // 0x13309c: 0x3488801f  ori         $t0, $a0, 0x801F
    ctx->pc = 0x13309cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32799);
    // 0x1330a0: 0x262b0020  addiu       $t3, $s1, 0x20
    ctx->pc = 0x1330a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1330a4: 0x3c046c02  lui         $a0, 0x6C02
    ctx->pc = 0x1330a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27650 << 16));
    // 0x1330a8: 0x26290090  addiu       $t1, $s1, 0x90
    ctx->pc = 0x1330a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1330ac: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1330acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1330b0: 0x348a8019  ori         $t2, $a0, 0x8019
    ctx->pc = 0x1330b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32793);
    // 0x1330b4: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1330b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1330b8: 0x3c046c00  lui         $a0, 0x6C00
    ctx->pc = 0x1330b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27648 << 16));
    // 0x1330bc: 0x78366300  lq          $s6, 0x6300($at)
    ctx->pc = 0x1330bcu;
    SET_GPR_VEC(ctx, 22, FAST_READ128(0x2B6300u));
    // 0x1330c0: 0x34878020  ori         $a3, $a0, 0x8020
    ctx->pc = 0x1330c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32800);
    // 0x1330c4: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x1330c4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1330c8: 0x34868022  ori         $a2, $a0, 0x8022
    ctx->pc = 0x1330c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32802);
    // 0x1330cc: 0x34978023  ori         $s7, $a0, 0x8023
    ctx->pc = 0x1330ccu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32803);
    // 0x1330d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1330d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1330d4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1330d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1330d8: 0x7eb60000  sq          $s6, 0x0($s5)
    ctx->pc = 0x1330d8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 22));
    // 0x1330dc: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x1330dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1330e0: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1330e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1330e4: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x1330e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x1330e8: 0x78366310  lq          $s6, 0x6310($at)
    ctx->pc = 0x1330e8u;
    SET_GPR_VEC(ctx, 22, FAST_READ128(0x2B6310u));
    // 0x1330ec: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x1330ecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1330f0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1330f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1330f4: 0x7eb60000  sq          $s6, 0x0($s5)
    ctx->pc = 0x1330f4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 22));
    // 0x1330f8: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x1330f8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1330fc: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1330fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x133100: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x133100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x133104: 0x78366320  lq          $s6, 0x6320($at)
    ctx->pc = 0x133104u;
    SET_GPR_VEC(ctx, 22, FAST_READ128(0x2B6320u));
    // 0x133108: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x133108u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13310c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x13310cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x133110: 0x7eb60000  sq          $s6, 0x0($s5)
    ctx->pc = 0x133110u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 22));
    // 0x133114: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x133114u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133118: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x133118u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x13311c: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x13311cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x133120: 0x78366330  lq          $s6, 0x6330($at)
    ctx->pc = 0x133120u;
    SET_GPR_VEC(ctx, 22, FAST_READ128(0x2B6330u));
    // 0x133124: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x133124u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133128: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x133128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x13312c: 0x7eb60000  sq          $s6, 0x0($s5)
    ctx->pc = 0x13312cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 22));
    // 0x133130: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x133130u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133134: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x133134u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x133138: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x133138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x13313c: 0x78366340  lq          $s6, 0x6340($at)
    ctx->pc = 0x13313cu;
    SET_GPR_VEC(ctx, 22, FAST_READ128(0x2B6340u));
    // 0x133140: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x133140u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133144: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x133144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x133148: 0x7eb60000  sq          $s6, 0x0($s5)
    ctx->pc = 0x133148u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 22));
    // 0x13314c: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x13314cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133150: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x133150u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x133154: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x133154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x133158: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x133158u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13315c: 0xa2b40003  sb          $s4, 0x3($s5)
    ctx->pc = 0x13315cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x133160: 0xa2a00002  sb          $zero, 0x2($s5)
    ctx->pc = 0x133160u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x133164: 0xaeb30004  sw          $s3, 0x4($s5)
    ctx->pc = 0x133164u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 19));
    // 0x133168: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x133168u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13316c: 0xa6b30000  sh          $s3, 0x0($s5)
    ctx->pc = 0x13316cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x133170: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x133170u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x133174: 0xaeb2000c  sw          $s2, 0xC($s5)
    ctx->pc = 0x133174u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 18));
    // 0x133178: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x133178u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13317c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x13317cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x133180: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x133180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x133184: 0x8f9384dc  lw          $s3, -0x7B24($gp)
    ctx->pc = 0x133184u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935772)));
    // 0x133188: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x133188u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13318c: 0x27e9825  or          $s3, $s3, $fp
    ctx->pc = 0x13318cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 30));
    // 0x133190: 0xa2420003  sb          $v0, 0x3($s2)
    ctx->pc = 0x133190u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x133194: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x133194u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x133198: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x133198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x13319c: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x13319cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1331a0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1331a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1331a4: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x1331a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
    // 0x1331a8: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x1331a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1331ac: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1331acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1331b0: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1331b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x1331b4: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x1331b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1331b8: 0xa2540003  sb          $s4, 0x3($s2)
    ctx->pc = 0x1331b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x1331bc: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x1331bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1331c0: 0xae590004  sw          $t9, 0x4($s2)
    ctx->pc = 0x1331c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 25));
    // 0x1331c4: 0xa6580000  sh          $t8, 0x0($s2)
    ctx->pc = 0x1331c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 24));
    // 0x1331c8: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1331c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1331cc: 0xae4f000c  sw          $t7, 0xC($s2)
    ctx->pc = 0x1331ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 15));
    // 0x1331d0: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1331d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1331d4: 0x25ef0010  addiu       $t7, $t7, 0x10
    ctx->pc = 0x1331d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x1331d8: 0xae0f0000  sw          $t7, 0x0($s0)
    ctx->pc = 0x1331d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
    // 0x1331dc: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1331dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1331e0: 0xa1f40003  sb          $s4, 0x3($t7)
    ctx->pc = 0x1331e0u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x1331e4: 0xa1e00002  sb          $zero, 0x2($t7)
    ctx->pc = 0x1331e4u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1331e8: 0xadf90004  sw          $t9, 0x4($t7)
    ctx->pc = 0x1331e8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 25));
    // 0x1331ec: 0xa5f80000  sh          $t8, 0x0($t7)
    ctx->pc = 0x1331ecu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 24));
    // 0x1331f0: 0xade30008  sw          $v1, 0x8($t7)
    ctx->pc = 0x1331f0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 3));
    // 0x1331f4: 0xadee000c  sw          $t6, 0xC($t7)
    ctx->pc = 0x1331f4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 14));
    // 0x1331f8: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x1331f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1331fc: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x1331fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x133200: 0xae0e0000  sw          $t6, 0x0($s0)
    ctx->pc = 0x133200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 14));
    // 0x133204: 0x8f92850c  lw          $s2, -0x7AF4($gp)
    ctx->pc = 0x133204u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935820)));
    // 0x133208: 0x8f8f84b8  lw          $t7, -0x7B48($gp)
    ctx->pc = 0x133208u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935736)));
    // 0x13320c: 0x8f8e84ec  lw          $t6, -0x7B14($gp)
    ctx->pc = 0x13320cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935788)));
    // 0x133210: 0xac326360  sw          $s2, 0x6360($at)
    ctx->pc = 0x133210u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x2B6360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B6360u, _value); } while (0);
    // 0x133214: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x133214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x133218: 0xac2f6364  sw          $t7, 0x6364($at)
    ctx->pc = 0x133218u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x2B6364u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B6364u, _value); } while (0);
    // 0x13321c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x13321cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x133220: 0xac2e6368  sw          $t6, 0x6368($at)
    ctx->pc = 0x133220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x2B6368u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B6368u, _value); } while (0);
    // 0x133224: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x133224u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133228: 0xa1d40003  sb          $s4, 0x3($t6)
    ctx->pc = 0x133228u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x13322c: 0xa1c00002  sb          $zero, 0x2($t6)
    ctx->pc = 0x13322cu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x133230: 0xadcd0004  sw          $t5, 0x4($t6)
    ctx->pc = 0x133230u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 13));
    // 0x133234: 0xa5d80000  sh          $t8, 0x0($t6)
    ctx->pc = 0x133234u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 24));
    // 0x133238: 0xadc30008  sw          $v1, 0x8($t6)
    ctx->pc = 0x133238u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 3));
    // 0x13323c: 0xadcc000c  sw          $t4, 0xC($t6)
    ctx->pc = 0x13323cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 12));
    // 0x133240: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x133240u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133244: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x133244u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x133248: 0xae0c0000  sw          $t4, 0x0($s0)
    ctx->pc = 0x133248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
    // 0x13324c: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x13324cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133250: 0xa1940003  sb          $s4, 0x3($t4)
    ctx->pc = 0x133250u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x133254: 0xa1800002  sb          $zero, 0x2($t4)
    ctx->pc = 0x133254u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x133258: 0xad8b0004  sw          $t3, 0x4($t4)
    ctx->pc = 0x133258u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 11));
    // 0x13325c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x13325cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133260: 0xa58b0000  sh          $t3, 0x0($t4)
    ctx->pc = 0x133260u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x133264: 0xad830008  sw          $v1, 0x8($t4)
    ctx->pc = 0x133264u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 3));
    // 0x133268: 0xad8a000c  sw          $t2, 0xC($t4)
    ctx->pc = 0x133268u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 10));
    // 0x13326c: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x13326cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133270: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x133270u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x133274: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x133274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x133278: 0x8f8a84e0  lw          $t2, -0x7B20($gp)
    ctx->pc = 0x133278u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x13327c: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x13327cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133280: 0x15e5025  or          $t2, $t2, $fp
    ctx->pc = 0x133280u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 30));
    // 0x133284: 0xa1620003  sb          $v0, 0x3($t3)
    ctx->pc = 0x133284u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x133288: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x133288u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13328c: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x13328cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x133290: 0xa5600000  sh          $zero, 0x0($t3)
    ctx->pc = 0x133290u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x133294: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x133294u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x133298: 0xad6a000c  sw          $t2, 0xC($t3)
    ctx->pc = 0x133298u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 10));
    // 0x13329c: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x13329cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1332a0: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x1332a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x1332a4: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x1332a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x1332a8: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x1332a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1332ac: 0xa1540003  sb          $s4, 0x3($t2)
    ctx->pc = 0x1332acu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x1332b0: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x1332b0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1332b4: 0xad490004  sw          $t1, 0x4($t2)
    ctx->pc = 0x1332b4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 9));
    // 0x1332b8: 0xa5580000  sh          $t8, 0x0($t2)
    ctx->pc = 0x1332b8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 24));
    // 0x1332bc: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x1332bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x1332c0: 0xad48000c  sw          $t0, 0xC($t2)
    ctx->pc = 0x1332c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 8));
    // 0x1332c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1332c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1332c8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1332c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1332cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1332ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1332d0: 0x8e2900a0  lw          $t1, 0xA0($s1)
    ctx->pc = 0x1332d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1332d4: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x1332d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1332d8: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x1332d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1332dc: 0x91c00  sll         $v1, $t1, 16
    ctx->pc = 0x1332dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x1332e0: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1332e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1332e4: 0xa1540003  sb          $s4, 0x3($t2)
    ctx->pc = 0x1332e4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x1332e8: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x1332e8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1332ec: 0xad480004  sw          $t0, 0x4($t2)
    ctx->pc = 0x1332ecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 8));
    // 0x1332f0: 0xa5490000  sh          $t1, 0x0($t2)
    ctx->pc = 0x1332f0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x1332f4: 0xad450008  sw          $a1, 0x8($t2)
    ctx->pc = 0x1332f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 5));
    // 0x1332f8: 0xad43000c  sw          $v1, 0xC($t2)
    ctx->pc = 0x1332f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
    // 0x1332fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1332fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133300: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x133300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x133304: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x133304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x133308: 0x8e2800a0  lw          $t0, 0xA0($s1)
    ctx->pc = 0x133308u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x13330c: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x13330cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x133310: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x133310u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133314: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x133314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x133318: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x133318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x13331c: 0xa1340003  sb          $s4, 0x3($t1)
    ctx->pc = 0x13331cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x133320: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x133320u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x133324: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x133324u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
    // 0x133328: 0xa5280000  sh          $t0, 0x0($t1)
    ctx->pc = 0x133328u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x13332c: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x13332cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
    // 0x133330: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x133330u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
    // 0x133334: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x133334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133338: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x133338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13333c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x13333cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x133340: 0x8f868528  lw          $a2, -0x7AD8($gp)
    ctx->pc = 0x133340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935848)));
    // 0x133344: 0x8e2700a0  lw          $a3, 0xA0($s1)
    ctx->pc = 0x133344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x133348: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x133348u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13334c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x13334cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x133350: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x133350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x133354: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x133354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x133358: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x133358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x13335c: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x13335cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x133360: 0xa1140003  sb          $s4, 0x3($t0)
    ctx->pc = 0x133360u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x133364: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x133364u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x133368: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x133368u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
    // 0x13336c: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x13336cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x133370: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x133370u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x133374: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x133374u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x133378: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x133378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13337c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13337cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x133380: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x133380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x133384: 0x8f8384e4  lw          $v1, -0x7B1C($gp)
    ctx->pc = 0x133384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935780)));
    // 0x133388: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x133388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13338c: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x13338cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x133390: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x133390u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x133394: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x133394u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x133398: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x133398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x13339c: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x13339cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1333a0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1333a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1333a4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1333a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1333a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1333a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1333ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1333acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1333b0: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x1333B0u;
    SET_GPR_U32(ctx, 31, 0x1333B8u);
    ctx->pc = 0x1333B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1333B0u;
    // 0x1333b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x1333B0u, 0x1333B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333B8u;
}
