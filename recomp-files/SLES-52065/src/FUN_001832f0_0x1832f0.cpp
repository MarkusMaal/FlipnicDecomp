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

// Function: FUN_001832f0
// Address: 0x1832f0 - 0x1836ec
void FUN_001832f0_0x1832f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001832f0_0x1832f0");
#endif

    switch (ctx->pc) {
        case 0x183694u: goto label_183694;
        case 0x1836b0u: goto label_1836b0;
        default: break;
    }

    ctx->pc = 0x1832f0u;

    // 0x1832f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1832f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1832f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1832f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1832f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1832f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1832fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1832fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x183300: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x183300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x183304: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x183304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x183308: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x183308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18330c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18330cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x183310: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x183310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x183314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x183318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18331c: 0x838286a4  lb          $v0, -0x795C($gp)
    ctx->pc = 0x18331cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936228)));
    // 0x183320: 0x144000de  bnez        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x183320u;
    {
        const bool branch_taken_0x183320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183320u;
        // 0x183324: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183320) {
            ctx->pc = 0x18369Cu;
            goto label_18369c;
        }
    }
    ctx->pc = 0x183328u;
    // 0x183328: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18332c: 0x30190001  andi        $t9, $zero, 0x1
    ctx->pc = 0x18332cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x183330: 0xfc208e48  sd          $zero, -0x71B8($at)
    ctx->pc = 0x183330u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368E48u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368E48u, _value); } while (0);
    // 0x183334: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x183334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x183338: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18333c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x18333cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x183340: 0xfc228e38  sd          $v0, -0x71C8($at)
    ctx->pc = 0x183340u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368E38u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368E38u, _value); } while (0);
    // 0x183344: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x183344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x183348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18334c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18334cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183350: 0xfc228e58  sd          $v0, -0x71A8($at)
    ctx->pc = 0x183350u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368E58u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368E58u, _value); } while (0);
    // 0x183354: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x183354u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x183358: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x183358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18335c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18335cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183360: 0xfc228e68  sd          $v0, -0x7198($at)
    ctx->pc = 0x183360u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368E68u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368E68u, _value); } while (0);
    // 0x183364: 0x2407fff8  addiu       $a3, $zero, -0x8
    ctx->pc = 0x183364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x183368: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18336c: 0x640b0006  daddiu      $t3, $zero, 0x6
    ctx->pc = 0x18336cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x183370: 0xfc228e78  sd          $v0, -0x7188($at)
    ctx->pc = 0x183370u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294938232), GPR_U64(ctx, 2));
    // 0x183374: 0x64160002  daddiu      $s6, $zero, 0x2
    ctx->pc = 0x183374u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x183378: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18337c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x18337cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x183380: 0xa0238e13  sb          $v1, -0x71ED($at)
    ctx->pc = 0x183380u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368E13u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368E13u, _value); } while (0);
    // 0x183384: 0x2409fff7  addiu       $t1, $zero, -0x9
    ctx->pc = 0x183384u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x183388: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18338c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x18338cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x183390: 0xa4228e10  sh          $v0, -0x71F0($at)
    ctx->pc = 0x183390u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938128), (uint16_t)GPR_U32(ctx, 2));
    // 0x183394: 0x1950c0  sll         $t2, $t9, 3
    ctx->pc = 0x183394u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x183398: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18339c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x18339cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1833a0: 0xa0208e12  sb          $zero, -0x71EE($at)
    ctx->pc = 0x1833a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368E12u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368E12u, _value); } while (0);
    // 0x1833a4: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x1833a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1833a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1833a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1833ac: 0x2413f00f  addiu       $s3, $zero, -0xFF1
    ctx->pc = 0x1833acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x1833b0: 0xac228e1c  sw          $v0, -0x71E4($at)
    ctx->pc = 0x1833b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368E1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368E1Cu, _value); } while (0);
    // 0x1833b4: 0x2411ffcf  addiu       $s1, $zero, -0x31
    ctx->pc = 0x1833b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1833b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1833b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1833bc: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x1833bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x1833c0: 0xac248e18  sw          $a0, -0x71E8($at)
    ctx->pc = 0x1833c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368E18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368E18u, _value); } while (0);
    // 0x1833c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1833c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1833c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1833c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1833cc: 0x300300ff  andi        $v1, $zero, 0xFF
    ctx->pc = 0x1833ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x1833d0: 0xac208e14  sw          $zero, -0x71EC($at)
    ctx->pc = 0x1833d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368E14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368E14u, _value); } while (0);
    // 0x1833d4: 0x3a100  sll         $s4, $v1, 4
    ctx->pc = 0x1833d4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1833d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1833d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1833dc: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x1833dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1833e0: 0xfc228e20  sd          $v0, -0x71E0($at)
    ctx->pc = 0x1833e0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368E20u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368E20u, _value); } while (0);
    // 0x1833e4: 0x39100  sll         $s2, $v1, 4
    ctx->pc = 0x1833e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1833e8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1833e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1833ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1833ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1833f0: 0xfc228e28  sd          $v0, -0x71D8($at)
    ctx->pc = 0x1833f0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368E28u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368E28u, _value); } while (0);
    // 0x1833f4: 0x2404fff1  addiu       $a0, $zero, -0xF
    ctx->pc = 0x1833f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x1833f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1833f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1833fc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1833fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x183400: 0xa0208e50  sb          $zero, -0x71B0($at)
    ctx->pc = 0x183400u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368E50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368E50u, _value); } while (0);
    // 0x183404: 0x2403fff9  addiu       $v1, $zero, -0x7
    ctx->pc = 0x183404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x183408: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18340c: 0x241efffd  addiu       $fp, $zero, -0x3
    ctx->pc = 0x18340cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x183410: 0xa0208e51  sb          $zero, -0x71AF($at)
    ctx->pc = 0x183410u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368E51u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368E51u, _value); } while (0);
    // 0x183414: 0x240fffbf  addiu       $t7, $zero, -0x41
    ctx->pc = 0x183414u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x183418: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18341c: 0x19c180  sll         $t8, $t9, 6
    ctx->pc = 0x18341cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 25), 6));
    // 0x183420: 0xa0208e52  sb          $zero, -0x71AE($at)
    ctx->pc = 0x183420u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938194), (uint8_t)GPR_U32(ctx, 0));
    // 0x183424: 0x2417ffdf  addiu       $s7, $zero, -0x21
    ctx->pc = 0x183424u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x183428: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18342c: 0x240dff7f  addiu       $t5, $zero, -0x81
    ctx->pc = 0x18342cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x183430: 0xa0208e53  sb          $zero, -0x71AD($at)
    ctx->pc = 0x183430u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368E53u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368E53u, _value); } while (0);
    // 0x183434: 0x1971c0  sll         $t6, $t9, 7
    ctx->pc = 0x183434u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 25), 7));
    // 0x183438: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18343c: 0x90258e30  lbu         $a1, -0x71D0($at)
    ctx->pc = 0x18343cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x368E30u));
    // 0x183440: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183444: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x183444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x183448: 0x90288e32  lbu         $t0, -0x71CE($at)
    ctx->pc = 0x183448u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938162)));
    // 0x18344c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x18344cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x183450: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183454: 0x102a824  and         $s5, $t0, $v0
    ctx->pc = 0x183454u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x183458: 0x902c8e40  lbu         $t4, -0x71C0($at)
    ctx->pc = 0x183458u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938176)));
    // 0x18345c: 0x2a6a825  or          $s5, $s5, $a2
    ctx->pc = 0x18345cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 6));
    // 0x183460: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x183460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x183464: 0x194100  sll         $t0, $t9, 4
    ctx->pc = 0x183464u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x183468: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18346c: 0x1873824  and         $a3, $t4, $a3
    ctx->pc = 0x18346cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 12) & GPR_U64(ctx, 7));
    // 0x183470: 0xa0258e30  sb          $a1, -0x71D0($at)
    ctx->pc = 0x183470u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938160), (uint8_t)GPR_U32(ctx, 5));
    // 0x183474: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x183474u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x183478: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18347c: 0x90258e30  lbu         $a1, -0x71D0($at)
    ctx->pc = 0x18347cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x368E30u));
    // 0x183480: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183484: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x183484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x183488: 0xa0358e32  sb          $s5, -0x71CE($at)
    ctx->pc = 0x183488u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938162), (uint8_t)GPR_U32(ctx, 21));
    // 0x18348c: 0x962025  or          $a0, $a0, $s6
    ctx->pc = 0x18348cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 22));
    // 0x183490: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183494: 0x902c8e32  lbu         $t4, -0x71CE($at)
    ctx->pc = 0x183494u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)FAST_READ8(0x368E32u));
    // 0x183498: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18349c: 0x1831824  and         $v1, $t4, $v1
    ctx->pc = 0x18349cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x1834a0: 0xa0278e40  sb          $a3, -0x71C0($at)
    ctx->pc = 0x1834a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938176), (uint8_t)GPR_U32(ctx, 7));
    // 0x1834a4: 0x766025  or          $t4, $v1, $s6
    ctx->pc = 0x1834a4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x1834a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1834a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1834ac: 0x193940  sll         $a3, $t9, 5
    ctx->pc = 0x1834acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 5));
    // 0x1834b0: 0x902b8e40  lbu         $t3, -0x71C0($at)
    ctx->pc = 0x1834b0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938176)));
    // 0x1834b4: 0x191880  sll         $v1, $t9, 2
    ctx->pc = 0x1834b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x1834b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1834b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1834bc: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x1834bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x1834c0: 0xa0248e30  sb          $a0, -0x71D0($at)
    ctx->pc = 0x1834c0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938160), (uint8_t)GPR_U32(ctx, 4));
    // 0x1834c4: 0x12a5025  or          $t2, $t1, $t2
    ctx->pc = 0x1834c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1834c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1834c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1834cc: 0x192040  sll         $a0, $t9, 1
    ctx->pc = 0x1834ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 1));
    // 0x1834d0: 0x94358e30  lhu         $s5, -0x71D0($at)
    ctx->pc = 0x1834d0u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938160)));
    // 0x1834d4: 0x2409fffb  addiu       $t1, $zero, -0x5
    ctx->pc = 0x1834d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1834d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1834d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1834dc: 0x2b35824  and         $t3, $s5, $s3
    ctx->pc = 0x1834dcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 21) & GPR_U64(ctx, 19));
    // 0x1834e0: 0x90258e41  lbu         $a1, -0x71BF($at)
    ctx->pc = 0x1834e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938177)));
    // 0x1834e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1834e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1834e8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1834e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1834ec: 0xa02c8e32  sb          $t4, -0x71CE($at)
    ctx->pc = 0x1834ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938162), (uint8_t)GPR_U32(ctx, 12));
    // 0x1834f0: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x1834f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x1834f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1834f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1834f8: 0xa02a8e40  sb          $t2, -0x71C0($at)
    ctx->pc = 0x1834f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x368E40u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368E40u, _value); } while (0);
    // 0x1834fc: 0x1745025  or          $t2, $t3, $s4
    ctx->pc = 0x1834fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 20));
    // 0x183500: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183504: 0xa42a8e30  sh          $t2, -0x71D0($at)
    ctx->pc = 0x183504u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x368E30u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368E30u, _value); } while (0);
    // 0x183508: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18350c: 0xa0228e41  sb          $v0, -0x71BF($at)
    ctx->pc = 0x18350cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368E41u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368E41u, _value); } while (0);
    // 0x183510: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x183510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x183514: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183518: 0xac228e54  sw          $v0, -0x71AC($at)
    ctx->pc = 0x183518u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368E54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368E54u, _value); } while (0);
    // 0x18351c: 0x24026c00  addiu       $v0, $zero, 0x6C00
    ctx->pc = 0x18351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x183520: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183524: 0xa4228e60  sh          $v0, -0x71A0($at)
    ctx->pc = 0x183524u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368E60u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368E60u, _value); } while (0);
    // 0x183528: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x183528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x18352c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18352cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183530: 0xa4228e62  sh          $v0, -0x719E($at)
    ctx->pc = 0x183530u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368E62u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368E62u, _value); } while (0);
    // 0x183534: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183538: 0x64020010  daddiu      $v0, $zero, 0x10
    ctx->pc = 0x183538u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x18353c: 0x90348e31  lbu         $s4, -0x71CF($at)
    ctx->pc = 0x18353cu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938161)));
    // 0x183540: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x183540u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x183544: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x183544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183548: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x183548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18354c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18354cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x183550: 0x2ac38  dsll        $s5, $v0, 16
    ctx->pc = 0x183550u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << 16);
    // 0x183554: 0x34029400  ori         $v0, $zero, 0x9400
    ctx->pc = 0x183554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
    // 0x183558: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18355c: 0x291a024  and         $s4, $s4, $s1
    ctx->pc = 0x18355cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 17));
    // 0x183560: 0x90338e40  lbu         $s3, -0x71C0($at)
    ctx->pc = 0x183560u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938176)));
    // 0x183564: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183568: 0x2663024  and         $a2, $s3, $a2
    ctx->pc = 0x183568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & GPR_U64(ctx, 6));
    // 0x18356c: 0x902c8e41  lbu         $t4, -0x71BF($at)
    ctx->pc = 0x18356cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938177)));
    // 0x183570: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183574: 0xdc2b8e60  ld          $t3, -0x71A0($at)
    ctx->pc = 0x183574u;
    SET_GPR_U64(ctx, 11, FAST_READ64(0x368E60u));
    // 0x183578: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18357c: 0xa4228e70  sh          $v0, -0x7190($at)
    ctx->pc = 0x18357cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368E70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368E70u, _value); } while (0);
    // 0x183580: 0x36a2ffff  ori         $v0, $s5, 0xFFFF
    ctx->pc = 0x183580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x183584: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183588: 0x458825  or          $s1, $v0, $a1
    ctx->pc = 0x183588u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18358c: 0x2922825  or          $a1, $s4, $s2
    ctx->pc = 0x18358cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 18));
    // 0x183590: 0xa0258e31  sb          $a1, -0x71CF($at)
    ctx->pc = 0x183590u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368E31u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368E31u, _value); } while (0);
    // 0x183594: 0xc89025  or          $s2, $a2, $t0
    ctx->pc = 0x183594u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x183598: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18359c: 0x19e3024  and         $a2, $t4, $fp
    ctx->pc = 0x18359cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) & GPR_U64(ctx, 30));
    // 0x1835a0: 0xa0328e40  sb          $s2, -0x71C0($at)
    ctx->pc = 0x1835a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938176), (uint8_t)GPR_U32(ctx, 18));
    // 0x1835a4: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x1835a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1835a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1835a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1835ac: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x1835acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x1835b0: 0xa0248e41  sb          $a0, -0x71BF($at)
    ctx->pc = 0x1835b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368E41u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368E41u, _value); } while (0);
    // 0x1835b4: 0x72224389  pcpyld      $t0, $s1, $v0
    ctx->pc = 0x1835b4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 2)));
    // 0x1835b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1835b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1835bc: 0x1681024  and         $v0, $t3, $t0
    ctx->pc = 0x1835bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 8));
    // 0x1835c0: 0x90318e31  lbu         $s1, -0x71CF($at)
    ctx->pc = 0x1835c0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938161)));
    // 0x1835c4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1835c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1835c8: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1835c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1835cc: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x1835ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x1835d0: 0x24848e10  addiu       $a0, $a0, -0x71F0
    ctx->pc = 0x1835d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938128));
    // 0x1835d4: 0x24a536f0  addiu       $a1, $a1, 0x36F0
    ctx->pc = 0x1835d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14064));
    // 0x1835d8: 0x24c68e00  addiu       $a2, $a2, -0x7200
    ctx->pc = 0x1835d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938112));
    // 0x1835dc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1835dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1835e0: 0x22f8824  and         $s1, $s1, $t7
    ctx->pc = 0x1835e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 15));
    // 0x1835e4: 0xfc228e60  sd          $v0, -0x71A0($at)
    ctx->pc = 0x1835e4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294938208), GPR_U64(ctx, 2));
    // 0x1835e8: 0x2388825  or          $s1, $s1, $t8
    ctx->pc = 0x1835e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 24));
    // 0x1835ec: 0x34029000  ori         $v0, $zero, 0x9000
    ctx->pc = 0x1835ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x1835f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1835f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1835f4: 0xa4228e72  sh          $v0, -0x718E($at)
    ctx->pc = 0x1835f4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368E72u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368E72u, _value); } while (0);
    // 0x1835f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1835f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1835fc: 0x902c8e40  lbu         $t4, -0x71C0($at)
    ctx->pc = 0x1835fcu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)FAST_READ8(0x368E40u));
    // 0x183600: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183604: 0x1976024  and         $t4, $t4, $s7
    ctx->pc = 0x183604u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 23));
    // 0x183608: 0x902b8e41  lbu         $t3, -0x71BF($at)
    ctx->pc = 0x183608u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938177)));
    // 0x18360c: 0x1876025  or          $t4, $t4, $a3
    ctx->pc = 0x18360cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 7));
    // 0x183610: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183614: 0x1693824  and         $a3, $t3, $t1
    ctx->pc = 0x183614u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x183618: 0xdc228e70  ld          $v0, -0x7190($at)
    ctx->pc = 0x183618u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294938224)));
    // 0x18361c: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x18361cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x183620: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183624: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x183624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x183628: 0xa0318e31  sb          $s1, -0x71CF($at)
    ctx->pc = 0x183628u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938161), (uint8_t)GPR_U32(ctx, 17));
    // 0x18362c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x18362cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x183630: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183634: 0x90318e31  lbu         $s1, -0x71CF($at)
    ctx->pc = 0x183634u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)FAST_READ8(0x368E31u));
    // 0x183638: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18363c: 0xa02c8e40  sb          $t4, -0x71C0($at)
    ctx->pc = 0x18363cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x368E40u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368E40u, _value); } while (0);
    // 0x183640: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183644: 0xa0238e41  sb          $v1, -0x71BF($at)
    ctx->pc = 0x183644u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368E41u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368E41u, _value); } while (0);
    // 0x183648: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18364c: 0x22d1824  and         $v1, $s1, $t5
    ctx->pc = 0x18364cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 13));
    // 0x183650: 0xfc228e70  sd          $v0, -0x7190($at)
    ctx->pc = 0x183650u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294938224), GPR_U64(ctx, 2));
    // 0x183654: 0x6e1825  or          $v1, $v1, $t6
    ctx->pc = 0x183654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x183658: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18365c: 0x90228e40  lbu         $v0, -0x71C0($at)
    ctx->pc = 0x18365cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368E40u));
    // 0x183660: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183664: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x183664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x183668: 0xa0238e31  sb          $v1, -0x71CF($at)
    ctx->pc = 0x183668u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938161), (uint8_t)GPR_U32(ctx, 3));
    // 0x18366c: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x18366cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x183670: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183674: 0xa0228e40  sb          $v0, -0x71C0($at)
    ctx->pc = 0x183674u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368E40u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368E40u, _value); } while (0);
    // 0x183678: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18367c: 0x90228e40  lbu         $v0, -0x71C0($at)
    ctx->pc = 0x18367cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368E40u));
    // 0x183680: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x183680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x183684: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183688: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x183688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x18368c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x18368Cu;
    SET_GPR_U32(ctx, 31, 0x183694u);
    ctx->pc = 0x183690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18368Cu;
    // 0x183690: 0xa0228e40  sb          $v0, -0x71C0($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938176), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x18368Cu, 0x183694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183694u;
label_183694:
    // 0x183694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183698: 0xa38286a4  sb          $v0, -0x795C($gp)
    ctx->pc = 0x183698u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936228), (uint8_t)GPR_U32(ctx, 2));
label_18369c:
    // 0x18369c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18369cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1836a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1836a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1836a4: 0x24a58e10  addiu       $a1, $a1, -0x71F0
    ctx->pc = 0x1836a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938128));
    // 0x1836a8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1836A8u;
    SET_GPR_U32(ctx, 31, 0x1836B0u);
    ctx->pc = 0x1836ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1836A8u;
    // 0x1836ac: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1836A8u, 0x1836B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1836B0u;
label_1836b0:
    // 0x1836b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1836b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1836b4: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1836b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1836b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1836b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1836bc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1836bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1836c0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1836c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1836c4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1836c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1836c8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1836c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1836cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1836ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1836d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1836d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1836d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1836d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1836d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1836d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1836dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1836dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1836e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1836e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1836e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1836E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1836E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836E4u;
        // 0x1836e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1836E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1836ECu;
}
