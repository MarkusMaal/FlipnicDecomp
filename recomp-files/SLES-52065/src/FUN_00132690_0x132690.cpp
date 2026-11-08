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

// Function: FUN_00132690
// Address: 0x132690 - 0x1328b4
void FUN_00132690_0x132690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00132690_0x132690");
#endif

    switch (ctx->pc) {
        case 0x13280cu: goto label_13280c;
        case 0x132818u: goto label_132818;
        case 0x132834u: goto label_132834;
        case 0x132850u: goto label_132850;
        case 0x132864u: goto label_132864;
        case 0x132870u: goto label_132870;
        case 0x132888u: goto label_132888;
        default: break;
    }

    ctx->pc = 0x132690u;

    // 0x132690: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x132690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x132694: 0x30190001  andi        $t9, $zero, 0x1
    ctx->pc = 0x132694u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x132698: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x132698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13269c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x13269cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1326a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1326a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1326a4: 0x24638cb8  addiu       $v1, $v1, -0x7348
    ctx->pc = 0x1326a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937784));
    // 0x1326a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1326a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1326ac: 0x2418fffe  addiu       $t8, $zero, -0x2
    ctx->pc = 0x1326acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1326b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1326b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1326b4: 0x3c053025  lui         $a1, 0x3025
    ctx->pc = 0x1326b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12325 << 16));
    // 0x1326b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1326b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1326bc: 0x34b1c000  ori         $s1, $a1, 0xC000
    ctx->pc = 0x1326bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x1326c0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1326c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1326c4: 0x11903c  dsll32      $s2, $s1, 0
    ctx->pc = 0x1326c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1326c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1326c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1326cc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1326ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1326d0: 0xb29025  or          $s2, $a1, $s2
    ctx->pc = 0x1326d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x1326d4: 0x194980  sll         $t1, $t9, 6
    ctx->pc = 0x1326d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 25), 6));
    // 0x1326d8: 0x1939c0  sll         $a3, $t9, 7
    ctx->pc = 0x1326d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 7));
    // 0x1326dc: 0x240efff1  addiu       $t6, $zero, -0xF
    ctx->pc = 0x1326dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x1326e0: 0x640f000c  daddiu      $t7, $zero, 0xC
    ctx->pc = 0x1326e0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
    // 0x1326e4: 0x240cf00f  addiu       $t4, $zero, -0xFF1
    ctx->pc = 0x1326e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x1326e8: 0x640d0640  daddiu      $t5, $zero, 0x640
    ctx->pc = 0x1326e8u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1600);
    // 0x1326ec: 0x240affcf  addiu       $t2, $zero, -0x31
    ctx->pc = 0x1326ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1326f0: 0x640b0010  daddiu      $t3, $zero, 0x10
    ctx->pc = 0x1326f0u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1326f4: 0x2408ffbf  addiu       $t0, $zero, -0x41
    ctx->pc = 0x1326f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1326f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1326f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1326fc: 0x2406ff7f  addiu       $a2, $zero, -0x81
    ctx->pc = 0x1326fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x132700: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x132700u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132704: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x132704u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x132708: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x132708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x13270c: 0x64030004  daddiu      $v1, $zero, 0x4
    ctx->pc = 0x13270cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x132710: 0x24110512  addiu       $s1, $zero, 0x512
    ctx->pc = 0x132710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x132714: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x132714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x132718: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x132718u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13271c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13271cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x132720: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x132720u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132724: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x132724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x132728: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x132728u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13272c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x13272cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x132730: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x132730u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132734: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x132734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x132738: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x132738u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13273c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x13273cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x132740: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x132740u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132744: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x132744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x132748: 0x8fb30050  lw          $s3, 0x50($sp)
    ctx->pc = 0x132748u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13274c: 0x92700048  lbu         $s0, 0x48($s3)
    ctx->pc = 0x13274cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x132750: 0x2188024  and         $s0, $s0, $t8
    ctx->pc = 0x132750u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 24));
    // 0x132754: 0x2198025  or          $s0, $s0, $t9
    ctx->pc = 0x132754u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 25));
    // 0x132758: 0xa2700048  sb          $s0, 0x48($s3)
    ctx->pc = 0x132758u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 72), (uint8_t)GPR_U32(ctx, 16));
    // 0x13275c: 0x8fb90050  lw          $t9, 0x50($sp)
    ctx->pc = 0x13275cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132760: 0x93300048  lbu         $s0, 0x48($t9)
    ctx->pc = 0x132760u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 72)));
    // 0x132764: 0x20e7024  and         $t6, $s0, $t6
    ctx->pc = 0x132764u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) & GPR_U64(ctx, 14));
    // 0x132768: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x132768u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x13276c: 0xa32e0048  sb          $t6, 0x48($t9)
    ctx->pc = 0x13276cu;
    WRITE8(ADD32(GPR_U32(ctx, 25), 72), (uint8_t)GPR_U32(ctx, 14));
    // 0x132770: 0x8faf0050  lw          $t7, 0x50($sp)
    ctx->pc = 0x132770u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132774: 0x95ee0048  lhu         $t6, 0x48($t7)
    ctx->pc = 0x132774u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 72)));
    // 0x132778: 0x1cc6024  and         $t4, $t6, $t4
    ctx->pc = 0x132778u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) & GPR_U64(ctx, 12));
    // 0x13277c: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x13277cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x132780: 0xa5ec0048  sh          $t4, 0x48($t7)
    ctx->pc = 0x132780u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 72), (uint16_t)GPR_U32(ctx, 12));
    // 0x132784: 0x8fad0050  lw          $t5, 0x50($sp)
    ctx->pc = 0x132784u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132788: 0x91ac0049  lbu         $t4, 0x49($t5)
    ctx->pc = 0x132788u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 73)));
    // 0x13278c: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x13278cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x132790: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x132790u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x132794: 0xa1aa0049  sb          $t2, 0x49($t5)
    ctx->pc = 0x132794u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 73), (uint8_t)GPR_U32(ctx, 10));
    // 0x132798: 0x8fab0050  lw          $t3, 0x50($sp)
    ctx->pc = 0x132798u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13279c: 0x916a0049  lbu         $t2, 0x49($t3)
    ctx->pc = 0x13279cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 73)));
    // 0x1327a0: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x1327a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x1327a4: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1327a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1327a8: 0xa1680049  sb          $t0, 0x49($t3)
    ctx->pc = 0x1327a8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 73), (uint8_t)GPR_U32(ctx, 8));
    // 0x1327ac: 0x8fa90050  lw          $t1, 0x50($sp)
    ctx->pc = 0x1327acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1327b0: 0x91280049  lbu         $t0, 0x49($t1)
    ctx->pc = 0x1327b0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 73)));
    // 0x1327b4: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1327b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x1327b8: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1327b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1327bc: 0xa1260049  sb          $a2, 0x49($t1)
    ctx->pc = 0x1327bcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 73), (uint8_t)GPR_U32(ctx, 6));
    // 0x1327c0: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x1327c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1327c4: 0x90e6004a  lbu         $a2, 0x4A($a3)
    ctx->pc = 0x1327c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 74)));
    // 0x1327c8: 0xd83024  and         $a2, $a2, $t8
    ctx->pc = 0x1327c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 24));
    // 0x1327cc: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x1327ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1327d0: 0xa0e4004a  sb          $a0, 0x4A($a3)
    ctx->pc = 0x1327d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 74), (uint8_t)GPR_U32(ctx, 4));
    // 0x1327d4: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x1327d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1327d8: 0x90c4004a  lbu         $a0, 0x4A($a2)
    ctx->pc = 0x1327d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 74)));
    // 0x1327dc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1327dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1327e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1327e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1327e4: 0xa0c2004a  sb          $v0, 0x4A($a2)
    ctx->pc = 0x1327e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 74), (uint8_t)GPR_U32(ctx, 2));
    // 0x1327e8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1327e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1327ec: 0x946200a0  lhu         $v0, 0xA0($v1)
    ctx->pc = 0x1327ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x1327f0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x1327f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x1327f4: 0xfc620090  sd          $v0, 0x90($v1)
    ctx->pc = 0x1327f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 2));
    // 0x1327f8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1327f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1327fc: 0xfc510098  sd          $s1, 0x98($v0)
    ctx->pc = 0x1327fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 152), GPR_U64(ctx, 17));
    // 0x132800: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x132800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132804: 0xc04cd30  jal         func_1334C0
    ctx->pc = 0x132804u;
    SET_GPR_U32(ctx, 31, 0x13280Cu);
    ctx->pc = 0x132808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132804u;
    // 0x132808: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334C0u, 0x132804u, 0x13280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13280Cu;
