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

// Function: FUN_00182930
// Address: 0x182930 - 0x182ddc
void FUN_00182930_0x182930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00182930_0x182930");
#endif

    switch (ctx->pc) {
        case 0x182d74u: goto label_182d74;
        default: break;
    }

    ctx->pc = 0x182930u;

    // 0x182930: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x182930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x182934: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x182934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x182938: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x182938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18293c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18293cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x182940: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x182940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x182944: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x182944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x182948: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x182948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18294c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18294cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x182950: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182958: 0x8383869c  lb          $v1, -0x7964($gp)
    ctx->pc = 0x182958u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936220)));
    // 0x18295c: 0x14600107  bnez        $v1, . + 4 + (0x107 << 2)
    ctx->pc = 0x18295Cu;
    {
        const bool branch_taken_0x18295c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18295Cu;
        // 0x182960: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18295c) {
            ctx->pc = 0x182D7Cu;
            goto label_182d7c;
        }
    }
    ctx->pc = 0x182964u;
    // 0x182964: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182968: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x182968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x18296c: 0xa0208d02  sb          $zero, -0x72FE($at)
    ctx->pc = 0x18296cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368D02u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368D02u, _value); } while (0);
    // 0x182970: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x182970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x182974: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182978: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x182978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18297c: 0xfc228d28  sd          $v0, -0x72D8($at)
    ctx->pc = 0x18297cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937896), GPR_U64(ctx, 2));
    // 0x182980: 0x2405fe00  addiu       $a1, $zero, -0x200
    ctx->pc = 0x182980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x182984: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x182984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x182988: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18298c: 0xfc228d38  sd          $v0, -0x72C8($at)
    ctx->pc = 0x18298cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368D38u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368D38u, _value); } while (0);
    // 0x182990: 0x640b0050  daddiu      $t3, $zero, 0x50
    ctx->pc = 0x182990u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)80);
    // 0x182994: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x182994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x182998: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18299c: 0xfc228d48  sd          $v0, -0x72B8($at)
    ctx->pc = 0x18299cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368D48u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368D48u, _value); } while (0);
    // 0x1829a0: 0x2409ffc0  addiu       $t1, $zero, -0x40
    ctx->pc = 0x1829a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1829a4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1829a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1829a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1829a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1829ac: 0xfc228d58  sd          $v0, -0x72A8($at)
    ctx->pc = 0x1829acu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368D58u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368D58u, _value); } while (0);
    // 0x1829b0: 0x3007003f  andi        $a3, $zero, 0x3F
    ctx->pc = 0x1829b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)63);
    // 0x1829b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1829b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1829b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1829b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1829bc: 0xfc228d68  sd          $v0, -0x7298($at)
    ctx->pc = 0x1829bcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368D68u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368D68u, _value); } while (0);
    // 0x1829c0: 0x2411f800  addiu       $s1, $zero, -0x800
    ctx->pc = 0x1829c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x1829c4: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1829c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1829c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1829c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1829cc: 0xfc228d78  sd          $v0, -0x7288($at)
    ctx->pc = 0x1829ccu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368D78u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368D78u, _value); } while (0);
    // 0x1829d0: 0x301207ff  andi        $s2, $zero, 0x7FF
    ctx->pc = 0x1829d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)2047);
    // 0x1829d4: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1829d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1829d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1829d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1829dc: 0xa0228d03  sb          $v0, -0x72FD($at)
    ctx->pc = 0x1829dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368D03u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368D03u, _value); } while (0);
    // 0x1829e0: 0x2417fff9  addiu       $s7, $zero, -0x7
    ctx->pc = 0x1829e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x1829e4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1829e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1829e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1829e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1829ec: 0xa4228d00  sh          $v0, -0x7300($at)
    ctx->pc = 0x1829ecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368D00u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368D00u, _value); } while (0);
    // 0x1829f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1829f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1829f4: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1829f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1829f8: 0xac208d04  sw          $zero, -0x72FC($at)
    ctx->pc = 0x1829f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368D04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368D04u, _value); } while (0);
    // 0x1829fc: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x1829fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x182a00: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182a04: 0xac238d08  sw          $v1, -0x72F8($at)
    ctx->pc = 0x182a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368D08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368D08u, _value); } while (0);
    // 0x182a08: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182a0c: 0x34038006  ori         $v1, $zero, 0x8006
    ctx->pc = 0x182a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
    // 0x182a10: 0xac228d0c  sw          $v0, -0x72F4($at)
    ctx->pc = 0x182a10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368D0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368D0Cu, _value); } while (0);
    // 0x182a14: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x182a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x182a18: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x182a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x182a1c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182a20: 0xfc228d18  sd          $v0, -0x72E8($at)
    ctx->pc = 0x182a20u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368D18u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368D18u, _value); } while (0);
    // 0x182a24: 0x6404000a  daddiu      $a0, $zero, 0xA
    ctx->pc = 0x182a24u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10);
    // 0x182a28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182a2c: 0x103c  dsll32      $v0, $zero, 0
    ctx->pc = 0x182a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 0));
    // 0x182a30: 0xfc238d10  sd          $v1, -0x72F0($at)
    ctx->pc = 0x182a30u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937872), GPR_U64(ctx, 3));
    // 0x182a34: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x182a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x182a38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182a3c: 0x2683c  dsll32      $t5, $v0, 0
    ctx->pc = 0x182a3cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) << (32 + 0));
    // 0x182a40: 0x942a8d20  lhu         $t2, -0x72E0($at)
    ctx->pc = 0x182a40u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294937888)));
    // 0x182a44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x182a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x182a48: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x182a48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x182a4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x182a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x182a50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x182a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x182a54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182a58: 0x1455024  and         $t2, $t2, $a1
    ctx->pc = 0x182a58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x182a5c: 0x90288d22  lbu         $t0, -0x72DE($at)
    ctx->pc = 0x182a5cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937890)));
    // 0x182a60: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x182a60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x182a64: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182a68: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x182a68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x182a6c: 0x90238d23  lbu         $v1, -0x72DD($at)
    ctx->pc = 0x182a6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937891)));
    // 0x182a70: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x182a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x182a74: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182a78: 0xa42a8d20  sh          $t2, -0x72E0($at)
    ctx->pc = 0x182a78u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x368D20u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368D20u, _value); } while (0);
    // 0x182a7c: 0x673825  or          $a3, $v1, $a3
    ctx->pc = 0x182a7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x182a80: 0x1041825  or          $v1, $t0, $a0
    ctx->pc = 0x182a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x182a84: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182a88: 0xa0238d22  sb          $v1, -0x72DE($at)
    ctx->pc = 0x182a88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368D22u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368D22u, _value); } while (0);
    // 0x182a8c: 0x640a00d0  daddiu      $t2, $zero, 0xD0
    ctx->pc = 0x182a8cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)208);
    // 0x182a90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182a94: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x182a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x182a98: 0xa0278d23  sb          $a3, -0x72DD($at)
    ctx->pc = 0x182a98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x368D23u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368D23u, _value); } while (0);
    // 0x182a9c: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x182a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x182aa0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182aa4: 0x24066c00  addiu       $a2, $zero, 0x6C00
    ctx->pc = 0x182aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x182aa8: 0xdc2e8d20  ld          $t6, -0x72E0($at)
    ctx->pc = 0x182aa8u;
    SET_GPR_U64(ctx, 14, FAST_READ64(0x368D20u));
    // 0x182aac: 0x70436389  pcpyld      $t4, $v0, $v1
    ctx->pc = 0x182aacu;
    SET_GPR_VEC(ctx, 12, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x182ab0: 0x2408fff0  addiu       $t0, $zero, -0x10
    ctx->pc = 0x182ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x182ab4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x182ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x182ab8: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x182ab8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x182abc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182ac0: 0x1cc6024  and         $t4, $t6, $t4
    ctx->pc = 0x182ac0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) & GPR_U64(ctx, 12));
    // 0x182ac4: 0x942b8d30  lhu         $t3, -0x72D0($at)
    ctx->pc = 0x182ac4u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294937904)));
    // 0x182ac8: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x182ac8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x182acc: 0x640e027f  daddiu      $t6, $zero, 0x27F
    ctx->pc = 0x182accu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)639);
    // 0x182ad0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182ad4: 0x1652824  and         $a1, $t3, $a1
    ctx->pc = 0x182ad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x182ad8: 0x90298d33  lbu         $t1, -0x72CD($at)
    ctx->pc = 0x182ad8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937907)));
    // 0x182adc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182ae0: 0x90278d34  lbu         $a3, -0x72CC($at)
    ctx->pc = 0x182ae0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x368D34u));
    // 0x182ae4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182ae8: 0xa4268d40  sh          $a2, -0x72C0($at)
    ctx->pc = 0x182ae8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x368D40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368D40u, _value); } while (0);
    // 0x182aec: 0x24067000  addiu       $a2, $zero, 0x7000
    ctx->pc = 0x182aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x182af0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182af4: 0xa4268d44  sh          $a2, -0x72BC($at)
    ctx->pc = 0x182af4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x368D44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368D44u, _value); } while (0);
    // 0x182af8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182afc: 0xaa3025  or          $a2, $a1, $t2
    ctx->pc = 0x182afcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x182b00: 0xfc2c8d20  sd          $t4, -0x72E0($at)
    ctx->pc = 0x182b00u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 12)); ps2TraceGuestWrite(rdram, 0x368D20u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368D20u, _value); } while (0);
    // 0x182b04: 0x1282824  and         $a1, $t1, $t0
    ctx->pc = 0x182b04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x182b08: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182b0c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x182b0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x182b10: 0xa4268d30  sh          $a2, -0x72D0($at)
    ctx->pc = 0x182b10u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x368D30u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368D30u, _value); } while (0);
    // 0x182b14: 0xe22024  and         $a0, $a3, $v0
    ctx->pc = 0x182b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x182b18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182b1c: 0x30060003  andi        $a2, $zero, 0x3
    ctx->pc = 0x182b1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x182b20: 0xa0258d33  sb          $a1, -0x72CD($at)
    ctx->pc = 0x182b20u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368D33u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368D33u, _value); } while (0);
    // 0x182b24: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x182b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x182b28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182b2c: 0x640901ff  daddiu      $t1, $zero, 0x1FF
    ctx->pc = 0x182b2cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)511);
    // 0x182b30: 0xa0248d34  sb          $a0, -0x72CC($at)
    ctx->pc = 0x182b30u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937908), (uint8_t)GPR_U32(ctx, 4));
    // 0x182b34: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x182b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x182b38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182b3c: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x182b3cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x182b40: 0x94278d50  lhu         $a3, -0x72B0($at)
    ctx->pc = 0x182b40u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294937936)));
    // 0x182b44: 0x240afff3  addiu       $t2, $zero, -0xD
    ctx->pc = 0x182b44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x182b48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182b4c: 0xf17824  and         $t7, $a3, $s1
    ctx->pc = 0x182b4cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) & GPR_U64(ctx, 17));
    // 0x182b50: 0x942d8d52  lhu         $t5, -0x72AE($at)
    ctx->pc = 0x182b50u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294937938)));
    // 0x182b54: 0x300703ff  andi        $a3, $zero, 0x3FF
    ctx->pc = 0x182b54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1023);
    // 0x182b58: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x182b58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x182b5c: 0x7abb8  dsll        $s5, $a3, 14
    ctx->pc = 0x182b5cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7) << 14);
    // 0x182b60: 0x7a638  dsll        $s4, $a3, 24
    ctx->pc = 0x182b60u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) << 24);
    // 0x182b64: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182b68: 0x1b16824  and         $t5, $t5, $s1
    ctx->pc = 0x182b68u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 17));
    // 0x182b6c: 0x942c8d54  lhu         $t4, -0x72AC($at)
    ctx->pc = 0x182b6cu;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294937940)));
    // 0x182b70: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x182b70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x182b74: 0x67100  sll         $t6, $a2, 4
    ctx->pc = 0x182b74u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x182b78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182b7c: 0x1916024  and         $t4, $t4, $s1
    ctx->pc = 0x182b7cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 17));
    // 0x182b80: 0x94288d56  lhu         $t0, -0x72AA($at)
    ctx->pc = 0x182b80u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294937942)));
    // 0x182b84: 0x1926025  or          $t4, $t4, $s2
    ctx->pc = 0x182b84u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 18));
    // 0x182b88: 0x79080  sll         $s2, $a3, 2
    ctx->pc = 0x182b88u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x182b8c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182b90: 0x1114024  and         $t0, $t0, $s1
    ctx->pc = 0x182b90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 17));
    // 0x182b94: 0x90248d60  lbu         $a0, -0x72A0($at)
    ctx->pc = 0x182b94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937952)));
    // 0x182b98: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x182b98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x182b9c: 0x74900  sll         $t1, $a3, 4
    ctx->pc = 0x182b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x182ba0: 0x2411f003  addiu       $s1, $zero, -0xFFD
    ctx->pc = 0x182ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963203));
    // 0x182ba4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182ba8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x182ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x182bac: 0xa42f8d50  sh          $t7, -0x72B0($at)
    ctx->pc = 0x182bacu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937936), (uint16_t)GPR_U32(ctx, 15));
    // 0x182bb0: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x182bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x182bb4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182bb8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x182bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x182bbc: 0xa42d8d52  sh          $t5, -0x72AE($at)
    ctx->pc = 0x182bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937938), (uint16_t)GPR_U32(ctx, 13));
    // 0x182bc0: 0x240ff00f  addiu       $t7, $zero, -0xFF1
    ctx->pc = 0x182bc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x182bc4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182bc8: 0xa42c8d54  sh          $t4, -0x72AC($at)
    ctx->pc = 0x182bc8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x368D54u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368D54u, _value); } while (0);
    // 0x182bcc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182bd0: 0xa4288d56  sh          $t0, -0x72AA($at)
    ctx->pc = 0x182bd0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x368D56u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368D56u, _value); } while (0);
    // 0x182bd4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182bd8: 0x2408c00f  addiu       $t0, $zero, -0x3FF1
    ctx->pc = 0x182bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950927));
    // 0x182bdc: 0xa0248d60  sb          $a0, -0x72A0($at)
    ctx->pc = 0x182bdcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368D60u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368D60u, _value); } while (0);
    // 0x182be0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182be4: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x182be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x182be8: 0x902d8d60  lbu         $t5, -0x72A0($at)
    ctx->pc = 0x182be8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)FAST_READ8(0x368D60u));
    // 0x182bec: 0x34863fff  ori         $a2, $a0, 0x3FFF
    ctx->pc = 0x182becu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16383);
    // 0x182bf0: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x182bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x182bf4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x182bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x182bf8: 0x859825  or          $s3, $a0, $a1
    ctx->pc = 0x182bf8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x182bfc: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x182bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x182c00: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182c04: 0x1aa3824  and         $a3, $t5, $t2
    ctx->pc = 0x182c04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 13) & GPR_U64(ctx, 10));
    // 0x182c08: 0x902c8d70  lbu         $t4, -0x7290($at)
    ctx->pc = 0x182c08u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937968)));
    // 0x182c0c: 0xeb2025  or          $a0, $a3, $t3
    ctx->pc = 0x182c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x182c10: 0x300b00ff  andi        $t3, $zero, 0xFF
    ctx->pc = 0x182c10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x182c14: 0x30070001  andi        $a3, $zero, 0x1
    ctx->pc = 0x182c14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x182c18: 0xbc100  sll         $t8, $t3, 4
    ctx->pc = 0x182c18u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x182c1c: 0x240dffcf  addiu       $t5, $zero, -0x31
    ctx->pc = 0x182c1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x182c20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182c24: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x182c24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x182c28: 0xa0248d60  sb          $a0, -0x72A0($at)
    ctx->pc = 0x182c28u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937952), (uint8_t)GPR_U32(ctx, 4));
    // 0x182c2c: 0x1875825  or          $t3, $t4, $a3
    ctx->pc = 0x182c2cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | GPR_U64(ctx, 7));
    // 0x182c30: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182c34: 0x30040007  andi        $a0, $zero, 0x7
    ctx->pc = 0x182c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x182c38: 0x942a8d60  lhu         $t2, -0x72A0($at)
    ctx->pc = 0x182c38u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)FAST_READ16(0x368D60u));
    // 0x182c3c: 0x76180  sll         $t4, $a3, 6
    ctx->pc = 0x182c3cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x182c40: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x182c40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x182c44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182c48: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x182c48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x182c4c: 0xa02b8d70  sb          $t3, -0x7290($at)
    ctx->pc = 0x182c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937968), (uint8_t)GPR_U32(ctx, 11));
    // 0x182c50: 0x751c0  sll         $t2, $a3, 7
    ctx->pc = 0x182c50u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x182c54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182c58: 0x1093825  or          $a3, $t0, $t1
    ctx->pc = 0x182c58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x182c5c: 0x90398d70  lbu         $t9, -0x7290($at)
    ctx->pc = 0x182c5cu;
    SET_GPR_ZE32(ctx, 25, (uint8_t)FAST_READ8(0x368D70u));
    // 0x182c60: 0x240bffbf  addiu       $t3, $zero, -0x41
    ctx->pc = 0x182c60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x182c64: 0x2409ff7f  addiu       $t1, $zero, -0x81
    ctx->pc = 0x182c64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x182c68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182c6c: 0x325c824  and         $t9, $t9, $a1
    ctx->pc = 0x182c6cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) & GPR_U64(ctx, 5));
    // 0x182c70: 0xa4278d60  sh          $a3, -0x72A0($at)
    ctx->pc = 0x182c70u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937952), (uint16_t)GPR_U32(ctx, 7));
    // 0x182c74: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x182c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x182c78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182c7c: 0x24a58d40  addiu       $a1, $a1, -0x72C0
    ctx->pc = 0x182c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937920));
    // 0x182c80: 0xdc368d60  ld          $s6, -0x72A0($at)
    ctx->pc = 0x182c80u;
    SET_GPR_U64(ctx, 22, FAST_READ64(0x368D60u));
    // 0x182c84: 0x3242025  or          $a0, $t9, $a0
    ctx->pc = 0x182c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 25) | GPR_U64(ctx, 4));
    // 0x182c88: 0xaf858694  sw          $a1, -0x796C($gp)
    ctx->pc = 0x182c88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936212), GPR_U32(ctx, 5));
    // 0x182c8c: 0x64070002  daddiu      $a3, $zero, 0x2
    ctx->pc = 0x182c8cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x182c90: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x182c90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x182c94: 0x24a52de0  addiu       $a1, $a1, 0x2DE0
    ctx->pc = 0x182c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11744));
    // 0x182c98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182c9c: 0x2c6b024  and         $s6, $s6, $a2
    ctx->pc = 0x182c9cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 6));
    // 0x182ca0: 0x90288d72  lbu         $t0, -0x728E($at)
    ctx->pc = 0x182ca0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937970)));
    // 0x182ca4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x182ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x182ca8: 0x2d5a825  or          $s5, $s6, $s5
    ctx->pc = 0x182ca8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) | GPR_U64(ctx, 21));
    // 0x182cac: 0x24c68cf0  addiu       $a2, $a2, -0x7310
    ctx->pc = 0x182cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937840));
    // 0x182cb0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182cb4: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x182cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x182cb8: 0xa0248d70  sb          $a0, -0x7290($at)
    ctx->pc = 0x182cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937968), (uint8_t)GPR_U32(ctx, 4));
    // 0x182cbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x182cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x182cc0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182cc4: 0x2b34024  and         $t0, $s5, $s3
    ctx->pc = 0x182cc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) & GPR_U64(ctx, 19));
    // 0x182cc8: 0x94398d70  lhu         $t9, -0x7290($at)
    ctx->pc = 0x182cc8u;
    SET_GPR_ZE32(ctx, 25, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294937968)));
    // 0x182ccc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x182cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x182cd0: 0x1141825  or          $v1, $t0, $s4
    ctx->pc = 0x182cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 20));
    // 0x182cd4: 0x24848d00  addiu       $a0, $a0, -0x7300
    ctx->pc = 0x182cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937856));
    // 0x182cd8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182cdc: 0xa0228d72  sb          $v0, -0x728E($at)
    ctx->pc = 0x182cdcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368D72u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368D72u, _value); } while (0);
    // 0x182ce0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182ce4: 0x32f1024  and         $v0, $t9, $t7
    ctx->pc = 0x182ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & GPR_U64(ctx, 15));
    // 0x182ce8: 0xfc238d60  sd          $v1, -0x72A0($at)
    ctx->pc = 0x182ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937952), GPR_U64(ctx, 3));
    // 0x182cec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182cf0: 0x581825  or          $v1, $v0, $t8
    ctx->pc = 0x182cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x182cf4: 0x94288d64  lhu         $t0, -0x729C($at)
    ctx->pc = 0x182cf4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)FAST_READ16(0x368D64u));
    // 0x182cf8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182cfc: 0x1114024  and         $t0, $t0, $s1
    ctx->pc = 0x182cfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 17));
    // 0x182d00: 0x90228d72  lbu         $v0, -0x728E($at)
    ctx->pc = 0x182d00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937970)));
    // 0x182d04: 0x1124025  or          $t0, $t0, $s2
    ctx->pc = 0x182d04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 18));
    // 0x182d08: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182d0c: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x182d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x182d10: 0xa4238d70  sh          $v1, -0x7290($at)
    ctx->pc = 0x182d10u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937968), (uint16_t)GPR_U32(ctx, 3));
    // 0x182d14: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x182d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x182d18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182d1c: 0x90238d71  lbu         $v1, -0x728F($at)
    ctx->pc = 0x182d1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x368D71u));
    // 0x182d20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182d24: 0x6d1824  and         $v1, $v1, $t5
    ctx->pc = 0x182d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 13));
    // 0x182d28: 0xa4288d64  sh          $t0, -0x729C($at)
    ctx->pc = 0x182d28u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937956), (uint16_t)GPR_U32(ctx, 8));
    // 0x182d2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182d30: 0xa0228d72  sb          $v0, -0x728E($at)
    ctx->pc = 0x182d30u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368D72u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368D72u, _value); } while (0);
    // 0x182d34: 0x6e1025  or          $v0, $v1, $t6
    ctx->pc = 0x182d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x182d38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182d3c: 0xa0228d71  sb          $v0, -0x728F($at)
    ctx->pc = 0x182d3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368D71u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368D71u, _value); } while (0);
    // 0x182d40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182d44: 0x90228d71  lbu         $v0, -0x728F($at)
    ctx->pc = 0x182d44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368D71u));
    // 0x182d48: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x182d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x182d4c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182d50: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x182d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x182d54: 0xa0228d71  sb          $v0, -0x728F($at)
    ctx->pc = 0x182d54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368D71u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368D71u, _value); } while (0);
    // 0x182d58: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182d5c: 0x90228d71  lbu         $v0, -0x728F($at)
    ctx->pc = 0x182d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368D71u));
    // 0x182d60: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x182d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x182d64: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182d68: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x182d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x182d6c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x182D6Cu;
    SET_GPR_U32(ctx, 31, 0x182D74u);
    ctx->pc = 0x182D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182D6Cu;
    // 0x182d70: 0xa0228d71  sb          $v0, -0x728F($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937969), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x182D6Cu, 0x182D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182D74u;
label_182d74:
    // 0x182d74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182d78: 0xa383869c  sb          $v1, -0x7964($gp)
    ctx->pc = 0x182d78u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936220), (uint8_t)GPR_U32(ctx, 3));
label_182d7c:
    // 0x182d7c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x182d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x182d80: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x182d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x182d84: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x182d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x182d88: 0x24638d00  addiu       $v1, $v1, -0x7300
    ctx->pc = 0x182d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937856));
    // 0x182d8c: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x182d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x182d90: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x182d90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x182d94: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x182d94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x182d98: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x182d98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x182d9c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x182d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x182da0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x182da0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x182da4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x182da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x182da8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x182da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x182dac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x182dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x182db0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x182db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x182db4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x182db4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x182db8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x182db8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x182dbc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x182dbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182dc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x182dc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182dc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x182dc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182dc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182dc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182dcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182dd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x182DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182DD4u;
        // 0x182dd8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182DDCu;
}
