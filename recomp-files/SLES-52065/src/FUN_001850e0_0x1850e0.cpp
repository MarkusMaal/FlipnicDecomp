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

// Function: FUN_001850e0
// Address: 0x1850e0 - 0x185870
void FUN_001850e0_0x1850e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001850e0_0x1850e0");
#endif

    switch (ctx->pc) {
        case 0x185688u: goto label_185688;
        case 0x185830u: goto label_185830;
        default: break;
    }

    ctx->pc = 0x1850e0u;

    // 0x1850e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1850e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1850e4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1850e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1850e8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1850e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1850ec: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1850ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1850f0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1850f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1850f4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1850f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1850f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1850f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1850fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1850fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x185100: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x185100u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185104: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x185104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x185108: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x185108u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18510c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x185110: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x185110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185114: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x185114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x185118: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x185118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18511c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18511cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x185120: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x185120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185124: 0x838286c4  lb          $v0, -0x793C($gp)
    ctx->pc = 0x185124u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936260)));
    // 0x185128: 0x14400159  bnez        $v0, . + 4 + (0x159 << 2)
    ctx->pc = 0x185128u;
    {
        const bool branch_taken_0x185128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185128u;
        // 0x18512c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185128) {
            ctx->pc = 0x185690u;
            goto label_185690;
        }
    }
    ctx->pc = 0x185130u;
    // 0x185130: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185134: 0x30080001  andi        $t0, $zero, 0x1
    ctx->pc = 0x185134u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x185138: 0xfc2091a8  sd          $zero, -0x6E58($at)
    ctx->pc = 0x185138u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3691A8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3691A8u, _value); } while (0);
    // 0x18513c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x18513cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x185140: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185144: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x185144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x185148: 0xfc229188  sd          $v0, -0x6E78($at)
    ctx->pc = 0x185148u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369188u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369188u, _value); } while (0);
    // 0x18514c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x18514cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x185150: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x185150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x185154: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185158: 0xfc229198  sd          $v0, -0x6E68($at)
    ctx->pc = 0x185158u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369198u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369198u, _value); } while (0);
    // 0x18515c: 0x240bfffe  addiu       $t3, $zero, -0x2
    ctx->pc = 0x18515cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x185160: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x185160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x185164: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185168: 0xfc2291b8  sd          $v0, -0x6E48($at)
    ctx->pc = 0x185168u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3691B8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3691B8u, _value); } while (0);
    // 0x18516c: 0x640c0001  daddiu      $t4, $zero, 0x1
    ctx->pc = 0x18516cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x185170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185174: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185178: 0xfc2291c8  sd          $v0, -0x6E38($at)
    ctx->pc = 0x185178u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3691C8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3691C8u, _value); } while (0);
    // 0x18517c: 0x2415ffe7  addiu       $s5, $zero, -0x19
    ctx->pc = 0x18517cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x185180: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x185180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x185184: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185188: 0xfc2291d8  sd          $v0, -0x6E28($at)
    ctx->pc = 0x185188u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3691D8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3691D8u, _value); } while (0);
    // 0x18518c: 0x241ef000  addiu       $fp, $zero, -0x1000
    ctx->pc = 0x18518cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x185190: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185194: 0x30190fff  andi        $t9, $zero, 0xFFF
    ctx->pc = 0x185194u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)4095);
    // 0x185198: 0xfc2291f8  sd          $v0, -0x6E08($at)
    ctx->pc = 0x185198u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3691F8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3691F8u, _value); } while (0);
    // 0x18519c: 0x240affdf  addiu       $t2, $zero, -0x21
    ctx->pc = 0x18519cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1851a0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1851a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1851a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1851a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1851a8: 0xa0229163  sb          $v0, -0x6E9D($at)
    ctx->pc = 0x1851a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369163u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369163u, _value); } while (0);
    // 0x1851ac: 0x640e0020  daddiu      $t6, $zero, 0x20
    ctx->pc = 0x1851acu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
    // 0x1851b0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1851b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1851b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1851b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1851b8: 0xa4229160  sh          $v0, -0x6EA0($at)
    ctx->pc = 0x1851b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369160u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369160u, _value); } while (0);
    // 0x1851bc: 0x64090040  daddiu      $t1, $zero, 0x40
    ctx->pc = 0x1851bcu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x1851c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1851c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1851c4: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1851c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1851c8: 0xfc2391e8  sd          $v1, -0x6E18($at)
    ctx->pc = 0x1851c8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3691E8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3691E8u, _value); } while (0);
    // 0x1851cc: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x1851ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x1851d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1851d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1851d4: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x1851d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1851d8: 0xfc239208  sd          $v1, -0x6DF8($at)
    ctx->pc = 0x1851d8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x369208u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369208u, _value); } while (0);
    // 0x1851dc: 0x83040  sll         $a2, $t0, 1
    ctx->pc = 0x1851dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1851e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1851e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1851e4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1851e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1851e8: 0xac22916c  sw          $v0, -0x6E94($at)
    ctx->pc = 0x1851e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938988), GPR_U32(ctx, 2));
    // 0x1851ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1851ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1851f0: 0x34028009  ori         $v0, $zero, 0x8009
    ctx->pc = 0x1851f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x1851f4: 0xac249168  sw          $a0, -0x6E98($at)
    ctx->pc = 0x1851f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x369168u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x369168u, _value); } while (0);
    // 0x1851f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1851f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1851fc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1851fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185200: 0xa0209162  sb          $zero, -0x6E9E($at)
    ctx->pc = 0x185200u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x369162u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369162u, _value); } while (0);
    // 0x185204: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185208: 0xfc229170  sd          $v0, -0x6E90($at)
    ctx->pc = 0x185208u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369170u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369170u, _value); } while (0);
    // 0x18520c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x18520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x185210: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185214: 0xfc229178  sd          $v0, -0x6E88($at)
    ctx->pc = 0x185214u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369178u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369178u, _value); } while (0);
    // 0x185218: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18521c: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x18521cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x185220: 0xac209164  sw          $zero, -0x6E9C($at)
    ctx->pc = 0x185220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x369164u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x369164u, _value); } while (0);
    // 0x185224: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x185224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x185228: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18522c: 0x2b040  sll         $s6, $v0, 1
    ctx->pc = 0x18522cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x185230: 0x90249180  lbu         $a0, -0x6E80($at)
    ctx->pc = 0x185230u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294939008)));
    // 0x185234: 0x2402ffe3  addiu       $v0, $zero, -0x1D
    ctx->pc = 0x185234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x185238: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18523c: 0x8b2024  and         $a0, $a0, $t3
    ctx->pc = 0x18523cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x185240: 0x90389182  lbu         $t8, -0x6E7E($at)
    ctx->pc = 0x185240u;
    SET_GPR_ZE32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294939010)));
    // 0x185244: 0x8c3825  or          $a3, $a0, $t4
    ctx->pc = 0x185244u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
    // 0x185248: 0x30040003  andi        $a0, $zero, 0x3
    ctx->pc = 0x185248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x18524c: 0x4b8c0  sll         $s7, $a0, 3
    ctx->pc = 0x18524cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x185250: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185254: 0x315a824  and         $s5, $t8, $s5
    ctx->pc = 0x185254u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 24) & GPR_U64(ctx, 21));
    // 0x185258: 0xa0279180  sb          $a3, -0x6E80($at)
    ctx->pc = 0x185258u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939008), (uint8_t)GPR_U32(ctx, 7));
    // 0x18525c: 0x2b7a825  or          $s5, $s5, $s7
    ctx->pc = 0x18525cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 23));
    // 0x185260: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185264: 0x301700ff  andi        $s7, $zero, 0xFF
    ctx->pc = 0x185264u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x185268: 0x90279180  lbu         $a3, -0x6E80($at)
    ctx->pc = 0x185268u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x369180u));
    // 0x18526c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18526cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185270: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x185270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x185274: 0x942f9184  lhu         $t7, -0x6E7C($at)
    ctx->pc = 0x185274u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939012)));
    // 0x185278: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x185278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18527c: 0x43900  sll         $a3, $a0, 4
    ctx->pc = 0x18527cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x185280: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185284: 0x1fe1024  and         $v0, $t7, $fp
    ctx->pc = 0x185284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & GPR_U64(ctx, 30));
    // 0x185288: 0x902d9190  lbu         $t5, -0x6E70($at)
    ctx->pc = 0x185288u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294939024)));
    // 0x18528c: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x18528cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x185290: 0x241eff7f  addiu       $fp, $zero, -0x81
    ctx->pc = 0x185290u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x185294: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185298: 0xa0359182  sb          $s5, -0x6E7E($at)
    ctx->pc = 0x185298u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x369182u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369182u, _value); } while (0);
    // 0x18529c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18529cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1852a0: 0x17a900  sll         $s5, $s7, 4
    ctx->pc = 0x1852a0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1852a4: 0xa0239180  sb          $v1, -0x6E80($at)
    ctx->pc = 0x1852a4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939008), (uint8_t)GPR_U32(ctx, 3));
    // 0x1852a8: 0x2417ffbf  addiu       $s7, $zero, -0x41
    ctx->pc = 0x1852a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1852ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1852acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1852b0: 0x81980  sll         $v1, $t0, 6
    ctx->pc = 0x1852b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x1852b4: 0xa4229184  sh          $v0, -0x6E7C($at)
    ctx->pc = 0x1852b4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939012), (uint16_t)GPR_U32(ctx, 2));
    // 0x1852b8: 0x1ab1024  and         $v0, $t5, $t3
    ctx->pc = 0x1852b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x1852bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1852bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1852c0: 0x902d9180  lbu         $t5, -0x6E80($at)
    ctx->pc = 0x1852c0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)FAST_READ8(0x369180u));
    // 0x1852c4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1852c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1852c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1852c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1852cc: 0x1aa6824  and         $t5, $t5, $t2
    ctx->pc = 0x1852ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 10));
    // 0x1852d0: 0xa0229190  sb          $v0, -0x6E70($at)
    ctx->pc = 0x1852d0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939024), (uint8_t)GPR_U32(ctx, 2));
    // 0x1852d4: 0x1aec825  or          $t9, $t5, $t6
    ctx->pc = 0x1852d4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x1852d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1852d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1852dc: 0x240dfff1  addiu       $t5, $zero, -0xF
    ctx->pc = 0x1852dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x1852e0: 0x90389190  lbu         $t8, -0x6E70($at)
    ctx->pc = 0x1852e0u;
    SET_GPR_ZE32(ctx, 24, (uint8_t)FAST_READ8(0x369190u));
    // 0x1852e4: 0x811c0  sll         $v0, $t0, 7
    ctx->pc = 0x1852e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
    // 0x1852e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1852e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1852ec: 0x30d6824  and         $t5, $t8, $t5
    ctx->pc = 0x1852ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & GPR_U64(ctx, 13));
    // 0x1852f0: 0x902f9192  lbu         $t7, -0x6E6E($at)
    ctx->pc = 0x1852f0u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294939026)));
    // 0x1852f4: 0x1b6b025  or          $s6, $t5, $s6
    ctx->pc = 0x1852f4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 13) | GPR_U64(ctx, 22));
    // 0x1852f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1852f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1852fc: 0x902e91a0  lbu         $t6, -0x6E60($at)
    ctx->pc = 0x1852fcu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)FAST_READ8(0x3691A0u));
    // 0x185300: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185304: 0xa0399180  sb          $t9, -0x6E80($at)
    ctx->pc = 0x185304u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 25)); ps2TraceGuestWrite(rdram, 0x369180u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369180u, _value); } while (0);
    // 0x185308: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18530c: 0x64190006  daddiu      $t9, $zero, 0x6
    ctx->pc = 0x18530cu;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x185310: 0x942d9180  lhu         $t5, -0x6E80($at)
    ctx->pc = 0x185310u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939008)));
    // 0x185314: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185318: 0xa0369190  sb          $s6, -0x6E70($at)
    ctx->pc = 0x185318u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x369190u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369190u, _value); } while (0);
    // 0x18531c: 0x1ebb024  and         $s6, $t7, $t3
    ctx->pc = 0x18531cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 15) & GPR_U64(ctx, 11));
    // 0x185320: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185324: 0x942f9190  lhu         $t7, -0x6E70($at)
    ctx->pc = 0x185324u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)FAST_READ16(0x369190u));
    // 0x185328: 0x2ccc025  or          $t8, $s6, $t4
    ctx->pc = 0x185328u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 22) | GPR_U64(ctx, 12));
    // 0x18532c: 0x2416fff8  addiu       $s6, $zero, -0x8
    ctx->pc = 0x18532cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x185330: 0x1d67024  and         $t6, $t6, $s6
    ctx->pc = 0x185330u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 22));
    // 0x185334: 0x2416fe3f  addiu       $s6, $zero, -0x1C1
    ctx->pc = 0x185334u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x185338: 0x1b66824  and         $t5, $t5, $s6
    ctx->pc = 0x185338u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 22));
    // 0x18533c: 0x2416f00f  addiu       $s6, $zero, -0xFF1
    ctx->pc = 0x18533cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x185340: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185344: 0x1f67824  and         $t7, $t7, $s6
    ctx->pc = 0x185344u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 22));
    // 0x185348: 0xa0389192  sb          $t8, -0x6E6E($at)
    ctx->pc = 0x185348u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939026), (uint8_t)GPR_U32(ctx, 24));
    // 0x18534c: 0x1f5a825  or          $s5, $t7, $s5
    ctx->pc = 0x18534cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 15) | GPR_U64(ctx, 21));
    // 0x185350: 0x1d9c025  or          $t8, $t6, $t9
    ctx->pc = 0x185350u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 14) | GPR_U64(ctx, 25));
    // 0x185354: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185358: 0x902e9192  lbu         $t6, -0x6E6E($at)
    ctx->pc = 0x185358u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)FAST_READ8(0x369192u));
    // 0x18535c: 0x8b0c0  sll         $s6, $t0, 3
    ctx->pc = 0x18535cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x185360: 0x2419ffef  addiu       $t9, $zero, -0x11
    ctx->pc = 0x185360u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x185364: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185368: 0xa03891a0  sb          $t8, -0x6E60($at)
    ctx->pc = 0x185368u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 24)); ps2TraceGuestWrite(rdram, 0x3691A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3691A0u, _value); } while (0);
    // 0x18536c: 0x1a9c025  or          $t8, $t5, $t1
    ctx->pc = 0x18536cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 13) | GPR_U64(ctx, 9));
    // 0x185370: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185374: 0x902d91a0  lbu         $t5, -0x6E60($at)
    ctx->pc = 0x185374u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)FAST_READ8(0x3691A0u));
    // 0x185378: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18537c: 0xa4389180  sh          $t8, -0x6E80($at)
    ctx->pc = 0x18537cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 24)); ps2TraceGuestWrite(rdram, 0x369180u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369180u, _value); } while (0);
    // 0x185380: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185384: 0x902f9181  lbu         $t7, -0x6E7F($at)
    ctx->pc = 0x185384u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)FAST_READ8(0x369181u));
    // 0x185388: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18538c: 0xa4359190  sh          $s5, -0x6E70($at)
    ctx->pc = 0x18538cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x369190u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369190u, _value); } while (0);
    // 0x185390: 0x2415fff9  addiu       $s5, $zero, -0x7
    ctx->pc = 0x185390u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x185394: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185398: 0x1d5c024  and         $t8, $t6, $s5
    ctx->pc = 0x185398u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 14) & GPR_U64(ctx, 21));
    // 0x18539c: 0x902e9191  lbu         $t6, -0x6E6F($at)
    ctx->pc = 0x18539cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294939025)));
    // 0x1853a0: 0x64150002  daddiu      $s5, $zero, 0x2
    ctx->pc = 0x1853a0u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x1853a4: 0x315a825  or          $s5, $t8, $s5
    ctx->pc = 0x1853a4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 24) | GPR_U64(ctx, 21));
    // 0x1853a8: 0x2418fff7  addiu       $t8, $zero, -0x9
    ctx->pc = 0x1853a8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1853ac: 0x1b86824  and         $t5, $t5, $t8
    ctx->pc = 0x1853acu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 24));
    // 0x1853b0: 0x1b66825  or          $t5, $t5, $s6
    ctx->pc = 0x1853b0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 22));
    // 0x1853b4: 0x8c140  sll         $t8, $t0, 5
    ctx->pc = 0x1853b4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x1853b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1853b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1853bc: 0xa0359192  sb          $s5, -0x6E6E($at)
    ctx->pc = 0x1853bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x369192u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369192u, _value); } while (0);
    // 0x1853c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1853c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1853c4: 0x64150010  daddiu      $s5, $zero, 0x10
    ctx->pc = 0x1853c4u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1853c8: 0xa02d91a0  sb          $t5, -0x6E60($at)
    ctx->pc = 0x1853c8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939040), (uint8_t)GPR_U32(ctx, 13));
    // 0x1853cc: 0x1e56824  and         $t5, $t7, $a1
    ctx->pc = 0x1853ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & GPR_U64(ctx, 5));
    // 0x1853d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1853d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1853d4: 0x1a67825  or          $t7, $t5, $a2
    ctx->pc = 0x1853d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | GPR_U64(ctx, 6));
    // 0x1853d8: 0x902d91a0  lbu         $t5, -0x6E60($at)
    ctx->pc = 0x1853d8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)FAST_READ8(0x3691A0u));
    // 0x1853dc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1853dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1853e0: 0xa02f9181  sb          $t7, -0x6E7F($at)
    ctx->pc = 0x1853e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x369181u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369181u, _value); } while (0);
    // 0x1853e4: 0x240fffcf  addiu       $t7, $zero, -0x31
    ctx->pc = 0x1853e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1853e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1853e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1853ec: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x1853ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x1853f0: 0x1c77025  or          $t6, $t6, $a3
    ctx->pc = 0x1853f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 7));
    // 0x1853f4: 0xa02e9191  sb          $t6, -0x6E6F($at)
    ctx->pc = 0x1853f4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939025), (uint8_t)GPR_U32(ctx, 14));
    // 0x1853f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1853f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1853fc: 0x87080  sll         $t6, $t0, 2
    ctx->pc = 0x1853fcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x185400: 0x90369191  lbu         $s6, -0x6E6F($at)
    ctx->pc = 0x185400u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294939025)));
    // 0x185404: 0x1b94024  and         $t0, $t5, $t9
    ctx->pc = 0x185404u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) & GPR_U64(ctx, 25));
    // 0x185408: 0x115c825  or          $t9, $t0, $s5
    ctx->pc = 0x185408u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 8) | GPR_U64(ctx, 21));
    // 0x18540c: 0x15403c  dsll32      $t0, $s5, 0
    ctx->pc = 0x18540cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) << (32 + 0));
    // 0x185410: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185414: 0x2d7b024  and         $s6, $s6, $s7
    ctx->pc = 0x185414u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 23));
    // 0x185418: 0x902f91a1  lbu         $t7, -0x6E5F($at)
    ctx->pc = 0x185418u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294939041)));
    // 0x18541c: 0x2c31825  or          $v1, $s6, $v1
    ctx->pc = 0x18541cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x185420: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185424: 0x1eb5824  and         $t3, $t7, $t3
    ctx->pc = 0x185424u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & GPR_U64(ctx, 11));
    // 0x185428: 0x902d91b0  lbu         $t5, -0x6E50($at)
    ctx->pc = 0x185428u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294939056)));
    // 0x18542c: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x18542cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x185430: 0x240cfffc  addiu       $t4, $zero, -0x4
    ctx->pc = 0x185430u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x185434: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185438: 0x1ac6024  and         $t4, $t5, $t4
    ctx->pc = 0x185438u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
    // 0x18543c: 0xa03991a0  sb          $t9, -0x6E60($at)
    ctx->pc = 0x18543cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939040), (uint8_t)GPR_U32(ctx, 25));
    // 0x185440: 0x1842025  or          $a0, $t4, $a0
    ctx->pc = 0x185440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) | GPR_U64(ctx, 4));
    // 0x185444: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185448: 0x240cc000  addiu       $t4, $zero, -0x4000
    ctx->pc = 0x185448u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x18544c: 0x903591a0  lbu         $s5, -0x6E60($at)
    ctx->pc = 0x18544cu;
    SET_GPR_ZE32(ctx, 21, (uint8_t)FAST_READ8(0x3691A0u));
    // 0x185450: 0x300d3fff  andi        $t5, $zero, 0x3FFF
    ctx->pc = 0x185450u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)16383);
    // 0x185454: 0x2419ff3f  addiu       $t9, $zero, -0xC1
    ctx->pc = 0x185454u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x185458: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18545c: 0xa0239191  sb          $v1, -0x6E6F($at)
    ctx->pc = 0x18545cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x369191u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369191u, _value); } while (0);
    // 0x185460: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185464: 0x2aa1824  and         $v1, $s5, $t2
    ctx->pc = 0x185464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 10));
    // 0x185468: 0xa02b91a1  sb          $t3, -0x6E5F($at)
    ctx->pc = 0x185468u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939041), (uint8_t)GPR_U32(ctx, 11));
    // 0x18546c: 0x781825  or          $v1, $v1, $t8
    ctx->pc = 0x18546cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 24));
    // 0x185470: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185474: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x185474u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x185478: 0xa02491b0  sb          $a0, -0x6E50($at)
    ctx->pc = 0x185478u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3691B0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3691B0u, _value); } while (0);
    // 0x18547c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18547cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185480: 0x90249191  lbu         $a0, -0x6E6F($at)
    ctx->pc = 0x185480u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x369191u));
    // 0x185484: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185488: 0xa02391a0  sb          $v1, -0x6E60($at)
    ctx->pc = 0x185488u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3691A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3691A0u, _value); } while (0);
    // 0x18548c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18548cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185490: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x185490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x185494: 0xa02a91b4  sb          $t2, -0x6E4C($at)
    ctx->pc = 0x185494u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x3691B4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3691B4u, _value); } while (0);
    // 0x185498: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18549c: 0xac2391c4  sw          $v1, -0x6E3C($at)
    ctx->pc = 0x18549cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3691C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3691C4u, _value); } while (0);
    // 0x1854a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1854a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1854a4: 0x24036bf0  addiu       $v1, $zero, 0x6BF0
    ctx->pc = 0x1854a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27632));
    // 0x1854a8: 0xa02a91c0  sb          $t2, -0x6E40($at)
    ctx->pc = 0x1854a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x3691C0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3691C0u, _value); } while (0);
    // 0x1854ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1854acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1854b0: 0xa02a91c1  sb          $t2, -0x6E3F($at)
    ctx->pc = 0x1854b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x3691C1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3691C1u, _value); } while (0);
    // 0x1854b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1854b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1854b8: 0xa42391e0  sh          $v1, -0x6E20($at)
    ctx->pc = 0x1854b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3691E0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3691E0u, _value); } while (0);
    // 0x1854bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1854bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1854c0: 0x9e1824  and         $v1, $a0, $fp
    ctx->pc = 0x1854c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
    // 0x1854c4: 0xa02a91c2  sb          $t2, -0x6E3E($at)
    ctx->pc = 0x1854c4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939074), (uint8_t)GPR_U32(ctx, 10));
    // 0x1854c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1854c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1854cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1854ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1854d0: 0x240477fc  addiu       $a0, $zero, 0x77FC
    ctx->pc = 0x1854d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30716));
    // 0x1854d4: 0xa0239191  sb          $v1, -0x6E6F($at)
    ctx->pc = 0x1854d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x369191u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369191u, _value); } while (0);
    // 0x1854d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1854d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1854dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1854dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1854e0: 0xa02a91c3  sb          $t2, -0x6E3D($at)
    ctx->pc = 0x1854e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x3691C3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3691C3u, _value); } while (0);
    // 0x1854e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1854e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1854e8: 0x3503c  dsll32      $t2, $v1, 0
    ctx->pc = 0x1854e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1854ec: 0xa42491e2  sh          $a0, -0x6E1E($at)
    ctx->pc = 0x1854ecu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939106), (uint16_t)GPR_U32(ctx, 4));
    // 0x1854f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1854f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1854f4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1854f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1854f8: 0x902391a0  lbu         $v1, -0x6E60($at)
    ctx->pc = 0x1854f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3691A0u));
    // 0x1854fc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1854fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x185500: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x185500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x185504: 0x8a5025  or          $t2, $a0, $t2
    ctx->pc = 0x185504u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x185508: 0x71445389  pcpyld      $t2, $t2, $a0
    ctx->pc = 0x185508u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 4)));
    // 0x18550c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18550cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185510: 0x77b824  and         $s7, $v1, $s7
    ctx->pc = 0x185510u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x185514: 0x903691a1  lbu         $s6, -0x6E5F($at)
    ctx->pc = 0x185514u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294939041)));
    // 0x185518: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18551c: 0x2c52824  and         $a1, $s6, $a1
    ctx->pc = 0x18551cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
    // 0x185520: 0x903591b0  lbu         $s5, -0x6E50($at)
    ctx->pc = 0x185520u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294939056)));
    // 0x185524: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x185524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x185528: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x185528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18552c: 0x2e9b025  or          $s6, $s7, $t1
    ctx->pc = 0x18552cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 23) | GPR_U64(ctx, 9));
    // 0x185530: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185534: 0x2a6a824  and         $s5, $s5, $a2
    ctx->pc = 0x185534u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 6));
    // 0x185538: 0x942f91d0  lhu         $t7, -0x6E30($at)
    ctx->pc = 0x185538u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939088)));
    // 0x18553c: 0x64060008  daddiu      $a2, $zero, 0x8
    ctx->pc = 0x18553cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x185540: 0x2a63025  or          $a2, $s5, $a2
    ctx->pc = 0x185540u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) | GPR_U64(ctx, 6));
    // 0x185544: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185548: 0x942b91d2  lhu         $t3, -0x6E2E($at)
    ctx->pc = 0x185548u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)FAST_READ16(0x3691D2u));
    // 0x18554c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18554cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185550: 0xdc2491e0  ld          $a0, -0x6E20($at)
    ctx->pc = 0x185550u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x3691E0u));
    // 0x185554: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185558: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x185558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x18555c: 0x942391f0  lhu         $v1, -0x6E10($at)
    ctx->pc = 0x18555cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939120)));
    // 0x185560: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x185560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x185564: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185568: 0xa03691a0  sb          $s6, -0x6E60($at)
    ctx->pc = 0x185568u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x3691A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3691A0u, _value); } while (0);
    // 0x18556c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18556cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185570: 0xa02591a1  sb          $a1, -0x6E5F($at)
    ctx->pc = 0x185570u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3691A1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3691A1u, _value); } while (0);
    // 0x185574: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185578: 0x1ec2824  and         $a1, $t7, $t4
    ctx->pc = 0x185578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) & GPR_U64(ctx, 12));
    // 0x18557c: 0xa02691b0  sb          $a2, -0x6E50($at)
    ctx->pc = 0x18557cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939056), (uint8_t)GPR_U32(ctx, 6));
    // 0x185580: 0xad2825  or          $a1, $a1, $t5
    ctx->pc = 0x185580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 13));
    // 0x185584: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185588: 0xa42591d0  sh          $a1, -0x6E30($at)
    ctx->pc = 0x185588u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3691D0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3691D0u, _value); } while (0);
    // 0x18558c: 0x16c2824  and         $a1, $t3, $t4
    ctx->pc = 0x18558cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x185590: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185594: 0xad2825  or          $a1, $a1, $t5
    ctx->pc = 0x185594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 13));
    // 0x185598: 0xa42591d2  sh          $a1, -0x6E2E($at)
    ctx->pc = 0x185598u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3691D2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3691D2u, _value); } while (0);
    // 0x18559c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18559cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1855a0: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x1855a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x1855a4: 0xfc2491e0  sd          $a0, -0x6E20($at)
    ctx->pc = 0x1855a4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3691E0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3691E0u, _value); } while (0);
    // 0x1855a8: 0x24a55870  addiu       $a1, $a1, 0x5870
    ctx->pc = 0x1855a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22640));
    // 0x1855ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1855acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1855b0: 0x6c2024  and         $a0, $v1, $t4
    ctx->pc = 0x1855b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
    // 0x1855b4: 0x902d91a0  lbu         $t5, -0x6E60($at)
    ctx->pc = 0x1855b4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294939040)));
    // 0x1855b8: 0x64032800  daddiu      $v1, $zero, 0x2800
    ctx->pc = 0x1855b8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10240);
    // 0x1855bc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1855bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1855c0: 0x340493f0  ori         $a0, $zero, 0x93F0
    ctx->pc = 0x1855c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37872);
    // 0x1855c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1855c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1855c8: 0x1be6824  and         $t5, $t5, $fp
    ctx->pc = 0x1855c8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 30));
    // 0x1855cc: 0xa42391f0  sh          $v1, -0x6E10($at)
    ctx->pc = 0x1855ccu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939120), (uint16_t)GPR_U32(ctx, 3));
    // 0x1855d0: 0x1a2a825  or          $s5, $t5, $v0
    ctx->pc = 0x1855d0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x1855d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1855d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1855d8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1855d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1855dc: 0x902691a1  lbu         $a2, -0x6E5F($at)
    ctx->pc = 0x1855dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x3691A1u));
    // 0x1855e0: 0x64032000  daddiu      $v1, $zero, 0x2000
    ctx->pc = 0x1855e0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8192);
    // 0x1855e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1855e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1855e8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1855e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1855ec: 0xa4249200  sh          $a0, -0x6E00($at)
    ctx->pc = 0x1855ecu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939136), (uint16_t)GPR_U32(ctx, 4));
    // 0x1855f0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1855f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1855f4: 0x340487fc  ori         $a0, $zero, 0x87FC
    ctx->pc = 0x1855f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34812);
    // 0x1855f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1855f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1855fc: 0xa4249202  sh          $a0, -0x6DFE($at)
    ctx->pc = 0x1855fcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x369202u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369202u, _value); } while (0);
    // 0x185600: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x185600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x185604: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185608: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x185608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x18560c: 0x902b91b0  lbu         $t3, -0x6E50($at)
    ctx->pc = 0x18560cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)FAST_READ8(0x3691B0u));
    // 0x185610: 0x24849160  addiu       $a0, $a0, -0x6EA0
    ctx->pc = 0x185610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938976));
    // 0x185614: 0x24c69150  addiu       $a2, $a2, -0x6EB0
    ctx->pc = 0x185614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938960));
    // 0x185618: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18561c: 0x942f91f2  lhu         $t7, -0x6E0E($at)
    ctx->pc = 0x18561cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)FAST_READ16(0x3691F2u));
    // 0x185620: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185624: 0xdc2d9200  ld          $t5, -0x6E00($at)
    ctx->pc = 0x185624u;
    SET_GPR_U64(ctx, 13, FAST_READ64(0x369200u));
    // 0x185628: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18562c: 0xa03591a0  sb          $s5, -0x6E60($at)
    ctx->pc = 0x18562cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x3691A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3691A0u, _value); } while (0);
    // 0x185630: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185634: 0xa02291a1  sb          $v0, -0x6E5F($at)
    ctx->pc = 0x185634u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3691A1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3691A1u, _value); } while (0);
    // 0x185638: 0x2402ffcf  addiu       $v0, $zero, -0x31
    ctx->pc = 0x185638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x18563c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18563cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185640: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x185640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x185644: 0x473825  or          $a3, $v0, $a3
    ctx->pc = 0x185644u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x185648: 0x1ec1024  and         $v0, $t7, $t4
    ctx->pc = 0x185648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & GPR_U64(ctx, 12));
    // 0x18564c: 0xa02791b0  sb          $a3, -0x6E50($at)
    ctx->pc = 0x18564cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939056), (uint8_t)GPR_U32(ctx, 7));
    // 0x185650: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x185650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x185654: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185658: 0x1aa1024  and         $v0, $t5, $t2
    ctx->pc = 0x185658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 10));
    // 0x18565c: 0xa42391f2  sh          $v1, -0x6E0E($at)
    ctx->pc = 0x18565cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939122), (uint16_t)GPR_U32(ctx, 3));
    // 0x185660: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x185660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x185664: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185668: 0xfc229200  sd          $v0, -0x6E00($at)
    ctx->pc = 0x185668u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369200u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369200u, _value); } while (0);
    // 0x18566c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18566cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185670: 0x902291b0  lbu         $v0, -0x6E50($at)
    ctx->pc = 0x185670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3691B0u));
    // 0x185674: 0x591024  and         $v0, $v0, $t9
    ctx->pc = 0x185674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 25));
    // 0x185678: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18567c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x18567cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x185680: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x185680u;
    SET_GPR_U32(ctx, 31, 0x185688u);
    ctx->pc = 0x185684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185680u;
    // 0x185684: 0xa02291b0  sb          $v0, -0x6E50($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939056), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x185680u, 0x185688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185688u;
