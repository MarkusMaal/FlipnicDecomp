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

// Function: FUN_001466d0
// Address: 0x1466d0 - 0x146f60
void FUN_001466d0_0x1466d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001466d0_0x1466d0");
#endif

    switch (ctx->pc) {
        case 0x146750u: goto label_146750;
        case 0x146874u: goto label_146874;
        case 0x146884u: goto label_146884;
        case 0x146890u: goto label_146890;
        case 0x14689cu: goto label_14689c;
        case 0x1468acu: goto label_1468ac;
        case 0x1468b8u: goto label_1468b8;
        case 0x1468dcu: goto label_1468dc;
        case 0x146ac4u: goto label_146ac4;
        case 0x146becu: goto label_146bec;
        case 0x146bfcu: goto label_146bfc;
        case 0x146c08u: goto label_146c08;
        case 0x146c14u: goto label_146c14;
        case 0x146c58u: goto label_146c58;
        case 0x146c60u: goto label_146c60;
        case 0x146da8u: goto label_146da8;
        default: break;
    }

    ctx->pc = 0x1466d0u;

    // 0x1466d0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1466d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1466d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1466d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1466d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1466d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1466dc: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1466dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1466e0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1466e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1466e4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1466e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1466e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1466e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1466ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1466ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1466f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1466f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1466f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1466f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1466f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1466f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1466fc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1466fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146700: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x146700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x146704: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x146704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x146708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14670c: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x14670cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x146710: 0x34623333  ori         $v0, $v1, 0x3333
    ctx->pc = 0x146710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x146714: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x146714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x146718: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x146718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x14671c: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x14671cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x146720: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x146720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x146724: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x146724u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x146728: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x146728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14672c: 0x7c850290  sq          $a1, 0x290($a0)
    ctx->pc = 0x14672cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 656), GPR_VEC(ctx, 5));
    // 0x146730: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x146730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x146734: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x146734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x146738: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x146738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x14673c: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x14673cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x146740: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x146740u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146744: 0x7c8202a0  sq          $v0, 0x2A0($a0)
    ctx->pc = 0x146744u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 672), GPR_VEC(ctx, 2));
    // 0x146748: 0xc040168  jal         func_1005A0
    ctx->pc = 0x146748u;
    SET_GPR_U32(ctx, 31, 0x146750u);
    ctx->pc = 0x14674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146748u;
    // 0x14674c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x146748u, 0x146750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146750u;