label_13280c:
    // 0x13280c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132810: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x132810u;
    SET_GPR_U32(ctx, 31, 0x132818u);
    ctx->pc = 0x132814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132810u;
    // 0x132814: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x132810u, 0x132818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132818u;
label_132818:
    // 0x132818: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x132818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13281c: 0x83828210  lb          $v0, -0x7DF0($gp)
    ctx->pc = 0x13281cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935056)));
    // 0x132820: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x132820u;
    {
        const bool branch_taken_0x132820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132820u;
        // 0x132824: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132820) {
            ctx->pc = 0x132858u;
            goto label_132858;
        }
    }
    ctx->pc = 0x132828u;
    // 0x132828: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x13282c: 0xc04ca54  jal         func_132950
    ctx->pc = 0x13282Cu;
    SET_GPR_U32(ctx, 31, 0x132834u);
    ctx->pc = 0x132830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13282Cu;
    // 0x132830: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132950u, 0x13282Cu, 0x132834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132834u;
label_132834:
    // 0x132834: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x132838: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x132838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x13283c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x13283cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x132840: 0x2484ccc8  addiu       $a0, $a0, -0x3338
    ctx->pc = 0x132840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    // 0x132844: 0x24a528c0  addiu       $a1, $a1, 0x28C0
    ctx->pc = 0x132844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10432));
    // 0x132848: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x132848u;
    SET_GPR_U32(ctx, 31, 0x132850u);
    ctx->pc = 0x13284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132848u;
    // 0x13284c: 0x24c662a0  addiu       $a2, $a2, 0x62A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x132848u, 0x132850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132850u;