label_185688:
    // 0x185688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18568c: 0xa38286c4  sb          $v0, -0x793C($gp)
    ctx->pc = 0x18568cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936260), (uint8_t)GPR_U32(ctx, 2));
label_185690:
    // 0x185690: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x185690u;
    {
        const bool branch_taken_0x185690 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x185694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185690u;
        // 0x185694: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185690) {
            ctx->pc = 0x1856ACu;
            goto label_1856ac;
        }
    }
    ctx->pc = 0x185698u;
    // 0x185698: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x185698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18569c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x18569cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1856a0: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x1856a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1856a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1856A4u;
    {
        const bool branch_taken_0x1856a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1856A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856A4u;
        // 0x1856a8: 0xb12823  subu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1856a4) {
            ctx->pc = 0x1856B0u;
            goto label_1856b0;
        }
    }
    ctx->pc = 0x1856ACu;
label_1856ac:
    // 0x1856ac: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1856acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1856b0:
    // 0x1856b0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1856b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1856b4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1856B4u;
    {
        const bool branch_taken_0x1856b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1856B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856B4u;
        // 0x1856b8: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1856b4) {
            ctx->pc = 0x185744u;
            goto label_185744;
        }
    }
    ctx->pc = 0x1856BCu;
    // 0x1856bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1856bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1856c0: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x1856c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1856c4: 0x942891d0  lhu         $t0, -0x6E30($at)
    ctx->pc = 0x1856c4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)FAST_READ16(0x3691D0u));
    // 0x1856c8: 0x304a3fff  andi        $t2, $v0, 0x3FFF
    ctx->pc = 0x1856c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1856cc: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1856ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1856d0: 0x24822000  addiu       $v0, $a0, 0x2000
    ctx->pc = 0x1856d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8192));
    // 0x1856d4: 0x2409c000  addiu       $t1, $zero, -0x4000
    ctx->pc = 0x1856d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1856d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1856d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1856dc: 0x30673fff  andi        $a3, $v1, 0x3FFF
    ctx->pc = 0x1856dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1856e0: 0x64052800  daddiu      $a1, $zero, 0x2800
    ctx->pc = 0x1856e0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10240);
    // 0x1856e4: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x1856e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1856e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1856e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1856ec: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x1856ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x1856f0: 0x942691d2  lhu         $a2, -0x6E2E($at)
    ctx->pc = 0x1856f0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939090)));
    // 0x1856f4: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x1856f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x1856f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1856f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1856fc: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x1856fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x185700: 0x942491f0  lhu         $a0, -0x6E10($at)
    ctx->pc = 0x185700u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939120)));
    // 0x185704: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x185704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x185708: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18570c: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x18570cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x185710: 0x942291f2  lhu         $v0, -0x6E0E($at)
    ctx->pc = 0x185710u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939122)));
    // 0x185714: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x185714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x185718: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18571c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x18571cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x185720: 0xa42891d0  sh          $t0, -0x6E30($at)
    ctx->pc = 0x185720u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939088), (uint16_t)GPR_U32(ctx, 8));
    // 0x185724: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x185724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x185728: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18572c: 0xa42691d2  sh          $a2, -0x6E2E($at)
    ctx->pc = 0x18572cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3691D2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3691D2u, _value); } while (0);
    // 0x185730: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185734: 0xa42491f0  sh          $a0, -0x6E10($at)
    ctx->pc = 0x185734u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3691F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3691F0u, _value); } while (0);
    // 0x185738: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18573c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x18573Cu;
    {
        const bool branch_taken_0x18573c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18573Cu;
        // 0x185740: 0xa42291f2  sh          $v0, -0x6E0E($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294939122), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18573c) {
            ctx->pc = 0x1857C4u;
            goto label_1857c4;
        }
    }
    ctx->pc = 0x185744u;
