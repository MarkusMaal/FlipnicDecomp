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

// Function: FUN_001b1660
// Address: 0x1b1660 - 0x1b2b8c
void FUN_001b1660_0x1b1660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b1660_0x1b1660");
#endif

    switch (ctx->pc) {
        case 0x1b16c0u: goto label_1b16c0;
        case 0x1b16ecu: goto label_1b16ec;
        case 0x1b1744u: goto label_1b1744;
        case 0x1b1838u: goto label_1b1838;
        case 0x1b187cu: goto label_1b187c;
        case 0x1b18b4u: goto label_1b18b4;
        case 0x1b1a80u: goto label_1b1a80;
        case 0x1b1ae8u: goto label_1b1ae8;
        case 0x1b1b64u: goto label_1b1b64;
        case 0x1b1c24u: goto label_1b1c24;
        case 0x1b1c8cu: goto label_1b1c8c;
        case 0x1b1cccu: goto label_1b1ccc;
        case 0x1b1ce0u: goto label_1b1ce0;
        case 0x1b1d18u: goto label_1b1d18;
        case 0x1b1e24u: goto label_1b1e24;
        case 0x1b1e8cu: goto label_1b1e8c;
        case 0x1b1f08u: goto label_1b1f08;
        case 0x1b1ff0u: goto label_1b1ff0;
        case 0x1b2058u: goto label_1b2058;
        case 0x1b20d4u: goto label_1b20d4;
        case 0x1b21c4u: goto label_1b21c4;
        case 0x1b222cu: goto label_1b222c;
        case 0x1b22a8u: goto label_1b22a8;
        case 0x1b2390u: goto label_1b2390;
        case 0x1b23f8u: goto label_1b23f8;
        case 0x1b2474u: goto label_1b2474;
        case 0x1b2578u: goto label_1b2578;
        case 0x1b25e0u: goto label_1b25e0;
        case 0x1b265cu: goto label_1b265c;
        case 0x1b2734u: goto label_1b2734;
        case 0x1b279cu: goto label_1b279c;
        case 0x1b2808u: goto label_1b2808;
        case 0x1b2810u: goto label_1b2810;
        case 0x1b28c0u: goto label_1b28c0;
        case 0x1b28f8u: goto label_1b28f8;
        case 0x1b2a44u: goto label_1b2a44;
        case 0x1b2aacu: goto label_1b2aac;
        case 0x1b2b14u: goto label_1b2b14;
        case 0x1b2b1cu: goto label_1b2b1c;
        default: break;
    }

    ctx->pc = 0x1b1660u;

    // 0x1b1660: 0x27bdfbf0  addiu       $sp, $sp, -0x410
    ctx->pc = 0x1b1660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966256));
    // 0x1b1664: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1b1664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1b1668: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1b1668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x1b166c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1b166cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x1b1670: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1b1670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x1b1674: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1b1674u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1678: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1b1678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1b167c: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x1b167cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1680: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1b1680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1b1684: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1b1684u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1688: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1b1688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1b168c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b168cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1690: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1b1690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1b1694: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b1694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1698: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b1698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b169c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b169cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b16a0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1b16a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b16a4: 0xafa9038c  sw          $t1, 0x38C($sp)
    ctx->pc = 0x1b16a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 908), GPR_U32(ctx, 9));
    // 0x1b16a8: 0xafaa0388  sw          $t2, 0x388($sp)
    ctx->pc = 0x1b16a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 904), GPR_U32(ctx, 10));
    // 0x1b16ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b16acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b16b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B16B0u;
    {
        const bool branch_taken_0x1b16b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16B0u;
        // 0x1b16b4: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16b0) {
            ctx->pc = 0x1B16C8u;
            goto label_1b16c8;
        }
    }
    ctx->pc = 0x1B16B8u;
    // 0x1b16b8: 0xc06bd3c  jal         func_1AF4F0
    ctx->pc = 0x1B16B8u;
    SET_GPR_U32(ctx, 31, 0x1B16C0u);
    ctx->pc = 0x1B16BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B16B8u;
    // 0x1b16bc: 0x27a40390  addiu       $a0, $sp, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4F0u, 0x1B16B8u, 0x1B16C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B16C0u;
label_1b16c0:
    // 0x1b16c0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B16C0u;
    {
        const bool branch_taken_0x1b16c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16C0u;
        // 0x1b16c4: 0x3c033d4c  lui         $v1, 0x3D4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16c0) {
            ctx->pc = 0x1B170Cu;
            goto label_1b170c;
        }
    }
    ctx->pc = 0x1B16C8u;
label_1b16c8:
    // 0x1b16c8: 0x8f908714  lw          $s0, -0x78EC($gp)
    ctx->pc = 0x1b16c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1b16cc: 0x8e06284c  lw          $a2, 0x284C($s0)
    ctx->pc = 0x1b16ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10316)));
    // 0x1b16d0: 0x28c103e8  slti        $at, $a2, 0x3E8
    ctx->pc = 0x1b16d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1b16d4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B16D4u;
    {
        const bool branch_taken_0x1b16d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16D4u;
        // 0x1b16d8: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16d4) {
            ctx->pc = 0x1B16E0u;
            goto label_1b16e0;
        }
    }
    ctx->pc = 0x1B16DCu;
    // 0x1b16dc: 0x240603e7  addiu       $a2, $zero, 0x3E7
    ctx->pc = 0x1b16dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_1b16e0:
    // 0x1b16e0: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x1b16e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x1b16e4: 0xc061fa8  jal         func_187EA0
    ctx->pc = 0x1B16E4u;
    SET_GPR_U32(ctx, 31, 0x1B16ECu);
    ctx->pc = 0x1B16E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B16E4u;
    // 0x1b16e8: 0x24a50b90  addiu       $a1, $a1, 0xB90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B16E4u, 0x1B16ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B16ECu;
label_1b16ec:
    // 0x1b16ec: 0x920328fc  lbu         $v1, 0x28FC($s0)
    ctx->pc = 0x1b16ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10492)));
    // 0x1b16f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B16F0u;
    {
        const bool branch_taken_0x1b16f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B16F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16F0u;
        // 0x1b16f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16f0) {
            ctx->pc = 0x1B1700u;
            goto label_1b1700;
        }
    }
    ctx->pc = 0x1B16F8u;
    // 0x1b16f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B16F8u;
    {
        const bool branch_taken_0x1b16f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16F8u;
        // 0x1b16fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16f8) {
            ctx->pc = 0x1B1704u;
            goto label_1b1704;
        }
    }
    ctx->pc = 0x1B1700u;
label_1b1700:
    // 0x1b1700: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b1700u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1704:
    // 0x1b1704: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b1704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b1708: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1b1708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_1b170c:
    // 0x1b170c: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1b170cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1710: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1b1710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b1714: 0x26840018  addiu       $a0, $s4, 0x18
    ctx->pc = 0x1b1714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x1b1718: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b1718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b171c: 0x27a50390  addiu       $a1, $sp, 0x390
    ctx->pc = 0x1b171cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x1b1720: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x1b1720u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b1724: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b1724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1728: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x1b1728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x1b172c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b172cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1730: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b1730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1734: 0x3c093fc0  lui         $t1, 0x3FC0
    ctx->pc = 0x1b1734u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16320 << 16));
    // 0x1b1738: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x1b1738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x1b173c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1B173Cu;
    {
        const bool branch_taken_0x1b173c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B173Cu;
        // 0x1b1740: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b173c) {
            ctx->pc = 0x1B17E8u;
            goto label_1b17e8;
        }
    }
    ctx->pc = 0x1B1744u;
label_1b1744:
    // 0x1b1744: 0xc5400058  lwc1        $f0, 0x58($t2)
    ctx->pc = 0x1b1744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1748: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1b1748u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b174c: 0x0  nop
    ctx->pc = 0x1b174cu;
    // NOP
    // 0x1b1750: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1750u;
    {
        const bool branch_taken_0x1b1750 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1750u;
        // 0x1b1754: 0x25480058  addiu       $t0, $t2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1750) {
            ctx->pc = 0x1B1770u;
            goto label_1b1770;
        }
    }
    ctx->pc = 0x1B1758u;
    // 0x1b1758: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b1758u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b175c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b175cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1760: 0x0  nop
    ctx->pc = 0x1b1760u;
    // NOP
    // 0x1b1764: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1764u;
    {
        const bool branch_taken_0x1b1764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1764u;
        // 0x1b1768: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1764) {
            ctx->pc = 0x1B1770u;
            goto label_1b1770;
        }
    }
    ctx->pc = 0x1B176Cu;
    // 0x1b176c: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x1b176cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_1b1770:
    // 0x1b1770: 0x908c0000  lbu         $t4, 0x0($a0)
    ctx->pc = 0x1b1770u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b1774: 0x90aa0000  lbu         $t2, 0x0($a1)
    ctx->pc = 0x1b1774u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b1778: 0x158a0005  bne         $t4, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1778u;
    {
        const bool branch_taken_0x1b1778 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 10));
        if (branch_taken_0x1b1778) {
            ctx->pc = 0x1B1790u;
            goto label_1b1790;
        }
    }
    ctx->pc = 0x1B1780u;
    // 0x1b1780: 0x908c0001  lbu         $t4, 0x1($a0)
    ctx->pc = 0x1b1780u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1b1784: 0x90aa0001  lbu         $t2, 0x1($a1)
    ctx->pc = 0x1b1784u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1b1788: 0x118a000e  beq         $t4, $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x1B1788u;
    {
        const bool branch_taken_0x1b1788 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 10));
        if (branch_taken_0x1b1788) {
            ctx->pc = 0x1B17C4u;
            goto label_1b17c4;
        }
    }
    ctx->pc = 0x1B1790u;
label_1b1790:
    // 0x1b1790: 0x667c2  srl         $t4, $a2, 31
    ctx->pc = 0x1b1790u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1b1794: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x1b1794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b1798: 0x0  nop
    ctx->pc = 0x1b1798u;
    // NOP
    // 0x1b179c: 0x0  nop
    ctx->pc = 0x1b179cu;
    // NOP
    // 0x1b17a0: 0x5010  mfhi        $t2
    ctx->pc = 0x1b17a0u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x1b17a4: 0xa5043  sra         $t2, $t2, 1
    ctx->pc = 0x1b17a4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 1));
    // 0x1b17a8: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x1b17a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x1b17ac: 0x14b6004  sllv        $t4, $t3, $t2
    ctx->pc = 0x1b17acu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 10) & 0x1F));
    // 0x1b17b0: 0x4c5024  and         $t2, $v0, $t4
    ctx->pc = 0x1b17b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x1b17b4: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B17B4u;
    {
        const bool branch_taken_0x1b17b4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b17b4) {
            ctx->pc = 0x1B17C4u;
            goto label_1b17c4;
        }
    }
    ctx->pc = 0x1B17BCu;
    // 0x1b17bc: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x1b17bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x1b17c0: 0x20c8025  or          $s0, $s0, $t4
    ctx->pc = 0x1b17c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 12));
label_1b17c4:
    // 0x1b17c4: 0x0  nop
    ctx->pc = 0x1b17c4u;
    // NOP
    // 0x1b17c8: 0x90a80000  lbu         $t0, 0x0($a1)
    ctx->pc = 0x1b17c8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b17cc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1b17ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1b17d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b17d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b17d4: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x1b17d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1b17d8: 0x90a80001  lbu         $t0, 0x1($a1)
    ctx->pc = 0x1b17d8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1b17dc: 0xa0880001  sb          $t0, 0x1($a0)
    ctx->pc = 0x1b17dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x1b17e0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1b17e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1b17e4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x1b17e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_1b17e8:
    // 0x1b17e8: 0x90880000  lbu         $t0, 0x0($a0)
    ctx->pc = 0x1b17e8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b17ec: 0x1500ffd5  bnez        $t0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1B17ECu;
    {
        const bool branch_taken_0x1b17ec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B17F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17ECu;
        // 0x1b17f0: 0x2875021  addu        $t2, $s4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17ec) {
            ctx->pc = 0x1B1744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1744;
        }
    }
    ctx->pc = 0x1B17F4u;
    // 0x1b17f4: 0x90880001  lbu         $t0, 0x1($a0)
    ctx->pc = 0x1b17f4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1b17f8: 0x1500ffd2  bnez        $t0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1B17F8u;
    {
        const bool branch_taken_0x1b17f8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b17f8) {
            ctx->pc = 0x1B1744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1744;
        }
    }
    ctx->pc = 0x1B1800u;
    // 0x1b1800: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b1800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b1804: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x1b1804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x1b1808: 0x8faa038c  lw          $t2, 0x38C($sp)
    ctx->pc = 0x1b1808u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 908)));
    // 0x1b180c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b180cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1810: 0x8fab0388  lw          $t3, 0x388($sp)
    ctx->pc = 0x1b1810u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
    // 0x1b1814: 0x26860018  addiu       $a2, $s4, 0x18
    ctx->pc = 0x1b1814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x1b1818: 0x26870058  addiu       $a3, $s4, 0x58
    ctx->pc = 0x1b1818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 88));
    // 0x1b181c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1b181cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1820: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1b1820u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1824: 0xafa20400  sw          $v0, 0x400($sp)
    ctx->pc = 0x1b1824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 2));
    // 0x1b1828: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b1828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b182c: 0xafa20404  sw          $v0, 0x404($sp)
    ctx->pc = 0x1b182cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 2));
    // 0x1b1830: 0xc06becc  jal         func_1AFB30
    ctx->pc = 0x1B1830u;
    SET_GPR_U32(ctx, 31, 0x1B1838u);
    ctx->pc = 0x1B1834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1830u;
    // 0x1b1834: 0xffb60000  sd          $s6, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB30u, 0x1B1830u, 0x1B1838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1838u;