label_132850:
    // 0x132850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132854: 0xa3828210  sb          $v0, -0x7DF0($gp)
    ctx->pc = 0x132854u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935056), (uint8_t)GPR_U32(ctx, 2));
label_132858:
    // 0x132858: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x13285c: 0xc04c554  jal         func_131550
    ctx->pc = 0x13285Cu;
    SET_GPR_U32(ctx, 31, 0x132864u);
    ctx->pc = 0x132860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13285Cu;
    // 0x132860: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13285Cu, 0x132864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132864u;
label_132864:
    // 0x132864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x132864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132868: 0xc04c550  jal         func_131540
    ctx->pc = 0x132868u;
    SET_GPR_U32(ctx, 31, 0x132870u);
    ctx->pc = 0x13286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132868u;
    // 0x13286c: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x132868u, 0x132870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132870u;
label_132870:
    // 0x132870: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x132870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x132874: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x132874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x132878: 0x24a5ccc8  addiu       $a1, $a1, -0x3338
    ctx->pc = 0x132878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954184));
    // 0x13287c: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x13287cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x132880: 0xc04c93c  jal         func_1324F0
    ctx->pc = 0x132880u;
    SET_GPR_U32(ctx, 31, 0x132888u);
    ctx->pc = 0x132884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132880u;
    // 0x132884: 0x27a70054  addiu       $a3, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1324F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1324F0u, 0x132880u, 0x132888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132888u;
label_132888:
    // 0x132888: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x132888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13288c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13288cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132890: 0xac4300a8  sw          $v1, 0xA8($v0)
    ctx->pc = 0x132890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
    // 0x132894: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x132894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132898: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x132898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13289c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13289cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1328a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1328a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1328a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1328a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1328a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1328a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1328ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1328ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1328B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1328ACu;
        // 0x1328b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1328ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1328B4u;
}
