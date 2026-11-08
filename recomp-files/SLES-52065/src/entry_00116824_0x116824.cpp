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

// Function: entry_00116824
// Address: 0x116824 - 0x116a30
void entry_00116824_0x116824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116824_0x116824");
#endif

    ctx->pc = 0x116824u;

label_116824:
    // 0x116824: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x116824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x116828: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x116828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x11682c: 0x8ccc0004  lw          $t4, 0x4($a2)
    ctx->pc = 0x11682cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x116830: 0x288900db  slti        $t1, $a0, 0xDB
    ctx->pc = 0x116830u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)219) ? 1 : 0);
    // 0x116834: 0x8cca0000  lw          $t2, 0x0($a2)
    ctx->pc = 0x116834u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x116838: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x116838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x11683c: 0x8ccb0634  lw          $t3, 0x634($a2)
    ctx->pc = 0x11683cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1588)));
    // 0x116840: 0x1876024  and         $t4, $t4, $a3
    ctx->pc = 0x116840u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 7));
    // 0x116844: 0x1485024  and         $t2, $t2, $t0
    ctx->pc = 0x116844u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x116848: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x116848u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x11684c: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x11684cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x116850: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x116850u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x116854: 0x18b5826  xor         $t3, $t4, $t3
    ctx->pc = 0x116854u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
    // 0x116858: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x116858u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x11685c: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x11685cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x116860: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x116860u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x116864: 0x16a5026  xor         $t2, $t3, $t2
    ctx->pc = 0x116864u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x116868: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x116868u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x11686c: 0x8ccc0008  lw          $t4, 0x8($a2)
    ctx->pc = 0x11686cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x116870: 0x8cca0004  lw          $t2, 0x4($a2)
    ctx->pc = 0x116870u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x116874: 0x8ccb0638  lw          $t3, 0x638($a2)
    ctx->pc = 0x116874u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1592)));
    // 0x116878: 0xc607c  dsll32      $t4, $t4, 1
    ctx->pc = 0x116878u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 1));
    // 0x11687c: 0xc607e  dsrl32      $t4, $t4, 1
    ctx->pc = 0x11687cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 1));
    // 0x116880: 0x1485024  and         $t2, $t2, $t0
    ctx->pc = 0x116880u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x116884: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x116884u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x116888: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x116888u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x11688c: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x11688cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x116890: 0x18b5826  xor         $t3, $t4, $t3
    ctx->pc = 0x116890u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
    // 0x116894: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x116894u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x116898: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x116898u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x11689c: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x11689cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1168a0: 0x16a5026  xor         $t2, $t3, $t2
    ctx->pc = 0x1168a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x1168a4: 0xacca0004  sw          $t2, 0x4($a2)
    ctx->pc = 0x1168a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 10));
    // 0x1168a8: 0x8ccc000c  lw          $t4, 0xC($a2)
    ctx->pc = 0x1168a8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1168ac: 0x8cca0008  lw          $t2, 0x8($a2)
    ctx->pc = 0x1168acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1168b0: 0x8ccb063c  lw          $t3, 0x63C($a2)
    ctx->pc = 0x1168b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1596)));
    // 0x1168b4: 0xc607c  dsll32      $t4, $t4, 1
    ctx->pc = 0x1168b4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 1));
    // 0x1168b8: 0xc607e  dsrl32      $t4, $t4, 1
    ctx->pc = 0x1168b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 1));
    // 0x1168bc: 0x1485024  and         $t2, $t2, $t0
    ctx->pc = 0x1168bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x1168c0: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x1168c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x1168c4: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x1168c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x1168c8: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x1168c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x1168cc: 0x18b5826  xor         $t3, $t4, $t3
    ctx->pc = 0x1168ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
    // 0x1168d0: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1168d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1168d4: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x1168d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1168d8: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x1168d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1168dc: 0x16a5026  xor         $t2, $t3, $t2
    ctx->pc = 0x1168dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x1168e0: 0xacca0008  sw          $t2, 0x8($a2)
    ctx->pc = 0x1168e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 10));
    // 0x1168e4: 0x8ccc0010  lw          $t4, 0x10($a2)
    ctx->pc = 0x1168e4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1168e8: 0x8cca000c  lw          $t2, 0xC($a2)
    ctx->pc = 0x1168e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1168ec: 0x8ccb0640  lw          $t3, 0x640($a2)
    ctx->pc = 0x1168ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1600)));
    // 0x1168f0: 0xc607c  dsll32      $t4, $t4, 1
    ctx->pc = 0x1168f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 1));
    // 0x1168f4: 0xc607e  dsrl32      $t4, $t4, 1
    ctx->pc = 0x1168f4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 1));
    // 0x1168f8: 0x1485024  and         $t2, $t2, $t0
    ctx->pc = 0x1168f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x1168fc: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x1168fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x116900: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x116900u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x116904: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x116904u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x116908: 0x18b5826  xor         $t3, $t4, $t3
    ctx->pc = 0x116908u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
    // 0x11690c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x11690cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x116910: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x116910u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x116914: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x116914u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x116918: 0x16a5026  xor         $t2, $t3, $t2
    ctx->pc = 0x116918u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x11691c: 0xacca000c  sw          $t2, 0xC($a2)
    ctx->pc = 0x11691cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 10));
    // 0x116920: 0x8ccc0014  lw          $t4, 0x14($a2)
    ctx->pc = 0x116920u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x116924: 0x8cca0010  lw          $t2, 0x10($a2)
    ctx->pc = 0x116924u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x116928: 0x8ccb0644  lw          $t3, 0x644($a2)
    ctx->pc = 0x116928u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1604)));
    // 0x11692c: 0xc607c  dsll32      $t4, $t4, 1
    ctx->pc = 0x11692cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 1));
    // 0x116930: 0xc607e  dsrl32      $t4, $t4, 1
    ctx->pc = 0x116930u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 1));
    // 0x116934: 0x1485024  and         $t2, $t2, $t0
    ctx->pc = 0x116934u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x116938: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x116938u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x11693c: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x11693cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x116940: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x116940u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x116944: 0x18b5826  xor         $t3, $t4, $t3
    ctx->pc = 0x116944u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
    // 0x116948: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x116948u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x11694c: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x11694cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x116950: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x116950u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x116954: 0x16a5026  xor         $t2, $t3, $t2
    ctx->pc = 0x116954u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x116958: 0xacca0010  sw          $t2, 0x10($a2)
    ctx->pc = 0x116958u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 10));
    // 0x11695c: 0x8ccc0018  lw          $t4, 0x18($a2)
    ctx->pc = 0x11695cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x116960: 0x8cca0014  lw          $t2, 0x14($a2)
    ctx->pc = 0x116960u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x116964: 0x8ccb0648  lw          $t3, 0x648($a2)
    ctx->pc = 0x116964u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1608)));
    // 0x116968: 0xc607c  dsll32      $t4, $t4, 1
    ctx->pc = 0x116968u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 1));
    // 0x11696c: 0xc607e  dsrl32      $t4, $t4, 1
    ctx->pc = 0x11696cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 1));
    // 0x116970: 0x1485024  and         $t2, $t2, $t0
    ctx->pc = 0x116970u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x116974: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x116974u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x116978: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x116978u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x11697c: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x11697cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x116980: 0x18b5826  xor         $t3, $t4, $t3
    ctx->pc = 0x116980u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
    // 0x116984: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x116984u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x116988: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x116988u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x11698c: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x11698cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x116990: 0x16a5026  xor         $t2, $t3, $t2
    ctx->pc = 0x116990u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x116994: 0xacca0014  sw          $t2, 0x14($a2)
    ctx->pc = 0x116994u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 10));
    // 0x116998: 0x8ccc001c  lw          $t4, 0x1C($a2)
    ctx->pc = 0x116998u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x11699c: 0x8cca0018  lw          $t2, 0x18($a2)
    ctx->pc = 0x11699cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1169a0: 0x8ccb064c  lw          $t3, 0x64C($a2)
    ctx->pc = 0x1169a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1612)));
    // 0x1169a4: 0xc607c  dsll32      $t4, $t4, 1
    ctx->pc = 0x1169a4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 1));
    // 0x1169a8: 0xc607e  dsrl32      $t4, $t4, 1
    ctx->pc = 0x1169a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 1));
    // 0x1169ac: 0x1485024  and         $t2, $t2, $t0
    ctx->pc = 0x1169acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x1169b0: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x1169b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x1169b4: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x1169b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x1169b8: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x1169b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x1169bc: 0x18b5826  xor         $t3, $t4, $t3
    ctx->pc = 0x1169bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
    // 0x1169c0: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1169c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1169c4: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x1169c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1169c8: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x1169c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1169cc: 0x16a5026  xor         $t2, $t3, $t2
    ctx->pc = 0x1169ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x1169d0: 0xacca0018  sw          $t2, 0x18($a2)
    ctx->pc = 0x1169d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 10));
    // 0x1169d4: 0x8cca0020  lw          $t2, 0x20($a2)
    ctx->pc = 0x1169d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1169d8: 0x8ccc001c  lw          $t4, 0x1C($a2)
    ctx->pc = 0x1169d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1169dc: 0x8ccb0650  lw          $t3, 0x650($a2)
    ctx->pc = 0x1169dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1616)));
    // 0x1169e0: 0xa507c  dsll32      $t2, $t2, 1
    ctx->pc = 0x1169e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 1));
    // 0x1169e4: 0x1886024  and         $t4, $t4, $t0
    ctx->pc = 0x1169e4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 8));
    // 0x1169e8: 0xa507e  dsrl32      $t2, $t2, 1
    ctx->pc = 0x1169e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 1));
    // 0x1169ec: 0x18a5025  or          $t2, $t4, $t2
    ctx->pc = 0x1169ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x1169f0: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x1169f0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x1169f4: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x1169f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x1169f8: 0x18b5826  xor         $t3, $t4, $t3
    ctx->pc = 0x1169f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
    // 0x1169fc: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1169fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x116a00: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x116a00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x116a04: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x116a04u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x116a08: 0x16a5026  xor         $t2, $t3, $t2
    ctx->pc = 0x116a08u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x116a0c: 0x1520ff85  bnez        $t1, . + 4 + (-0x7B << 2)
    ctx->pc = 0x116A0Cu;
    {
        const bool branch_taken_0x116a0c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x116A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A0Cu;
        // 0x116a10: 0xacca001c  sw          $t2, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a0c) {
            ctx->pc = 0x116824u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116824;
        }
    }
    ctx->pc = 0x116A14u;
    // 0x116a14: 0x288100e3  slti        $at, $a0, 0xE3
    ctx->pc = 0x116a14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)227) ? 1 : 0);
    // 0x116a18: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x116A18u;
    {
        const bool branch_taken_0x116a18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x116A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A18u;
        // 0x116a1c: 0x45080  sll         $t2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a18) {
            ctx->pc = 0x116A80u;
            return;
        }
    }
    ctx->pc = 0x116A20u;
    // 0x116a20: 0x3c090023  lui         $t1, 0x23
    ctx->pc = 0x116a20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)35 << 16));
    // 0x116a24: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x116a24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x116a28: 0x2529cce0  addiu       $t1, $t1, -0x3320
    ctx->pc = 0x116a28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954208));
    // 0x116a2c: 0x27858018  addiu       $a1, $gp, -0x7FE8
    ctx->pc = 0x116a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934552));
    ctx->pc = 0x116a30u;
}
