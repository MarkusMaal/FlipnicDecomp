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

// Function: FUN_00226560
// Address: 0x226560 - 0x226b70
void FUN_00226560_0x226560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00226560_0x226560");
#endif

    switch (ctx->pc) {
        case 0x22689cu: goto label_22689c;
        case 0x226b50u: goto label_226b50;
        default: break;
    }

    ctx->pc = 0x226560u;

    // 0x226560: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x226560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x226564: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x226564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x226568: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x226568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22656c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x22656cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x226570: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x226570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x226574: 0x34038006  ori         $v1, $zero, 0x8006
    ctx->pc = 0x226574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
    // 0x226578: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x226578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22657c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22657cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x226580: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x226580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x226584: 0x300d0003  andi        $t5, $zero, 0x3
    ctx->pc = 0x226584u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x226588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x226588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22658c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x22658cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226590: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x226590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x226594: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x226594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x226598: 0xfc208ba8  sd          $zero, -0x7458($at)
    ctx->pc = 0x226598u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368BA8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368BA8u, _value); } while (0);
    // 0x22659c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22659cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2265a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2265a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2265a4: 0x2412fffe  addiu       $s2, $zero, -0x2
    ctx->pc = 0x2265a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2265a8: 0xfc228b78  sd          $v0, -0x7488($at)
    ctx->pc = 0x2265a8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368B78u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368B78u, _value); } while (0);
    // 0x2265ac: 0x240bffcf  addiu       $t3, $zero, -0x31
    ctx->pc = 0x2265acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x2265b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2265b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2265b4: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x2265b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x2265b8: 0xfc238b70  sd          $v1, -0x7490($at)
    ctx->pc = 0x2265b8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368B70u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368B70u, _value); } while (0);
    // 0x2265bc: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x2265bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2265c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2265c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2265c4: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x2265c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x2265c8: 0x90268b80  lbu         $a2, -0x7480($at)
    ctx->pc = 0x2265c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x368B80u));
    // 0x2265cc: 0xd6100  sll         $t4, $t5, 4
    ctx->pc = 0x2265ccu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x2265d0: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x2265d0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2265d4: 0x240ffff1  addiu       $t7, $zero, -0xF
    ctx->pc = 0x2265d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x2265d8: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x2265d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x2265dc: 0x37180  sll         $t6, $v1, 6
    ctx->pc = 0x2265dcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2265e0: 0x2407fff9  addiu       $a3, $zero, -0x7
    ctx->pc = 0x2265e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x2265e4: 0x64080002  daddiu      $t0, $zero, 0x2
    ctx->pc = 0x2265e4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x2265e8: 0x39940  sll         $s3, $v1, 5
    ctx->pc = 0x2265e8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2265ec: 0x3c880  sll         $t9, $v1, 2
    ctx->pc = 0x2265ecu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2265f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2265f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2265f4: 0x90258b81  lbu         $a1, -0x747F($at)
    ctx->pc = 0x2265f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x368B81u));
    // 0x2265f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2265f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2265fc: 0xab2824  and         $a1, $a1, $t3
    ctx->pc = 0x2265fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x226600: 0xfc248bb8  sd          $a0, -0x7448($at)
    ctx->pc = 0x226600u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937528), GPR_U64(ctx, 4));
    // 0x226604: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x226604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x226608: 0xd22024  and         $a0, $a2, $s2
    ctx->pc = 0x226608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x22660c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x22660cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226610: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x226610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x226614: 0x90248b82  lbu         $a0, -0x747E($at)
    ctx->pc = 0x226614u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x368B82u));
    // 0x226618: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x22661c: 0x922024  and         $a0, $a0, $s2
    ctx->pc = 0x22661cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x226620: 0xa0268b80  sb          $a2, -0x7480($at)
    ctx->pc = 0x226620u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937472), (uint8_t)GPR_U32(ctx, 6));
    // 0x226624: 0x894825  or          $t1, $a0, $t1
    ctx->pc = 0x226624u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x226628: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x22662c: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x22662cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x226630: 0x90318b80  lbu         $s1, -0x7480($at)
    ctx->pc = 0x226630u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)FAST_READ8(0x368B80u));
    // 0x226634: 0x2412ffdf  addiu       $s2, $zero, -0x21
    ctx->pc = 0x226634u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x226638: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x22663c: 0x22f7824  and         $t7, $s1, $t7
    ctx->pc = 0x22663cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & GPR_U64(ctx, 15));
    // 0x226640: 0xa0258b81  sb          $a1, -0x747F($at)
    ctx->pc = 0x226640u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937473), (uint8_t)GPR_U32(ctx, 5));
    // 0x226644: 0x1f07825  or          $t7, $t7, $s0
    ctx->pc = 0x226644u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 16));
    // 0x226648: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x22664c: 0x329c0  sll         $a1, $v1, 7
    ctx->pc = 0x22664cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x226650: 0x902a8b81  lbu         $t2, -0x747F($at)
    ctx->pc = 0x226650u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937473)));
    // 0x226654: 0x2410fffb  addiu       $s0, $zero, -0x5
    ctx->pc = 0x226654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x226658: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x22665c: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x22665cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x226660: 0x90268ba0  lbu         $a2, -0x7460($at)
    ctx->pc = 0x226660u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937504)));
    // 0x226664: 0x14e5025  or          $t2, $t2, $t6
    ctx->pc = 0x226664u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 14));
    // 0x226668: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x226668u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22666c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x22666cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226670: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x226670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x226674: 0xa0298b82  sb          $t1, -0x747E($at)
    ctx->pc = 0x226674u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937474), (uint8_t)GPR_U32(ctx, 9));
    // 0x226678: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x226678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x22667c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x22667cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226680: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x226680u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x226684: 0x90298b82  lbu         $t1, -0x747E($at)
    ctx->pc = 0x226684u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937474)));
    // 0x226688: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x22668c: 0xa02f8b80  sb          $t7, -0x7480($at)
    ctx->pc = 0x22668cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x368B80u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368B80u, _value); } while (0);
    // 0x226690: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226694: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x226694u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x226698: 0xa02a8b81  sb          $t2, -0x747F($at)
    ctx->pc = 0x226698u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x368B81u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368B81u, _value); } while (0);
    // 0x22669c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x22669cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2266a0: 0x640a0040  daddiu      $t2, $zero, 0x40
    ctx->pc = 0x2266a0u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x2266a4: 0xa0248ba0  sb          $a0, -0x7460($at)
    ctx->pc = 0x2266a4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937504), (uint8_t)GPR_U32(ctx, 4));
    // 0x2266a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2266a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2266ac: 0x1272024  and         $a0, $t1, $a3
    ctx->pc = 0x2266acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x2266b0: 0x90268ba0  lbu         $a2, -0x7460($at)
    ctx->pc = 0x2266b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937504)));
    // 0x2266b4: 0x884025  or          $t0, $a0, $t0
    ctx->pc = 0x2266b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x2266b8: 0x34900  sll         $t1, $v1, 4
    ctx->pc = 0x2266b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2266bc: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x2266bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2266c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2266c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2266c4: 0xc21824  and         $v1, $a2, $v0
    ctx->pc = 0x2266c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2266c8: 0x90278ba1  lbu         $a3, -0x745F($at)
    ctx->pc = 0x2266c8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937505)));
    // 0x2266cc: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x2266ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x2266d0: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x2266d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2266d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2266d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2266d8: 0xe41024  and         $v0, $a3, $a0
    ctx->pc = 0x2266d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x2266dc: 0xa0288b82  sb          $t0, -0x747E($at)
    ctx->pc = 0x2266dcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937474), (uint8_t)GPR_U32(ctx, 8));
    // 0x2266e0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2266e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2266e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2266e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2266e8: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x2266e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x2266ec: 0xa0238ba0  sb          $v1, -0x7460($at)
    ctx->pc = 0x2266ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368BA0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368BA0u, _value); } while (0);
    // 0x2266f0: 0x64050004  daddiu      $a1, $zero, 0x4
    ctx->pc = 0x2266f0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x2266f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2266f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2266f8: 0x2407fff8  addiu       $a3, $zero, -0x8
    ctx->pc = 0x2266f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x2266fc: 0xa0228ba1  sb          $v0, -0x745F($at)
    ctx->pc = 0x2266fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368BA1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368BA1u, _value); } while (0);
    // 0x226700: 0x64080006  daddiu      $t0, $zero, 0x6
    ctx->pc = 0x226700u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x226704: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226708: 0x24026c00  addiu       $v0, $zero, 0x6C00
    ctx->pc = 0x226708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x22670c: 0x90348ba0  lbu         $s4, -0x7460($at)
    ctx->pc = 0x22670cu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)FAST_READ8(0x368BA0u));
    // 0x226710: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x226710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x226714: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226718: 0x2929024  and         $s2, $s4, $s2
    ctx->pc = 0x226718u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) & GPR_U64(ctx, 18));
    // 0x22671c: 0x90318ba1  lbu         $s1, -0x745F($at)
    ctx->pc = 0x22671cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937505)));
    // 0x226720: 0x2539025  or          $s2, $s2, $s3
    ctx->pc = 0x226720u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 19));
    // 0x226724: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226728: 0x90388b90  lbu         $t8, -0x7470($at)
    ctx->pc = 0x226728u;
    SET_GPR_ZE32(ctx, 24, (uint8_t)FAST_READ8(0x368B90u));
    // 0x22672c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x22672cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226730: 0xa02e8b94  sb          $t6, -0x746C($at)
    ctx->pc = 0x226730u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x368B94u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368B94u, _value); } while (0);
    // 0x226734: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226738: 0x240e7000  addiu       $t6, $zero, 0x7000
    ctx->pc = 0x226738u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x22673c: 0xa4228bc0  sh          $v0, -0x7440($at)
    ctx->pc = 0x22673cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368BC0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368BC0u, _value); } while (0);
    // 0x226740: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226744: 0x2301024  and         $v0, $s1, $s0
    ctx->pc = 0x226744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x226748: 0xa0328ba0  sb          $s2, -0x7460($at)
    ctx->pc = 0x226748u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937504), (uint8_t)GPR_U32(ctx, 18));
    // 0x22674c: 0x598025  or          $s0, $v0, $t9
    ctx->pc = 0x22674cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x226750: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226754: 0x30f1024  and         $v0, $t8, $t7
    ctx->pc = 0x226754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & GPR_U64(ctx, 15));
    // 0x226758: 0xa0308ba1  sb          $s0, -0x745F($at)
    ctx->pc = 0x226758u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937505), (uint8_t)GPR_U32(ctx, 16));
    // 0x22675c: 0x4d6825  or          $t5, $v0, $t5
    ctx->pc = 0x22675cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x226760: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226764: 0x64020010  daddiu      $v0, $zero, 0x10
    ctx->pc = 0x226764u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x226768: 0xa02d8b90  sb          $t5, -0x7470($at)
    ctx->pc = 0x226768u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937488), (uint8_t)GPR_U32(ctx, 13));
    // 0x22676c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22676cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x226770: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226774: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x226774u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226778: 0xa42e8bc2  sh          $t6, -0x743E($at)
    ctx->pc = 0x226778u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x368BC2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368BC2u, _value); } while (0);
    // 0x22677c: 0xd783c  dsll32      $t7, $t5, 0
    ctx->pc = 0x22677cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) << (32 + 0));
    // 0x226780: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226784: 0x340dffff  ori         $t5, $zero, 0xFFFF
    ctx->pc = 0x226784u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x226788: 0x90308ba0  lbu         $s0, -0x7460($at)
    ctx->pc = 0x226788u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x368BA0u));
    // 0x22678c: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x22678cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x226790: 0x35aeffff  ori         $t6, $t5, 0xFFFF
    ctx->pc = 0x226790u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x226794: 0x340d9400  ori         $t5, $zero, 0x9400
    ctx->pc = 0x226794u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
    // 0x226798: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x22679c: 0x90398b90  lbu         $t9, -0x7470($at)
    ctx->pc = 0x22679cu;
    SET_GPR_ZE32(ctx, 25, (uint8_t)FAST_READ8(0x368B90u));
    // 0x2267a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2267a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2267a4: 0x3242024  and         $a0, $t9, $a0
    ctx->pc = 0x2267a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 25) & GPR_U64(ctx, 4));
    // 0x2267a8: 0xdc388bc0  ld          $t8, -0x7440($at)
    ctx->pc = 0x2267a8u;
    SET_GPR_U64(ctx, 24, READ64(ADD32(GPR_U32(ctx, 1), 4294937536)));
    // 0x2267ac: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2267acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2267b0: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x2267b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2267b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2267b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2267b8: 0xa42d8bd0  sh          $t5, -0x7430($at)
    ctx->pc = 0x2267b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x368BD0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368BD0u, _value); } while (0);
    // 0x2267bc: 0x1cf6825  or          $t5, $t6, $t7
    ctx->pc = 0x2267bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x2267c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2267c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2267c4: 0x71ae6b89  pcpyld      $t5, $t5, $t6
    ctx->pc = 0x2267c4u;
    SET_GPR_VEC(ctx, 13, PS2_PCPYLD(GPR_VEC(ctx, 13), GPR_VEC(ctx, 14)));
    // 0x2267c8: 0x2067024  and         $t6, $s0, $a2
    ctx->pc = 0x2267c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) & GPR_U64(ctx, 6));
    // 0x2267cc: 0x1c94825  or          $t1, $t6, $t1
    ctx->pc = 0x2267ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) | GPR_U64(ctx, 9));
    // 0x2267d0: 0x34069000  ori         $a2, $zero, 0x9000
    ctx->pc = 0x2267d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x2267d4: 0xa0298ba0  sb          $t1, -0x7460($at)
    ctx->pc = 0x2267d4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937504), (uint8_t)GPR_U32(ctx, 9));
    // 0x2267d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2267d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2267dc: 0xa0248b90  sb          $a0, -0x7470($at)
    ctx->pc = 0x2267dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368B90u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368B90u, _value); } while (0);
    // 0x2267e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2267e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2267e4: 0x30d2024  and         $a0, $t8, $t5
    ctx->pc = 0x2267e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & GPR_U64(ctx, 13));
    // 0x2267e8: 0xa4268bd2  sh          $a2, -0x742E($at)
    ctx->pc = 0x2267e8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937554), (uint16_t)GPR_U32(ctx, 6));
    // 0x2267ec: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2267ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2267f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2267f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2267f4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2267f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2267f8: 0xfc248bc0  sd          $a0, -0x7440($at)
    ctx->pc = 0x2267f8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368BC0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368BC0u, _value); } while (0);
    // 0x2267fc: 0x24c68b60  addiu       $a2, $a2, -0x74A0
    ctx->pc = 0x2267fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937440));
    // 0x226800: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x226800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x226804: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226808: 0xfc248b88  sd          $a0, -0x7478($at)
    ctx->pc = 0x226808u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368B88u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368B88u, _value); } while (0);
    // 0x22680c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x22680cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x226810: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226814: 0xfc248bc8  sd          $a0, -0x7438($at)
    ctx->pc = 0x226814u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368BC8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368BC8u, _value); } while (0);
    // 0x226818: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x22681c: 0xfc248bd8  sd          $a0, -0x7428($at)
    ctx->pc = 0x22681cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368BD8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368BD8u, _value); } while (0);
    // 0x226820: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226824: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226828: 0xfc258b98  sd          $a1, -0x7468($at)
    ctx->pc = 0x226828u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368B98u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368B98u, _value); } while (0);
    // 0x22682c: 0x24848b70  addiu       $a0, $a0, -0x7490
    ctx->pc = 0x22682cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937456));
    // 0x226830: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226834: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x226834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x226838: 0x902f8ba0  lbu         $t7, -0x7460($at)
    ctx->pc = 0x226838u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)FAST_READ8(0x368BA0u));
    // 0x22683c: 0x24a55f80  addiu       $a1, $a1, 0x5F80
    ctx->pc = 0x22683cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24448));
    // 0x226840: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226844: 0x1e73824  and         $a3, $t7, $a3
    ctx->pc = 0x226844u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) & GPR_U64(ctx, 7));
    // 0x226848: 0x902e8b90  lbu         $t6, -0x7470($at)
    ctx->pc = 0x226848u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937488)));
    // 0x22684c: 0xe87825  or          $t7, $a3, $t0
    ctx->pc = 0x22684cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x226850: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226854: 0x1cb3824  and         $a3, $t6, $t3
    ctx->pc = 0x226854u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 14) & GPR_U64(ctx, 11));
    // 0x226858: 0xdc298bd0  ld          $t1, -0x7430($at)
    ctx->pc = 0x226858u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 1), 4294937552)));
    // 0x22685c: 0xec4025  or          $t0, $a3, $t4
    ctx->pc = 0x22685cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 12));
    // 0x226860: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226864: 0x12d3824  and         $a3, $t1, $t5
    ctx->pc = 0x226864u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 13));
    // 0x226868: 0xa02f8ba0  sb          $t7, -0x7460($at)
    ctx->pc = 0x226868u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937504), (uint8_t)GPR_U32(ctx, 15));
    // 0x22686c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x22686cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x226870: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226874: 0xa0288b90  sb          $t0, -0x7470($at)
    ctx->pc = 0x226874u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x368B90u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368B90u, _value); } while (0);
    // 0x226878: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x22687c: 0xfc228bd0  sd          $v0, -0x7430($at)
    ctx->pc = 0x22687cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368BD0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368BD0u, _value); } while (0);
    // 0x226880: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226884: 0x90228b90  lbu         $v0, -0x7470($at)
    ctx->pc = 0x226884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368B90u));
    // 0x226888: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x226888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22688c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x22688cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226890: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x226890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x226894: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226894u;
    SET_GPR_U32(ctx, 31, 0x22689Cu);
    ctx->pc = 0x226898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226894u;
    // 0x226898: 0xa0228b90  sb          $v0, -0x7470($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937488), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226894u, 0x22689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22689Cu;
