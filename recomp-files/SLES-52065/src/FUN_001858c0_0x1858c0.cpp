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

// Function: FUN_001858c0
// Address: 0x1858c0 - 0x185c7c
void FUN_001858c0_0x1858c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001858c0_0x1858c0");
#endif

    switch (ctx->pc) {
        case 0x185c24u: goto label_185c24;
        case 0x185c40u: goto label_185c40;
        default: break;
    }

    ctx->pc = 0x1858c0u;

    // 0x1858c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1858c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1858c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1858c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1858c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1858c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1858cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1858ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1858d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1858d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1858d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1858d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1858d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1858d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1858dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1858dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1858e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1858e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1858e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1858e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1858e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1858e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1858ec: 0x838286c8  lb          $v0, -0x7938($gp)
    ctx->pc = 0x1858ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936264)));
    // 0x1858f0: 0x144000ce  bnez        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x1858F0u;
    {
        const bool branch_taken_0x1858f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1858F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858F0u;
        // 0x1858f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1858f0) {
            ctx->pc = 0x185C2Cu;
            goto label_185c2c;
        }
    }
    ctx->pc = 0x1858F8u;
    // 0x1858f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1858f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1858fc: 0x30110001  andi        $s1, $zero, 0x1
    ctx->pc = 0x1858fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x185900: 0xfc209258  sd          $zero, -0x6DA8($at)
    ctx->pc = 0x185900u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x369258u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369258u, _value); } while (0);
    // 0x185904: 0x300600ff  andi        $a2, $zero, 0xFF
    ctx->pc = 0x185904u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x185908: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x185908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18590c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18590cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185910: 0xfc229248  sd          $v0, -0x6DB8($at)
    ctx->pc = 0x185910u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369248u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369248u, _value); } while (0);
    // 0x185914: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x185914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x185918: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18591c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x18591cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x185920: 0xfc239268  sd          $v1, -0x6D98($at)
    ctx->pc = 0x185920u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x369268u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369268u, _value); } while (0);
    // 0x185924: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x185924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x185928: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18592c: 0x6a900  sll         $s5, $a2, 4
    ctx->pc = 0x18592cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x185930: 0xa0229223  sb          $v0, -0x6DDD($at)
    ctx->pc = 0x185930u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939171), (uint8_t)GPR_U32(ctx, 2));
    // 0x185934: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x185934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x185938: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18593c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x18593cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x185940: 0xfc239278  sd          $v1, -0x6D88($at)
    ctx->pc = 0x185940u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x369278u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369278u, _value); } while (0);
    // 0x185944: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x185944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x185948: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18594c: 0x2417fff8  addiu       $s7, $zero, -0x8
    ctx->pc = 0x18594cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x185950: 0xa4239220  sh          $v1, -0x6DE0($at)
    ctx->pc = 0x185950u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x369220u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369220u, _value); } while (0);
    // 0x185954: 0x64090006  daddiu      $t1, $zero, 0x6
    ctx->pc = 0x185954u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x185958: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18595c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x18595cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x185960: 0xac22922c  sw          $v0, -0x6DD4($at)
    ctx->pc = 0x185960u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939180), GPR_U32(ctx, 2));
    // 0x185964: 0x11c980  sll         $t9, $s1, 6
    ctx->pc = 0x185964u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x185968: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18596c: 0x34028004  ori         $v0, $zero, 0x8004
    ctx->pc = 0x18596cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x185970: 0xac249228  sw          $a0, -0x6DD8($at)
    ctx->pc = 0x185970u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x369228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x369228u, _value); } while (0);
    // 0x185974: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x185974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x185978: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18597c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x18597cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x185980: 0xa0209222  sb          $zero, -0x6DDE($at)
    ctx->pc = 0x185980u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x369222u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369222u, _value); } while (0);
    // 0x185984: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x185984u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x185988: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18598c: 0x1179c0  sll         $t7, $s1, 7
    ctx->pc = 0x18598cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x185990: 0xfc229230  sd          $v0, -0x6DD0($at)
    ctx->pc = 0x185990u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294939184), GPR_U64(ctx, 2));
    // 0x185994: 0x114100  sll         $t0, $s1, 4
    ctx->pc = 0x185994u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x185998: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x185998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x18599c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18599cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1859a0: 0xfc229238  sd          $v0, -0x6DC8($at)
    ctx->pc = 0x1859a0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369238u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369238u, _value); } while (0);
    // 0x1859a4: 0x2414f00f  addiu       $s4, $zero, -0xFF1
    ctx->pc = 0x1859a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x1859a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1859a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1859ac: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x1859acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x1859b0: 0xac209224  sw          $zero, -0x6DDC($at)
    ctx->pc = 0x1859b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x369224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x369224u, _value); } while (0);
    // 0x1859b4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1859b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1859b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1859b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1859bc: 0x240bfff9  addiu       $t3, $zero, -0x7
    ctx->pc = 0x1859bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x1859c0: 0x90279240  lbu         $a3, -0x6DC0($at)
    ctx->pc = 0x1859c0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x369240u));
    // 0x1859c4: 0x640c0002  daddiu      $t4, $zero, 0x2
    ctx->pc = 0x1859c4u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x1859c8: 0x241efff7  addiu       $fp, $zero, -0x9
    ctx->pc = 0x1859c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1859cc: 0x2412ffcf  addiu       $s2, $zero, -0x31
    ctx->pc = 0x1859ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1859d0: 0x64130020  daddiu      $s3, $zero, 0x20
    ctx->pc = 0x1859d0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
    // 0x1859d4: 0x2418ffbf  addiu       $t8, $zero, -0x41
    ctx->pc = 0x1859d4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1859d8: 0x240eff7f  addiu       $t6, $zero, -0x81
    ctx->pc = 0x1859d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1859dc: 0xe33024  and         $a2, $a3, $v1
    ctx->pc = 0x1859dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1859e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1859e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1859e4: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1859e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1859e8: 0x113940  sll         $a3, $s1, 5
    ctx->pc = 0x1859e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1859ec: 0xa0269240  sb          $a2, -0x6DC0($at)
    ctx->pc = 0x1859ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939200), (uint8_t)GPR_U32(ctx, 6));
    // 0x1859f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1859f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1859f4: 0x1130c0  sll         $a2, $s1, 3
    ctx->pc = 0x1859f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1859f8: 0x90369240  lbu         $s6, -0x6DC0($at)
    ctx->pc = 0x1859f8u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294939200)));
    // 0x1859fc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1859fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185a00: 0x2c5b024  and         $s6, $s6, $a1
    ctx->pc = 0x185a00u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
    // 0x185a04: 0x902d9242  lbu         $t5, -0x6DBE($at)
    ctx->pc = 0x185a04u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294939202)));
    // 0x185a08: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x185a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x185a0c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185a10: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x185a10u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x185a14: 0x902a9250  lbu         $t2, -0x6DB0($at)
    ctx->pc = 0x185a14u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294939216)));
    // 0x185a18: 0x1a42025  or          $a0, $t5, $a0
    ctx->pc = 0x185a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) | GPR_U64(ctx, 4));
    // 0x185a1c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185a20: 0x1575024  and         $t2, $t2, $s7
    ctx->pc = 0x185a20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 23));
    // 0x185a24: 0x90259251  lbu         $a1, -0x6DAF($at)
    ctx->pc = 0x185a24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294939217)));
    // 0x185a28: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x185a28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x185a2c: 0x115040  sll         $t2, $s1, 1
    ctx->pc = 0x185a2cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x185a30: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185a34: 0xa0229240  sb          $v0, -0x6DC0($at)
    ctx->pc = 0x185a34u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369240u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369240u, _value); } while (0);
    // 0x185a38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185a3c: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x185a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x185a40: 0xa0249242  sb          $a0, -0x6DBE($at)
    ctx->pc = 0x185a40u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939202), (uint8_t)GPR_U32(ctx, 4));
    // 0x185a44: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x185a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x185a48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185a4c: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x185a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x185a50: 0xa0299250  sb          $t1, -0x6DB0($at)
    ctx->pc = 0x185a50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x369250u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369250u, _value); } while (0);
    // 0x185a54: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x185a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x185a58: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185a5c: 0x114880  sll         $t1, $s1, 2
    ctx->pc = 0x185a5cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x185a60: 0x942d9240  lhu         $t5, -0x6DC0($at)
    ctx->pc = 0x185a60u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939200)));
    // 0x185a64: 0x24117000  addiu       $s1, $zero, 0x7000
    ctx->pc = 0x185a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x185a68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185a6c: 0x1b46824  and         $t5, $t5, $s4
    ctx->pc = 0x185a6cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 20));
    // 0x185a70: 0xa0229251  sb          $v0, -0x6DAF($at)
    ctx->pc = 0x185a70u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939217), (uint8_t)GPR_U32(ctx, 2));
    // 0x185a74: 0x1b5a025  or          $s4, $t5, $s5
    ctx->pc = 0x185a74u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 13) | GPR_U64(ctx, 21));
    // 0x185a78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185a7c: 0x64020010  daddiu      $v0, $zero, 0x10
    ctx->pc = 0x185a7cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x185a80: 0x90259242  lbu         $a1, -0x6DBE($at)
    ctx->pc = 0x185a80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294939202)));
    // 0x185a84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x185a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x185a88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185a8c: 0xab5824  and         $t3, $a1, $t3
    ctx->pc = 0x185a8cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x185a90: 0xa4319260  sh          $s1, -0x6DA0($at)
    ctx->pc = 0x185a90u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939232), (uint16_t)GPR_U32(ctx, 17));
    // 0x185a94: 0x16c6025  or          $t4, $t3, $t4
    ctx->pc = 0x185a94u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x185a98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185a9c: 0xa4319262  sh          $s1, -0x6D9E($at)
    ctx->pc = 0x185a9cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x369262u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369262u, _value); } while (0);
    // 0x185aa0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185aa4: 0x90319250  lbu         $s1, -0x6DB0($at)
    ctx->pc = 0x185aa4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)FAST_READ8(0x369250u));
    // 0x185aa8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185aac: 0x23e8824  and         $s1, $s1, $fp
    ctx->pc = 0x185aacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 30));
    // 0x185ab0: 0x902d9251  lbu         $t5, -0x6DAF($at)
    ctx->pc = 0x185ab0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294939217)));
    // 0x185ab4: 0x2263025  or          $a2, $s1, $a2
    ctx->pc = 0x185ab4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
    // 0x185ab8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185abc: 0x1a42024  and         $a0, $t5, $a0
    ctx->pc = 0x185abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & GPR_U64(ctx, 4));
    // 0x185ac0: 0xa4349240  sh          $s4, -0x6DC0($at)
    ctx->pc = 0x185ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939200), (uint16_t)GPR_U32(ctx, 20));
    // 0x185ac4: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x185ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x185ac8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185acc: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x185accu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185ad0: 0x902b9241  lbu         $t3, -0x6DBF($at)
    ctx->pc = 0x185ad0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)FAST_READ8(0x369241u));
    // 0x185ad4: 0x14283c  dsll32      $a1, $s4, 0
    ctx->pc = 0x185ad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 0));
    // 0x185ad8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185adc: 0x1725024  and         $t2, $t3, $s2
    ctx->pc = 0x185adcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 18));
    // 0x185ae0: 0xa02c9242  sb          $t4, -0x6DBE($at)
    ctx->pc = 0x185ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939202), (uint8_t)GPR_U32(ctx, 12));
    // 0x185ae4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185ae8: 0x340cffff  ori         $t4, $zero, 0xFFFF
    ctx->pc = 0x185ae8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x185aec: 0xa0269250  sb          $a2, -0x6DB0($at)
    ctx->pc = 0x185aecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x369250u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369250u, _value); } while (0);
    // 0x185af0: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x185af0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x185af4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185af8: 0x3586ffff  ori         $a2, $t4, 0xFFFF
    ctx->pc = 0x185af8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x185afc: 0xa0249251  sb          $a0, -0x6DAF($at)
    ctx->pc = 0x185afcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x369251u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369251u, _value); } while (0);
    // 0x185b00: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185b04: 0xc52025  or          $a0, $a2, $a1
    ctx->pc = 0x185b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x185b08: 0x902b9250  lbu         $t3, -0x6DB0($at)
    ctx->pc = 0x185b08u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)FAST_READ8(0x369250u));
    // 0x185b0c: 0x70866389  pcpyld      $t4, $a0, $a2
    ctx->pc = 0x185b0cu;
    SET_GPR_VEC(ctx, 12, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x185b10: 0x1532825  or          $a1, $t2, $s3
    ctx->pc = 0x185b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 19));
    // 0x185b14: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x185b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x185b18: 0x240affef  addiu       $t2, $zero, -0x11
    ctx->pc = 0x185b18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x185b1c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x185b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x185b20: 0x24849220  addiu       $a0, $a0, -0x6DE0
    ctx->pc = 0x185b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939168));
    // 0x185b24: 0x24c69210  addiu       $a2, $a2, -0x6DF0
    ctx->pc = 0x185b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939152));
    // 0x185b28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185b2c: 0x16a5024  and         $t2, $t3, $t2
    ctx->pc = 0x185b2cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x185b30: 0xa0259241  sb          $a1, -0x6DBF($at)
    ctx->pc = 0x185b30u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939201), (uint8_t)GPR_U32(ctx, 5));
    // 0x185b34: 0x1484025  or          $t0, $t2, $t0
    ctx->pc = 0x185b34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x185b38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185b3c: 0x34059000  ori         $a1, $zero, 0x9000
    ctx->pc = 0x185b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x185b40: 0x90319241  lbu         $s1, -0x6DBF($at)
    ctx->pc = 0x185b40u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)FAST_READ8(0x369241u));
    // 0x185b44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185b48: 0xa4259270  sh          $a1, -0x6D90($at)
    ctx->pc = 0x185b48u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x369270u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369270u, _value); } while (0);
    // 0x185b4c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185b50: 0xa4259272  sh          $a1, -0x6D8E($at)
    ctx->pc = 0x185b50u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x369272u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369272u, _value); } while (0);
    // 0x185b54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185b58: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x185b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x185b5c: 0x902d9251  lbu         $t5, -0x6DAF($at)
    ctx->pc = 0x185b5cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)FAST_READ8(0x369251u));
    // 0x185b60: 0x24a55c80  addiu       $a1, $a1, 0x5C80
    ctx->pc = 0x185b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23680));
    // 0x185b64: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185b68: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x185b68u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x185b6c: 0xdc2b9260  ld          $t3, -0x6DA0($at)
    ctx->pc = 0x185b6cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 1), 4294939232)));
    // 0x185b70: 0x1a96825  or          $t5, $t5, $t1
    ctx->pc = 0x185b70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 9));
    // 0x185b74: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185b78: 0x16c5824  and         $t3, $t3, $t4
    ctx->pc = 0x185b78u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x185b7c: 0xdc2a9270  ld          $t2, -0x6D90($at)
    ctx->pc = 0x185b7cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 1), 4294939248)));
    // 0x185b80: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185b84: 0x14c4824  and         $t1, $t2, $t4
    ctx->pc = 0x185b84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
    // 0x185b88: 0xa0289250  sb          $t0, -0x6DB0($at)
    ctx->pc = 0x185b88u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939216), (uint8_t)GPR_U32(ctx, 8));
    // 0x185b8c: 0x1625025  or          $t2, $t3, $v0
    ctx->pc = 0x185b8cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x185b90: 0x2384024  and         $t0, $s1, $t8
    ctx->pc = 0x185b90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & GPR_U64(ctx, 24));
    // 0x185b94: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x185b94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x185b98: 0x1198825  or          $s1, $t0, $t9
    ctx->pc = 0x185b98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) | GPR_U64(ctx, 25));
    // 0x185b9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185ba0: 0x90289250  lbu         $t0, -0x6DB0($at)
    ctx->pc = 0x185ba0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x369250u));
    // 0x185ba4: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x185ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x185ba8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185bac: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x185bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x185bb0: 0xa0319241  sb          $s1, -0x6DBF($at)
    ctx->pc = 0x185bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939201), (uint8_t)GPR_U32(ctx, 17));
    // 0x185bb4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x185bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x185bb8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185bbc: 0x90239241  lbu         $v1, -0x6DBF($at)
    ctx->pc = 0x185bbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x369241u));
    // 0x185bc0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185bc4: 0xa02d9251  sb          $t5, -0x6DAF($at)
    ctx->pc = 0x185bc4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x369251u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369251u, _value); } while (0);
    // 0x185bc8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185bcc: 0xfc2a9260  sd          $t2, -0x6DA0($at)
    ctx->pc = 0x185bccu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 10)); ps2TraceGuestWrite(rdram, 0x369260u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369260u, _value); } while (0);
    // 0x185bd0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185bd4: 0xfc299270  sd          $t1, -0x6D90($at)
    ctx->pc = 0x185bd4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 9)); ps2TraceGuestWrite(rdram, 0x369270u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369270u, _value); } while (0);
    // 0x185bd8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185bdc: 0xa0229250  sb          $v0, -0x6DB0($at)
    ctx->pc = 0x185bdcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369250u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369250u, _value); } while (0);
    // 0x185be0: 0x6e1024  and         $v0, $v1, $t6
    ctx->pc = 0x185be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
    // 0x185be4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185be8: 0x4f1825  or          $v1, $v0, $t7
    ctx->pc = 0x185be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x185bec: 0x90229250  lbu         $v0, -0x6DB0($at)
    ctx->pc = 0x185becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x369250u));
    // 0x185bf0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185bf4: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x185bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x185bf8: 0xa0239241  sb          $v1, -0x6DBF($at)
    ctx->pc = 0x185bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939201), (uint8_t)GPR_U32(ctx, 3));
    // 0x185bfc: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x185bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x185c00: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185c04: 0xa0229250  sb          $v0, -0x6DB0($at)
    ctx->pc = 0x185c04u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369250u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369250u, _value); } while (0);
    // 0x185c08: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185c0c: 0x90229250  lbu         $v0, -0x6DB0($at)
    ctx->pc = 0x185c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x369250u));
    // 0x185c10: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x185c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x185c14: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185c18: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x185c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x185c1c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x185C1Cu;
    SET_GPR_U32(ctx, 31, 0x185C24u);
    ctx->pc = 0x185C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C1Cu;
    // 0x185c20: 0xa0229250  sb          $v0, -0x6DB0($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939216), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x185C1Cu, 0x185C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C24u;
label_185c24:
    // 0x185c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185c28: 0xa38286c8  sb          $v0, -0x7938($gp)
    ctx->pc = 0x185c28u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936264), (uint8_t)GPR_U32(ctx, 2));
label_185c2c:
    // 0x185c2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x185c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x185c30: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x185c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x185c34: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x185c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
    // 0x185c38: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x185C38u;
    SET_GPR_U32(ctx, 31, 0x185C40u);
    ctx->pc = 0x185C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C38u;
    // 0x185c3c: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x185C38u, 0x185C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C40u;
label_185c40:
    // 0x185c40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x185c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x185c44: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x185c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x185c48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x185c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x185c4c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x185c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x185c50: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x185c50u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x185c54: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x185c54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x185c58: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x185c58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185c5c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x185c5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185c60: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x185c60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185c64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x185c64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185c68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x185c68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185c6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185c70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185c74: 0x3e00008  jr          $ra
    ctx->pc = 0x185C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C74u;
        // 0x185c78: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185C7Cu;
}