label_146750:
    // 0x146750: 0xae820280  sw          $v0, 0x280($s4)
    ctx->pc = 0x146750u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 640), GPR_U32(ctx, 2));
    // 0x146754: 0x240c0030  addiu       $t4, $zero, 0x30
    ctx->pc = 0x146754u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x146758: 0x8e830280  lw          $v1, 0x280($s4)
    ctx->pc = 0x146758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 640)));
    // 0x14675c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x14675cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x146760: 0x344e0404  ori         $t6, $v0, 0x404
    ctx->pc = 0x146760u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x146764: 0x268a0290  addiu       $t2, $s4, 0x290
    ctx->pc = 0x146764u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 656));
    // 0x146768: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x146768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x14676c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x14676cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146770: 0x344f8019  ori         $t7, $v0, 0x8019
    ctx->pc = 0x146770u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32793);
    // 0x146774: 0x3450801b  ori         $s0, $v0, 0x801B
    ctx->pc = 0x146774u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32795);
    // 0x146778: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x146778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x14677c: 0x268902a0  addiu       $t1, $s4, 0x2A0
    ctx->pc = 0x14677cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 672));
    // 0x146780: 0x3c081400  lui         $t0, 0x1400
    ctx->pc = 0x146780u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)5120 << 16));
    // 0x146784: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x146784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x146788: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x146788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
    // 0x14678c: 0x26840200  addiu       $a0, $s4, 0x200
    ctx->pc = 0x14678cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
    // 0x146790: 0x8fad012c  lw          $t5, 0x12C($sp)
    ctx->pc = 0x146790u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146794: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x146794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x146798: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x146798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x14679c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x14679cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1467a0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1467a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1467a4: 0xa1ac0003  sb          $t4, 0x3($t5)
    ctx->pc = 0x1467a4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 3), (uint8_t)GPR_U32(ctx, 12));
    // 0x1467a8: 0xa1a00002  sb          $zero, 0x2($t5)
    ctx->pc = 0x1467a8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1467ac: 0xadaa0004  sw          $t2, 0x4($t5)
    ctx->pc = 0x1467acu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 10));
    // 0x1467b0: 0xa5ab0000  sh          $t3, 0x0($t5)
    ctx->pc = 0x1467b0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x1467b4: 0xadae0008  sw          $t6, 0x8($t5)
    ctx->pc = 0x1467b4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 14));
    // 0x1467b8: 0xadaf000c  sw          $t7, 0xC($t5)
    ctx->pc = 0x1467b8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 15));
    // 0x1467bc: 0x8faa012c  lw          $t2, 0x12C($sp)
    ctx->pc = 0x1467bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1467c0: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x1467c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x1467c4: 0xafaa012c  sw          $t2, 0x12C($sp)
    ctx->pc = 0x1467c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 10));
    // 0x1467c8: 0x8faa012c  lw          $t2, 0x12C($sp)
    ctx->pc = 0x1467c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1467cc: 0xa14c0003  sb          $t4, 0x3($t2)
    ctx->pc = 0x1467ccu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 12));
    // 0x1467d0: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x1467d0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1467d4: 0xad490004  sw          $t1, 0x4($t2)
    ctx->pc = 0x1467d4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 9));
    // 0x1467d8: 0xa54b0000  sh          $t3, 0x0($t2)
    ctx->pc = 0x1467d8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x1467dc: 0xad4e0008  sw          $t6, 0x8($t2)
    ctx->pc = 0x1467dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 14));
    // 0x1467e0: 0xad50000c  sw          $s0, 0xC($t2)
    ctx->pc = 0x1467e0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 16));
    // 0x1467e4: 0x8faa012c  lw          $t2, 0x12C($sp)
    ctx->pc = 0x1467e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1467e8: 0x8f8984e0  lw          $t1, -0x7B20($gp)
    ctx->pc = 0x1467e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x1467ec: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x1467ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x1467f0: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x1467f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x1467f4: 0xafaa012c  sw          $t2, 0x12C($sp)
    ctx->pc = 0x1467f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 10));
    // 0x1467f8: 0x8fa9012c  lw          $t1, 0x12C($sp)
    ctx->pc = 0x1467f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1467fc: 0xa1270003  sb          $a3, 0x3($t1)
    ctx->pc = 0x1467fcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x146800: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x146800u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146804: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x146804u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x146808: 0xa5200000  sh          $zero, 0x0($t1)
    ctx->pc = 0x146808u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x14680c: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x14680cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x146810: 0xad28000c  sw          $t0, 0xC($t1)
    ctx->pc = 0x146810u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 8));
    // 0x146814: 0x8fa7012c  lw          $a3, 0x12C($sp)
    ctx->pc = 0x146814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146818: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x146818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x14681c: 0xafa7012c  sw          $a3, 0x12C($sp)
    ctx->pc = 0x14681cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 7));
    // 0x146820: 0x8fa7012c  lw          $a3, 0x12C($sp)
    ctx->pc = 0x146820u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146824: 0xa0ec0003  sb          $t4, 0x3($a3)
    ctx->pc = 0x146824u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 12));
    // 0x146828: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x146828u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14682c: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x14682cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x146830: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x146830u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x146834: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x146834u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
    // 0x146838: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x146838u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x14683c: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x14683cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146840: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x146840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x146844: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x146844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x146848: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x146848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x14684c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x14684cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146850: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x146850u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x146854: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x146854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x146858: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x146858u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x14685c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x14685cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x146860: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x146860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x146864: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x146864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146868: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x146868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14686c: 0xc051ea8  jal         func_147AA0
    ctx->pc = 0x14686Cu;
    SET_GPR_U32(ctx, 31, 0x146874u);
    ctx->pc = 0x146870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14686Cu;
    // 0x146870: 0xafa2012c  sw          $v0, 0x12C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147AA0u, 0x14686Cu, 0x146874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146874u;
label_146874:
    // 0x146874: 0x26840200  addiu       $a0, $s4, 0x200
    ctx->pc = 0x146874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
    // 0x146878: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x146878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14687c: 0xc051f50  jal         func_147D40
    ctx->pc = 0x14687Cu;
    SET_GPR_U32(ctx, 31, 0x146884u);
    ctx->pc = 0x146880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14687Cu;
    // 0x146880: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147D40u, 0x14687Cu, 0x146884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146884u;
label_146884:
    // 0x146884: 0x26840200  addiu       $a0, $s4, 0x200
    ctx->pc = 0x146884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
    // 0x146888: 0xc051f40  jal         func_147D00
    ctx->pc = 0x146888u;
    SET_GPR_U32(ctx, 31, 0x146890u);
    ctx->pc = 0x14688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146888u;
    // 0x14688c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147D00u, 0x146888u, 0x146890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146890u;
label_146890:
    // 0x146890: 0x26840200  addiu       $a0, $s4, 0x200
    ctx->pc = 0x146890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
    // 0x146894: 0xc051ec8  jal         func_147B20
    ctx->pc = 0x146894u;
    SET_GPR_U32(ctx, 31, 0x14689Cu);
    ctx->pc = 0x146898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146894u;
    // 0x146898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B20u, 0x146894u, 0x14689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14689Cu;
label_14689c:
    // 0x14689c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x14689cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1468a0: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1468a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x1468a4: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1468a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1468a8: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1468a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_1468ac:
    // 0x1468ac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1468acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1468b0: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1468B0u;
    SET_GPR_U32(ctx, 31, 0x1468B8u);
    ctx->pc = 0x1468B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1468B0u;
    // 0x1468b4: 0x34443880  ori         $a0, $v0, 0x3880 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14464);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1468B0u, 0x1468B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1468B8u;
