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

// Function: entry_00181838
// Address: 0x181838 - 0x181bd0
void entry_00181838_0x181838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181838_0x181838");
#endif

    switch (ctx->pc) {
        case 0x181bc8u: goto label_181bc8;
        default: break;
    }

    ctx->pc = 0x181838u;

    // 0x181838: 0x83828690  lb          $v0, -0x7970($gp)
    ctx->pc = 0x181838u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936208)));
    // 0x18183c: 0x144000e4  bnez        $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x18183Cu;
    {
        const bool branch_taken_0x18183c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18183Cu;
        // 0x181840: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18183c) {
            ctx->pc = 0x181BD0u;
            return;
        }
    }
    ctx->pc = 0x181844u;
    // 0x181844: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x181844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x181848: 0xac208b20  sw          $zero, -0x74E0($at)
    ctx->pc = 0x181848u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937376), GPR_U32(ctx, 0));
    // 0x18184c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18184cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x181850: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181854: 0x34028009  ori         $v0, $zero, 0x8009
    ctx->pc = 0x181854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x181858: 0xac208b24  sw          $zero, -0x74DC($at)
    ctx->pc = 0x181858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368B24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368B24u, _value); } while (0);
    // 0x18185c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18185cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x181860: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181864: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x181864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x181868: 0xfc208b08  sd          $zero, -0x74F8($at)
    ctx->pc = 0x181868u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368B08u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368B08u, _value); } while (0);
    // 0x18186c: 0x2412fffe  addiu       $s2, $zero, -0x2
    ctx->pc = 0x18186cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x181870: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181874: 0x640b0001  daddiu      $t3, $zero, 0x1
    ctx->pc = 0x181874u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x181878: 0xfc228ac0  sd          $v0, -0x7540($at)
    ctx->pc = 0x181878u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937280), GPR_U64(ctx, 2));
    // 0x18187c: 0x2409ffcf  addiu       $t1, $zero, -0x31
    ctx->pc = 0x18187cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x181880: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181888: 0xfc238ac8  sd          $v1, -0x7538($at)
    ctx->pc = 0x181888u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368AC8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368AC8u, _value); } while (0);
    // 0x18188c: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x18188cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x181890: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181894: 0x640a0010  daddiu      $t2, $zero, 0x10
    ctx->pc = 0x181894u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x181898: 0xfc228b18  sd          $v0, -0x74E8($at)
    ctx->pc = 0x181898u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937368), GPR_U64(ctx, 2));
    // 0x18189c: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x18189cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x1818a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1818a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1818a4: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x1818a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x1818a8: 0x902c8ae0  lbu         $t4, -0x7520($at)
    ctx->pc = 0x1818a8u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)FAST_READ8(0x368AE0u));
    // 0x1818ac: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1818acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1818b0: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x1818b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1818b4: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x1818b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1818b8: 0x240efff9  addiu       $t6, $zero, -0x7
    ctx->pc = 0x1818b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x1818bc: 0x64080002  daddiu      $t0, $zero, 0x2
    ctx->pc = 0x1818bcu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x1818c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1818c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1818c4: 0x1926024  and         $t4, $t4, $s2
    ctx->pc = 0x1818c4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 18));
    // 0x1818c8: 0x90278ae1  lbu         $a3, -0x751F($at)
    ctx->pc = 0x1818c8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937313)));
    // 0x1818cc: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x1818ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x1818d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1818d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1818d4: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x1818d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x1818d8: 0x902f8ae2  lbu         $t7, -0x751E($at)
    ctx->pc = 0x1818d8u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937314)));
    // 0x1818dc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1818dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1818e0: 0x1f27824  and         $t7, $t7, $s2
    ctx->pc = 0x1818e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 18));
    // 0x1818e4: 0x902d8b00  lbu         $t5, -0x7500($at)
    ctx->pc = 0x1818e4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937344)));
    // 0x1818e8: 0x1eb7825  or          $t7, $t7, $t3
    ctx->pc = 0x1818e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x1818ec: 0x240bff7f  addiu       $t3, $zero, -0x81
    ctx->pc = 0x1818ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1818f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1818f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1818f4: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x1818f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x1818f8: 0xa02c8ae0  sb          $t4, -0x7520($at)
    ctx->pc = 0x1818f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937312), (uint8_t)GPR_U32(ctx, 12));
    // 0x1818fc: 0x46880  sll         $t5, $a0, 2
    ctx->pc = 0x1818fcu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x181900: 0xea6025  or          $t4, $a3, $t2
    ctx->pc = 0x181900u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x181904: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181908: 0x90278ae0  lbu         $a3, -0x7520($at)
    ctx->pc = 0x181908u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x368AE0u));
    // 0x18190c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18190cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181910: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x181910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x181914: 0xa02c8ae1  sb          $t4, -0x751F($at)
    ctx->pc = 0x181914u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937313), (uint8_t)GPR_U32(ctx, 12));
    // 0x181918: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x181918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x18191c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18191cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181920: 0x461c0  sll         $t4, $a0, 7
    ctx->pc = 0x181920u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x181924: 0x90328ae1  lbu         $s2, -0x751F($at)
    ctx->pc = 0x181924u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937313)));
    // 0x181928: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x181928u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x18192c: 0x64070040  daddiu      $a3, $zero, 0x40
    ctx->pc = 0x18192cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x181930: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181934: 0xa02f8ae2  sb          $t7, -0x751E($at)
    ctx->pc = 0x181934u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x368AE2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368AE2u, _value); } while (0);
    // 0x181938: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18193c: 0x47940  sll         $t7, $a0, 5
    ctx->pc = 0x18193cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x181940: 0x902c8ae2  lbu         $t4, -0x751E($at)
    ctx->pc = 0x181940u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937314)));
    // 0x181944: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181948: 0xa02b8b00  sb          $t3, -0x7500($at)
    ctx->pc = 0x181948u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x368B00u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368B00u, _value); } while (0);
    // 0x18194c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18194cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181950: 0x902b8b00  lbu         $t3, -0x7500($at)
    ctx->pc = 0x181950u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)FAST_READ8(0x368B00u));
    // 0x181954: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181958: 0xa0258ae0  sb          $a1, -0x7520($at)
    ctx->pc = 0x181958u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368AE0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368AE0u, _value); } while (0);
    // 0x18195c: 0x2422824  and         $a1, $s2, $v0
    ctx->pc = 0x18195cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x181960: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181964: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x181964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x181968: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x181968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x18196c: 0xa0238ae1  sb          $v1, -0x751F($at)
    ctx->pc = 0x18196cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937313), (uint8_t)GPR_U32(ctx, 3));
    // 0x181970: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x181970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x181974: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181978: 0x18e1824  and         $v1, $t4, $t6
    ctx->pc = 0x181978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & GPR_U64(ctx, 14));
    // 0x18197c: 0x90268b01  lbu         $a2, -0x74FF($at)
    ctx->pc = 0x18197cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937345)));
    // 0x181980: 0x686025  or          $t4, $v1, $t0
    ctx->pc = 0x181980u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x181984: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x181984u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x181988: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x181988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x18198c: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x18198cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x181990: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181994: 0xc32024  and         $a0, $a2, $v1
    ctx->pc = 0x181994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x181998: 0xa02c8ae2  sb          $t4, -0x751E($at)
    ctx->pc = 0x181998u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937314), (uint8_t)GPR_U32(ctx, 12));
    // 0x18199c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x18199cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1819a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1819a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1819a4: 0x240c0080  addiu       $t4, $zero, 0x80
    ctx->pc = 0x1819a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1819a8: 0xa0228b00  sb          $v0, -0x7500($at)
    ctx->pc = 0x1819a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368B00u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368B00u, _value); } while (0);
    // 0x1819ac: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1819acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1819b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1819b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1819b4: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x1819b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1819b8: 0x90328b00  lbu         $s2, -0x7500($at)
    ctx->pc = 0x1819b8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)FAST_READ8(0x368B00u));
    // 0x1819bc: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x1819bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1819c0: 0x64050006  daddiu      $a1, $zero, 0x6
    ctx->pc = 0x1819c0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x1819c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1819c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1819c8: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1819c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1819cc: 0xa0248b01  sb          $a0, -0x74FF($at)
    ctx->pc = 0x1819ccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937345), (uint8_t)GPR_U32(ctx, 4));
    // 0x1819d0: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x1819d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x1819d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1819d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1819d8: 0x2404fff8  addiu       $a0, $zero, -0x8
    ctx->pc = 0x1819d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1819dc: 0x902e8b01  lbu         $t6, -0x74FF($at)
    ctx->pc = 0x1819dcu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)FAST_READ8(0x368B01u));
    // 0x1819e0: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x1819e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1819e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1819e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1819e8: 0x1c31824  and         $v1, $t6, $v1
    ctx->pc = 0x1819e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1819ec: 0xa02c8b10  sb          $t4, -0x74F0($at)
    ctx->pc = 0x1819ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937360), (uint8_t)GPR_U32(ctx, 12));
    // 0x1819f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1819f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1819f4: 0xa02c8b11  sb          $t4, -0x74EF($at)
    ctx->pc = 0x1819f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x368B11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368B11u, _value); } while (0);
    // 0x1819f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1819f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1819fc: 0xa0228b00  sb          $v0, -0x7500($at)
    ctx->pc = 0x1819fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368B00u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368B00u, _value); } while (0);
    // 0x181a00: 0x24026c00  addiu       $v0, $zero, 0x6C00
    ctx->pc = 0x181a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x181a04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181a08: 0xa4228b30  sh          $v0, -0x74D0($at)
    ctx->pc = 0x181a08u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368B30u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368B30u, _value); } while (0);
    // 0x181a0c: 0x24027800  addiu       $v0, $zero, 0x7800
    ctx->pc = 0x181a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x181a10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181a14: 0xa4228b32  sh          $v0, -0x74CE($at)
    ctx->pc = 0x181a14u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368B32u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368B32u, _value); } while (0);
    // 0x181a18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181a1c: 0x6d1025  or          $v0, $v1, $t5
    ctx->pc = 0x181a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x181a20: 0xa02c8b12  sb          $t4, -0x74EE($at)
    ctx->pc = 0x181a20u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x368B12u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368B12u, _value); } while (0);
    // 0x181a24: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x181a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x181a28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181a2c: 0xa0228b01  sb          $v0, -0x74FF($at)
    ctx->pc = 0x181a2cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368B01u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368B01u, _value); } while (0);
    // 0x181a30: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181a34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x181a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x181a38: 0xa02c8b13  sb          $t4, -0x74ED($at)
    ctx->pc = 0x181a38u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x368B13u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368B13u, _value); } while (0);
    // 0x181a3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181a40: 0xa02c8af4  sb          $t4, -0x750C($at)
    ctx->pc = 0x181a40u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x368AF4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368AF4u, _value); } while (0);
    // 0x181a44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181a48: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x181a48u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x181a4c: 0xac2b8b14  sw          $t3, -0x74EC($at)
    ctx->pc = 0x181a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937364), GPR_U32(ctx, 11));
    // 0x181a50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x181a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x181a54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181a58: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x181a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x181a5c: 0xac2b8b40  sw          $t3, -0x74C0($at)
    ctx->pc = 0x181a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937408), GPR_U32(ctx, 11));
    // 0x181a60: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181a64: 0xac2b8b44  sw          $t3, -0x74BC($at)
    ctx->pc = 0x181a64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x368B44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368B44u, _value); } while (0);
    // 0x181a68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181a6c: 0x344bffff  ori         $t3, $v0, 0xFFFF
    ctx->pc = 0x181a6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x181a70: 0x902e8b00  lbu         $t6, -0x7500($at)
    ctx->pc = 0x181a70u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)FAST_READ8(0x368B00u));
    // 0x181a74: 0x16c1025  or          $v0, $t3, $t4
    ctx->pc = 0x181a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x181a78: 0x704b1389  pcpyld      $v0, $v0, $t3
    ctx->pc = 0x181a78u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 11)));
    // 0x181a7c: 0x340c9400  ori         $t4, $zero, 0x9400
    ctx->pc = 0x181a7cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
    // 0x181a80: 0x340b8800  ori         $t3, $zero, 0x8800
    ctx->pc = 0x181a80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x181a84: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181a88: 0x1c63024  and         $a2, $t6, $a2
    ctx->pc = 0x181a88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) & GPR_U64(ctx, 6));
    // 0x181a8c: 0xdc2d8b30  ld          $t5, -0x74D0($at)
    ctx->pc = 0x181a8cu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 1), 4294937392)));
    // 0x181a90: 0xca5025  or          $t2, $a2, $t2
    ctx->pc = 0x181a90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x181a94: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181a98: 0x1a23024  and         $a2, $t5, $v0
    ctx->pc = 0x181a98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
    // 0x181a9c: 0xa42c8b50  sh          $t4, -0x74B0($at)
    ctx->pc = 0x181a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937424), (uint16_t)GPR_U32(ctx, 12));
    // 0x181aa0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x181aa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x181aa4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181aa8: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x181aa8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181aac: 0xa42b8b52  sh          $t3, -0x74AE($at)
    ctx->pc = 0x181aacu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x368B52u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368B52u, _value); } while (0);
    // 0x181ab0: 0x240dfff3  addiu       $t5, $zero, -0xD
    ctx->pc = 0x181ab0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x181ab4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181ab8: 0x300b0003  andi        $t3, $zero, 0x3
    ctx->pc = 0x181ab8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x181abc: 0xfc2c8b28  sd          $t4, -0x74D8($at)
    ctx->pc = 0x181abcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 12)); ps2TraceGuestWrite(rdram, 0x368B28u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368B28u, _value); } while (0);
    // 0x181ac0: 0xb7080  sll         $t6, $t3, 2
    ctx->pc = 0x181ac0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x181ac4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181ac8: 0xfc2c8b48  sd          $t4, -0x74B8($at)
    ctx->pc = 0x181ac8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 12)); ps2TraceGuestWrite(rdram, 0x368B48u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368B48u, _value); } while (0);
    // 0x181acc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181ad0: 0xb6100  sll         $t4, $t3, 4
    ctx->pc = 0x181ad0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x181ad4: 0xa02a8b00  sb          $t2, -0x7500($at)
    ctx->pc = 0x181ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937344), (uint8_t)GPR_U32(ctx, 10));
    // 0x181ad8: 0x240bff3f  addiu       $t3, $zero, -0xC1
    ctx->pc = 0x181ad8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x181adc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181ae0: 0x240a003f  addiu       $t2, $zero, 0x3F
    ctx->pc = 0x181ae0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x181ae4: 0xfc268b30  sd          $a2, -0x74D0($at)
    ctx->pc = 0x181ae4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 6)); ps2TraceGuestWrite(rdram, 0x368B30u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368B30u, _value); } while (0);
    // 0x181ae8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181aec: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x181aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x181af0: 0x90388b00  lbu         $t8, -0x7500($at)
    ctx->pc = 0x181af0u;
    SET_GPR_ZE32(ctx, 24, (uint8_t)FAST_READ8(0x368B00u));
    // 0x181af4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181af8: 0x3042024  and         $a0, $t8, $a0
    ctx->pc = 0x181af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x181afc: 0xdc338b50  ld          $s3, -0x74B0($at)
    ctx->pc = 0x181afcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 1), 4294937424)));
    // 0x181b00: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x181b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x181b04: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x181b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x181b08: 0x24a51d30  addiu       $a1, $a1, 0x1D30
    ctx->pc = 0x181b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7472));
    // 0x181b0c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181b10: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x181b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x181b14: 0x90328af0  lbu         $s2, -0x7510($at)
    ctx->pc = 0x181b14u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937328)));
    // 0x181b18: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x181b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x181b1c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181b20: 0x24f1024  and         $v0, $s2, $t7
    ctx->pc = 0x181b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 15));
    // 0x181b24: 0xfc2a8ad8  sd          $t2, -0x7528($at)
    ctx->pc = 0x181b24u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937304), GPR_U64(ctx, 10));
    // 0x181b28: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x181b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x181b2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181b30: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x181b30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x181b34: 0xfc268ae8  sd          $a2, -0x7518($at)
    ctx->pc = 0x181b34u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 6)); ps2TraceGuestWrite(rdram, 0x368AE8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368AE8u, _value); } while (0);
    // 0x181b38: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x181b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x181b3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181b40: 0xfc268af8  sd          $a2, -0x7508($at)
    ctx->pc = 0x181b40u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 6)); ps2TraceGuestWrite(rdram, 0x368AF8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368AF8u, _value); } while (0);
    // 0x181b44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181b48: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x181b48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x181b4c: 0xa0248b00  sb          $a0, -0x7500($at)
    ctx->pc = 0x181b4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368B00u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368B00u, _value); } while (0);
    // 0x181b50: 0x24c68ab0  addiu       $a2, $a2, -0x7550
    ctx->pc = 0x181b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937264));
    // 0x181b54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181b58: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x181b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x181b5c: 0xfc238b50  sd          $v1, -0x74B0($at)
    ctx->pc = 0x181b5cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368B50u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368B50u, _value); } while (0);
    // 0x181b60: 0x24848ac0  addiu       $a0, $a0, -0x7540
    ctx->pc = 0x181b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937280));
    // 0x181b64: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181b68: 0xa0228af0  sb          $v0, -0x7510($at)
    ctx->pc = 0x181b68u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368AF0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368AF0u, _value); } while (0);
    // 0x181b6c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181b70: 0xfc2a8b38  sd          $t2, -0x74C8($at)
    ctx->pc = 0x181b70u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 10)); ps2TraceGuestWrite(rdram, 0x368B38u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368B38u, _value); } while (0);
    // 0x181b74: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181b78: 0xfc2a8b58  sd          $t2, -0x74A8($at)
    ctx->pc = 0x181b78u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 10)); ps2TraceGuestWrite(rdram, 0x368B58u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368B58u, _value); } while (0);
    // 0x181b7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181b80: 0x90228af0  lbu         $v0, -0x7510($at)
    ctx->pc = 0x181b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368AF0u));
    // 0x181b84: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x181b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x181b88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181b8c: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x181b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x181b90: 0xa0228af0  sb          $v0, -0x7510($at)
    ctx->pc = 0x181b90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368AF0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368AF0u, _value); } while (0);
    // 0x181b94: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181b98: 0x90228af0  lbu         $v0, -0x7510($at)
    ctx->pc = 0x181b98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368AF0u));
    // 0x181b9c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x181b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x181ba0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181ba4: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x181ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x181ba8: 0xa0228af0  sb          $v0, -0x7510($at)
    ctx->pc = 0x181ba8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368AF0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368AF0u, _value); } while (0);
    // 0x181bac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181bb0: 0x90228af0  lbu         $v0, -0x7510($at)
    ctx->pc = 0x181bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368AF0u));
    // 0x181bb4: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x181bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x181bb8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181bbc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x181bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x181bc0: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x181BC0u;
    SET_GPR_U32(ctx, 31, 0x181BC8u);
    ctx->pc = 0x181BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181BC0u;
    // 0x181bc4: 0xa0228af0  sb          $v0, -0x7510($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937328), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x181BC0u, 0x181BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181BC8u;
label_181bc8:
    // 0x181bc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181bcc: 0xa3828690  sb          $v0, -0x7970($gp)
    ctx->pc = 0x181bccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936208), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x181bd0u;
}