label_1b1838:
    // 0x1b1838: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1b1838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b183c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1b183cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1b1840: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b1840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b1844: 0x0  nop
    ctx->pc = 0x1b1844u;
    // NOP
    // 0x1b1848: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b1848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b184c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b184cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b1850: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x1b1850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1b1854: 0x0  nop
    ctx->pc = 0x1b1854u;
    // NOP
    // 0x1b1858: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1858u;
    {
        const bool branch_taken_0x1b1858 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1858) {
            ctx->pc = 0x1B1864u;
            goto label_1b1864;
        }
    }
    ctx->pc = 0x1B1860u;
    // 0x1b1860: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b1860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b1864:
    // 0x1b1864: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1b1864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b1868: 0x14400413  bnez        $v0, . + 4 + (0x413 << 2)
    ctx->pc = 0x1B1868u;
    {
        const bool branch_taken_0x1b1868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1868u;
        // 0x1b186c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1868) {
            ctx->pc = 0x1B28B8u;
            goto label_1b28b8;
        }
    }
    ctx->pc = 0x1B1870u;
    // 0x1b1870: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b1870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b187c:
    // 0x1b187c: 0x831004  sllv        $v0, $v1, $a0
    ctx->pc = 0x1b187cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b1880: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1b1880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1b1884: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1884u;
    {
        const bool branch_taken_0x1b1884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1884u;
        // 0x1b1888: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1884) {
            ctx->pc = 0x1B1890u;
            goto label_1b1890;
        }
    }
    ctx->pc = 0x1B188Cu;
    // 0x1b188c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1b188cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1b1890:
    // 0x1b1890: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b1890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b1894: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1b1894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b1898: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B1898u;
    {
        const bool branch_taken_0x1b1898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1898u;
        // 0x1b189c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1898) {
            ctx->pc = 0x1B187Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b187c;
        }
    }
    ctx->pc = 0x1B18A0u;
    // 0x1b18a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b18a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b18a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b18a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b18a8: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x1b18a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1b18ac: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x1b18acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b18b0: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x1b18b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
label_1b18b4:
    // 0x1b18b4: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x1b18b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1b18b8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1b18b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b18bc: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B18BCu;
    {
        const bool branch_taken_0x1b18bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18BCu;
        // 0x1b18c0: 0x240a0080  addiu       $t2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18bc) {
            ctx->pc = 0x1B18F8u;
            goto label_1b18f8;
        }
    }
    ctx->pc = 0x1B18C4u;
    // 0x1b18c4: 0xb1202a  slt         $a0, $a1, $s1
    ctx->pc = 0x1b18c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b18c8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B18C8u;
    {
        const bool branch_taken_0x1b18c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b18c8) {
            ctx->pc = 0x1B18D8u;
            goto label_1b18d8;
        }
    }
    ctx->pc = 0x1B18D0u;
    // 0x1b18d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B18D0u;
    {
        const bool branch_taken_0x1b18d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b18d0) {
            ctx->pc = 0x1B18F4u;
            goto label_1b18f4;
        }
    }
    ctx->pc = 0x1B18D8u;
label_1b18d8:
    // 0x1b18d8: 0x131001a  div         $zero, $t1, $s1
    ctx->pc = 0x1b18d8u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b18dc: 0x0  nop
    ctx->pc = 0x1b18dcu;
    // NOP
    // 0x1b18e0: 0x0  nop
    ctx->pc = 0x1b18e0u;
    // NOP
    // 0x1b18e4: 0x2012  mflo        $a0
    ctx->pc = 0x1b18e4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1b18e8: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1b18e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b18ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B18ECu;
    {
        const bool branch_taken_0x1b18ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B18F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18ECu;
        // 0x1b18f0: 0x1045023  subu        $t2, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18ec) {
            ctx->pc = 0x1B18F8u;
            goto label_1b18f8;
        }
    }
    ctx->pc = 0x1B18F4u;
label_1b18f4:
    // 0x1b18f4: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1b18f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b18f8:
    // 0x1b18f8: 0xa2400  sll         $a0, $t2, 16
    ctx->pc = 0x1b18f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x1b18fc: 0xa2a00  sll         $a1, $t2, 8
    ctx->pc = 0x1b18fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1b1900: 0x873025  or          $a2, $a0, $a3
    ctx->pc = 0x1b1900u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x1b1904: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b1908: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1b1908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1b190c: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x1b190cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1b1910: 0x1452825  or          $a1, $t2, $a1
    ctx->pc = 0x1b1910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x1b1914: 0xac8503d0  sw          $a1, 0x3D0($a0)
    ctx->pc = 0x1b1914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 976), GPR_U32(ctx, 5));
    // 0x1b1918: 0x28440004  slti        $a0, $v0, 0x4
    ctx->pc = 0x1b1918u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b191c: 0x1480ffe5  bnez        $a0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1B191Cu;
    {
        const bool branch_taken_0x1b191c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B191Cu;
        // 0x1b1920: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b191c) {
            ctx->pc = 0x1B18B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b18b4;
        }
    }
    ctx->pc = 0x1B1924u;
    // 0x1b1924: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1b1924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1b1928: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B1928u;
    {
        const bool branch_taken_0x1b1928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1928u;
        // 0x1b192c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1928) {
            ctx->pc = 0x1B1984u;
            goto label_1b1984;
        }
    }
    ctx->pc = 0x1B1930u;
    // 0x1b1930: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x1b1930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b1934: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1934u;
    {
        const bool branch_taken_0x1b1934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1934) {
            ctx->pc = 0x1B1944u;
            goto label_1b1944;
        }
    }
    ctx->pc = 0x1B193Cu;
    // 0x1b193c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B193Cu;
    {
        const bool branch_taken_0x1b193c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b193c) {
            ctx->pc = 0x1B1980u;
            goto label_1b1980;
        }
    }
    ctx->pc = 0x1B1944u;
label_1b1944:
    // 0x1b1944: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x1b1944u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b1948: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b1948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b194c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b194cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b1950: 0x0  nop
    ctx->pc = 0x1b1950u;
    // NOP
    // 0x1b1954: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b1954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b1958: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1b1958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1b195c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1b195cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1b1960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b1960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1964: 0x0  nop
    ctx->pc = 0x1b1964u;
    // NOP
    // 0x1b1968: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b1968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b196c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b196cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1970: 0x0  nop
    ctx->pc = 0x1b1970u;
    // NOP
    // 0x1b1974: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1b1974u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b1978: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1978u;
    {
        const bool branch_taken_0x1b1978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1978u;
        // 0x1b197c: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1978) {
            ctx->pc = 0x1B1988u;
            goto label_1b1988;
        }
    }
    ctx->pc = 0x1B1980u;
label_1b1980:
    // 0x1b1980: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b1980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b1984:
    // 0x1b1984: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1b1984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b1988:
    // 0x1b1988: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1b1988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1b198c: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x1b198cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1b1990: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b1990u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b1994: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1998: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b1998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b199c: 0xafa202b0  sw          $v0, 0x2B0($sp)
    ctx->pc = 0x1b199cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 2));
    // 0x1b19a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b19a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b19a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b19a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b19a8: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x1b19a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1b19ac: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1b19acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1b19b0: 0x8c5e003c  lw          $fp, 0x3C($v0)
    ctx->pc = 0x1b19b0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1b19b4: 0x93c40063  lbu         $a0, 0x63($fp)
    ctx->pc = 0x1b19b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 99)));
    // 0x1b19b8: 0xdfc20060  ld          $v0, 0x60($fp)
    ctx->pc = 0x1b19b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1b19bc: 0x426bc  dsll32      $a0, $a0, 26
    ctx->pc = 0x1b19bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 26));
    // 0x1b19c0: 0x4273e  dsrl32      $a0, $a0, 28
    ctx->pc = 0x1b19c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 28));
    // 0x1b19c4: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b19c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b19c8: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1b19c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b19cc: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b19ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b19d0: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1b19d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b19d4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1b19d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b19d8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1b19d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1b19dc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1b19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b19e0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1b19e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1b19e4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1b19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b19e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b19e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b19ec: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b19f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b19f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b19f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b19f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b19f8: 0x0  nop
    ctx->pc = 0x1b19f8u;
    // NOP
    // 0x1b19fc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b19fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b1a00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b1a00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b1a04: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b1a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b1a08: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1a08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b1a0c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b1a0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b1a10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1a10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b1a14: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1b1a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1b1a18: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b1a18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b1a1c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B1A1Cu;
    {
        const bool branch_taken_0x1b1a1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A1Cu;
        // 0x1b1a20: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a1c) {
            ctx->pc = 0x1B1A74u;
            goto label_1b1a74;
        }
    }
    ctx->pc = 0x1B1A24u;
    // 0x1b1a24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b1a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1a28: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b1a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b1a2c: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b1a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b1a30: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1a34: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b1a38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1A38u;
    {
        const bool branch_taken_0x1b1a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a38) {
            ctx->pc = 0x1B1A4Cu;
            goto label_1b1a4c;
        }
    }
    ctx->pc = 0x1B1A40u;
    // 0x1b1a40: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b1a44: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1a48: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1a48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b1a4c:
    // 0x1b1a4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1A4Cu;
    {
        const bool branch_taken_0x1b1a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a4c) {
            ctx->pc = 0x1B1A64u;
            goto label_1b1a64;
        }
    }
    ctx->pc = 0x1B1A54u;
    // 0x1b1a54: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b1a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b1a58: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1b1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1b1a5c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b1a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b1a60: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1a60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b1a64:
    // 0x1b1a64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1A64u;
    {
        const bool branch_taken_0x1b1a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A64u;
        // 0x1b1a68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a64) {
            ctx->pc = 0x1B1A78u;
            goto label_1b1a78;
        }
    }
    ctx->pc = 0x1B1A6Cu;
    // 0x1b1a6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1A6Cu;
    {
        const bool branch_taken_0x1b1a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A6Cu;
        // 0x1b1a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a6c) {
            ctx->pc = 0x1B1A78u;
            goto label_1b1a78;
        }
    }
    ctx->pc = 0x1B1A74u;
label_1b1a74:
    // 0x1b1a74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b1a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1a78:
    // 0x1b1a78: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B1A78u;
    SET_GPR_U32(ctx, 31, 0x1B1A80u);
    ctx->pc = 0x1B1A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A78u;
    // 0x1b1a7c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B1A78u, 0x1B1A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A80u;
label_1b1a80:
    // 0x1b1a80: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B1A80u;
    {
        const bool branch_taken_0x1b1a80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a80) {
            ctx->pc = 0x1B1AD8u;
            goto label_1b1ad8;
        }
    }
    ctx->pc = 0x1B1A88u;
    // 0x1b1a88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1a8c: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b1a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b1a90: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b1a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b1a94: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1a98: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b1a9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1A9Cu;
    {
        const bool branch_taken_0x1b1a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a9c) {
            ctx->pc = 0x1B1AB0u;
            goto label_1b1ab0;
        }
    }
    ctx->pc = 0x1B1AA4u;
    // 0x1b1aa4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b1aa8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1aac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b1ab0:
    // 0x1b1ab0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1AB0u;
    {
        const bool branch_taken_0x1b1ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ab0) {
            ctx->pc = 0x1B1AC8u;
            goto label_1b1ac8;
        }
    }
    ctx->pc = 0x1B1AB8u;
    // 0x1b1ab8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b1ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b1abc: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1b1abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1b1ac0: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b1ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b1ac4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1ac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b1ac8:
    // 0x1b1ac8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1AC8u;
    {
        const bool branch_taken_0x1b1ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ac8) {
            ctx->pc = 0x1B1AD8u;
            goto label_1b1ad8;
        }
    }
    ctx->pc = 0x1B1AD0u;
    // 0x1b1ad0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1AD0u;
    {
        const bool branch_taken_0x1b1ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AD0u;
        // 0x1b1ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ad0) {
            ctx->pc = 0x1B1AE0u;
            goto label_1b1ae0;
        }
    }
    ctx->pc = 0x1B1AD8u;