label_22689c:
    // 0x22689c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22689cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2268a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2268a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2268a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2268a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2268a8: 0xfc208c18  sd          $zero, -0x73E8($at)
    ctx->pc = 0x2268a8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937624), GPR_U64(ctx, 0));
    // 0x2268ac: 0x34028006  ori         $v0, $zero, 0x8006
    ctx->pc = 0x2268acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
    // 0x2268b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2268b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2268b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2268b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2268b8: 0x2418fffe  addiu       $t8, $zero, -0x2
    ctx->pc = 0x2268b8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2268bc: 0xfc228bf0  sd          $v0, -0x7410($at)
    ctx->pc = 0x2268bcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368BF0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368BF0u, _value); } while (0);
    // 0x2268c0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2268c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2268c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2268c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2268c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2268c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2268cc: 0xfc238bf8  sd          $v1, -0x7408($at)
    ctx->pc = 0x2268ccu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368BF8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368BF8u, _value); } while (0);
    // 0x2268d0: 0x64190001  daddiu      $t9, $zero, 0x1
    ctx->pc = 0x2268d0u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2268d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2268d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2268d8: 0x2404ffcf  addiu       $a0, $zero, -0x31
    ctx->pc = 0x2268d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x2268dc: 0xfc228c28  sd          $v0, -0x73D8($at)
    ctx->pc = 0x2268dcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368C28u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368C28u, _value); } while (0);
    // 0x2268e0: 0x64060020  daddiu      $a2, $zero, 0x20
    ctx->pc = 0x2268e0u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
    // 0x2268e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2268e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2268e8: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x2268e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x2268ec: 0x90258c00  lbu         $a1, -0x7400($at)
    ctx->pc = 0x2268ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x368C00u));
    // 0x2268f0: 0x27040  sll         $t6, $v0, 1
    ctx->pc = 0x2268f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2268f4: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x2268f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x2268f8: 0x240dfff1  addiu       $t5, $zero, -0xF
    ctx->pc = 0x2268f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x2268fc: 0x240affbf  addiu       $t2, $zero, -0x41
    ctx->pc = 0x2268fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x226900: 0x25980  sll         $t3, $v0, 6
    ctx->pc = 0x226900u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x226904: 0x2407fff9  addiu       $a3, $zero, -0x7
    ctx->pc = 0x226904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x226908: 0x64080002  daddiu      $t0, $zero, 0x2
    ctx->pc = 0x226908u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x22690c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x22690cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226910: 0xb82824  and         $a1, $a1, $t8
    ctx->pc = 0x226910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 24));
    // 0x226914: 0x90298c01  lbu         $t1, -0x73FF($at)
    ctx->pc = 0x226914u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937601)));
    // 0x226918: 0xb96025  or          $t4, $a1, $t9
    ctx->pc = 0x226918u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) | GPR_U64(ctx, 25));
    // 0x22691c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x22691cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226920: 0x1242024  and         $a0, $t1, $a0
    ctx->pc = 0x226920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x226924: 0x90238c02  lbu         $v1, -0x73FE($at)
    ctx->pc = 0x226924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937602)));
    // 0x226928: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x226928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x22692c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x22692cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226930: 0x781824  and         $v1, $v1, $t8
    ctx->pc = 0x226930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 24));
    // 0x226934: 0x90258c10  lbu         $a1, -0x73F0($at)
    ctx->pc = 0x226934u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937616)));
    // 0x226938: 0x793025  or          $a2, $v1, $t9
    ctx->pc = 0x226938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 25));
    // 0x22693c: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x22693cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x226940: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226944: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x226944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x226948: 0xa02c8c00  sb          $t4, -0x7400($at)
    ctx->pc = 0x226948u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937600), (uint8_t)GPR_U32(ctx, 12));
    // 0x22694c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x22694cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226950: 0x902f8c00  lbu         $t7, -0x7400($at)
    ctx->pc = 0x226950u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)FAST_READ8(0x368C00u));
    // 0x226954: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226958: 0xa0248c01  sb          $a0, -0x73FF($at)
    ctx->pc = 0x226958u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368C01u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368C01u, _value); } while (0);
    // 0x22695c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x22695cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226960: 0x221c0  sll         $a0, $v0, 7
    ctx->pc = 0x226960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x226964: 0x902c8c01  lbu         $t4, -0x73FF($at)
    ctx->pc = 0x226964u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937601)));
    // 0x226968: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x226968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22696c: 0x1ed2024  and         $a0, $t7, $t5
    ctx->pc = 0x22696cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x226970: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226974: 0xa0268c02  sb          $a2, -0x73FE($at)
    ctx->pc = 0x226974u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x368C02u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368C02u, _value); } while (0);
    // 0x226978: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x22697c: 0x90298c02  lbu         $t1, -0x73FE($at)
    ctx->pc = 0x22697cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)FAST_READ8(0x368C02u));
    // 0x226980: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226984: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x226984u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x226988: 0xa0238c10  sb          $v1, -0x73F0($at)
    ctx->pc = 0x226988u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937616), (uint8_t)GPR_U32(ctx, 3));
    // 0x22698c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x22698cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x226990: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226994: 0x8e1825  or          $v1, $a0, $t6
    ctx->pc = 0x226994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 14));
    // 0x226998: 0x90268c10  lbu         $a2, -0x73F0($at)
    ctx->pc = 0x226998u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x368C10u));
    // 0x22699c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x22699cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2269a0: 0x2409fff8  addiu       $t1, $zero, -0x8
    ctx->pc = 0x2269a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x2269a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2269a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2269a8: 0xca3024  and         $a2, $a2, $t2
    ctx->pc = 0x2269a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x2269ac: 0xa0238c00  sb          $v1, -0x7400($at)
    ctx->pc = 0x2269acu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937600), (uint8_t)GPR_U32(ctx, 3));
    // 0x2269b0: 0xcb3025  or          $a2, $a2, $t3
    ctx->pc = 0x2269b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
    // 0x2269b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2269b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2269b8: 0x18a1824  and         $v1, $t4, $t2
    ctx->pc = 0x2269b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x2269bc: 0x90258c11  lbu         $a1, -0x73EF($at)
    ctx->pc = 0x2269bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937617)));
    // 0x2269c0: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x2269c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x2269c4: 0x240bffdf  addiu       $t3, $zero, -0x21
    ctx->pc = 0x2269c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x2269c8: 0x26140  sll         $t4, $v0, 5
    ctx->pc = 0x2269c8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2269cc: 0x640a0006  daddiu      $t2, $zero, 0x6
    ctx->pc = 0x2269ccu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x2269d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2269d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2269d4: 0xa0238c01  sb          $v1, -0x73FF($at)
    ctx->pc = 0x2269d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368C01u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368C01u, _value); } while (0);
    // 0x2269d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2269d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2269dc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2269dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2269e0: 0xa0278c02  sb          $a3, -0x73FE($at)
    ctx->pc = 0x2269e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x368C02u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368C02u, _value); } while (0);
    // 0x2269e4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2269e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2269e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2269e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2269ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2269ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2269f0: 0xa0268c10  sb          $a2, -0x73F0($at)
    ctx->pc = 0x2269f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x368C10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368C10u, _value); } while (0);
    // 0x2269f4: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x2269f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2269f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x2269f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x2269fc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2269fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x226a00: 0x902d8c10  lbu         $t5, -0x73F0($at)
    ctx->pc = 0x226a00u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)FAST_READ8(0x368C10u));
    // 0x226a04: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x226a04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x226a08: 0x24057000  addiu       $a1, $zero, 0x7000
    ctx->pc = 0x226a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x226a0c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226a10: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x226a10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x226a14: 0xa0238c11  sb          $v1, -0x73EF($at)
    ctx->pc = 0x226a14u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937617), (uint8_t)GPR_U32(ctx, 3));
    // 0x226a18: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x226a18u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x226a1c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226a20: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x226a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x226a24: 0x90288c11  lbu         $t0, -0x73EF($at)
    ctx->pc = 0x226a24u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937617)));
    // 0x226a28: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x226a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x226a2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226a30: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x226a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x226a34: 0xa0268c20  sb          $a2, -0x73E0($at)
    ctx->pc = 0x226a34u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937632), (uint8_t)GPR_U32(ctx, 6));
    // 0x226a38: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x226a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x226a3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226a40: 0xa0268c21  sb          $a2, -0x73DF($at)
    ctx->pc = 0x226a40u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x368C21u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368C21u, _value); } while (0);
    // 0x226a44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226a48: 0xa02b8c10  sb          $t3, -0x73F0($at)
    ctx->pc = 0x226a48u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x368C10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368C10u, _value); } while (0);
    // 0x226a4c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226a50: 0xa0268c22  sb          $a2, -0x73DE($at)
    ctx->pc = 0x226a50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x368C22u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368C22u, _value); } while (0);
    // 0x226a54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226a58: 0xa0248c11  sb          $a0, -0x73EF($at)
    ctx->pc = 0x226a58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368C11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368C11u, _value); } while (0);
    // 0x226a5c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226a60: 0x64040010  daddiu      $a0, $zero, 0x10
    ctx->pc = 0x226a60u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x226a64: 0xa0268c23  sb          $a2, -0x73DD($at)
    ctx->pc = 0x226a64u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937635), (uint8_t)GPR_U32(ctx, 6));
    // 0x226a68: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x226a68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
    // 0x226a6c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226a70: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x226a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226a74: 0xa4258c30  sh          $a1, -0x73D0($at)
    ctx->pc = 0x226a74u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368C30u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368C30u, _value); } while (0);
    // 0x226a78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226a7c: 0xa4258c32  sh          $a1, -0x73CE($at)
    ctx->pc = 0x226a7cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368C32u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368C32u, _value); } while (0);
    // 0x226a80: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226a84: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x226a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x226a88: 0x902b8c10  lbu         $t3, -0x73F0($at)
    ctx->pc = 0x226a88u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937616)));
    // 0x226a8c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x226a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x226a90: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x226a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x226a94: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x226a94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x226a98: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x226a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x226a9c: 0x34049000  ori         $a0, $zero, 0x9000
    ctx->pc = 0x226a9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x226aa0: 0x70a63389  pcpyld      $a2, $a1, $a2
    ctx->pc = 0x226aa0u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x226aa4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226aa8: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x226aa8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x226aac: 0xdc288c30  ld          $t0, -0x73D0($at)
    ctx->pc = 0x226aacu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 1), 4294937648)));
    // 0x226ab0: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x226ab0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x226ab4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226ab8: 0xa4248c40  sh          $a0, -0x73C0($at)
    ctx->pc = 0x226ab8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368C40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368C40u, _value); } while (0);
    // 0x226abc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226ac0: 0xa4248c42  sh          $a0, -0x73BE($at)
    ctx->pc = 0x226ac0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368C42u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368C42u, _value); } while (0);
    // 0x226ac4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226ac8: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x226ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x226acc: 0xdc258c40  ld          $a1, -0x73C0($at)
    ctx->pc = 0x226accu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x368C40u));
    // 0x226ad0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226ad4: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x226ad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x226ad8: 0xfc248c08  sd          $a0, -0x73F8($at)
    ctx->pc = 0x226ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937608), GPR_U64(ctx, 4));
    // 0x226adc: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x226adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x226ae0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226ae4: 0xfc248c58  sd          $a0, -0x73A8($at)
    ctx->pc = 0x226ae4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368C58u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368C58u, _value); } while (0);
    // 0x226ae8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226aec: 0x1062024  and         $a0, $t0, $a2
    ctx->pc = 0x226aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x226af0: 0xa0298c10  sb          $t1, -0x73F0($at)
    ctx->pc = 0x226af0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937616), (uint8_t)GPR_U32(ctx, 9));
    // 0x226af4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x226af4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x226af8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226afc: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x226afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x226b00: 0x90288c10  lbu         $t0, -0x73F0($at)
    ctx->pc = 0x226b00u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x368C10u));
    // 0x226b04: 0x24c68be0  addiu       $a2, $a2, -0x7420
    ctx->pc = 0x226b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937568));
    // 0x226b08: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226b0c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x226b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x226b10: 0xfc248c30  sd          $a0, -0x73D0($at)
    ctx->pc = 0x226b10u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937648), GPR_U64(ctx, 4));
    // 0x226b14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x226b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x226b18: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x226b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x226b1c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226b20: 0xfc248c38  sd          $a0, -0x73C8($at)
    ctx->pc = 0x226b20u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368C38u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368C38u, _value); } while (0);
    // 0x226b24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226b28: 0xfc248c48  sd          $a0, -0x73B8($at)
    ctx->pc = 0x226b28u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368C48u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368C48u, _value); } while (0);
    // 0x226b2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226b30: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226b34: 0xfc258c40  sd          $a1, -0x73C0($at)
    ctx->pc = 0x226b34u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368C40u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368C40u, _value); } while (0);
    // 0x226b38: 0x24848bf0  addiu       $a0, $a0, -0x7410
    ctx->pc = 0x226b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937584));
    // 0x226b3c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x226b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x226b40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226b44: 0x24a55f30  addiu       $a1, $a1, 0x5F30
    ctx->pc = 0x226b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24368));
    // 0x226b48: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226B48u;
    SET_GPR_U32(ctx, 31, 0x226B50u);
    ctx->pc = 0x226B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B48u;
    // 0x226b4c: 0xa0228c10  sb          $v0, -0x73F0($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937616), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226B48u, 0x226B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B50u;
label_226b50:
    // 0x226b50: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x226b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226b54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x226b54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226b58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x226b58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226b5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x226b5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226b60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x226b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226b64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x226b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226b68: 0x3e00008  jr          $ra
    ctx->pc = 0x226B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B68u;
        // 0x226b6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226B70u;
}
