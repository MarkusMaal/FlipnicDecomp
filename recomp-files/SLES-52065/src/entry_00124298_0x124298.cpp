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

// Function: entry_00124298
// Address: 0x124298 - 0x1243d8
void entry_00124298_0x124298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124298_0x124298");
#endif

    switch (ctx->pc) {
        case 0x1242c0u: goto label_1242c0;
        case 0x1242e8u: goto label_1242e8;
        default: break;
    }

    ctx->pc = 0x124298u;

    // 0x124298: 0x96850062  lhu         $a1, 0x62($s4)
    ctx->pc = 0x124298u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 98)));
    // 0x12429c: 0x32e2003f  andi        $v0, $s7, 0x3F
    ctx->pc = 0x12429cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)63);
    // 0x1242a0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1242a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1242a4: 0x2402fc0f  addiu       $v0, $zero, -0x3F1
    ctx->pc = 0x1242a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x1242a8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1242a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1242ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1242acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1242b0: 0xa6820062  sh          $v0, 0x62($s4)
    ctx->pc = 0x1242b0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 98), (uint16_t)GPR_U32(ctx, 2));
    // 0x1242b4: 0x96050014  lhu         $a1, 0x14($s0)
    ctx->pc = 0x1242b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1242b8: 0xc04927c  jal         func_1249F0
    ctx->pc = 0x1242B8u;
    SET_GPR_U32(ctx, 31, 0x1242C0u);
    ctx->pc = 0x1242BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1242B8u;
    // 0x1242bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249F0u, 0x1242B8u, 0x1242C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1242C0u;
label_1242c0:
    // 0x1242c0: 0x92850063  lbu         $a1, 0x63($s4)
    ctx->pc = 0x1242c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 99)));
    // 0x1242c4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1242c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1242c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1242c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1242cc: 0x2402ffc3  addiu       $v0, $zero, -0x3D
    ctx->pc = 0x1242ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x1242d0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1242d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1242d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1242d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1242d8: 0xa2820063  sb          $v0, 0x63($s4)
    ctx->pc = 0x1242d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 99), (uint8_t)GPR_U32(ctx, 2));
    // 0x1242dc: 0x96050016  lhu         $a1, 0x16($s0)
    ctx->pc = 0x1242dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x1242e0: 0xc04927c  jal         func_1249F0
    ctx->pc = 0x1242E0u;
    SET_GPR_U32(ctx, 31, 0x1242E8u);
    ctx->pc = 0x1242E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1242E0u;
    // 0x1242e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249F0u, 0x1242E0u, 0x1242E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1242E8u;
label_1242e8:
    // 0x1242e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1242e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1242ec: 0xde880060  ld          $t0, 0x60($s4)
    ctx->pc = 0x1242ecu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x1242f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1242f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1242f4: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x1242f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1242f8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x1242f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1242fc: 0x64050004  daddiu      $a1, $zero, 0x4
    ctx->pc = 0x1242fcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x124300: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x124300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x124304: 0x337b8  dsll        $a2, $v1, 30
    ctx->pc = 0x124304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 30);
    // 0x124308: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x124308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12430c: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x12430cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x124310: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x124310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x124314: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124318: 0x1021824  and         $v1, $t0, $v0
    ctx->pc = 0x124318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x12431c: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x12431cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x124320: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x124320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x124324: 0xfe860060  sd          $a2, 0x60($s4)
    ctx->pc = 0x124324u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 6));
    // 0x124328: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x124328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12432c: 0x92860064  lbu         $a2, 0x64($s4)
    ctx->pc = 0x12432cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x124330: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x124330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x124334: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x124334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x124338: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x124338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x12433c: 0xa2840064  sb          $a0, 0x64($s4)
    ctx->pc = 0x12433cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 100), (uint8_t)GPR_U32(ctx, 4));
    // 0x124340: 0x92840064  lbu         $a0, 0x64($s4)
    ctx->pc = 0x124340u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x124344: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x124344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x124348: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12434c: 0xa2820064  sb          $v0, 0x64($s4)
    ctx->pc = 0x12434cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x124350: 0x8e820088  lw          $v0, 0x88($s4)
    ctx->pc = 0x124350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x124354: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x124354u;
    {
        const bool branch_taken_0x124354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124354u;
        // 0x124358: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124354) {
            ctx->pc = 0x1243D8u;
            return;
        }
    }
    ctx->pc = 0x12435Cu;
    // 0x12435c: 0x920a0012  lbu         $t2, 0x12($s0)
    ctx->pc = 0x12435cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x124360: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x124360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x124364: 0x92890066  lbu         $t1, 0x66($s4)
    ctx->pc = 0x124364u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 102)));
    // 0x124368: 0x2408ff87  addiu       $t0, $zero, -0x79
    ctx->pc = 0x124368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
    // 0x12436c: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x12436cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x124370: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x124370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x124374: 0x2406ffe0  addiu       $a2, $zero, -0x20
    ctx->pc = 0x124374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x124378: 0x3007001f  andi        $a3, $zero, 0x1F
    ctx->pc = 0x124378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x12437c: 0x2404ff1f  addiu       $a0, $zero, -0xE1
    ctx->pc = 0x12437cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x124380: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x124380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x124384: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x124384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x124388: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x124388u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x12438c: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x12438cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x124390: 0x15d4821  addu        $t1, $t2, $sp
    ctx->pc = 0x124390u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x124394: 0x8d2900b0  lw          $t1, 0xB0($t1)
    ctx->pc = 0x124394u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 176)));
    // 0x124398: 0x3129000f  andi        $t1, $t1, 0xF
    ctx->pc = 0x124398u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x12439c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x12439cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1243a0: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1243a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1243a4: 0xa2880066  sb          $t0, 0x66($s4)
    ctx->pc = 0x1243a4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 102), (uint8_t)GPR_U32(ctx, 8));
    // 0x1243a8: 0x92880067  lbu         $t0, 0x67($s4)
    ctx->pc = 0x1243a8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 103)));
    // 0x1243ac: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1243acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x1243b0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1243b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1243b4: 0xa2860067  sb          $a2, 0x67($s4)
    ctx->pc = 0x1243b4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 103), (uint8_t)GPR_U32(ctx, 6));
    // 0x1243b8: 0x92860067  lbu         $a2, 0x67($s4)
    ctx->pc = 0x1243b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 103)));
    // 0x1243bc: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1243bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1243c0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1243c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1243c4: 0xa2840067  sb          $a0, 0x67($s4)
    ctx->pc = 0x1243c4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 103), (uint8_t)GPR_U32(ctx, 4));
    // 0x1243c8: 0x92840066  lbu         $a0, 0x66($s4)
    ctx->pc = 0x1243c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 102)));
    // 0x1243cc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1243ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1243d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1243d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1243d4: 0xa2820066  sb          $v0, 0x66($s4)
    ctx->pc = 0x1243d4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 102), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1243d8u;
}