label_1b1ad8:
    // 0x1b1ad8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b1ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1ae0:
    // 0x1b1ae0: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B1AE0u;
    SET_GPR_U32(ctx, 31, 0x1B1AE8u);
    ctx->pc = 0x1B1AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1AE0u;
    // 0x1b1ae4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B1AE0u, 0x1B1AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1AE8u;
label_1b1ae8:
    // 0x1b1ae8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1b1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b1aec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b1aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b1af0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1b1af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b1af4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1b1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b1af8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b1af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b1afc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b1afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b1b00: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1b1b00u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1b1b04: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b1b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b1b08: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x1b1b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1b1b0c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1B0Cu;
    {
        const bool branch_taken_0x1b1b0c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B1B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B0Cu;
        // 0x1b1b10: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b0c) {
            ctx->pc = 0x1B1B1Cu;
            goto label_1b1b1c;
        }
    }
    ctx->pc = 0x1B1B14u;
    // 0x1b1b14: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b1b18: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1b1b18u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_1b1b1c:
    // 0x1b1b1c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1b1b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b1b20: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b1b24: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b1b28: 0x2643ff40  addiu       $v1, $s2, -0xC0
    ctx->pc = 0x1b1b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967104));
    // 0x1b1b2c: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1b1b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b1b30: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1B30u;
    {
        const bool branch_taken_0x1b1b30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B30u;
        // 0x1b1b34: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b30) {
            ctx->pc = 0x1B1B40u;
            goto label_1b1b40;
        }
    }
    ctx->pc = 0x1B1B38u;
    // 0x1b1b38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b1b3c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1b1b3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_1b1b40:
    // 0x1b1b40: 0x8fa800e0  lw          $t0, 0xE0($sp)
    ctx->pc = 0x1b1b40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b1b44: 0x26e2ff80  addiu       $v0, $s7, -0x80
    ctx->pc = 0x1b1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967168));
    // 0x1b1b48: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x1b1b48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b1b4c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b1b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b50: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x1b1b50u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1b54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b1b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b1b58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b5c: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B1B5Cu;
    SET_GPR_U32(ctx, 31, 0x1B1B64u);
    ctx->pc = 0x1B1B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1B5Cu;
    // 0x1b1b60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B1B5Cu, 0x1B1B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B64u;
label_1b1b64:
    // 0x1b1b64: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1b1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1b1b68: 0x8c4228dc  lw          $v0, 0x28DC($v0)
    ctx->pc = 0x1b1b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10460)));
    // 0x1b1b6c: 0xafa202a0  sw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b1b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 2));
    // 0x1b1b70: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b1b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b1b74: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b1b74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b1b78: 0x14200067  bnez        $at, . + 4 + (0x67 << 2)
    ctx->pc = 0x1B1B78u;
    {
        const bool branch_taken_0x1b1b78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b78) {
            ctx->pc = 0x1B1D18u;
            goto label_1b1d18;
        }
    }
    ctx->pc = 0x1B1B80u;
    // 0x1b1b80: 0x8ede0008  lw          $fp, 0x8($s6)
    ctx->pc = 0x1b1b80u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1b1b84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1b88: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b1b88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b1b8c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b1b90: 0xafa202c0  sw          $v0, 0x2C0($sp)
    ctx->pc = 0x1b1b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 2));
    // 0x1b1b94: 0x93c40063  lbu         $a0, 0x63($fp)
    ctx->pc = 0x1b1b94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 99)));
    // 0x1b1b98: 0xdfc20060  ld          $v0, 0x60($fp)
    ctx->pc = 0x1b1b98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1b1b9c: 0x426bc  dsll32      $a0, $a0, 26
    ctx->pc = 0x1b1b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 26));
    // 0x1b1ba0: 0x4273e  dsrl32      $a0, $a0, 28
    ctx->pc = 0x1b1ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 28));
    // 0x1b1ba4: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b1ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b1ba8: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1b1ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b1bac: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b1bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b1bb0: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1b1bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b1bb4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1b1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b1bb8: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1b1bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x1b1bbc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1b1bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b1bc0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B1BC0u;
    {
        const bool branch_taken_0x1b1bc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BC0u;
        // 0x1b1bc4: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1bc0) {
            ctx->pc = 0x1B1C18u;
            goto label_1b1c18;
        }
    }
    ctx->pc = 0x1B1BC8u;
    // 0x1b1bc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b1bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1bcc: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b1bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b1bd0: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b1bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b1bd4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1bd8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b1bdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1BDCu;
    {
        const bool branch_taken_0x1b1bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1bdc) {
            ctx->pc = 0x1B1BF0u;
            goto label_1b1bf0;
        }
    }
    ctx->pc = 0x1B1BE4u;
    // 0x1b1be4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b1be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b1be8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1bec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b1bf0:
    // 0x1b1bf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1BF0u;
    {
        const bool branch_taken_0x1b1bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1bf0) {
            ctx->pc = 0x1B1C08u;
            goto label_1b1c08;
        }
    }
    ctx->pc = 0x1B1BF8u;
    // 0x1b1bf8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b1bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b1bfc: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x1b1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x1b1c00: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b1c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b1c04: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1c04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b1c08:
    // 0x1b1c08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1C08u;
    {
        const bool branch_taken_0x1b1c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C08u;
        // 0x1b1c0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c08) {
            ctx->pc = 0x1B1C1Cu;
            goto label_1b1c1c;
        }
    }
    ctx->pc = 0x1B1C10u;
    // 0x1b1c10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1C10u;
    {
        const bool branch_taken_0x1b1c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C10u;
        // 0x1b1c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c10) {
            ctx->pc = 0x1B1C1Cu;
            goto label_1b1c1c;
        }
    }
    ctx->pc = 0x1B1C18u;
label_1b1c18:
    // 0x1b1c18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b1c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1c1c:
    // 0x1b1c1c: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B1C1Cu;
    SET_GPR_U32(ctx, 31, 0x1B1C24u);
    ctx->pc = 0x1B1C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C1Cu;
    // 0x1b1c20: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B1C1Cu, 0x1B1C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C24u;
label_1b1c24:
    // 0x1b1c24: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B1C24u;
    {
        const bool branch_taken_0x1b1c24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c24) {
            ctx->pc = 0x1B1C7Cu;
            goto label_1b1c7c;
        }
    }
    ctx->pc = 0x1B1C2Cu;
    // 0x1b1c2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1c30: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b1c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b1c34: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b1c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b1c38: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1c3c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b1c40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1C40u;
    {
        const bool branch_taken_0x1b1c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c40) {
            ctx->pc = 0x1B1C54u;
            goto label_1b1c54;
        }
    }
    ctx->pc = 0x1B1C48u;
    // 0x1b1c48: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b1c4c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1c50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b1c54:
    // 0x1b1c54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1C54u;
    {
        const bool branch_taken_0x1b1c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c54) {
            ctx->pc = 0x1B1C6Cu;
            goto label_1b1c6c;
        }
    }
    ctx->pc = 0x1B1C5Cu;
    // 0x1b1c5c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b1c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b1c60: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x1b1c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x1b1c64: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b1c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b1c68: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b1c6c:
    // 0x1b1c6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1C6Cu;
    {
        const bool branch_taken_0x1b1c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c6c) {
            ctx->pc = 0x1B1C7Cu;
            goto label_1b1c7c;
        }
    }
    ctx->pc = 0x1B1C74u;
    // 0x1b1c74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1C74u;
    {
        const bool branch_taken_0x1b1c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C74u;
        // 0x1b1c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c74) {
            ctx->pc = 0x1B1C84u;
            goto label_1b1c84;
        }
    }
    ctx->pc = 0x1B1C7Cu;
label_1b1c7c:
    // 0x1b1c7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b1c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1c84:
    // 0x1b1c84: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B1C84u;
    SET_GPR_U32(ctx, 31, 0x1B1C8Cu);
    ctx->pc = 0x1B1C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C84u;
    // 0x1b1c88: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B1C84u, 0x1B1C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C8Cu;
label_1b1c8c:
    // 0x1b1c8c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1b1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b1c90: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b1c90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b1c94: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b1c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c98: 0x26e70100  addiu       $a3, $s7, 0x100
    ctx->pc = 0x1b1c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 256));
    // 0x1b1c9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b1c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ca0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b1ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ca4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1b1ca4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ca8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b1ca8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1cac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b1cacu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1cb0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b1cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b1cb4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1b1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b1cb8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b1cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b1cbc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1b1cc0: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b1cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b1cc4: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B1CC4u;
    SET_GPR_U32(ctx, 31, 0x1B1CCCu);
    ctx->pc = 0x1B1CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1CC4u;
    // 0x1b1cc8: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B1CC4u, 0x1B1CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1CCCu;
label_1b1ccc:
    // 0x1b1ccc: 0x8fa602a0  lw          $a2, 0x2A0($sp)
    ctx->pc = 0x1b1cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b1cd0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b1cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b1cd4: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x1b1cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x1b1cd8: 0xc061fa8  jal         func_187EA0
    ctx->pc = 0x1B1CD8u;
    SET_GPR_U32(ctx, 31, 0x1B1CE0u);
    ctx->pc = 0x1B1CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1CD8u;
    // 0x1b1cdc: 0x24a50c38  addiu       $a1, $a1, 0xC38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B1CD8u, 0x1B1CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1CE0u;
label_1b1ce0:
    // 0x1b1ce0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b1ce4: 0x26480080  addiu       $t0, $s2, 0x80
    ctx->pc = 0x1b1ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x1b1ce8: 0x8fab0388  lw          $t3, 0x388($sp)
    ctx->pc = 0x1b1ce8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
    // 0x1b1cec: 0x26e90100  addiu       $t1, $s7, 0x100
    ctx->pc = 0x1b1cecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), 256));
    // 0x1b1cf0: 0x8faa038c  lw          $t2, 0x38C($sp)
    ctx->pc = 0x1b1cf0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 908)));
    // 0x1b1cf4: 0x27a40408  addiu       $a0, $sp, 0x408
    ctx->pc = 0x1b1cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1032));
    // 0x1b1cf8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b1cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1cfc: 0x27a603e0  addiu       $a2, $sp, 0x3E0
    ctx->pc = 0x1b1cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x1b1d00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b1d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d04: 0xafa20408  sw          $v0, 0x408($sp)
    ctx->pc = 0x1b1d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 2));
    // 0x1b1d08: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b1d0c: 0xafa2040c  sw          $v0, 0x40C($sp)
    ctx->pc = 0x1b1d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1036), GPR_U32(ctx, 2));
    // 0x1b1d10: 0xc06becc  jal         func_1AFB30
    ctx->pc = 0x1B1D10u;
    SET_GPR_U32(ctx, 31, 0x1B1D18u);
    ctx->pc = 0x1B1D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1D10u;
    // 0x1b1d14: 0xffb60000  sd          $s6, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB30u, 0x1B1D10u, 0x1B1D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D18u;