label_1468b8:
    // 0x1468b8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1468b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1468bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1468bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1468c0: 0x2839821  addu        $s3, $s4, $v1
    ctx->pc = 0x1468c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1468c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1468c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1468c8: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x1468c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
    // 0x1468cc: 0x26720034  addiu       $s2, $s3, 0x34
    ctx->pc = 0x1468ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x1468d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1468d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1468d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1468d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1468d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1468d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1468dc:
    // 0x1468dc: 0x0  nop
    ctx->pc = 0x1468dcu;
    // NOP
    // 0x1468e0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1468e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1468e4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1468e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1468e8: 0x28651388  slti        $a1, $v1, 0x1388
    ctx->pc = 0x1468e8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5000) ? 1 : 0);
    // 0x1468ec: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1468ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1468f0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1468f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1468f4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1468f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1468f8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1468f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1468fc: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1468fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x146900: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146904: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146908: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x146908u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x14690c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x14690cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146910: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146914: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x146914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x146918: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14691c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x14691cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146920: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x146920u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x146924: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146928: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x14692c: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x14692cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x146930: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146934: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146938: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x146938u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x14693c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x14693cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146940: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146944: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x146944u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    // 0x146948: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14694c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x14694cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146950: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x146950u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x146954: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146958: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x14695c: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x14695cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x146960: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146964: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146968: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x146968u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x14696c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x14696cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146970: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146974: 0xacc2002c  sw          $v0, 0x2C($a2)
    ctx->pc = 0x146974u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
    // 0x146978: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14697c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x14697cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146980: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x146980u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
    // 0x146984: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146988: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x14698c: 0xacc00034  sw          $zero, 0x34($a2)
    ctx->pc = 0x14698cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 0));
    // 0x146990: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146994: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146998: 0xacc00038  sw          $zero, 0x38($a2)
    ctx->pc = 0x146998u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 0));
    // 0x14699c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x14699cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1469a0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1469a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1469a4: 0xacc2003c  sw          $v0, 0x3C($a2)
    ctx->pc = 0x1469a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 2));
    // 0x1469a8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1469a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1469ac: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1469acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1469b0: 0xacc00040  sw          $zero, 0x40($a2)
    ctx->pc = 0x1469b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 0));
    // 0x1469b4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1469b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1469b8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1469b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1469bc: 0xacc00044  sw          $zero, 0x44($a2)
    ctx->pc = 0x1469bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 0));
    // 0x1469c0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1469c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1469c4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1469c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1469c8: 0xacc00048  sw          $zero, 0x48($a2)
    ctx->pc = 0x1469c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 0));
    // 0x1469cc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1469ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1469d0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1469d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1469d4: 0xacc2004c  sw          $v0, 0x4C($a2)
    ctx->pc = 0x1469d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 2));
    // 0x1469d8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1469d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1469dc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1469dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1469e0: 0xacc00050  sw          $zero, 0x50($a2)
    ctx->pc = 0x1469e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 0));
    // 0x1469e4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1469e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1469e8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1469e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1469ec: 0xacc00054  sw          $zero, 0x54($a2)
    ctx->pc = 0x1469ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 0));
    // 0x1469f0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1469f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1469f4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1469f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1469f8: 0xacc00058  sw          $zero, 0x58($a2)
    ctx->pc = 0x1469f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 0));
    // 0x1469fc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1469fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a00: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146a04: 0xacc2005c  sw          $v0, 0x5C($a2)
    ctx->pc = 0x146a04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 2));
    // 0x146a08: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a0c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146a10: 0xacc00060  sw          $zero, 0x60($a2)
    ctx->pc = 0x146a10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 0));
    // 0x146a14: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146a14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a18: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146a1c: 0xacc00064  sw          $zero, 0x64($a2)
    ctx->pc = 0x146a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 0));
    // 0x146a20: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a24: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146a28: 0xacc00068  sw          $zero, 0x68($a2)
    ctx->pc = 0x146a28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 104), GPR_U32(ctx, 0));
    // 0x146a2c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a30: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146a34: 0xacc2006c  sw          $v0, 0x6C($a2)
    ctx->pc = 0x146a34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 2));
    // 0x146a38: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a3c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146a40: 0xacc00070  sw          $zero, 0x70($a2)
    ctx->pc = 0x146a40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 0));
    // 0x146a44: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a48: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146a4c: 0xacc00074  sw          $zero, 0x74($a2)
    ctx->pc = 0x146a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 0));
    // 0x146a50: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a54: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146a58: 0xacc00078  sw          $zero, 0x78($a2)
    ctx->pc = 0x146a58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 0));
    // 0x146a5c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a60: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146a64: 0xacc2007c  sw          $v0, 0x7C($a2)
    ctx->pc = 0x146a64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 2));
    // 0x146a68: 0x14a0ff9c  bnez        $a1, . + 4 + (-0x64 << 2)
    ctx->pc = 0x146A68u;
    {
        const bool branch_taken_0x146a68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x146A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A68u;
        // 0x146a6c: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a68) {
            ctx->pc = 0x1468DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1468dc;
        }
    }
    ctx->pc = 0x146A70u;
    // 0x146a70: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x146a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x146a74: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x146a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x146a78: 0x34453333  ori         $a1, $v0, 0x3333
    ctx->pc = 0x146a78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x146a7c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x146a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x146a80: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x146a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x146a84: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x146a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x146a88: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x146a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x146a8c: 0xafa50104  sw          $a1, 0x104($sp)
    ctx->pc = 0x146a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 5));
    // 0x146a90: 0xafa50108  sw          $a1, 0x108($sp)
    ctx->pc = 0x146a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 5));
    // 0x146a94: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x146a94u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x146a98: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x146a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x146a9c: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x146a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x146aa0: 0x7e050130  sq          $a1, 0x130($s0)
    ctx->pc = 0x146aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 304), GPR_VEC(ctx, 5));
    // 0x146aa4: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x146aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x146aa8: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x146aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x146aac: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x146aacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x146ab0: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x146ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
    // 0x146ab4: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x146ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x146ab8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x146ab8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146abc: 0xc040168  jal         func_1005A0
    ctx->pc = 0x146ABCu;
    SET_GPR_U32(ctx, 31, 0x146AC4u);
    ctx->pc = 0x146AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146ABCu;
    // 0x146ac0: 0x7e020140  sq          $v0, 0x140($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 320), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x146ABCu, 0x146AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146AC4u;
