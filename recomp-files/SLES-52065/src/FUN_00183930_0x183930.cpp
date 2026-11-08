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

// Function: FUN_00183930
// Address: 0x183930 - 0x183ad0
void FUN_00183930_0x183930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00183930_0x183930");
#endif

    switch (ctx->pc) {
        case 0x183a98u: goto label_183a98;
        case 0x183ab4u: goto label_183ab4;
        default: break;
    }

    ctx->pc = 0x183930u;

    // 0x183930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x183934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x183938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18393c: 0x838286ac  lb          $v0, -0x7954($gp)
    ctx->pc = 0x18393cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936236)));
    // 0x183940: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x183940u;
    {
        const bool branch_taken_0x183940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183940u;
        // 0x183944: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183940) {
            ctx->pc = 0x183AA0u;
            goto label_183aa0;
        }
    }
    ctx->pc = 0x183948u;
    // 0x183948: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18394c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18394cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x183950: 0xa0208ed2  sb          $zero, -0x712E($at)
    ctx->pc = 0x183950u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368ED2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368ED2u, _value); } while (0);
    // 0x183954: 0x30050003  andi        $a1, $zero, 0x3
    ctx->pc = 0x183954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x183958: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x183958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18395c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18395cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183960: 0xfc228ef8  sd          $v0, -0x7108($at)
    ctx->pc = 0x183960u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368EF8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368EF8u, _value); } while (0);
    // 0x183964: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x183964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x183968: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x183968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18396c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18396cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183970: 0xa0228ed3  sb          $v0, -0x712D($at)
    ctx->pc = 0x183970u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368ED3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368ED3u, _value); } while (0);
    // 0x183974: 0x57080  sll         $t6, $a1, 2
    ctx->pc = 0x183974u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x183978: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x183978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18397c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18397cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183980: 0xa4228ed0  sh          $v0, -0x7130($at)
    ctx->pc = 0x183980u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368ED0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368ED0u, _value); } while (0);
    // 0x183984: 0x240dfff3  addiu       $t5, $zero, -0xD
    ctx->pc = 0x183984u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x183988: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18398c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x18398cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x183990: 0xac208ed4  sw          $zero, -0x712C($at)
    ctx->pc = 0x183990u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368ED4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368ED4u, _value); } while (0);
    // 0x183994: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x183994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x183998: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18399c: 0x240bc00f  addiu       $t3, $zero, -0x3FF1
    ctx->pc = 0x18399cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950927));
    // 0x1839a0: 0xac238ed8  sw          $v1, -0x7128($at)
    ctx->pc = 0x1839a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368ED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368ED8u, _value); } while (0);
    // 0x1839a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1839a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1839a8: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1839a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1839ac: 0xac228edc  sw          $v0, -0x7124($at)
    ctx->pc = 0x1839acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368EDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368EDCu, _value); } while (0);
    // 0x1839b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1839b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1839b4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1839b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1839b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1839b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1839bc: 0xfc228ee8  sd          $v0, -0x7118($at)
    ctx->pc = 0x1839bcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368EE8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368EE8u, _value); } while (0);
    // 0x1839c0: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x1839c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1839c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1839c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1839c8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1839c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1839cc: 0xfc238ee0  sd          $v1, -0x7120($at)
    ctx->pc = 0x1839ccu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368EE0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368EE0u, _value); } while (0);
    // 0x1839d0: 0x34493fff  ori         $t1, $v0, 0x3FFF
    ctx->pc = 0x1839d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x1839d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1839d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1839d8: 0x300303ff  andi        $v1, $zero, 0x3FF
    ctx->pc = 0x1839d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1023);
    // 0x1839dc: 0x90268ef0  lbu         $a2, -0x7110($at)
    ctx->pc = 0x1839dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x368EF0u));
    // 0x1839e0: 0x36100  sll         $t4, $v1, 4
    ctx->pc = 0x1839e0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1839e4: 0x353b8  dsll        $t2, $v1, 14
    ctx->pc = 0x1839e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 14);
    // 0x1839e8: 0x34638  dsll        $t0, $v1, 24
    ctx->pc = 0x1839e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 24);
    // 0x1839ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1839ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1839f0: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x1839f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1839f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1839f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1839f8: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x1839f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1839fc: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1839fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x183a00: 0xa0258ef0  sb          $a1, -0x7110($at)
    ctx->pc = 0x183a00u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368EF0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368EF0u, _value); } while (0);
    // 0x183a04: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x183a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x183a08: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183a0c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x183a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x183a10: 0x902f8ef0  lbu         $t7, -0x7110($at)
    ctx->pc = 0x183a10u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)FAST_READ8(0x368EF0u));
    // 0x183a14: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x183a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x183a18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x183a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x183a1c: 0x24a53ad0  addiu       $a1, $a1, 0x3AD0
    ctx->pc = 0x183a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15056));
    // 0x183a20: 0x443825  or          $a3, $v0, $a0
    ctx->pc = 0x183a20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x183a24: 0x24c68ec0  addiu       $a2, $a2, -0x7140
    ctx->pc = 0x183a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938304));
    // 0x183a28: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x183a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x183a2c: 0x2402f003  addiu       $v0, $zero, -0xFFD
    ctx->pc = 0x183a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963203));
    // 0x183a30: 0x24848ed0  addiu       $a0, $a0, -0x7130
    ctx->pc = 0x183a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938320));
    // 0x183a34: 0x1ed6824  and         $t5, $t7, $t5
    ctx->pc = 0x183a34u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x183a38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183a3c: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x183a3cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x183a40: 0xa02d8ef0  sb          $t5, -0x7110($at)
    ctx->pc = 0x183a40u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x368EF0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368EF0u, _value); } while (0);
    // 0x183a44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183a48: 0x942d8ef0  lhu         $t5, -0x7110($at)
    ctx->pc = 0x183a48u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)FAST_READ16(0x368EF0u));
    // 0x183a4c: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x183a4cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x183a50: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183a54: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x183a54u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x183a58: 0xa42b8ef0  sh          $t3, -0x7110($at)
    ctx->pc = 0x183a58u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x368EF0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368EF0u, _value); } while (0);
    // 0x183a5c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183a60: 0xdc2b8ef0  ld          $t3, -0x7110($at)
    ctx->pc = 0x183a60u;
    SET_GPR_U64(ctx, 11, FAST_READ64(0x368EF0u));
    // 0x183a64: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x183a64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x183a68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183a6c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x183a6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x183a70: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x183a70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x183a74: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x183a74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x183a78: 0xfc278ef0  sd          $a3, -0x7110($at)
    ctx->pc = 0x183a78u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294938352), GPR_U64(ctx, 7));
    // 0x183a7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183a80: 0x94278ef4  lhu         $a3, -0x710C($at)
    ctx->pc = 0x183a80u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x368EF4u));
    // 0x183a84: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x183a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x183a88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183a8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x183a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x183a90: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x183A90u;
    SET_GPR_U32(ctx, 31, 0x183A98u);
    ctx->pc = 0x183A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A90u;
    // 0x183a94: 0xa4228ef4  sh          $v0, -0x710C($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938356), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x183A90u, 0x183A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A98u;
label_183a98:
    // 0x183a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183a9c: 0xa38286ac  sb          $v0, -0x7954($gp)
    ctx->pc = 0x183a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936236), (uint8_t)GPR_U32(ctx, 2));
label_183aa0:
    // 0x183aa0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x183aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x183aa4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x183aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x183aa8: 0x24a58ed0  addiu       $a1, $a1, -0x7130
    ctx->pc = 0x183aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938320));
    // 0x183aac: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x183AACu;
    SET_GPR_U32(ctx, 31, 0x183AB4u);
    ctx->pc = 0x183AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183AACu;
    // 0x183ab0: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x183AACu, 0x183AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183AB4u;
label_183ab4:
    // 0x183ab4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x183ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x183ab8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x183ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x183abc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x183abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x183ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x183ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x183AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183AC8u;
        // 0x183acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183AD0u;
}