label_1b1d18:
    // 0x1b1d18: 0x8fa2038c  lw          $v0, 0x38C($sp)
    ctx->pc = 0x1b1d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 908)));
    // 0x1b1d1c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b1d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b1d20: 0x8fa203d4  lw          $v0, 0x3D4($sp)
    ctx->pc = 0x1b1d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 980)));
    // 0x1b1d24: 0xafa20340  sw          $v0, 0x340($sp)
    ctx->pc = 0x1b1d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 2));
    // 0x1b1d28: 0x8fa2038c  lw          $v0, 0x38C($sp)
    ctx->pc = 0x1b1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 908)));
    // 0x1b1d2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b1d30: 0xafa20350  sw          $v0, 0x350($sp)
    ctx->pc = 0x1b1d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 2));
    // 0x1b1d34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1d38: 0x8fa20350  lw          $v0, 0x350($sp)
    ctx->pc = 0x1b1d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1b1d3c: 0x8ede00b8  lw          $fp, 0xB8($s6)
    ctx->pc = 0x1b1d3cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 184)));
    // 0x1b1d40: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b1d40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b1d44: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1b1d44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b1d48: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b1d4c: 0xafa202d0  sw          $v0, 0x2D0($sp)
    ctx->pc = 0x1b1d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 2));
    // 0x1b1d50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1d54: 0x93c40063  lbu         $a0, 0x63($fp)
    ctx->pc = 0x1b1d54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 99)));
    // 0x1b1d58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b1d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b1d5c: 0xdfc20060  ld          $v0, 0x60($fp)
    ctx->pc = 0x1b1d5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1b1d60: 0x426bc  dsll32      $a0, $a0, 26
    ctx->pc = 0x1b1d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 26));
    // 0x1b1d64: 0x4273e  dsrl32      $a0, $a0, 28
    ctx->pc = 0x1b1d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 28));
    // 0x1b1d68: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1b1d68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b1d6c: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b1d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b1d70: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b1d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b1d74: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1b1d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b1d78: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1b1d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b1d7c: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x1b1d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x1b1d80: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1b1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b1d84: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1b1d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x1b1d88: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1b1d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b1d8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b1d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b1d90: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b1d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b1d94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b1d94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b1d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1d9c: 0x0  nop
    ctx->pc = 0x1b1d9cu;
    // NOP
    // 0x1b1da0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b1da0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b1da4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b1da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b1da8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b1da8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b1dac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1dacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b1db0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b1db0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b1db4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1db4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b1db8: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1b1db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1b1dbc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b1dbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b1dc0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B1DC0u;
    {
        const bool branch_taken_0x1b1dc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DC0u;
        // 0x1b1dc4: 0xafa20130  sw          $v0, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1dc0) {
            ctx->pc = 0x1B1E18u;
            goto label_1b1e18;
        }
    }
    ctx->pc = 0x1B1DC8u;
    // 0x1b1dc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1dcc: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b1dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b1dd0: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b1dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b1dd4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1dd8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b1ddc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1DDCu;
    {
        const bool branch_taken_0x1b1ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ddc) {
            ctx->pc = 0x1B1DF0u;
            goto label_1b1df0;
        }
    }
    ctx->pc = 0x1B1DE4u;
    // 0x1b1de4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b1de8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1dec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b1df0:
    // 0x1b1df0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1DF0u;
    {
        const bool branch_taken_0x1b1df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1df0) {
            ctx->pc = 0x1B1E08u;
            goto label_1b1e08;
        }
    }
    ctx->pc = 0x1B1DF8u;
    // 0x1b1df8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b1df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b1dfc: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x1b1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1b1e00: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b1e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b1e04: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1e04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b1e08:
    // 0x1b1e08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1E08u;
    {
        const bool branch_taken_0x1b1e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E08u;
        // 0x1b1e0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e08) {
            ctx->pc = 0x1B1E1Cu;
            goto label_1b1e1c;
        }
    }
    ctx->pc = 0x1B1E10u;
    // 0x1b1e10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1E10u;
    {
        const bool branch_taken_0x1b1e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E10u;
        // 0x1b1e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e10) {
            ctx->pc = 0x1B1E1Cu;
            goto label_1b1e1c;
        }
    }
    ctx->pc = 0x1B1E18u;
label_1b1e18:
    // 0x1b1e18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b1e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1e1c:
    // 0x1b1e1c: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B1E1Cu;
    SET_GPR_U32(ctx, 31, 0x1B1E24u);
    ctx->pc = 0x1B1E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E1Cu;
    // 0x1b1e20: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B1E1Cu, 0x1B1E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E24u;
label_1b1e24:
    // 0x1b1e24: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B1E24u;
    {
        const bool branch_taken_0x1b1e24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1e24) {
            ctx->pc = 0x1B1E7Cu;
            goto label_1b1e7c;
        }
    }
    ctx->pc = 0x1B1E2Cu;
    // 0x1b1e2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b1e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1e30: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b1e34: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b1e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b1e38: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1e3c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b1e40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1E40u;
    {
        const bool branch_taken_0x1b1e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1e40) {
            ctx->pc = 0x1B1E54u;
            goto label_1b1e54;
        }
    }
    ctx->pc = 0x1B1E48u;
    // 0x1b1e48: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b1e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b1e4c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1e50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b1e54:
    // 0x1b1e54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1E54u;
    {
        const bool branch_taken_0x1b1e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1e54) {
            ctx->pc = 0x1B1E6Cu;
            goto label_1b1e6c;
        }
    }
    ctx->pc = 0x1B1E5Cu;
    // 0x1b1e5c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b1e60: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x1b1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1b1e64: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b1e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b1e68: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1e68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b1e6c:
    // 0x1b1e6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1E6Cu;
    {
        const bool branch_taken_0x1b1e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1e6c) {
            ctx->pc = 0x1B1E7Cu;
            goto label_1b1e7c;
        }
    }
    ctx->pc = 0x1B1E74u;
    // 0x1b1e74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1E74u;
    {
        const bool branch_taken_0x1b1e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E74u;
        // 0x1b1e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e74) {
            ctx->pc = 0x1B1E84u;
            goto label_1b1e84;
        }
    }
    ctx->pc = 0x1B1E7Cu;
label_1b1e7c:
    // 0x1b1e7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b1e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1e84:
    // 0x1b1e84: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B1E84u;
    SET_GPR_U32(ctx, 31, 0x1B1E8Cu);
    ctx->pc = 0x1B1E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E84u;
    // 0x1b1e88: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B1E84u, 0x1B1E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E8Cu;
label_1b1e8c:
    // 0x1b1e8c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1b1e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b1e90: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b1e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b1e94: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1b1e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b1e98: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1b1e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b1e9c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b1e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b1ea0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b1ea4: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1b1ea4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1b1ea8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b1ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b1eac: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x1b1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1b1eb0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1EB0u;
    {
        const bool branch_taken_0x1b1eb0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EB0u;
        // 0x1b1eb4: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1eb0) {
            ctx->pc = 0x1B1EC0u;
            goto label_1b1ec0;
        }
    }
    ctx->pc = 0x1B1EB8u;
    // 0x1b1eb8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b1ebc: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1b1ebcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_1b1ec0:
    // 0x1b1ec0: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x1b1ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b1ec4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b1ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b1ec8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b1ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b1ecc: 0x2643fec0  addiu       $v1, $s2, -0x140
    ctx->pc = 0x1b1eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966976));
    // 0x1b1ed0: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1b1ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b1ed4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1ED4u;
    {
        const bool branch_taken_0x1b1ed4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1ED4u;
        // 0x1b1ed8: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ed4) {
            ctx->pc = 0x1B1EE4u;
            goto label_1b1ee4;
        }
    }
    ctx->pc = 0x1B1EDCu;
    // 0x1b1edc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b1ee0: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1b1ee0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_1b1ee4:
    // 0x1b1ee4: 0x8fa80140  lw          $t0, 0x140($sp)
    ctx->pc = 0x1b1ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b1ee8: 0x26e2fe80  addiu       $v0, $s7, -0x180
    ctx->pc = 0x1b1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966912));
    // 0x1b1eec: 0x8fa90130  lw          $t1, 0x130($sp)
    ctx->pc = 0x1b1eecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b1ef0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b1ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ef4: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x1b1ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1ef8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b1ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1efc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b1efcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f00: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B1F00u;
    SET_GPR_U32(ctx, 31, 0x1B1F08u);
    ctx->pc = 0x1B1F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F00u;
    // 0x1b1f04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B1F00u, 0x1B1F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F08u;
label_1b1f08:
    // 0x1b1f08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1f0c: 0x8ede00f8  lw          $fp, 0xF8($s6)
    ctx->pc = 0x1b1f0cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 248)));
    // 0x1b1f10: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b1f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b1f14: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b1f14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b1f18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1f1c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b1f20: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x1b1f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
    // 0x1b1f24: 0x93c40063  lbu         $a0, 0x63($fp)
    ctx->pc = 0x1b1f24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 99)));
    // 0x1b1f28: 0xdfc20060  ld          $v0, 0x60($fp)
    ctx->pc = 0x1b1f28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1b1f2c: 0x426bc  dsll32      $a0, $a0, 26
    ctx->pc = 0x1b1f2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 26));
    // 0x1b1f30: 0x4273e  dsrl32      $a0, $a0, 28
    ctx->pc = 0x1b1f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 28));
    // 0x1b1f34: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b1f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b1f38: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1b1f38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b1f3c: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b1f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b1f40: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1b1f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b1f44: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1b1f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b1f48: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x1b1f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x1b1f4c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1b1f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b1f50: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x1b1f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x1b1f54: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1b1f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1b1f58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b1f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b1f5c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1b1f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1b1f60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b1f60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b1f64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1f68: 0x0  nop
    ctx->pc = 0x1b1f68u;
    // NOP
    // 0x1b1f6c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b1f6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b1f70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b1f70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b1f74: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b1f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b1f78: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1f78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b1f7c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b1f7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b1f80: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1f80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b1f84: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1b1f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1b1f88: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b1f88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b1f8c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B1F8Cu;
    {
        const bool branch_taken_0x1b1f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F8Cu;
        // 0x1b1f90: 0xafa20170  sw          $v0, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f8c) {
            ctx->pc = 0x1B1FE4u;
            goto label_1b1fe4;
        }
    }
    ctx->pc = 0x1B1F94u;
    // 0x1b1f94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1f98: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b1f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b1f9c: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b1f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b1fa0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1fa4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b1fa8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1FA8u;
    {
        const bool branch_taken_0x1b1fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1fa8) {
            ctx->pc = 0x1B1FBCu;
            goto label_1b1fbc;
        }
    }
    ctx->pc = 0x1B1FB0u;
    // 0x1b1fb0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b1fb4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1fb8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b1fbc:
    // 0x1b1fbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1FBCu;
    {
        const bool branch_taken_0x1b1fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1fbc) {
            ctx->pc = 0x1B1FD4u;
            goto label_1b1fd4;
        }
    }
    ctx->pc = 0x1B1FC4u;
    // 0x1b1fc4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b1fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b1fc8: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x1b1fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1b1fcc: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b1fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b1fd0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b1fd4:
    // 0x1b1fd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1FD4u;
    {
        const bool branch_taken_0x1b1fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FD4u;
        // 0x1b1fd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1fd4) {
            ctx->pc = 0x1B1FE8u;
            goto label_1b1fe8;
        }
    }
    ctx->pc = 0x1B1FDCu;
    // 0x1b1fdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1FDCu;
    {
        const bool branch_taken_0x1b1fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FDCu;
        // 0x1b1fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1fdc) {
            ctx->pc = 0x1B1FE8u;
            goto label_1b1fe8;
        }
    }
    ctx->pc = 0x1B1FE4u;
label_1b1fe4:
    // 0x1b1fe4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b1fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1fe8:
    // 0x1b1fe8: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B1FE8u;
    SET_GPR_U32(ctx, 31, 0x1B1FF0u);
    ctx->pc = 0x1B1FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FE8u;
    // 0x1b1fec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B1FE8u, 0x1B1FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FF0u;
label_1b1ff0:
    // 0x1b1ff0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B1FF0u;
    {
        const bool branch_taken_0x1b1ff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ff0) {
            ctx->pc = 0x1B2048u;
            goto label_1b2048;
        }
    }
    ctx->pc = 0x1B1FF8u;
    // 0x1b1ff8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1ffc: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b1ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b2000: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b2000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b2004: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2008: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b200c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B200Cu;
    {
        const bool branch_taken_0x1b200c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b200c) {
            ctx->pc = 0x1B2020u;
            goto label_1b2020;
        }
    }
    ctx->pc = 0x1B2014u;
    // 0x1b2014: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b2014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b2018: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b201c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b201cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b2020:
    // 0x1b2020: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2020u;
    {
        const bool branch_taken_0x1b2020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2020) {
            ctx->pc = 0x1B2038u;
            goto label_1b2038;
        }
    }
    ctx->pc = 0x1B2028u;
    // 0x1b2028: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b2028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b202c: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x1b202cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1b2030: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b2030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b2034: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b2038:
    // 0x1b2038: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2038u;
    {
        const bool branch_taken_0x1b2038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2038) {
            ctx->pc = 0x1B2048u;
            goto label_1b2048;
        }
    }
    ctx->pc = 0x1B2040u;
    // 0x1b2040: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2040u;
    {
        const bool branch_taken_0x1b2040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2040u;
        // 0x1b2044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2040) {
            ctx->pc = 0x1B2050u;
            goto label_1b2050;
        }
    }
    ctx->pc = 0x1B2048u;