label_146ac4:
    // 0x146ac4: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x146ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x146ac8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x146ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x146acc: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x146accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x146ad0: 0x348e0404  ori         $t6, $a0, 0x404
    ctx->pc = 0x146ad0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x146ad4: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x146ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
    // 0x146ad8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x146ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x146adc: 0x260f0130  addiu       $t7, $s0, 0x130
    ctx->pc = 0x146adcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x146ae0: 0x260c0140  addiu       $t4, $s0, 0x140
    ctx->pc = 0x146ae0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x146ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146ae8: 0x348d8019  ori         $t5, $a0, 0x8019
    ctx->pc = 0x146ae8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32793);
    // 0x146aec: 0x348b801b  ori         $t3, $a0, 0x801B
    ctx->pc = 0x146aecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32795);
    // 0x146af0: 0x3c0a1400  lui         $t2, 0x1400
    ctx->pc = 0x146af0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)5120 << 16));
    // 0x146af4: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x146af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x146af8: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x146af8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x146afc: 0xafa5012c  sw          $a1, 0x12C($sp)
    ctx->pc = 0x146afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
    // 0x146b00: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x146b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x146b04: 0x8fb1012c  lw          $s1, 0x12C($sp)
    ctx->pc = 0x146b04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146b08: 0x34860008  ori         $a2, $a0, 0x8
    ctx->pc = 0x146b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x146b0c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x146b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x146b10: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x146b10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x146b14: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x146b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x146b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b1c: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x146b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x146b20: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x146b20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146b24: 0xae2f0004  sw          $t7, 0x4($s1)
    ctx->pc = 0x146b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
    // 0x146b28: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x146b28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146b2c: 0xae2e0008  sw          $t6, 0x8($s1)
    ctx->pc = 0x146b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 14));
    // 0x146b30: 0xae2d000c  sw          $t5, 0xC($s1)
    ctx->pc = 0x146b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 13));
    // 0x146b34: 0x8fad012c  lw          $t5, 0x12C($sp)
    ctx->pc = 0x146b34u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146b38: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x146b38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x146b3c: 0xafad012c  sw          $t5, 0x12C($sp)
    ctx->pc = 0x146b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 13));
    // 0x146b40: 0x8fad012c  lw          $t5, 0x12C($sp)
    ctx->pc = 0x146b40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146b44: 0xa1a30003  sb          $v1, 0x3($t5)
    ctx->pc = 0x146b44u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x146b48: 0xa1a00002  sb          $zero, 0x2($t5)
    ctx->pc = 0x146b48u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146b4c: 0xadac0004  sw          $t4, 0x4($t5)
    ctx->pc = 0x146b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 12));
    // 0x146b50: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x146b50u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146b54: 0xadae0008  sw          $t6, 0x8($t5)
    ctx->pc = 0x146b54u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 14));
    // 0x146b58: 0xadab000c  sw          $t3, 0xC($t5)
    ctx->pc = 0x146b58u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 11));
    // 0x146b5c: 0x8fab012c  lw          $t3, 0x12C($sp)
    ctx->pc = 0x146b5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146b60: 0x8f8284e0  lw          $v0, -0x7B20($gp)
    ctx->pc = 0x146b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x146b64: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146b64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146b68: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x146b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x146b6c: 0xafab012c  sw          $t3, 0x12C($sp)
    ctx->pc = 0x146b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 11));
    // 0x146b70: 0x8faa012c  lw          $t2, 0x12C($sp)
    ctx->pc = 0x146b70u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146b74: 0xa1490003  sb          $t1, 0x3($t2)
    ctx->pc = 0x146b74u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x146b78: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x146b78u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146b7c: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x146b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x146b80: 0xa5400000  sh          $zero, 0x0($t2)
    ctx->pc = 0x146b80u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x146b84: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x146b84u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    // 0x146b88: 0xad42000c  sw          $v0, 0xC($t2)
    ctx->pc = 0x146b88u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
    // 0x146b8c: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x146b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146b90: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x146b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x146b94: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x146b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x146b98: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x146b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146b9c: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x146b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x146ba0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x146ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146ba4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x146ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x146ba8: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x146ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x146bac: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x146bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x146bb0: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x146bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x146bb4: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x146bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146bb8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x146bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x146bbc: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x146bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x146bc0: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x146bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146bc4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x146bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146bc8: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x146bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x146bcc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x146bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x146bd0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x146bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x146bd4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x146bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x146bd8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x146bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x146bdc: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x146bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146be0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x146be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x146be4: 0xc051ea8  jal         func_147AA0
    ctx->pc = 0x146BE4u;
    SET_GPR_U32(ctx, 31, 0x146BECu);
    ctx->pc = 0x146BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146BE4u;
    // 0x146be8: 0xafa2012c  sw          $v0, 0x12C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147AA0u, 0x146BE4u, 0x146BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146BECu;
