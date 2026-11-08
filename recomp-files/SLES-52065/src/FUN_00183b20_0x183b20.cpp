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

// Function: FUN_00183b20
// Address: 0x183b20 - 0x183fb4
void FUN_00183b20_0x183b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00183b20_0x183b20");
#endif

    switch (ctx->pc) {
        case 0x183f5cu: goto label_183f5c;
        case 0x183f78u: goto label_183f78;
        default: break;
    }

    ctx->pc = 0x183b20u;

    // 0x183b20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x183b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x183b24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x183b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x183b28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x183b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x183b2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x183b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x183b30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x183b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x183b34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x183b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x183b38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x183b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x183b3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x183b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x183b40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x183b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x183b44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x183b48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x183b4c: 0x838286b0  lb          $v0, -0x7950($gp)
    ctx->pc = 0x183b4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936240)));
    // 0x183b50: 0x14400104  bnez        $v0, . + 4 + (0x104 << 2)
    ctx->pc = 0x183B50u;
    {
        const bool branch_taken_0x183b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B50u;
        // 0x183b54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b50) {
            ctx->pc = 0x183F64u;
            goto label_183f64;
        }
    }
    ctx->pc = 0x183B58u;
    // 0x183b58: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183b5c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x183b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x183b60: 0xa0208f12  sb          $zero, -0x70EE($at)
    ctx->pc = 0x183b60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368F12u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368F12u, _value); } while (0);
    // 0x183b64: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x183b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x183b68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183b6c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x183b6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x183b70: 0xfc228f38  sd          $v0, -0x70C8($at)
    ctx->pc = 0x183b70u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294938424), GPR_U64(ctx, 2));
    // 0x183b74: 0x2409ffc0  addiu       $t1, $zero, -0x40
    ctx->pc = 0x183b74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x183b78: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x183b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x183b7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183b80: 0xfc228f48  sd          $v0, -0x70B8($at)
    ctx->pc = 0x183b80u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368F48u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368F48u, _value); } while (0);
    // 0x183b84: 0x640a000a  daddiu      $t2, $zero, 0xA
    ctx->pc = 0x183b84u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10);
    // 0x183b88: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x183b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x183b8c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183b90: 0xfc228f58  sd          $v0, -0x70A8($at)
    ctx->pc = 0x183b90u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368F58u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368F58u, _value); } while (0);
    // 0x183b94: 0x3007003f  andi        $a3, $zero, 0x3F
    ctx->pc = 0x183b94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)63);
    // 0x183b98: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x183b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x183b9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183ba0: 0xfc228f68  sd          $v0, -0x7098($at)
    ctx->pc = 0x183ba0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368F68u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368F68u, _value); } while (0);
    // 0x183ba4: 0x2415fffe  addiu       $s5, $zero, -0x2
    ctx->pc = 0x183ba4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x183ba8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x183ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x183bac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183bb0: 0xfc228f78  sd          $v0, -0x7088($at)
    ctx->pc = 0x183bb0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368F78u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368F78u, _value); } while (0);
    // 0x183bb4: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x183bb4u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x183bb8: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x183bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x183bbc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183bc0: 0xfc228f88  sd          $v0, -0x7078($at)
    ctx->pc = 0x183bc0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368F88u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368F88u, _value); } while (0);
    // 0x183bc4: 0x240ef800  addiu       $t6, $zero, -0x800
    ctx->pc = 0x183bc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x183bc8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x183bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x183bcc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183bd0: 0xa0228f13  sb          $v0, -0x70ED($at)
    ctx->pc = 0x183bd0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368F13u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368F13u, _value); } while (0);
    // 0x183bd4: 0x300f07ff  andi        $t7, $zero, 0x7FF
    ctx->pc = 0x183bd4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)2047);
    // 0x183bd8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x183bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x183bdc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183be0: 0xa4228f10  sh          $v0, -0x70F0($at)
    ctx->pc = 0x183be0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368F10u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368F10u, _value); } while (0);
    // 0x183be4: 0x241efff9  addiu       $fp, $zero, -0x7
    ctx->pc = 0x183be4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x183be8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183bec: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x183becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x183bf0: 0xac208f14  sw          $zero, -0x70EC($at)
    ctx->pc = 0x183bf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368F14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368F14u, _value); } while (0);
    // 0x183bf4: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x183bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x183bf8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183bfc: 0x64170002  daddiu      $s7, $zero, 0x2
    ctx->pc = 0x183bfcu;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x183c00: 0xac238f18  sw          $v1, -0x70E8($at)
    ctx->pc = 0x183c00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938392), GPR_U32(ctx, 3));
    // 0x183c04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183c08: 0x34038006  ori         $v1, $zero, 0x8006
    ctx->pc = 0x183c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
    // 0x183c0c: 0xac228f1c  sw          $v0, -0x70E4($at)
    ctx->pc = 0x183c0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368F1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368F1Cu, _value); } while (0);
    // 0x183c10: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x183c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x183c14: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x183c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x183c18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183c1c: 0xfc228f28  sd          $v0, -0x70D8($at)
    ctx->pc = 0x183c1cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368F28u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368F28u, _value); } while (0);
    // 0x183c20: 0x203c  dsll32      $a0, $zero, 0
    ctx->pc = 0x183c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (32 + 0));
    // 0x183c24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183c28: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x183c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x183c2c: 0xfc238f20  sd          $v1, -0x70E0($at)
    ctx->pc = 0x183c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294938400), GPR_U64(ctx, 3));
    // 0x183c30: 0x4583c  dsll32      $t3, $a0, 0
    ctx->pc = 0x183c30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) << (32 + 0));
    // 0x183c34: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183c38: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x183c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183c3c: 0x942c8f30  lhu         $t4, -0x70D0($at)
    ctx->pc = 0x183c3cu;
    SET_GPR_ZE32(ctx, 12, (uint16_t)FAST_READ16(0x368F30u));
    // 0x183c40: 0x2402fe00  addiu       $v0, $zero, -0x200
    ctx->pc = 0x183c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x183c44: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x183c44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x183c48: 0x300301ff  andi        $v1, $zero, 0x1FF
    ctx->pc = 0x183c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)511);
    // 0x183c4c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x183c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x183c50: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x183c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x183c54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183c58: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x183c58u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x183c5c: 0x90288f32  lbu         $t0, -0x70CE($at)
    ctx->pc = 0x183c5cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938418)));
    // 0x183c60: 0x1836025  or          $t4, $t4, $v1
    ctx->pc = 0x183c60u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x183c64: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183c68: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x183c68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x183c6c: 0x90258f33  lbu         $a1, -0x70CD($at)
    ctx->pc = 0x183c6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938419)));
    // 0x183c70: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x183c70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x183c74: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183c78: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x183c78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x183c7c: 0xa42c8f30  sh          $t4, -0x70D0($at)
    ctx->pc = 0x183c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938416), (uint16_t)GPR_U32(ctx, 12));
    // 0x183c80: 0xa73825  or          $a3, $a1, $a3
    ctx->pc = 0x183c80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x183c84: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183c88: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x183c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x183c8c: 0xa0288f32  sb          $t0, -0x70CE($at)
    ctx->pc = 0x183c8cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x368F32u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368F32u, _value); } while (0);
    // 0x183c90: 0xa62025  or          $a0, $a1, $a2
    ctx->pc = 0x183c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x183c94: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183c98: 0x2406fff0  addiu       $a2, $zero, -0x10
    ctx->pc = 0x183c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x183c9c: 0xa0278f33  sb          $a3, -0x70CD($at)
    ctx->pc = 0x183c9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x368F33u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368F33u, _value); } while (0);
    // 0x183ca0: 0x70855389  pcpyld      $t2, $a0, $a1
    ctx->pc = 0x183ca0u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x183ca4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183ca8: 0x24046c00  addiu       $a0, $zero, 0x6C00
    ctx->pc = 0x183ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x183cac: 0xdc2c8f30  ld          $t4, -0x70D0($at)
    ctx->pc = 0x183cacu;
    SET_GPR_U64(ctx, 12, FAST_READ64(0x368F30u));
    // 0x183cb0: 0x3007000f  andi        $a3, $zero, 0xF
    ctx->pc = 0x183cb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)15);
    // 0x183cb4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183cb8: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x183cb8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x183cbc: 0x94298f40  lhu         $t1, -0x70C0($at)
    ctx->pc = 0x183cbcu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938432)));
    // 0x183cc0: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x183cc0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x183cc4: 0x640c027f  daddiu      $t4, $zero, 0x27F
    ctx->pc = 0x183cc4u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)639);
    // 0x183cc8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183ccc: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x183cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x183cd0: 0x90288f43  lbu         $t0, -0x70BD($at)
    ctx->pc = 0x183cd0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938435)));
    // 0x183cd4: 0x640900ff  daddiu      $t1, $zero, 0xFF
    ctx->pc = 0x183cd4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
    // 0x183cd8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183cdc: 0x90258f44  lbu         $a1, -0x70BC($at)
    ctx->pc = 0x183cdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x368F44u));
    // 0x183ce0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183ce4: 0xa4248f50  sh          $a0, -0x70B0($at)
    ctx->pc = 0x183ce4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368F50u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368F50u, _value); } while (0);
    // 0x183ce8: 0x24047800  addiu       $a0, $zero, 0x7800
    ctx->pc = 0x183ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x183cec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183cf0: 0xa4248f54  sh          $a0, -0x70AC($at)
    ctx->pc = 0x183cf0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368F54u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368F54u, _value); } while (0);
    // 0x183cf4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183cf8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x183cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x183cfc: 0xfc2a8f30  sd          $t2, -0x70D0($at)
    ctx->pc = 0x183cfcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 10)); ps2TraceGuestWrite(rdram, 0x368F30u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368F30u, _value); } while (0);
    // 0x183d00: 0x1061024  and         $v0, $t0, $a2
    ctx->pc = 0x183d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x183d04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183d08: 0x471825  or          $v1, $v0, $a3
    ctx->pc = 0x183d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x183d0c: 0xa4248f40  sh          $a0, -0x70C0($at)
    ctx->pc = 0x183d0cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368F40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368F40u, _value); } while (0);
    // 0x183d10: 0xb51024  and         $v0, $a1, $s5
    ctx->pc = 0x183d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 21));
    // 0x183d14: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183d18: 0x30080003  andi        $t0, $zero, 0x3
    ctx->pc = 0x183d18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x183d1c: 0xa0238f43  sb          $v1, -0x70BD($at)
    ctx->pc = 0x183d1cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368F43u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368F43u, _value); } while (0);
    // 0x183d20: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x183d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x183d24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183d28: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x183d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x183d2c: 0xa0228f44  sb          $v0, -0x70BC($at)
    ctx->pc = 0x183d2cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368F44u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368F44u, _value); } while (0);
    // 0x183d30: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x183d30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x183d34: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183d38: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x183d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x183d3c: 0x94258f60  lhu         $a1, -0x70A0($at)
    ctx->pc = 0x183d3cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x368F60u));
    // 0x183d40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183d44: 0xae6824  and         $t5, $a1, $t6
    ctx->pc = 0x183d44u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) & GPR_U64(ctx, 14));
    // 0x183d48: 0x942b8f62  lhu         $t3, -0x709E($at)
    ctx->pc = 0x183d48u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938466)));
    // 0x183d4c: 0x300503ff  andi        $a1, $zero, 0x3FF
    ctx->pc = 0x183d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1023);
    // 0x183d50: 0x1af6825  or          $t5, $t5, $t7
    ctx->pc = 0x183d50u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x183d54: 0x59bb8  dsll        $s3, $a1, 14
    ctx->pc = 0x183d54u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) << 14);
    // 0x183d58: 0x58e38  dsll        $s1, $a1, 24
    ctx->pc = 0x183d58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << 24);
    // 0x183d5c: 0x5c080  sll         $t8, $a1, 2
    ctx->pc = 0x183d5cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x183d60: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183d64: 0x16e5824  and         $t3, $t3, $t6
    ctx->pc = 0x183d64u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 14));
    // 0x183d68: 0x942a8f64  lhu         $t2, -0x709C($at)
    ctx->pc = 0x183d68u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938468)));
    // 0x183d6c: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x183d6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x183d70: 0x240cf00f  addiu       $t4, $zero, -0xFF1
    ctx->pc = 0x183d70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x183d74: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183d78: 0x14e5024  and         $t2, $t2, $t6
    ctx->pc = 0x183d78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 14));
    // 0x183d7c: 0x94248f66  lhu         $a0, -0x709A($at)
    ctx->pc = 0x183d7cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938470)));
    // 0x183d80: 0x14f5025  or          $t2, $t2, $t7
    ctx->pc = 0x183d80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 15));
    // 0x183d84: 0x240ff003  addiu       $t7, $zero, -0xFFD
    ctx->pc = 0x183d84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963203));
    // 0x183d88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183d8c: 0x8e2024  and         $a0, $a0, $t6
    ctx->pc = 0x183d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 14));
    // 0x183d90: 0x90228f70  lbu         $v0, -0x7090($at)
    ctx->pc = 0x183d90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938480)));
    // 0x183d94: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x183d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x183d98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183d9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x183d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x183da0: 0xa42d8f60  sh          $t5, -0x70A0($at)
    ctx->pc = 0x183da0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938464), (uint16_t)GPR_U32(ctx, 13));
    // 0x183da4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x183da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x183da8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183dac: 0xa42b8f62  sh          $t3, -0x709E($at)
    ctx->pc = 0x183dacu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x368F62u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368F62u, _value); } while (0);
    // 0x183db0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183db4: 0x85900  sll         $t3, $t0, 4
    ctx->pc = 0x183db4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x183db8: 0xa42a8f64  sh          $t2, -0x709C($at)
    ctx->pc = 0x183db8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938468), (uint16_t)GPR_U32(ctx, 10));
    // 0x183dbc: 0x54100  sll         $t0, $a1, 4
    ctx->pc = 0x183dbcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x183dc0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183dc4: 0xa4248f66  sh          $a0, -0x709A($at)
    ctx->pc = 0x183dc4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368F66u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368F66u, _value); } while (0);
    // 0x183dc8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183dcc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x183dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x183dd0: 0xa0228f70  sb          $v0, -0x7090($at)
    ctx->pc = 0x183dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938480), (uint8_t)GPR_U32(ctx, 2));
    // 0x183dd4: 0x2403c00f  addiu       $v1, $zero, -0x3FF1
    ctx->pc = 0x183dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950927));
    // 0x183dd8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183ddc: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x183ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x183de0: 0x902a8f70  lbu         $t2, -0x7090($at)
    ctx->pc = 0x183de0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)FAST_READ8(0x368F70u));
    // 0x183de4: 0x34523fff  ori         $s2, $v0, 0x3FFF
    ctx->pc = 0x183de4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x183de8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x183de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x183dec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x183decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x183df0: 0x44c825  or          $t9, $v0, $a0
    ctx->pc = 0x183df0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x183df4: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x183df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x183df8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183dfc: 0x1462824  and         $a1, $t2, $a2
    ctx->pc = 0x183dfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & GPR_U64(ctx, 6));
    // 0x183e00: 0x90298f80  lbu         $t1, -0x7080($at)
    ctx->pc = 0x183e00u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938496)));
    // 0x183e04: 0x300600ff  andi        $a2, $zero, 0xFF
    ctx->pc = 0x183e04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x183e08: 0xa72025  or          $a0, $a1, $a3
    ctx->pc = 0x183e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x183e0c: 0x66900  sll         $t5, $a2, 4
    ctx->pc = 0x183e0cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x183e10: 0x240affcf  addiu       $t2, $zero, -0x31
    ctx->pc = 0x183e10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x183e14: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183e18: 0x1354824  and         $t1, $t1, $s5
    ctx->pc = 0x183e18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 21));
    // 0x183e1c: 0xa0248f70  sb          $a0, -0x7090($at)
    ctx->pc = 0x183e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938480), (uint8_t)GPR_U32(ctx, 4));
    // 0x183e20: 0x1223025  or          $a2, $t1, $v0
    ctx->pc = 0x183e20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x183e24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183e28: 0x30040007  andi        $a0, $zero, 0x7
    ctx->pc = 0x183e28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x183e2c: 0x94278f70  lhu         $a3, -0x7090($at)
    ctx->pc = 0x183e2cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x368F70u));
    // 0x183e30: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x183e30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x183e34: 0x24980  sll         $t1, $v0, 6
    ctx->pc = 0x183e34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x183e38: 0x2404fff1  addiu       $a0, $zero, -0xF
    ctx->pc = 0x183e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x183e3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183e40: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x183e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x183e44: 0xa0268f80  sb          $a2, -0x7080($at)
    ctx->pc = 0x183e44u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938496), (uint8_t)GPR_U32(ctx, 6));
    // 0x183e48: 0x239c0  sll         $a3, $v0, 7
    ctx->pc = 0x183e48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x183e4c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183e50: 0x681025  or          $v0, $v1, $t0
    ctx->pc = 0x183e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x183e54: 0x90268f80  lbu         $a2, -0x7080($at)
    ctx->pc = 0x183e54u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x368F80u));
    // 0x183e58: 0x2408ffbf  addiu       $t0, $zero, -0x41
    ctx->pc = 0x183e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x183e5c: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x183e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x183e60: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183e64: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x183e64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x183e68: 0xa4228f70  sh          $v0, -0x7090($at)
    ctx->pc = 0x183e68u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938480), (uint16_t)GPR_U32(ctx, 2));
    // 0x183e6c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x183e6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x183e70: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183e74: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x183e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x183e78: 0xdc348f70  ld          $s4, -0x7090($at)
    ctx->pc = 0x183e78u;
    SET_GPR_U64(ctx, 20, FAST_READ64(0x368F70u));
    // 0x183e7c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x183e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x183e80: 0x24848f10  addiu       $a0, $a0, -0x70F0
    ctx->pc = 0x183e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938384));
    // 0x183e84: 0x24a53fc0  addiu       $a1, $a1, 0x3FC0
    ctx->pc = 0x183e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16320));
    // 0x183e88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183e8c: 0x2929024  and         $s2, $s4, $s2
    ctx->pc = 0x183e8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) & GPR_U64(ctx, 18));
    // 0x183e90: 0x90228f82  lbu         $v0, -0x707E($at)
    ctx->pc = 0x183e90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938498)));
    // 0x183e94: 0x2539025  or          $s2, $s2, $s3
    ctx->pc = 0x183e94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 19));
    // 0x183e98: 0x2599024  and         $s2, $s2, $t9
    ctx->pc = 0x183e98u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 25));
    // 0x183e9c: 0x2518825  or          $s1, $s2, $s1
    ctx->pc = 0x183e9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) | GPR_U64(ctx, 17));
    // 0x183ea0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183ea4: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x183ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x183ea8: 0xa0268f80  sb          $a2, -0x7080($at)
    ctx->pc = 0x183ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938496), (uint8_t)GPR_U32(ctx, 6));
    // 0x183eac: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x183eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x183eb0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183eb4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x183eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x183eb8: 0x942e8f80  lhu         $t6, -0x7080($at)
    ctx->pc = 0x183eb8u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)FAST_READ16(0x368F80u));
    // 0x183ebc: 0x24c68f00  addiu       $a2, $a2, -0x7100
    ctx->pc = 0x183ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938368));
    // 0x183ec0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183ec4: 0xa0228f82  sb          $v0, -0x707E($at)
    ctx->pc = 0x183ec4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368F82u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368F82u, _value); } while (0);
    // 0x183ec8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183ecc: 0x1cc1024  and         $v0, $t6, $t4
    ctx->pc = 0x183eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 12));
    // 0x183ed0: 0xfc318f70  sd          $s1, -0x7090($at)
    ctx->pc = 0x183ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294938480), GPR_U64(ctx, 17));
    // 0x183ed4: 0x4d6025  or          $t4, $v0, $t5
    ctx->pc = 0x183ed4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x183ed8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183edc: 0x942e8f74  lhu         $t6, -0x708C($at)
    ctx->pc = 0x183edcu;
    SET_GPR_ZE32(ctx, 14, (uint16_t)FAST_READ16(0x368F74u));
    // 0x183ee0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183ee4: 0x1cf6824  and         $t5, $t6, $t7
    ctx->pc = 0x183ee4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x183ee8: 0x90228f82  lbu         $v0, -0x707E($at)
    ctx->pc = 0x183ee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938498)));
    // 0x183eec: 0x1b86825  or          $t5, $t5, $t8
    ctx->pc = 0x183eecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 24));
    // 0x183ef0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183ef4: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x183ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x183ef8: 0xa42c8f80  sh          $t4, -0x7080($at)
    ctx->pc = 0x183ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938496), (uint16_t)GPR_U32(ctx, 12));
    // 0x183efc: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x183efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x183f00: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183f04: 0x902c8f81  lbu         $t4, -0x707F($at)
    ctx->pc = 0x183f04u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)FAST_READ8(0x368F81u));
    // 0x183f08: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183f0c: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x183f0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x183f10: 0xa42d8f74  sh          $t5, -0x708C($at)
    ctx->pc = 0x183f10u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938484), (uint16_t)GPR_U32(ctx, 13));
    // 0x183f14: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183f18: 0xa0228f82  sb          $v0, -0x707E($at)
    ctx->pc = 0x183f18u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368F82u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368F82u, _value); } while (0);
    // 0x183f1c: 0x14b1025  or          $v0, $t2, $t3
    ctx->pc = 0x183f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x183f20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183f24: 0xa0228f81  sb          $v0, -0x707F($at)
    ctx->pc = 0x183f24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368F81u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368F81u, _value); } while (0);
    // 0x183f28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183f2c: 0x90228f81  lbu         $v0, -0x707F($at)
    ctx->pc = 0x183f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368F81u));
    // 0x183f30: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x183f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x183f34: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183f38: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x183f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x183f3c: 0xa0228f81  sb          $v0, -0x707F($at)
    ctx->pc = 0x183f3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368F81u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368F81u, _value); } while (0);
    // 0x183f40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183f44: 0x90228f81  lbu         $v0, -0x707F($at)
    ctx->pc = 0x183f44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368F81u));
    // 0x183f48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x183f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x183f4c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183f50: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x183f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x183f54: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x183F54u;
    SET_GPR_U32(ctx, 31, 0x183F5Cu);
    ctx->pc = 0x183F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183F54u;
    // 0x183f58: 0xa0228f81  sb          $v0, -0x707F($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938497), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x183F54u, 0x183F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F5Cu;
label_183f5c:
    // 0x183f5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183f60: 0xa38286b0  sb          $v0, -0x7950($gp)
    ctx->pc = 0x183f60u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936240), (uint8_t)GPR_U32(ctx, 2));
label_183f64:
    // 0x183f64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x183f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x183f68: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x183f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x183f6c: 0x24a58f10  addiu       $a1, $a1, -0x70F0
    ctx->pc = 0x183f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938384));
    // 0x183f70: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x183F70u;
    SET_GPR_U32(ctx, 31, 0x183F78u);
    ctx->pc = 0x183F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183F70u;
    // 0x183f74: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x183F70u, 0x183F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F78u;
label_183f78:
    // 0x183f78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x183f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x183f7c: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x183f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x183f80: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x183f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x183f84: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x183f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x183f88: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x183f88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x183f8c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x183f8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183f90: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x183f90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x183f94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x183f94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183f98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x183f98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183f9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x183f9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183fa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x183fa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183fa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183fac: 0x3e00008  jr          $ra
    ctx->pc = 0x183FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FACu;
        // 0x183fb0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183FB4u;
}