label_1b2048:
    // 0x1b2048: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b2048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b204c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b204cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2050:
    // 0x1b2050: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B2050u;
    SET_GPR_U32(ctx, 31, 0x1B2058u);
    ctx->pc = 0x1B2054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2050u;
    // 0x1b2054: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B2050u, 0x1B2058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2058u;
label_1b2058:
    // 0x1b2058: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1b2058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1b205c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b205cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b2060: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1b2060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1b2064: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1b2064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1b2068: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b2068u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b206c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1b206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1b2070: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1b2070u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1b2074: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b2074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b2078: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x1b2078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1b207c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B207Cu;
    {
        const bool branch_taken_0x1b207c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B207Cu;
        // 0x1b2080: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b207c) {
            ctx->pc = 0x1B208Cu;
            goto label_1b208c;
        }
    }
    ctx->pc = 0x1B2084u;
    // 0x1b2084: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b2084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2088: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1b2088u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_1b208c:
    // 0x1b208c: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1b208cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b2090: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1b2090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1b2094: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b2094u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2098: 0x2643ffa0  addiu       $v1, $s2, -0x60
    ctx->pc = 0x1b2098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967200));
    // 0x1b209c: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1b209cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b20a0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B20A0u;
    {
        const bool branch_taken_0x1b20a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B20A0u;
        // 0x1b20a4: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b20a0) {
            ctx->pc = 0x1B20B0u;
            goto label_1b20b0;
        }
    }
    ctx->pc = 0x1B20A8u;
    // 0x1b20a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b20ac: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1b20acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_1b20b0:
    // 0x1b20b0: 0x8fa80180  lw          $t0, 0x180($sp)
    ctx->pc = 0x1b20b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1b20b4: 0x26e2ff80  addiu       $v0, $s7, -0x80
    ctx->pc = 0x1b20b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967168));
    // 0x1b20b8: 0x8fa90170  lw          $t1, 0x170($sp)
    ctx->pc = 0x1b20b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b20bc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b20bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20c0: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x1b20c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b20c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b20c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b20c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20cc: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B20CCu;
    SET_GPR_U32(ctx, 31, 0x1B20D4u);
    ctx->pc = 0x1B20D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B20CCu;
    // 0x1b20d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B20CCu, 0x1B20D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B20D4u;
label_1b20d4:
    // 0x1b20d4: 0x8fa20350  lw          $v0, 0x350($sp)
    ctx->pc = 0x1b20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1b20d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b20d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b20dc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1b20dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b20e0: 0x8fa203d8  lw          $v0, 0x3D8($sp)
    ctx->pc = 0x1b20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 984)));
    // 0x1b20e4: 0xafa20360  sw          $v0, 0x360($sp)
    ctx->pc = 0x1b20e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 864), GPR_U32(ctx, 2));
    // 0x1b20e8: 0x8ede0034  lw          $fp, 0x34($s6)
    ctx->pc = 0x1b20e8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x1b20ec: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b20ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b20f0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b20f4: 0xafa202f0  sw          $v0, 0x2F0($sp)
    ctx->pc = 0x1b20f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 2));
    // 0x1b20f8: 0x93c40063  lbu         $a0, 0x63($fp)
    ctx->pc = 0x1b20f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 99)));
    // 0x1b20fc: 0xdfc20060  ld          $v0, 0x60($fp)
    ctx->pc = 0x1b20fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1b2100: 0x426bc  dsll32      $a0, $a0, 26
    ctx->pc = 0x1b2100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 26));
    // 0x1b2104: 0x4273e  dsrl32      $a0, $a0, 28
    ctx->pc = 0x1b2104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 28));
    // 0x1b2108: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b2108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b210c: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1b210cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b2110: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b2110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b2114: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1b2114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b2118: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1b2118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b211c: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x1b211cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x1b2120: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1b2120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b2124: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x1b2124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
    // 0x1b2128: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1b2128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1b212c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b212cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2130: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1b2130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1b2134: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b2134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b213c: 0x0  nop
    ctx->pc = 0x1b213cu;
    // NOP
    // 0x1b2140: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1b2140u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1b2144: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b2144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b2148: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b2148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b214c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b214cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b2150: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b2150u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b2154: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b2154u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b2158: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x1b2158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
    // 0x1b215c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b215cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b2160: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B2160u;
    {
        const bool branch_taken_0x1b2160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2160u;
        // 0x1b2164: 0xafa201b0  sw          $v0, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2160) {
            ctx->pc = 0x1B21B8u;
            goto label_1b21b8;
        }
    }
    ctx->pc = 0x1B2168u;
    // 0x1b2168: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b2168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b216c: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b216cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b2170: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b2170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b2174: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2178: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b217c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B217Cu;
    {
        const bool branch_taken_0x1b217c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b217c) {
            ctx->pc = 0x1B2190u;
            goto label_1b2190;
        }
    }
    ctx->pc = 0x1B2184u;
    // 0x1b2184: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b2184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b2188: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b218c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b218cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b2190:
    // 0x1b2190: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2190u;
    {
        const bool branch_taken_0x1b2190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2190) {
            ctx->pc = 0x1B21A8u;
            goto label_1b21a8;
        }
    }
    ctx->pc = 0x1B2198u;
    // 0x1b2198: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b2198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b219c: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1b219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1b21a0: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b21a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b21a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b21a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b21a8:
    // 0x1b21a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B21A8u;
    {
        const bool branch_taken_0x1b21a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21A8u;
        // 0x1b21ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21a8) {
            ctx->pc = 0x1B21BCu;
            goto label_1b21bc;
        }
    }
    ctx->pc = 0x1B21B0u;
    // 0x1b21b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B21B0u;
    {
        const bool branch_taken_0x1b21b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21B0u;
        // 0x1b21b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21b0) {
            ctx->pc = 0x1B21BCu;
            goto label_1b21bc;
        }
    }
    ctx->pc = 0x1B21B8u;
label_1b21b8:
    // 0x1b21b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b21b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b21bc:
    // 0x1b21bc: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B21BCu;
    SET_GPR_U32(ctx, 31, 0x1B21C4u);
    ctx->pc = 0x1B21C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B21BCu;
    // 0x1b21c0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B21BCu, 0x1B21C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B21C4u;
label_1b21c4:
    // 0x1b21c4: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B21C4u;
    {
        const bool branch_taken_0x1b21c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b21c4) {
            ctx->pc = 0x1B221Cu;
            goto label_1b221c;
        }
    }
    ctx->pc = 0x1B21CCu;
    // 0x1b21cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b21ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b21d0: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b21d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b21d4: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b21d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b21d8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b21d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b21dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b21dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b21e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B21E0u;
    {
        const bool branch_taken_0x1b21e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b21e0) {
            ctx->pc = 0x1B21F4u;
            goto label_1b21f4;
        }
    }
    ctx->pc = 0x1B21E8u;
    // 0x1b21e8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b21e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b21ec: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b21ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b21f0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b21f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b21f4:
    // 0x1b21f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B21F4u;
    {
        const bool branch_taken_0x1b21f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b21f4) {
            ctx->pc = 0x1B220Cu;
            goto label_1b220c;
        }
    }
    ctx->pc = 0x1B21FCu;
    // 0x1b21fc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b21fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b2200: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1b2200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1b2204: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b2204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b2208: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b220c:
    // 0x1b220c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B220Cu;
    {
        const bool branch_taken_0x1b220c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b220c) {
            ctx->pc = 0x1B221Cu;
            goto label_1b221c;
        }
    }
    ctx->pc = 0x1B2214u;
    // 0x1b2214: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2214u;
    {
        const bool branch_taken_0x1b2214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2214u;
        // 0x1b2218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2214) {
            ctx->pc = 0x1B2224u;
            goto label_1b2224;
        }
    }
    ctx->pc = 0x1B221Cu;
label_1b221c:
    // 0x1b221c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b221cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2224:
    // 0x1b2224: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B2224u;
    SET_GPR_U32(ctx, 31, 0x1B222Cu);
    ctx->pc = 0x1B2228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2224u;
    // 0x1b2228: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B2224u, 0x1B222Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B222Cu;
label_1b222c:
    // 0x1b222c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1b222cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1b2230: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b2230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b2234: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x1b2234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1b2238: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1b2238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1b223c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b223cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2240: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1b2240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1b2244: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1b2244u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1b2248: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b2248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b224c: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x1b224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x1b2250: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2250u;
    {
        const bool branch_taken_0x1b2250 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B2254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2250u;
        // 0x1b2254: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2250) {
            ctx->pc = 0x1B2260u;
            goto label_1b2260;
        }
    }
    ctx->pc = 0x1B2258u;
    // 0x1b2258: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b2258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b225c: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1b225cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_1b2260:
    // 0x1b2260: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x1b2260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1b2264: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1b2264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1b2268: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b2268u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b226c: 0x2643ffa0  addiu       $v1, $s2, -0x60
    ctx->pc = 0x1b226cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967200));
    // 0x1b2270: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1b2270u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b2274: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2274u;
    {
        const bool branch_taken_0x1b2274 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2274u;
        // 0x1b2278: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2274) {
            ctx->pc = 0x1B2284u;
            goto label_1b2284;
        }
    }
    ctx->pc = 0x1B227Cu;
    // 0x1b227c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b227cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b2280: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1b2280u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_1b2284:
    // 0x1b2284: 0x8fa801c0  lw          $t0, 0x1C0($sp)
    ctx->pc = 0x1b2284u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1b2288: 0x26e2ff80  addiu       $v0, $s7, -0x80
    ctx->pc = 0x1b2288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967168));
    // 0x1b228c: 0x8fa901b0  lw          $t1, 0x1B0($sp)
    ctx->pc = 0x1b228cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1b2290: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b2290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2294: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x1b2294u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2298: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b2298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b229c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b229cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b22a0: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B22A0u;
    SET_GPR_U32(ctx, 31, 0x1B22A8u);
    ctx->pc = 0x1B22A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B22A0u;
    // 0x1b22a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B22A0u, 0x1B22A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B22A8u;
label_1b22a8:
    // 0x1b22a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b22a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b22ac: 0x8ede00f8  lw          $fp, 0xF8($s6)
    ctx->pc = 0x1b22acu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 248)));
    // 0x1b22b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b22b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b22b4: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b22b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b22b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b22b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b22bc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b22c0: 0xafa20300  sw          $v0, 0x300($sp)
    ctx->pc = 0x1b22c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 2));
    // 0x1b22c4: 0x93c40063  lbu         $a0, 0x63($fp)
    ctx->pc = 0x1b22c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 99)));
    // 0x1b22c8: 0xdfc20060  ld          $v0, 0x60($fp)
    ctx->pc = 0x1b22c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1b22cc: 0x426bc  dsll32      $a0, $a0, 26
    ctx->pc = 0x1b22ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 26));
    // 0x1b22d0: 0x4273e  dsrl32      $a0, $a0, 28
    ctx->pc = 0x1b22d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 28));
    // 0x1b22d4: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b22d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b22d8: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1b22d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b22dc: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b22dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b22e0: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1b22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b22e4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1b22e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b22e8: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x1b22e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x1b22ec: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1b22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b22f0: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x1b22f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x1b22f4: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x1b22f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1b22f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b22f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b22fc: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x1b22fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1b2300: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b2300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2308: 0x0  nop
    ctx->pc = 0x1b2308u;
    // NOP
    // 0x1b230c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b230cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b2310: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b2310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b2314: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b2314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b2318: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b2318u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b231c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b231cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b2320: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b2320u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b2324: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x1b2324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x1b2328: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b2328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b232c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B232Cu;
    {
        const bool branch_taken_0x1b232c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B232Cu;
        // 0x1b2330: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b232c) {
            ctx->pc = 0x1B2384u;
            goto label_1b2384;
        }
    }
    ctx->pc = 0x1B2334u;
    // 0x1b2334: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b2334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2338: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b2338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b233c: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b233cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b2340: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2344: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b2348: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2348u;
    {
        const bool branch_taken_0x1b2348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2348) {
            ctx->pc = 0x1B235Cu;
            goto label_1b235c;
        }
    }
    ctx->pc = 0x1B2350u;
    // 0x1b2350: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b2350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b2354: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2358: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b235c:
    // 0x1b235c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B235Cu;
    {
        const bool branch_taken_0x1b235c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b235c) {
            ctx->pc = 0x1B2374u;
            goto label_1b2374;
        }
    }
    ctx->pc = 0x1B2364u;
    // 0x1b2364: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b2364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b2368: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x1b2368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1b236c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b236cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b2370: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b2374:
    // 0x1b2374: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2374u;
    {
        const bool branch_taken_0x1b2374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2374u;
        // 0x1b2378: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2374) {
            ctx->pc = 0x1B2388u;
            goto label_1b2388;
        }
    }
    ctx->pc = 0x1B237Cu;
    // 0x1b237c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B237Cu;
    {
        const bool branch_taken_0x1b237c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B237Cu;
        // 0x1b2380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b237c) {
            ctx->pc = 0x1B2388u;
            goto label_1b2388;
        }
    }
    ctx->pc = 0x1B2384u;