label_146bec:
    // 0x146bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146bf0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x146bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x146bf4: 0xc051f50  jal         func_147D40
    ctx->pc = 0x146BF4u;
    SET_GPR_U32(ctx, 31, 0x146BFCu);
    ctx->pc = 0x146BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146BF4u;
    // 0x146bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147D40u, 0x146BF4u, 0x146BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146BFCu;
label_146bfc:
    // 0x146bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c00: 0xc051f40  jal         func_147D00
    ctx->pc = 0x146C00u;
    SET_GPR_U32(ctx, 31, 0x146C08u);
    ctx->pc = 0x146C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146C00u;
    // 0x146c04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147D00u, 0x146C00u, 0x146C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146C08u;
label_146c08:
    // 0x146c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c0c: 0xc051ec8  jal         func_147B20
    ctx->pc = 0x146C0Cu;
    SET_GPR_U32(ctx, 31, 0x146C14u);
    ctx->pc = 0x146C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146C0Cu;
    // 0x146c10: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B20u, 0x146C0Cu, 0x146C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146C14u;
label_146c14:
    // 0x146c14: 0x3c02502b  lui         $v0, 0x502B
    ctx->pc = 0x146c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20523 << 16));
    // 0x146c18: 0x34038024  ori         $v1, $zero, 0x8024
    ctx->pc = 0x146c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32804);
    // 0x146c1c: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x146c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x146c20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x146c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c24: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x146c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x146c28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x146c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c2c: 0x282a821  addu        $s5, $s4, $v0
    ctx->pc = 0x146c2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x146c30: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x146c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x146c34: 0x26b70040  addiu       $s7, $s5, 0x40
    ctx->pc = 0x146c34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x146c38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x146c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x146c3c: 0x26b60050  addiu       $s6, $s5, 0x50
    ctx->pc = 0x146c3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x146c40: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x146c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x146c44: 0xfea30040  sd          $v1, 0x40($s5)
    ctx->pc = 0x146c44u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 3));
    // 0x146c48: 0x34422521  ori         $v0, $v0, 0x2521
    ctx->pc = 0x146c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9505);
    // 0x146c4c: 0xfea20048  sd          $v0, 0x48($s5)
    ctx->pc = 0x146c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 72), GPR_U64(ctx, 2));
    // 0x146c50: 0xfea30050  sd          $v1, 0x50($s5)
    ctx->pc = 0x146c50u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 80), GPR_U64(ctx, 3));
    // 0x146c54: 0xfea20058  sd          $v0, 0x58($s5)
    ctx->pc = 0x146c54u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 88), GPR_U64(ctx, 2));
label_146c58:
    // 0x146c58: 0xc040168  jal         func_1005A0
    ctx->pc = 0x146C58u;
    SET_GPR_U32(ctx, 31, 0x146C60u);
    ctx->pc = 0x146C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146C58u;
    // 0x146c5c: 0x34048000  ori         $a0, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x146C58u, 0x146C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146C60u;