label_185744:
    // 0x185744: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x185744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x185748: 0x942891d0  lhu         $t0, -0x6E30($at)
    ctx->pc = 0x185748u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939088)));
    // 0x18574c: 0x304a3fff  andi        $t2, $v0, 0x3FFF
    ctx->pc = 0x18574cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x185750: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x185750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x185754: 0x24a22000  addiu       $v0, $a1, 0x2000
    ctx->pc = 0x185754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8192));
    // 0x185758: 0x2409c000  addiu       $t1, $zero, -0x4000
    ctx->pc = 0x185758u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x18575c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x18575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x185760: 0x30673fff  andi        $a3, $v1, 0x3FFF
    ctx->pc = 0x185760u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x185764: 0x64052800  daddiu      $a1, $zero, 0x2800
    ctx->pc = 0x185764u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10240);
    // 0x185768: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x185768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x18576c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18576cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185770: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x185770u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x185774: 0x942691d2  lhu         $a2, -0x6E2E($at)
    ctx->pc = 0x185774u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939090)));
    // 0x185778: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x185778u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x18577c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18577cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185780: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x185780u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x185784: 0x942491f0  lhu         $a0, -0x6E10($at)
    ctx->pc = 0x185784u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939120)));
    // 0x185788: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x185788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x18578c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18578cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185790: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x185790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x185794: 0x942291f2  lhu         $v0, -0x6E0E($at)
    ctx->pc = 0x185794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939122)));
    // 0x185798: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x185798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x18579c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18579cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1857a0: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1857a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1857a4: 0xa42891d0  sh          $t0, -0x6E30($at)
    ctx->pc = 0x1857a4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939088), (uint16_t)GPR_U32(ctx, 8));
    // 0x1857a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1857a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1857ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1857acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1857b0: 0xa42691d2  sh          $a2, -0x6E2E($at)
    ctx->pc = 0x1857b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3691D2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3691D2u, _value); } while (0);
    // 0x1857b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1857b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1857b8: 0xa42491f0  sh          $a0, -0x6E10($at)
    ctx->pc = 0x1857b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3691F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3691F0u, _value); } while (0);
    // 0x1857bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1857bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1857c0: 0xa42291f2  sh          $v0, -0x6E0E($at)
    ctx->pc = 0x1857c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3691F2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3691F2u, _value); } while (0);