label_1b2384:
    // 0x1b2384: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b2384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2388:
    // 0x1b2388: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B2388u;
    SET_GPR_U32(ctx, 31, 0x1B2390u);
    ctx->pc = 0x1B238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2388u;
    // 0x1b238c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B2388u, 0x1B2390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2390u;
label_1b2390:
    // 0x1b2390: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B2390u;
    {
        const bool branch_taken_0x1b2390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2390) {
            ctx->pc = 0x1B23E8u;
            goto label_1b23e8;
        }
    }
    ctx->pc = 0x1B2398u;
    // 0x1b2398: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b2398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b239c: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b239cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b23a0: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b23a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b23a4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b23a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b23a8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b23a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b23ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B23ACu;
    {
        const bool branch_taken_0x1b23ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b23ac) {
            ctx->pc = 0x1B23C0u;
            goto label_1b23c0;
        }
    }
    ctx->pc = 0x1B23B4u;
    // 0x1b23b4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b23b8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b23b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b23bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b23bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b23c0:
    // 0x1b23c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B23C0u;
    {
        const bool branch_taken_0x1b23c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b23c0) {
            ctx->pc = 0x1B23D8u;
            goto label_1b23d8;
        }
    }
    ctx->pc = 0x1B23C8u;
    // 0x1b23c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b23c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b23cc: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x1b23ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1b23d0: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b23d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b23d4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b23d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b23d8:
    // 0x1b23d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B23D8u;
    {
        const bool branch_taken_0x1b23d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b23d8) {
            ctx->pc = 0x1B23E8u;
            goto label_1b23e8;
        }
    }
    ctx->pc = 0x1B23E0u;
    // 0x1b23e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B23E0u;
    {
        const bool branch_taken_0x1b23e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B23E0u;
        // 0x1b23e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23e0) {
            ctx->pc = 0x1B23F0u;
            goto label_1b23f0;
        }
    }
    ctx->pc = 0x1B23E8u;
label_1b23e8:
    // 0x1b23e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b23e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b23ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b23f0:
    // 0x1b23f0: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B23F0u;
    SET_GPR_U32(ctx, 31, 0x1B23F8u);
    ctx->pc = 0x1B23F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B23F0u;
    // 0x1b23f4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B23F0u, 0x1B23F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B23F8u;
label_1b23f8:
    // 0x1b23f8: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x1b23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1b23fc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b23fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b2400: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x1b2400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1b2404: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x1b2404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1b2408: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b2408u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b240c: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x1b240cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1b2410: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1b2410u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1b2414: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b2414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b2418: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x1b2418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x1b241c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B241Cu;
    {
        const bool branch_taken_0x1b241c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B241Cu;
        // 0x1b2420: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b241c) {
            ctx->pc = 0x1B242Cu;
            goto label_1b242c;
        }
    }
    ctx->pc = 0x1B2424u;
    // 0x1b2424: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b2424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2428: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1b2428u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_1b242c:
    // 0x1b242c: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1b242cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1b2430: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x1b2430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1b2434: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b2434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2438: 0x2643ffa0  addiu       $v1, $s2, -0x60
    ctx->pc = 0x1b2438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967200));
    // 0x1b243c: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1b243cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b2440: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2440u;
    {
        const bool branch_taken_0x1b2440 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2440u;
        // 0x1b2444: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2440) {
            ctx->pc = 0x1B2450u;
            goto label_1b2450;
        }
    }
    ctx->pc = 0x1B2448u;
    // 0x1b2448: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b244c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1b244cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_1b2450:
    // 0x1b2450: 0x8fa80200  lw          $t0, 0x200($sp)
    ctx->pc = 0x1b2450u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1b2454: 0x26e2ff80  addiu       $v0, $s7, -0x80
    ctx->pc = 0x1b2454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967168));
    // 0x1b2458: 0x8fa901f0  lw          $t1, 0x1F0($sp)
    ctx->pc = 0x1b2458u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1b245c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b245cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2460: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x1b2460u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2464: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b2464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2468: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b2468u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b246c: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B246Cu;
    SET_GPR_U32(ctx, 31, 0x1B2474u);
    ctx->pc = 0x1B2470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B246Cu;
    // 0x1b2470: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B246Cu, 0x1B2474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2474u;
label_1b2474:
    // 0x1b2474: 0x8fa20350  lw          $v0, 0x350($sp)
    ctx->pc = 0x1b2474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1b2478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b247c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1b247cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b2480: 0x8fa203dc  lw          $v0, 0x3DC($sp)
    ctx->pc = 0x1b2480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 988)));
    // 0x1b2484: 0xafa20370  sw          $v0, 0x370($sp)
    ctx->pc = 0x1b2484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 880), GPR_U32(ctx, 2));
    // 0x1b2488: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b248c: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1b248cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1b2490: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b2490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b2494: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b2494u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b2498: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b2498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b249c: 0xafa20310  sw          $v0, 0x310($sp)
    ctx->pc = 0x1b249cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 2));
    // 0x1b24a0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1b24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b24a4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1b24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1b24a8: 0x8c5e007c  lw          $fp, 0x7C($v0)
    ctx->pc = 0x1b24a8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1b24ac: 0x93c40063  lbu         $a0, 0x63($fp)
    ctx->pc = 0x1b24acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 99)));
    // 0x1b24b0: 0xdfc20060  ld          $v0, 0x60($fp)
    ctx->pc = 0x1b24b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1b24b4: 0x426bc  dsll32      $a0, $a0, 26
    ctx->pc = 0x1b24b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 26));
    // 0x1b24b8: 0x4273e  dsrl32      $a0, $a0, 28
    ctx->pc = 0x1b24b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 28));
    // 0x1b24bc: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b24bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b24c0: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1b24c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b24c4: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b24c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b24c8: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1b24c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b24cc: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1b24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b24d0: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x1b24d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
    // 0x1b24d4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1b24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b24d8: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x1b24d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
    // 0x1b24dc: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1b24dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1b24e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b24e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b24e4: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x1b24e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1b24e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b24e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b24ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b24ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b24f0: 0x0  nop
    ctx->pc = 0x1b24f0u;
    // NOP
    // 0x1b24f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b24f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b24f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b24f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b24fc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b24fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b2500: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b2500u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b2504: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b2504u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b2508: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b2508u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b250c: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x1b250cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x1b2510: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b2510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b2514: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B2514u;
    {
        const bool branch_taken_0x1b2514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2514u;
        // 0x1b2518: 0xafa20230  sw          $v0, 0x230($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2514) {
            ctx->pc = 0x1B256Cu;
            goto label_1b256c;
        }
    }
    ctx->pc = 0x1B251Cu;
    // 0x1b251c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b251cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2520: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b2520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b2524: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b2524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b2528: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b252c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b252cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b2530: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2530u;
    {
        const bool branch_taken_0x1b2530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2530) {
            ctx->pc = 0x1B2544u;
            goto label_1b2544;
        }
    }
    ctx->pc = 0x1B2538u;
    // 0x1b2538: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b2538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b253c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b253cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2540: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b2544:
    // 0x1b2544: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2544u;
    {
        const bool branch_taken_0x1b2544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2544) {
            ctx->pc = 0x1B255Cu;
            goto label_1b255c;
        }
    }
    ctx->pc = 0x1B254Cu;
    // 0x1b254c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b254cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b2550: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x1b2550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1b2554: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b2554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b2558: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b255c:
    // 0x1b255c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B255Cu;
    {
        const bool branch_taken_0x1b255c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B255Cu;
        // 0x1b2560: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b255c) {
            ctx->pc = 0x1B2570u;
            goto label_1b2570;
        }
    }
    ctx->pc = 0x1B2564u;
    // 0x1b2564: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2564u;
    {
        const bool branch_taken_0x1b2564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2564u;
        // 0x1b2568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2564) {
            ctx->pc = 0x1B2570u;
            goto label_1b2570;
        }
    }
    ctx->pc = 0x1B256Cu;
label_1b256c:
    // 0x1b256c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b256cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2570:
    // 0x1b2570: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B2570u;
    SET_GPR_U32(ctx, 31, 0x1B2578u);
    ctx->pc = 0x1B2574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2570u;
    // 0x1b2574: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B2570u, 0x1B2578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2578u;
label_1b2578:
    // 0x1b2578: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B2578u;
    {
        const bool branch_taken_0x1b2578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2578) {
            ctx->pc = 0x1B25D0u;
            goto label_1b25d0;
        }
    }
    ctx->pc = 0x1B2580u;
    // 0x1b2580: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b2580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2584: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b2584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b2588: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b2588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b258c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b258cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2590: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b2594: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2594u;
    {
        const bool branch_taken_0x1b2594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2594) {
            ctx->pc = 0x1B25A8u;
            goto label_1b25a8;
        }
    }
    ctx->pc = 0x1B259Cu;
    // 0x1b259c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b25a0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b25a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b25a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b25a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b25a8:
    // 0x1b25a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B25A8u;
    {
        const bool branch_taken_0x1b25a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b25a8) {
            ctx->pc = 0x1B25C0u;
            goto label_1b25c0;
        }
    }
    ctx->pc = 0x1B25B0u;
    // 0x1b25b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b25b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b25b4: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x1b25b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1b25b8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b25b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b25bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b25bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b25c0:
    // 0x1b25c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B25C0u;
    {
        const bool branch_taken_0x1b25c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b25c0) {
            ctx->pc = 0x1B25D0u;
            goto label_1b25d0;
        }
    }
    ctx->pc = 0x1B25C8u;
    // 0x1b25c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B25C8u;
    {
        const bool branch_taken_0x1b25c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B25CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B25C8u;
        // 0x1b25cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b25c8) {
            ctx->pc = 0x1B25D8u;
            goto label_1b25d8;
        }
    }
    ctx->pc = 0x1B25D0u;
label_1b25d0:
    // 0x1b25d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b25d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b25d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b25d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b25d8:
    // 0x1b25d8: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B25D8u;
    SET_GPR_U32(ctx, 31, 0x1B25E0u);
    ctx->pc = 0x1B25DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B25D8u;
    // 0x1b25dc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B25D8u, 0x1B25E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B25E0u;
label_1b25e0:
    // 0x1b25e0: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1b25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1b25e4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b25e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b25e8: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x1b25e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1b25ec: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1b25ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1b25f0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b25f4: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x1b25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1b25f8: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1b25f8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1b25fc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b25fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b2600: 0x8fa20370  lw          $v0, 0x370($sp)
    ctx->pc = 0x1b2600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x1b2604: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2604u;
    {
        const bool branch_taken_0x1b2604 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2604u;
        // 0x1b2608: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2604) {
            ctx->pc = 0x1B2614u;
            goto label_1b2614;
        }
    }
    ctx->pc = 0x1B260Cu;
    // 0x1b260c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b260cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2610: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1b2610u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_1b2614:
    // 0x1b2614: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1b2614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1b2618: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x1b2618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1b261c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b261cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2620: 0x2643ffa0  addiu       $v1, $s2, -0x60
    ctx->pc = 0x1b2620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967200));
    // 0x1b2624: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1b2624u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b2628: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2628u;
    {
        const bool branch_taken_0x1b2628 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2628u;
        // 0x1b262c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2628) {
            ctx->pc = 0x1B2638u;
            goto label_1b2638;
        }
    }
    ctx->pc = 0x1B2630u;
    // 0x1b2630: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b2634: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1b2634u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_1b2638:
    // 0x1b2638: 0x8fa80240  lw          $t0, 0x240($sp)
    ctx->pc = 0x1b2638u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1b263c: 0x26e2ff80  addiu       $v0, $s7, -0x80
    ctx->pc = 0x1b263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967168));
    // 0x1b2640: 0x8fa90230  lw          $t1, 0x230($sp)
    ctx->pc = 0x1b2640u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1b2644: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b2644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2648: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x1b2648u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b264c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b264cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2650: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b2650u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2654: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B2654u;
    SET_GPR_U32(ctx, 31, 0x1B265Cu);
    ctx->pc = 0x1B2658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2654u;
    // 0x1b2658: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B2654u, 0x1B265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B265Cu;