label_146c60:
    // 0x146c60: 0x2b11821  addu        $v1, $s5, $s1
    ctx->pc = 0x146c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x146c64: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x146c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x146c68: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x146c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x146c6c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x146c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x146c70: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x146c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x146c74: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x146c74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146c78: 0x34870404  ori         $a3, $a0, 0x404
    ctx->pc = 0x146c78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x146c7c: 0x348d0104  ori         $t5, $a0, 0x104
    ctx->pc = 0x146c7cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)260);
    // 0x146c80: 0x3c046c00  lui         $a0, 0x6C00
    ctx->pc = 0x146c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27648 << 16));
    // 0x146c84: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x146c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x146c88: 0x3c0a0024  lui         $t2, 0x24
    ctx->pc = 0x146c88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)36 << 16));
    // 0x146c8c: 0x34848022  ori         $a0, $a0, 0x8022
    ctx->pc = 0x146c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32802);
    // 0x146c90: 0x1445825  or          $t3, $t2, $a0
    ctx->pc = 0x146c90u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x146c94: 0x27a9012c  addiu       $t1, $sp, 0x12C
    ctx->pc = 0x146c94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x146c98: 0x266f03cc  addiu       $t7, $s3, 0x3CC
    ctx->pc = 0x146c98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 972));
    // 0x146c9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x146c9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ca0: 0xafa5012c  sw          $a1, 0x12C($sp)
    ctx->pc = 0x146ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
    // 0x146ca4: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x146ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
    // 0x146ca8: 0x8fb8012c  lw          $t8, 0x12C($sp)
    ctx->pc = 0x146ca8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146cac: 0x346e801f  ori         $t6, $v1, 0x801F
    ctx->pc = 0x146cacu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32799);
    // 0x146cb0: 0x3c036c24  lui         $v1, 0x6C24
    ctx->pc = 0x146cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27684 << 16));
    // 0x146cb4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x146cb4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146cb8: 0x34658020  ori         $a1, $v1, 0x8020
    ctx->pc = 0x146cb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32800);
    // 0x146cbc: 0x34648023  ori         $a0, $v1, 0x8023
    ctx->pc = 0x146cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32803);
    // 0x146cc0: 0x34638022  ori         $v1, $v1, 0x8022
    ctx->pc = 0x146cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32802);
    // 0x146cc4: 0xa3080003  sb          $t0, 0x3($t8)
    ctx->pc = 0x146cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x146cc8: 0xa3000002  sb          $zero, 0x2($t8)
    ctx->pc = 0x146cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146ccc: 0xaf160004  sw          $s6, 0x4($t8)
    ctx->pc = 0x146cccu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 22));
    // 0x146cd0: 0xa71e0000  sh          $fp, 0x0($t8)
    ctx->pc = 0x146cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 30));
    // 0x146cd4: 0xaf070008  sw          $a3, 0x8($t8)
    ctx->pc = 0x146cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 7));
    // 0x146cd8: 0xaf0e000c  sw          $t6, 0xC($t8)
    ctx->pc = 0x146cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 14));
    // 0x146cdc: 0x8fb8012c  lw          $t8, 0x12C($sp)
    ctx->pc = 0x146cdcu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146ce0: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x146ce0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x146ce4: 0xafb8012c  sw          $t8, 0x12C($sp)
    ctx->pc = 0x146ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 24));
    // 0x146ce8: 0x8e7803cc  lw          $t8, 0x3CC($s3)
    ctx->pc = 0x146ce8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 972)));
    // 0x146cec: 0x8fb9012c  lw          $t9, 0x12C($sp)
    ctx->pc = 0x146cecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146cf0: 0xa3280003  sb          $t0, 0x3($t9)
    ctx->pc = 0x146cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x146cf4: 0xa3200002  sb          $zero, 0x2($t9)
    ctx->pc = 0x146cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146cf8: 0xaf380004  sw          $t8, 0x4($t9)
    ctx->pc = 0x146cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4), GPR_U32(ctx, 24));
    // 0x146cfc: 0xa7260000  sh          $a2, 0x0($t9)
    ctx->pc = 0x146cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x146d00: 0xaf2d0008  sw          $t5, 0x8($t9)
    ctx->pc = 0x146d00u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 13));
    // 0x146d04: 0xaf2b000c  sw          $t3, 0xC($t9)
    ctx->pc = 0x146d04u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 11));
    // 0x146d08: 0x8fab012c  lw          $t3, 0x12C($sp)
    ctx->pc = 0x146d08u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146d0c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146d0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146d10: 0xafab012c  sw          $t3, 0x12C($sp)
    ctx->pc = 0x146d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 11));
    // 0x146d14: 0x8e8b02b0  lw          $t3, 0x2B0($s4)
    ctx->pc = 0x146d14u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 688)));
    // 0x146d18: 0x8fb8012c  lw          $t8, 0x12C($sp)
    ctx->pc = 0x146d18u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146d1c: 0xa3080003  sb          $t0, 0x3($t8)
    ctx->pc = 0x146d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x146d20: 0xa3000002  sb          $zero, 0x2($t8)
    ctx->pc = 0x146d20u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146d24: 0xaf0b0004  sw          $t3, 0x4($t8)
    ctx->pc = 0x146d24u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 11));
    // 0x146d28: 0xa7060000  sh          $a2, 0x0($t8)
    ctx->pc = 0x146d28u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x146d2c: 0xaf0d0008  sw          $t5, 0x8($t8)
    ctx->pc = 0x146d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 13));
    // 0x146d30: 0xaf05000c  sw          $a1, 0xC($t8)
    ctx->pc = 0x146d30u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 5));
    // 0x146d34: 0x8fab012c  lw          $t3, 0x12C($sp)
    ctx->pc = 0x146d34u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146d38: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146d38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146d3c: 0xafab012c  sw          $t3, 0x12C($sp)
    ctx->pc = 0x146d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 11));
    // 0x146d40: 0x8e4b0000  lw          $t3, 0x0($s2)
    ctx->pc = 0x146d40u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146d44: 0x8fb8012c  lw          $t8, 0x12C($sp)
    ctx->pc = 0x146d44u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146d48: 0xa3080003  sb          $t0, 0x3($t8)
    ctx->pc = 0x146d48u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x146d4c: 0xa3000002  sb          $zero, 0x2($t8)
    ctx->pc = 0x146d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146d50: 0xaf0b0004  sw          $t3, 0x4($t8)
    ctx->pc = 0x146d50u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 11));
    // 0x146d54: 0xa7060000  sh          $a2, 0x0($t8)
    ctx->pc = 0x146d54u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x146d58: 0xaf0d0008  sw          $t5, 0x8($t8)
    ctx->pc = 0x146d58u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 13));
    // 0x146d5c: 0xaf04000c  sw          $a0, 0xC($t8)
    ctx->pc = 0x146d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 4));
    // 0x146d60: 0x8fab012c  lw          $t3, 0x12C($sp)
    ctx->pc = 0x146d60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146d64: 0x8f9884d0  lw          $t8, -0x7B30($gp)
    ctx->pc = 0x146d64u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
    // 0x146d68: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146d68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146d6c: 0xafab012c  sw          $t3, 0x12C($sp)
    ctx->pc = 0x146d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 11));
    // 0x146d70: 0x3c0b1400  lui         $t3, 0x1400
    ctx->pc = 0x146d70u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)5120 << 16));
    // 0x146d74: 0x8fb9012c  lw          $t9, 0x12C($sp)
    ctx->pc = 0x146d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146d78: 0x30bc025  or          $t8, $t8, $t3
    ctx->pc = 0x146d78u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 11));
    // 0x146d7c: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x146d7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x146d80: 0xa32b0003  sb          $t3, 0x3($t9)
    ctx->pc = 0x146d80u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 3), (uint8_t)GPR_U32(ctx, 11));
    // 0x146d84: 0xa3200002  sb          $zero, 0x2($t9)
    ctx->pc = 0x146d84u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146d88: 0xaf200004  sw          $zero, 0x4($t9)
    ctx->pc = 0x146d88u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4), GPR_U32(ctx, 0));
    // 0x146d8c: 0xa7200000  sh          $zero, 0x0($t9)
    ctx->pc = 0x146d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x146d90: 0xaf200008  sw          $zero, 0x8($t9)
    ctx->pc = 0x146d90u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 0));
    // 0x146d94: 0xaf38000c  sw          $t8, 0xC($t9)
    ctx->pc = 0x146d94u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 24));
    // 0x146d98: 0x8fab012c  lw          $t3, 0x12C($sp)
    ctx->pc = 0x146d98u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146d9c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146d9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146da0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x146DA0u;
    {
        const bool branch_taken_0x146da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146DA0u;
        // 0x146da4: 0xafab012c  sw          $t3, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146da0) {
            ctx->pc = 0x146EA8u;
            goto label_146ea8;
        }
    }
    ctx->pc = 0x146DA8u;
