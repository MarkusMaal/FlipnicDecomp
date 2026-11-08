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

// Function: entry_001b4688
// Address: 0x1b4688 - 0x1b47b8
void entry_001b4688_0x1b4688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4688_0x1b4688");
#endif

    ctx->pc = 0x1b4688u;

    // 0x1b4688: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x1b4688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1b468c: 0x3c0207ff  lui         $v0, 0x7FF
    ctx->pc = 0x1b468cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2047 << 16));
    // 0x1b4690: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1b4690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1b4694: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x1b4694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b4698: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1b4698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1b469c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1b469cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b46a0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1b46a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b46a4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1b46a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1b46a8: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1B46A8u;
    {
        const bool branch_taken_0x1b46a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B46ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46A8u;
        // 0x1b46ac: 0x668024  and         $s0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46a8) {
            ctx->pc = 0x1B47D8u;
            return;
        }
    }
    ctx->pc = 0x1B46B0u;
    // 0x1b46b0: 0xafb3005c  sw          $s3, 0x5C($sp)
    ctx->pc = 0x1b46b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
    // 0x1b46b4: 0x8f838720  lw          $v1, -0x78E0($gp)
    ctx->pc = 0x1b46b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936352)));
    // 0x1b46b8: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1b46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1b46bc: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1B46BCu;
    {
        const bool branch_taken_0x1b46bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b46bc) {
            ctx->pc = 0x1B47B8u;
            return;
        }
    }
    ctx->pc = 0x1B46C4u;
    // 0x1b46c4: 0xdcaa0060  ld          $t2, 0x60($a1)
    ctx->pc = 0x1b46c4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1b46c8: 0x64020002  daddiu      $v0, $zero, 0x2
    ctx->pc = 0x1b46c8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x1b46cc: 0x25bb8  dsll        $t3, $v0, 14
    ctx->pc = 0x1b46ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << 14);
    // 0x1b46d0: 0x2406fc0f  addiu       $a2, $zero, -0x3F1
    ctx->pc = 0x1b46d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x1b46d4: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x1b46d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x1b46d8: 0x64070130  daddiu      $a3, $zero, 0x130
    ctx->pc = 0x1b46d8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)304);
    // 0x1b46dc: 0x34493fff  ori         $t1, $v0, 0x3FFF
    ctx->pc = 0x1b46dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x1b46e0: 0x2403ffc3  addiu       $v1, $zero, -0x3D
    ctx->pc = 0x1b46e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x1b46e4: 0x6402000a  daddiu      $v0, $zero, 0xA
    ctx->pc = 0x1b46e4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10);
    // 0x1b46e8: 0x6404001c  daddiu      $a0, $zero, 0x1C
    ctx->pc = 0x1b46e8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)28);
    // 0x1b46ec: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x1b46ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1b46f0: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b46f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b46f4: 0x1495024  and         $t2, $t2, $t1
    ctx->pc = 0x1b46f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x1b46f8: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1b46f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x1b46fc: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x1b46fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1b4700: 0xfcaa0060  sd          $t2, 0x60($a1)
    ctx->pc = 0x1b4700u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 96), GPR_U64(ctx, 10));
    // 0x1b4704: 0x3c083fff  lui         $t0, 0x3FFF
    ctx->pc = 0x1b4704u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16383 << 16));
    // 0x1b4708: 0x94ad0062  lhu         $t5, 0x62($a1)
    ctx->pc = 0x1b4708u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 98)));
    // 0x1b470c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x1b470cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x1b4710: 0x1096025  or          $t4, $t0, $t1
    ctx->pc = 0x1b4710u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1b4714: 0x300a001f  andi        $t2, $zero, 0x1F
    ctx->pc = 0x1b4714u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x1b4718: 0x3c09fff8  lui         $t1, 0xFFF8
    ctx->pc = 0x1b4718u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65528 << 16));
    // 0x1b471c: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x1b471cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b4720: 0x3529001f  ori         $t1, $t1, 0x1F
    ctx->pc = 0x1b4720u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)31);
    // 0x1b4724: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x1b4724u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x1b4728: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x1b4728u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1b472c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x1b472cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x1b4730: 0x1095825  or          $t3, $t0, $t1
    ctx->pc = 0x1b4730u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1b4734: 0x1a66824  and         $t5, $t5, $a2
    ctx->pc = 0x1b4734u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 6));
    // 0x1b4738: 0x2409ffe0  addiu       $t1, $zero, -0x20
    ctx->pc = 0x1b4738u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1b473c: 0x1a73825  or          $a3, $t5, $a3
    ctx->pc = 0x1b473cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 13) | GPR_U64(ctx, 7));
    // 0x1b4740: 0x2406ff1f  addiu       $a2, $zero, -0xE1
    ctx->pc = 0x1b4740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x1b4744: 0xa4a70062  sh          $a3, 0x62($a1)
    ctx->pc = 0x1b4744u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 98), (uint16_t)GPR_U32(ctx, 7));
    // 0x1b4748: 0x64080020  daddiu      $t0, $zero, 0x20
    ctx->pc = 0x1b4748u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
    // 0x1b474c: 0x90a70063  lbu         $a3, 0x63($a1)
    ctx->pc = 0x1b474cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 99)));
    // 0x1b4750: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1b4750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1b4754: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b4754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b4758: 0xa0a30063  sb          $v1, 0x63($a1)
    ctx->pc = 0x1b4758u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 99), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b475c: 0xdca30060  ld          $v1, 0x60($a1)
    ctx->pc = 0x1b475cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1b4760: 0x6c1824  and         $v1, $v1, $t4
    ctx->pc = 0x1b4760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
    // 0x1b4764: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b4764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b4768: 0xfca20060  sd          $v0, 0x60($a1)
    ctx->pc = 0x1b4768u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 96), GPR_U64(ctx, 2));
    // 0x1b476c: 0x94a30060  lhu         $v1, 0x60($a1)
    ctx->pc = 0x1b476cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1b4770: 0xdca20060  ld          $v0, 0x60($a1)
    ctx->pc = 0x1b4770u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1b4774: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1b4774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1b4778: 0x246300dc  addiu       $v1, $v1, 0xDC
    ctx->pc = 0x1b4778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 220));
    // 0x1b477c: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x1b477cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x1b4780: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b4784: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b4784u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b4788: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1b4788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1b478c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b478cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b4790: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b4790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b4794: 0xfca20060  sd          $v0, 0x60($a1)
    ctx->pc = 0x1b4794u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 96), GPR_U64(ctx, 2));
    // 0x1b4798: 0x90a20067  lbu         $v0, 0x67($a1)
    ctx->pc = 0x1b4798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 103)));
    // 0x1b479c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1b479cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1b47a0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x1b47a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x1b47a4: 0xa0a20067  sb          $v0, 0x67($a1)
    ctx->pc = 0x1b47a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 103), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b47a8: 0x90a20067  lbu         $v0, 0x67($a1)
    ctx->pc = 0x1b47a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 103)));
    // 0x1b47ac: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1b47acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1b47b0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1b47b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1b47b4: 0xa0a20067  sb          $v0, 0x67($a1)
    ctx->pc = 0x1b47b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 103), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1b47b8u;
}