label_1b265c:
    // 0x1b265c: 0x8ed600f8  lw          $s6, 0xF8($s6)
    ctx->pc = 0x1b265cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 248)));
    // 0x1b2660: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b2660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2664: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b2664u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b2668: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b2668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b266c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b266cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b2670: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b2670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2674: 0xafa20320  sw          $v0, 0x320($sp)
    ctx->pc = 0x1b2674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 2));
    // 0x1b2678: 0x92c30063  lbu         $v1, 0x63($s6)
    ctx->pc = 0x1b2678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 99)));
    // 0x1b267c: 0xdec20060  ld          $v0, 0x60($s6)
    ctx->pc = 0x1b267cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x1b2680: 0x31ebc  dsll32      $v1, $v1, 26
    ctx->pc = 0x1b2680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 26));
    // 0x1b2684: 0x31f3e  dsrl32      $v1, $v1, 28
    ctx->pc = 0x1b2684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 28));
    // 0x1b2688: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b2688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b268c: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x1b268cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x1b2690: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b2690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b2694: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x1b2694u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b2698: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1b2698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b269c: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1b269cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b26a0: 0x2f100  sll         $fp, $v0, 4
    ctx->pc = 0x1b26a0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b26a4: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x1b26a4u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b26a8: 0x0  nop
    ctx->pc = 0x1b26a8u;
    // NOP
    // 0x1b26ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b26acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b26b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b26b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b26b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b26b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b26b8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b26b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b26bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b26bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b26c0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b26c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b26c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b26c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b26c8: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x1b26c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
    // 0x1b26cc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b26ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b26d0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B26D0u;
    {
        const bool branch_taken_0x1b26d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26D0u;
        // 0x1b26d4: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26d0) {
            ctx->pc = 0x1B2728u;
            goto label_1b2728;
        }
    }
    ctx->pc = 0x1B26D8u;
    // 0x1b26d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b26dc: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b26dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b26e0: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b26e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b26e4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b26e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b26e8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b26e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b26ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B26ECu;
    {
        const bool branch_taken_0x1b26ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b26ec) {
            ctx->pc = 0x1B2700u;
            goto label_1b2700;
        }
    }
    ctx->pc = 0x1B26F4u;
    // 0x1b26f4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b26f8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b26f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b26fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b26fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b2700:
    // 0x1b2700: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2700u;
    {
        const bool branch_taken_0x1b2700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2700) {
            ctx->pc = 0x1B2718u;
            goto label_1b2718;
        }
    }
    ctx->pc = 0x1B2708u;
    // 0x1b2708: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b2708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b270c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1b270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1b2710: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b2710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b2714: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b2718:
    // 0x1b2718: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2718u;
    {
        const bool branch_taken_0x1b2718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2718u;
        // 0x1b271c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2718) {
            ctx->pc = 0x1B272Cu;
            goto label_1b272c;
        }
    }
    ctx->pc = 0x1B2720u;
    // 0x1b2720: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2720u;
    {
        const bool branch_taken_0x1b2720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2720u;
        // 0x1b2724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2720) {
            ctx->pc = 0x1B272Cu;
            goto label_1b272c;
        }
    }
    ctx->pc = 0x1B2728u;
label_1b2728:
    // 0x1b2728: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b2728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b272c:
    // 0x1b272c: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B272Cu;
    SET_GPR_U32(ctx, 31, 0x1B2734u);
    ctx->pc = 0x1B2730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B272Cu;
    // 0x1b2730: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B272Cu, 0x1B2734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2734u;
label_1b2734:
    // 0x1b2734: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B2734u;
    {
        const bool branch_taken_0x1b2734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2734) {
            ctx->pc = 0x1B278Cu;
            goto label_1b278c;
        }
    }
    ctx->pc = 0x1B273Cu;
    // 0x1b273c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2740: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b2740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b2744: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b2744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b2748: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b274c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b274cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b2750: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2750u;
    {
        const bool branch_taken_0x1b2750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2750) {
            ctx->pc = 0x1B2764u;
            goto label_1b2764;
        }
    }
    ctx->pc = 0x1B2758u;
    // 0x1b2758: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b2758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b275c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b275cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2760: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b2764:
    // 0x1b2764: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2764u;
    {
        const bool branch_taken_0x1b2764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2764) {
            ctx->pc = 0x1B277Cu;
            goto label_1b277c;
        }
    }
    ctx->pc = 0x1B276Cu;
    // 0x1b276c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b276cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b2770: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1b2770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1b2774: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b2774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b2778: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b277c:
    // 0x1b277c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B277Cu;
    {
        const bool branch_taken_0x1b277c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b277c) {
            ctx->pc = 0x1B278Cu;
            goto label_1b278c;
        }
    }
    ctx->pc = 0x1B2784u;
    // 0x1b2784: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2784u;
    {
        const bool branch_taken_0x1b2784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2784u;
        // 0x1b2788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2784) {
            ctx->pc = 0x1B2794u;
            goto label_1b2794;
        }
    }
    ctx->pc = 0x1B278Cu;
label_1b278c:
    // 0x1b278c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b278cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2794:
    // 0x1b2794: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B2794u;
    SET_GPR_U32(ctx, 31, 0x1B279Cu);
    ctx->pc = 0x1B2798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2794u;
    // 0x1b2798: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B2794u, 0x1B279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B279Cu;
label_1b279c:
    // 0x1b279c: 0xffb30000  sd          $s3, 0x0($sp)
    ctx->pc = 0x1b279cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
    // 0x1b27a0: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x1b27a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1b27a4: 0x732023  subu        $a0, $v1, $s3
    ctx->pc = 0x1b27a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1b27a8: 0xffbe0008  sd          $fp, 0x8($sp)
    ctx->pc = 0x1b27a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 30));
    // 0x1b27ac: 0x8fa30370  lw          $v1, 0x370($sp)
    ctx->pc = 0x1b27acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x1b27b0: 0x42843  sra         $a1, $a0, 1
    ctx->pc = 0x1b27b0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1b27b4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B27B4u;
    {
        const bool branch_taken_0x1b27b4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B27B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27B4u;
        // 0x1b27b8: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27b4) {
            ctx->pc = 0x1B27C4u;
            goto label_1b27c4;
        }
    }
    ctx->pc = 0x1B27BCu;
    // 0x1b27bc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1b27bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b27c0: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x1b27c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
label_1b27c4:
    // 0x1b27c4: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x1b27c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1b27c8: 0x2644ffa0  addiu       $a0, $s2, -0x60
    ctx->pc = 0x1b27c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967200));
    // 0x1b27cc: 0x853023  subu        $a2, $a0, $a1
    ctx->pc = 0x1b27ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b27d0: 0x7e1823  subu        $v1, $v1, $fp
    ctx->pc = 0x1b27d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1b27d4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B27D4u;
    {
        const bool branch_taken_0x1b27d4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B27D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27D4u;
        // 0x1b27d8: 0x32843  sra         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27d4) {
            ctx->pc = 0x1B27E4u;
            goto label_1b27e4;
        }
    }
    ctx->pc = 0x1B27DCu;
    // 0x1b27dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b27dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b27e0: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x1b27e0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
label_1b27e4:
    // 0x1b27e4: 0x8fa80280  lw          $t0, 0x280($sp)
    ctx->pc = 0x1b27e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1b27e8: 0x26e3ff80  addiu       $v1, $s7, -0x80
    ctx->pc = 0x1b27e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967168));
    // 0x1b27ec: 0x8fa90270  lw          $t1, 0x270($sp)
    ctx->pc = 0x1b27ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1b27f0: 0x653823  subu        $a3, $v1, $a1
    ctx->pc = 0x1b27f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b27f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b27f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b27f8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b27f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b27fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b27fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2800: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B2800u;
    SET_GPR_U32(ctx, 31, 0x1B2808u);
    ctx->pc = 0x1B2804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2800u;
    // 0x1b2804: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B2800u, 0x1B2808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2808u;
label_1b2808:
    // 0x1b2808: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b2808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b280c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b280cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2810:
    // 0x1b2810: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x1b2810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1b2814: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x1b2814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1b2818: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1b2818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b281c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B281Cu;
    {
        const bool branch_taken_0x1b281c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b281c) {
            ctx->pc = 0x1B282Cu;
            goto label_1b282c;
        }
    }
    ctx->pc = 0x1B2824u;
    // 0x1b2824: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b2824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2828: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1b2828u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1b282c:
    // 0x1b282c: 0x0  nop
    ctx->pc = 0x1b282cu;
    // NOP
    // 0x1b2830: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b2830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b2834: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x1b2834u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b2838: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B2838u;
    {
        const bool branch_taken_0x1b2838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2838u;
        // 0x1b283c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2838) {
            ctx->pc = 0x1B2810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2810;
        }
    }
    ctx->pc = 0x1B2840u;
    // 0x1b2840: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1b2840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1b2844: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b2844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2848: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x1b2848u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x1b284c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1b284cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1b2850: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1b2850u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1b2854: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1b2854u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b2858: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2858u;
    {
        const bool branch_taken_0x1b2858 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2858) {
            ctx->pc = 0x1B2864u;
            goto label_1b2864;
        }
    }
    ctx->pc = 0x1B2860u;
    // 0x1b2860: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1b2860u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_1b2864:
    // 0x1b2864: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1b2864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1b2868: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x1b2868u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b286c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B286Cu;
    {
        const bool branch_taken_0x1b286c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b286c) {
            ctx->pc = 0x1B2878u;
            goto label_1b2878;
        }
    }
    ctx->pc = 0x1B2874u;
    // 0x1b2874: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x1b2874u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_1b2878:
    // 0x1b2878: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x1b2878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1b287c: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x1b287cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b2880: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2880u;
    {
        const bool branch_taken_0x1b2880 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2880) {
            ctx->pc = 0x1B288Cu;
            goto label_1b288c;
        }
    }
    ctx->pc = 0x1B2888u;
    // 0x1b2888: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x1b2888u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_1b288c:
    // 0x1b288c: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1b288cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1b2890: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x1b2890u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b2894: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2894u;
    {
        const bool branch_taken_0x1b2894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2894) {
            ctx->pc = 0x1B28A0u;
            goto label_1b28a0;
        }
    }
    ctx->pc = 0x1B289Cu;
    // 0x1b289c: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x1b289cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
label_1b28a0:
    // 0x1b28a0: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x1b28a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1b28a4: 0x2861000f  slti        $at, $v1, 0xF
    ctx->pc = 0x1b28a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1b28a8: 0x142000ab  bnez        $at, . + 4 + (0xAB << 2)
    ctx->pc = 0x1B28A8u;
    {
        const bool branch_taken_0x1b28a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b28a8) {
            ctx->pc = 0x1B2B58u;
            goto label_1b2b58;
        }
    }
    ctx->pc = 0x1B28B0u;
    // 0x1b28b0: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x1B28B0u;
    {
        const bool branch_taken_0x1b28b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B28B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28B0u;
        // 0x1b28b4: 0xae800014  sw          $zero, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b28b0) {
            ctx->pc = 0x1B2B58u;
            goto label_1b2b58;
        }
    }
    ctx->pc = 0x1B28B8u;
label_1b28b8:
    // 0x1b28b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b28b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b28bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b28c0:
    // 0x1b28c0: 0x831004  sllv        $v0, $v1, $a0
    ctx->pc = 0x1b28c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b28c4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1b28c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1b28c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B28C8u;
    {
        const bool branch_taken_0x1b28c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28C8u;
        // 0x1b28cc: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b28c8) {
            ctx->pc = 0x1B28D4u;
            goto label_1b28d4;
        }
    }
    ctx->pc = 0x1B28D0u;
    // 0x1b28d0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1b28d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1b28d4:
    // 0x1b28d4: 0x0  nop
    ctx->pc = 0x1b28d4u;
    // NOP
    // 0x1b28d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b28d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b28dc: 0x1880fff8  blez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B28DCu;
    {
        const bool branch_taken_0x1b28dc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B28E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28DCu;
        // 0x1b28e0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b28dc) {
            ctx->pc = 0x1B28C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b28c0;
        }
    }
    ctx->pc = 0x1B28E4u;
    // 0x1b28e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b28e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b28e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28ec: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x1b28ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1b28f0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1b28f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b28f4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1b28f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_1b28f8:
    // 0x1b28f8: 0x28a1021  addu        $v0, $s4, $t2
    ctx->pc = 0x1b28f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
    // 0x1b28fc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b28fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b2900: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B2900u;
    {
        const bool branch_taken_0x1b2900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2900u;
        // 0x1b2904: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2900) {
            ctx->pc = 0x1B293Cu;
            goto label_1b293c;
        }
    }
    ctx->pc = 0x1B2908u;
    // 0x1b2908: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x1b2908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b290c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B290Cu;
    {
        const bool branch_taken_0x1b290c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b290c) {
            ctx->pc = 0x1B291Cu;
            goto label_1b291c;
        }
    }
    ctx->pc = 0x1B2914u;
    // 0x1b2914: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2914u;
    {
        const bool branch_taken_0x1b2914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2914) {
            ctx->pc = 0x1B2938u;
            goto label_1b2938;
        }
    }
    ctx->pc = 0x1B291Cu;