label_1857c4:
    // 0x1857c4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1857c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1857c8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1857c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1857cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1857ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1857d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1857d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1857d4: 0x0  nop
    ctx->pc = 0x1857d4u;
    // NOP
    // 0x1857d8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1857d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1857dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1857dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1857e0: 0x0  nop
    ctx->pc = 0x1857e0u;
    // NOP
    // 0x1857e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1857E4u;
    {
        const bool branch_taken_0x1857e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1857e4) {
            ctx->pc = 0x1857FCu;
            goto label_1857fc;
        }
    }
    ctx->pc = 0x1857ECu;
    // 0x1857ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1857ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1857f0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1857f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1857f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1857F4u;
    {
        const bool branch_taken_0x1857f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1857f4) {
            ctx->pc = 0x185814u;
            goto label_185814;
        }
    }
    ctx->pc = 0x1857FCu;
label_1857fc:
    // 0x1857fc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1857fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185800: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x185800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x185804: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x185804u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x185808: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x185808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18580c: 0x0  nop
    ctx->pc = 0x18580cu;
    // NOP
    // 0x185810: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x185810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_185814:
    // 0x185814: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185818: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x185818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x18581c: 0xa02391c3  sb          $v1, -0x6E3D($at)
    ctx->pc = 0x18581cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3691C3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3691C3u, _value); } while (0);
    // 0x185820: 0x24a59160  addiu       $a1, $a1, -0x6EA0
    ctx->pc = 0x185820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938976));
    // 0x185824: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x185824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x185828: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x185828u;
    SET_GPR_U32(ctx, 31, 0x185830u);
    ctx->pc = 0x18582Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185828u;
    // 0x18582c: 0x240600b0  addiu       $a2, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x185828u, 0x185830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185830u;
label_185830:
    // 0x185830: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x185830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x185834: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x185834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x185838: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x185838u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x18583c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x18583cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x185840: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x185840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x185844: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x185844u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x185848: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x185848u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18584c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x18584cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x185850: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x185850u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185854: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x185854u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185858: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x185858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18585c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18585cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185860: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x185860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185864: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x185864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185868: 0x3e00008  jr          $ra
    ctx->pc = 0x185868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185868u;
        // 0x18586c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185870u;
}