label_146da8:
    // 0x146da8: 0x258b0022  addiu       $t3, $t4, 0x22
    ctx->pc = 0x146da8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 34));
    // 0x146dac: 0xbc100  sll         $t8, $t3, 4
    ctx->pc = 0x146dacu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x146db0: 0x258c0022  addiu       $t4, $t4, 0x22
    ctx->pc = 0x146db0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 34));
    // 0x146db4: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x146db4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146db8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x146db8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x146dbc: 0xa1680003  sb          $t0, 0x3($t3)
    ctx->pc = 0x146dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x146dc0: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x146dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146dc4: 0xad770004  sw          $s7, 0x4($t3)
    ctx->pc = 0x146dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 23));
    // 0x146dc8: 0xa57e0000  sh          $fp, 0x0($t3)
    ctx->pc = 0x146dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 30));
    // 0x146dcc: 0xad670008  sw          $a3, 0x8($t3)
    ctx->pc = 0x146dccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 7));
    // 0x146dd0: 0xad6e000c  sw          $t6, 0xC($t3)
    ctx->pc = 0x146dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 14));
    // 0x146dd4: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x146dd4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146dd8: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146dd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146ddc: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x146ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x146de0: 0x8df90000  lw          $t9, 0x0($t7)
    ctx->pc = 0x146de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x146de4: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x146de4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146de8: 0x338c821  addu        $t9, $t9, $t8
    ctx->pc = 0x146de8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 24)));
    // 0x146dec: 0xa1680003  sb          $t0, 0x3($t3)
    ctx->pc = 0x146decu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x146df0: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x146df0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146df4: 0xad790004  sw          $t9, 0x4($t3)
    ctx->pc = 0x146df4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 25));
    // 0x146df8: 0xa5660000  sh          $a2, 0x0($t3)
    ctx->pc = 0x146df8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x146dfc: 0xad6d0008  sw          $t5, 0x8($t3)
    ctx->pc = 0x146dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 13));
    // 0x146e00: 0xad63000c  sw          $v1, 0xC($t3)
    ctx->pc = 0x146e00u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 3));
    // 0x146e04: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x146e04u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146e08: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146e08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146e0c: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x146e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x146e10: 0x8e9902b0  lw          $t9, 0x2B0($s4)
    ctx->pc = 0x146e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 688)));
    // 0x146e14: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x146e14u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146e18: 0x338c821  addu        $t9, $t9, $t8
    ctx->pc = 0x146e18u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 24)));
    // 0x146e1c: 0xa1680003  sb          $t0, 0x3($t3)
    ctx->pc = 0x146e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x146e20: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x146e20u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146e24: 0xad790004  sw          $t9, 0x4($t3)
    ctx->pc = 0x146e24u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 25));
    // 0x146e28: 0xa5660000  sh          $a2, 0x0($t3)
    ctx->pc = 0x146e28u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x146e2c: 0xad6d0008  sw          $t5, 0x8($t3)
    ctx->pc = 0x146e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 13));
    // 0x146e30: 0xad65000c  sw          $a1, 0xC($t3)
    ctx->pc = 0x146e30u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 5));
    // 0x146e34: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x146e34u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146e38: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146e38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146e3c: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x146e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x146e40: 0x8e4b0000  lw          $t3, 0x0($s2)
    ctx->pc = 0x146e40u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146e44: 0x8d390000  lw          $t9, 0x0($t1)
    ctx->pc = 0x146e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146e48: 0x1785821  addu        $t3, $t3, $t8
    ctx->pc = 0x146e48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
    // 0x146e4c: 0xa3280003  sb          $t0, 0x3($t9)
    ctx->pc = 0x146e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 25), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x146e50: 0x3c181400  lui         $t8, 0x1400
    ctx->pc = 0x146e50u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)5120 << 16));
    // 0x146e54: 0xa3200002  sb          $zero, 0x2($t9)
    ctx->pc = 0x146e54u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146e58: 0xaf2b0004  sw          $t3, 0x4($t9)
    ctx->pc = 0x146e58u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4), GPR_U32(ctx, 11));
    // 0x146e5c: 0xa7260000  sh          $a2, 0x0($t9)
    ctx->pc = 0x146e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x146e60: 0xaf2d0008  sw          $t5, 0x8($t9)
    ctx->pc = 0x146e60u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 13));
    // 0x146e64: 0xaf24000c  sw          $a0, 0xC($t9)
    ctx->pc = 0x146e64u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 4));
    // 0x146e68: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x146e68u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146e6c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146e6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146e70: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x146e70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x146e74: 0x8f9984d0  lw          $t9, -0x7B30($gp)
    ctx->pc = 0x146e74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
    // 0x146e78: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x146e78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146e7c: 0x338c825  or          $t9, $t9, $t8
    ctx->pc = 0x146e7cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | GPR_U64(ctx, 24));
    // 0x146e80: 0x24180010  addiu       $t8, $zero, 0x10
    ctx->pc = 0x146e80u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x146e84: 0xa1780003  sb          $t8, 0x3($t3)
    ctx->pc = 0x146e84u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 24));
    // 0x146e88: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x146e88u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146e8c: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x146e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x146e90: 0xa5600000  sh          $zero, 0x0($t3)
    ctx->pc = 0x146e90u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x146e94: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x146e94u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x146e98: 0xad79000c  sw          $t9, 0xC($t3)
    ctx->pc = 0x146e98u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 25));
    // 0x146e9c: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x146e9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146ea0: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146ea0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146ea4: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x146ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
