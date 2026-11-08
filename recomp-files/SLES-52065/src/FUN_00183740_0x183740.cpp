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

// Function: FUN_00183740
// Address: 0x183740 - 0x1838e0
void FUN_00183740_0x183740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00183740_0x183740");
#endif

    switch (ctx->pc) {
        case 0x1838a8u: goto label_1838a8;
        case 0x1838c4u: goto label_1838c4;
        default: break;
    }

    ctx->pc = 0x183740u;

    // 0x183740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x183744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x183748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18374c: 0x838286a8  lb          $v0, -0x7958($gp)
    ctx->pc = 0x18374cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936232)));
    // 0x183750: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x183750u;
    {
        const bool branch_taken_0x183750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183750u;
        // 0x183754: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183750) {
            ctx->pc = 0x1838B0u;
            goto label_1838b0;
        }
    }
    ctx->pc = 0x183758u;
    // 0x183758: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18375c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18375cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x183760: 0xa0208e92  sb          $zero, -0x716E($at)
    ctx->pc = 0x183760u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368E92u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368E92u, _value); } while (0);
    // 0x183764: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x183764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x183768: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18376c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x18376cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x183770: 0xfc228eb8  sd          $v0, -0x7148($at)
    ctx->pc = 0x183770u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294938296), GPR_U64(ctx, 2));
    // 0x183774: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x183774u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x183778: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x183778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18377c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18377cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183780: 0xa0228e93  sb          $v0, -0x716D($at)
    ctx->pc = 0x183780u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368E93u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368E93u, _value); } while (0);
    // 0x183784: 0x240dfff3  addiu       $t5, $zero, -0xD
    ctx->pc = 0x183784u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x183788: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x183788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18378c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18378cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183790: 0xa4228e90  sh          $v0, -0x7170($at)
    ctx->pc = 0x183790u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368E90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368E90u, _value); } while (0);
    // 0x183794: 0x640e0004  daddiu      $t6, $zero, 0x4
    ctx->pc = 0x183794u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x183798: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18379c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x18379cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1837a0: 0xac208e94  sw          $zero, -0x716C($at)
    ctx->pc = 0x1837a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368E94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368E94u, _value); } while (0);
    // 0x1837a4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1837a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1837a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1837a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1837ac: 0x240bc00f  addiu       $t3, $zero, -0x3FF1
    ctx->pc = 0x1837acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950927));
    // 0x1837b0: 0xac238e98  sw          $v1, -0x7168($at)
    ctx->pc = 0x1837b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368E98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368E98u, _value); } while (0);
    // 0x1837b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1837b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1837b8: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1837b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1837bc: 0xac228e9c  sw          $v0, -0x7164($at)
    ctx->pc = 0x1837bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368E9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368E9Cu, _value); } while (0);
    // 0x1837c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1837c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1837c4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1837c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1837c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1837c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1837cc: 0xfc228ea8  sd          $v0, -0x7158($at)
    ctx->pc = 0x1837ccu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368EA8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368EA8u, _value); } while (0);
    // 0x1837d0: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x1837d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1837d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1837d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1837d8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1837d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1837dc: 0xfc238ea0  sd          $v1, -0x7160($at)
    ctx->pc = 0x1837dcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368EA0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368EA0u, _value); } while (0);
    // 0x1837e0: 0x34493fff  ori         $t1, $v0, 0x3FFF
    ctx->pc = 0x1837e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x1837e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1837e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1837e8: 0x300303ff  andi        $v1, $zero, 0x3FF
    ctx->pc = 0x1837e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1023);
    // 0x1837ec: 0x90268eb0  lbu         $a2, -0x7150($at)
    ctx->pc = 0x1837ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x368EB0u));
    // 0x1837f0: 0x36100  sll         $t4, $v1, 4
    ctx->pc = 0x1837f0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1837f4: 0x353b8  dsll        $t2, $v1, 14
    ctx->pc = 0x1837f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 14);
    // 0x1837f8: 0x34638  dsll        $t0, $v1, 24
    ctx->pc = 0x1837f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 24);
    // 0x1837fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1837fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x183800: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x183800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x183804: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183808: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x183808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18380c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18380cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x183810: 0xa0258eb0  sb          $a1, -0x7150($at)
    ctx->pc = 0x183810u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368EB0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368EB0u, _value); } while (0);
    // 0x183814: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x183814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x183818: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18381c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x18381cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x183820: 0x902f8eb0  lbu         $t7, -0x7150($at)
    ctx->pc = 0x183820u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)FAST_READ8(0x368EB0u));
    // 0x183824: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x183824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x183828: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x183828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18382c: 0x24a538e0  addiu       $a1, $a1, 0x38E0
    ctx->pc = 0x18382cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14560));
    // 0x183830: 0x443825  or          $a3, $v0, $a0
    ctx->pc = 0x183830u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x183834: 0x24c68e80  addiu       $a2, $a2, -0x7180
    ctx->pc = 0x183834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938240));
    // 0x183838: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x183838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x18383c: 0x2402f003  addiu       $v0, $zero, -0xFFD
    ctx->pc = 0x18383cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963203));
    // 0x183840: 0x24848e90  addiu       $a0, $a0, -0x7170
    ctx->pc = 0x183840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938256));
    // 0x183844: 0x1ed6824  and         $t5, $t7, $t5
    ctx->pc = 0x183844u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x183848: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18384c: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x18384cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x183850: 0xa02d8eb0  sb          $t5, -0x7150($at)
    ctx->pc = 0x183850u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x368EB0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368EB0u, _value); } while (0);
    // 0x183854: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183858: 0x942d8eb0  lhu         $t5, -0x7150($at)
    ctx->pc = 0x183858u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)FAST_READ16(0x368EB0u));
    // 0x18385c: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x18385cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x183860: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183864: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x183864u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x183868: 0xa42b8eb0  sh          $t3, -0x7150($at)
    ctx->pc = 0x183868u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x368EB0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368EB0u, _value); } while (0);
    // 0x18386c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18386cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183870: 0xdc2b8eb0  ld          $t3, -0x7150($at)
    ctx->pc = 0x183870u;
    SET_GPR_U64(ctx, 11, FAST_READ64(0x368EB0u));
    // 0x183874: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x183874u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x183878: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18387c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x18387cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x183880: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x183880u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x183884: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x183884u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x183888: 0xfc278eb0  sd          $a3, -0x7150($at)
    ctx->pc = 0x183888u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294938288), GPR_U64(ctx, 7));
    // 0x18388c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18388cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183890: 0x94278eb4  lhu         $a3, -0x714C($at)
    ctx->pc = 0x183890u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x368EB4u));
    // 0x183894: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x183894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x183898: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18389c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18389cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1838a0: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x1838A0u;
    SET_GPR_U32(ctx, 31, 0x1838A8u);
    ctx->pc = 0x1838A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1838A0u;
    // 0x1838a4: 0xa4228eb4  sh          $v0, -0x714C($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938292), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1838A0u, 0x1838A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1838A8u;
label_1838a8:
    // 0x1838a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1838a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1838ac: 0xa38286a8  sb          $v0, -0x7958($gp)
    ctx->pc = 0x1838acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936232), (uint8_t)GPR_U32(ctx, 2));
label_1838b0:
    // 0x1838b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1838b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1838b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1838b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1838b8: 0x24a58e90  addiu       $a1, $a1, -0x7170
    ctx->pc = 0x1838b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938256));
    // 0x1838bc: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1838BCu;
    SET_GPR_U32(ctx, 31, 0x1838C4u);
    ctx->pc = 0x1838C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1838BCu;
    // 0x1838c0: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1838BCu, 0x1838C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1838C4u;
label_1838c4:
    // 0x1838c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1838c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1838c8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1838c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1838cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1838ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1838d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1838d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1838d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1838d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1838d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1838D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1838DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1838D8u;
        // 0x1838dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1838D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1838E0u;
}