label_1b291c:
    // 0x1b291c: 0xf1001a  div         $zero, $a3, $s1
    ctx->pc = 0x1b291cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b2920: 0x0  nop
    ctx->pc = 0x1b2920u;
    // NOP
    // 0x1b2924: 0x0  nop
    ctx->pc = 0x1b2924u;
    // NOP
    // 0x1b2928: 0x1012  mflo        $v0
    ctx->pc = 0x1b2928u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b292c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1b292cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b2930: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2930u;
    {
        const bool branch_taken_0x1b2930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2930u;
        // 0x1b2934: 0xc24823  subu        $t1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2930) {
            ctx->pc = 0x1B293Cu;
            goto label_1b293c;
        }
    }
    ctx->pc = 0x1B2938u;
label_1b2938:
    // 0x1b2938: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1b2938u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b293c:
    // 0x1b293c: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x1b293cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x1b2940: 0x91a00  sll         $v1, $t1, 8
    ctx->pc = 0x1b2940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1b2944: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x1b2944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1b2948: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1b2948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1b294c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b294cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b2950: 0x15d1021  addu        $v0, $t2, $sp
    ctx->pc = 0x1b2950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x1b2954: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x1b2954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x1b2958: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1b2958u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1b295c: 0x1900ffe6  blez        $t0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1B295Cu;
    {
        const bool branch_taken_0x1b295c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1B2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B295Cu;
        // 0x1b2960: 0xac4303f8  sw          $v1, 0x3F8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1016), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b295c) {
            ctx->pc = 0x1B28F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b28f8;
        }
    }
    ctx->pc = 0x1B2964u;
    // 0x1b2964: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1b2964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1b2968: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b2968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b296c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b296cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b2970: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b2970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b2974: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b2974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b2978: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b2978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b297c: 0xafa20330  sw          $v0, 0x330($sp)
    ctx->pc = 0x1b297cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 2));
    // 0x1b2980: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b2980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b2984: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1b2984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1b2988: 0x8c5100bc  lw          $s1, 0xBC($v0)
    ctx->pc = 0x1b2988u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1b298c: 0xde220060  ld          $v0, 0x60($s1)
    ctx->pc = 0x1b298cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1b2990: 0x92230063  lbu         $v1, 0x63($s1)
    ctx->pc = 0x1b2990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 99)));
    // 0x1b2994: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b2994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b2998: 0x31ebc  dsll32      $v1, $v1, 26
    ctx->pc = 0x1b2998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 26));
    // 0x1b299c: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b299cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b29a0: 0x31f3e  dsrl32      $v1, $v1, 28
    ctx->pc = 0x1b29a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 28));
    // 0x1b29a4: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1b29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b29a8: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x1b29a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x1b29ac: 0x2b100  sll         $s6, $v0, 4
    ctx->pc = 0x1b29acu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b29b0: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x1b29b0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b29b4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x1b29b4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b29b8: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1b29b8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b29bc: 0x0  nop
    ctx->pc = 0x1b29bcu;
    // NOP
    // 0x1b29c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b29c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b29c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b29c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b29c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b29c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b29cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b29ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b29d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b29d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b29d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b29d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b29d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b29d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b29dc: 0x441e0800  mfc1        $fp, $f1
    ctx->pc = 0x1b29dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 30, bits); }
    // 0x1b29e0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B29E0u;
    {
        const bool branch_taken_0x1b29e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B29E0u;
        // 0x1b29e4: 0xafa20290  sw          $v0, 0x290($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29e0) {
            ctx->pc = 0x1B2A38u;
            goto label_1b2a38;
        }
    }
    ctx->pc = 0x1B29E8u;
    // 0x1b29e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b29e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b29ec: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b29ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b29f0: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b29f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b29f4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b29f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b29f8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b29f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b29fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B29FCu;
    {
        const bool branch_taken_0x1b29fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b29fc) {
            ctx->pc = 0x1B2A10u;
            goto label_1b2a10;
        }
    }
    ctx->pc = 0x1B2A04u;
    // 0x1b2a04: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b2a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b2a08: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2a0c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2a0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b2a10:
    // 0x1b2a10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2A10u;
    {
        const bool branch_taken_0x1b2a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a10) {
            ctx->pc = 0x1B2A28u;
            goto label_1b2a28;
        }
    }
    ctx->pc = 0x1B2A18u;
    // 0x1b2a18: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b2a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b2a1c: 0x8fa20330  lw          $v0, 0x330($sp)
    ctx->pc = 0x1b2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x1b2a20: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b2a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b2a24: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b2a28:
    // 0x1b2a28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2A28u;
    {
        const bool branch_taken_0x1b2a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A28u;
        // 0x1b2a2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a28) {
            ctx->pc = 0x1B2A3Cu;
            goto label_1b2a3c;
        }
    }
    ctx->pc = 0x1B2A30u;
    // 0x1b2a30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2A30u;
    {
        const bool branch_taken_0x1b2a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A30u;
        // 0x1b2a34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a30) {
            ctx->pc = 0x1B2A3Cu;
            goto label_1b2a3c;
        }
    }
    ctx->pc = 0x1B2A38u;
label_1b2a38:
    // 0x1b2a38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b2a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2a3c:
    // 0x1b2a3c: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B2A3Cu;
    SET_GPR_U32(ctx, 31, 0x1B2A44u);
    ctx->pc = 0x1B2A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A3Cu;
    // 0x1b2a40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B2A3Cu, 0x1B2A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A44u;
label_1b2a44:
    // 0x1b2a44: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B2A44u;
    {
        const bool branch_taken_0x1b2a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a44) {
            ctx->pc = 0x1B2A9Cu;
            goto label_1b2a9c;
        }
    }
    ctx->pc = 0x1B2A4Cu;
    // 0x1b2a4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2a50: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b2a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b2a54: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b2a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b2a58: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2a5c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b2a60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2A60u;
    {
        const bool branch_taken_0x1b2a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a60) {
            ctx->pc = 0x1B2A74u;
            goto label_1b2a74;
        }
    }
    ctx->pc = 0x1B2A68u;
    // 0x1b2a68: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b2a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b2a6c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2a70: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b2a74:
    // 0x1b2a74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2A74u;
    {
        const bool branch_taken_0x1b2a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a74) {
            ctx->pc = 0x1B2A8Cu;
            goto label_1b2a8c;
        }
    }
    ctx->pc = 0x1B2A7Cu;
    // 0x1b2a7c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b2a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b2a80: 0x8fa20330  lw          $v0, 0x330($sp)
    ctx->pc = 0x1b2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x1b2a84: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b2a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b2a88: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b2a8c:
    // 0x1b2a8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2A8Cu;
    {
        const bool branch_taken_0x1b2a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a8c) {
            ctx->pc = 0x1B2A9Cu;
            goto label_1b2a9c;
        }
    }
    ctx->pc = 0x1B2A94u;
    // 0x1b2a94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2A94u;
    {
        const bool branch_taken_0x1b2a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A94u;
        // 0x1b2a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a94) {
            ctx->pc = 0x1B2AA4u;
            goto label_1b2aa4;
        }
    }
    ctx->pc = 0x1B2A9Cu;
label_1b2a9c:
    // 0x1b2a9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b2a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2aa4:
    // 0x1b2aa4: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B2AA4u;
    SET_GPR_U32(ctx, 31, 0x1B2AACu);
    ctx->pc = 0x1B2AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2AA4u;
    // 0x1b2aa8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B2AA4u, 0x1B2AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2AACu;
label_1b2aac:
    // 0x1b2aac: 0xffb30000  sd          $s3, 0x0($sp)
    ctx->pc = 0x1b2aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
    // 0x1b2ab0: 0x3d31823  subu        $v1, $fp, $s3
    ctx->pc = 0x1b2ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x1b2ab4: 0xffb60008  sd          $s6, 0x8($sp)
    ctx->pc = 0x1b2ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 22));
    // 0x1b2ab8: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x1b2ab8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1b2abc: 0x8fa403f8  lw          $a0, 0x3F8($sp)
    ctx->pc = 0x1b2abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1016)));
    // 0x1b2ac0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2AC0u;
    {
        const bool branch_taken_0x1b2ac0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B2AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2AC0u;
        // 0x1b2ac4: 0xffa40010  sd          $a0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ac0) {
            ctx->pc = 0x1B2AD0u;
            goto label_1b2ad0;
        }
    }
    ctx->pc = 0x1B2AC8u;
    // 0x1b2ac8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2acc: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x1b2accu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
label_1b2ad0:
    // 0x1b2ad0: 0x8fa30290  lw          $v1, 0x290($sp)
    ctx->pc = 0x1b2ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1b2ad4: 0x2644ffa0  addiu       $a0, $s2, -0x60
    ctx->pc = 0x1b2ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967200));
    // 0x1b2ad8: 0x853023  subu        $a2, $a0, $a1
    ctx->pc = 0x1b2ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b2adc: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x1b2adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1b2ae0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2AE0u;
    {
        const bool branch_taken_0x1b2ae0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B2AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2AE0u;
        // 0x1b2ae4: 0x32843  sra         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ae0) {
            ctx->pc = 0x1B2AF0u;
            goto label_1b2af0;
        }
    }
    ctx->pc = 0x1B2AE8u;
    // 0x1b2ae8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b2ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2aec: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x1b2aecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
label_1b2af0:
    // 0x1b2af0: 0x8fa90290  lw          $t1, 0x290($sp)
    ctx->pc = 0x1b2af0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1b2af4: 0x26e3ff80  addiu       $v1, $s7, -0x80
    ctx->pc = 0x1b2af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967168));
    // 0x1b2af8: 0x653823  subu        $a3, $v1, $a1
    ctx->pc = 0x1b2af8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b2afc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b2afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b04: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x1b2b04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b2b08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b0c: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B2B0Cu;
    SET_GPR_U32(ctx, 31, 0x1B2B14u);
    ctx->pc = 0x1B2B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2B0Cu;
    // 0x1b2b10: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B2B0Cu, 0x1B2B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2B14u;
label_1b2b14:
    // 0x1b2b14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b2b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2b1c:
    // 0x1b2b1c: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x1b2b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1b2b20: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x1b2b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1b2b24: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1b2b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b2b28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2B28u;
    {
        const bool branch_taken_0x1b2b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2b28) {
            ctx->pc = 0x1B2B38u;
            goto label_1b2b38;
        }
    }
    ctx->pc = 0x1B2B30u;
    // 0x1b2b30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b2b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2b34: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1b2b34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1b2b38:
    // 0x1b2b38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b2b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b2b3c: 0x1880fff7  blez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B2B3Cu;
    {
        const bool branch_taken_0x1b2b3c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B3Cu;
        // 0x1b2b40: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b3c) {
            ctx->pc = 0x1B2B1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2b1c;
        }
    }
    ctx->pc = 0x1B2B44u;
    // 0x1b2b44: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1b2b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1b2b48: 0x2861000f  slti        $at, $v1, 0xF
    ctx->pc = 0x1b2b48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1b2b4c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2B4Cu;
    {
        const bool branch_taken_0x1b2b4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2b4c) {
            ctx->pc = 0x1B2B58u;
            goto label_1b2b58;
        }
    }
    ctx->pc = 0x1B2B54u;
    // 0x1b2b54: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x1b2b54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_1b2b58:
    // 0x1b2b58: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1b2b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b2b5c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1b2b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b2b60: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1b2b60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b2b64: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1b2b64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b2b68: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1b2b68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2b6c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1b2b6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b2b70: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1b2b70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b2b74: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1b2b74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b2b78: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1b2b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2b7c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b2b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2b80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b2b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2b84: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B84u;
        // 0x1b2b88: 0x27bd0410  addiu       $sp, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2B8Cu;
}