label_146ea8:
    // 0x146ea8: 0x2d4b0092  sltiu       $t3, $t2, 0x92
    ctx->pc = 0x146ea8u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)146) ? 1 : 0);
    // 0x146eac: 0x1560ffbe  bnez        $t3, . + 4 + (-0x42 << 2)
    ctx->pc = 0x146EACu;
    {
        const bool branch_taken_0x146eac = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x146eac) {
            ctx->pc = 0x146DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146da8;
        }
    }
    ctx->pc = 0x146EB4u;
    // 0x146eb4: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x146eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146eb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x146eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x146ebc: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x146ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x146ec0: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x146ec0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x146ec4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x146ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x146ec8: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x146ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146ecc: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x146eccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x146ed0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x146ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x146ed4: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x146ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x146ed8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x146ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x146edc: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x146edcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x146ee0: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x146ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146ee4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x146ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x146ee8: 0x1460ff5b  bnez        $v1, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x146EE8u;
    {
        const bool branch_taken_0x146ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x146EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146EE8u;
        // 0x146eec: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ee8) {
            ctx->pc = 0x146C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146c58;
        }
    }
    ctx->pc = 0x146EF0u;
    // 0x146ef0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x146ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x146ef4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x146ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x146ef8: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x146ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x146efc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x146efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x146f00: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x146f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x146f04: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x146f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x146f08: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x146f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x146f0c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x146f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x146f10: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x146f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x146f14: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x146f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x146f18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x146f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x146f1c: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x146f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x146f20: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x146f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x146f24: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x146f24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x146f28: 0x1460fe60  bnez        $v1, . + 4 + (-0x1A0 << 2)
    ctx->pc = 0x146F28u;
    {
        const bool branch_taken_0x146f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x146f28) {
            ctx->pc = 0x1468ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1468ac;
        }
    }
    ctx->pc = 0x146F30u;
    // 0x146f30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x146f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x146f34: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x146f34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x146f38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x146f38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x146f3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x146f3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x146f40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x146f40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x146f44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x146f44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x146f48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x146f48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146f4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x146f4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146f50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x146f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146f54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146f58: 0x3e00008  jr          $ra
    ctx->pc = 0x146F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F58u;
        // 0x146f5c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146F60u;
}
