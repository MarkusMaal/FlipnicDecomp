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

// Function: FUN_001de2b8
// Address: 0x1de2b8 - 0x1dec50
void FUN_001de2b8_0x1de2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001de2b8_0x1de2b8");
#endif

    switch (ctx->pc) {
        case 0x1de2f4u: goto label_1de2f4;
        case 0x1de308u: goto label_1de308;
        case 0x1de340u: goto label_1de340;
        case 0x1de684u: goto label_1de684;
        case 0x1de690u: goto label_1de690;
        case 0x1de6a0u: goto label_1de6a0;
        case 0x1de6bcu: goto label_1de6bc;
        case 0x1de6c8u: goto label_1de6c8;
        case 0x1de7a0u: goto label_1de7a0;
        case 0x1de7bcu: goto label_1de7bc;
        case 0x1deb00u: goto label_1deb00;
        case 0x1deb54u: goto label_1deb54;
        case 0x1deba4u: goto label_1deba4;
        case 0x1debd8u: goto label_1debd8;
        case 0x1dec04u: goto label_1dec04;
        case 0x1dec20u: goto label_1dec20;
        default: break;
    }

    ctx->pc = 0x1de2b8u;

    // 0x1de2b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1de2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1de2bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1de2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1de2c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1de2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1de2c4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1de2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1de2c8: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1de2c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de2cc: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1de2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1de2d0: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x1de2d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1de2d4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1de2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1de2d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1de2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1de2dc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1de2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1de2e0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1de2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1de2e4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1de2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1de2e8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1de2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1de2ec: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DE2ECu;
    SET_GPR_U32(ctx, 31, 0x1DE2F4u);
    ctx->pc = 0x1DE2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE2ECu;
    // 0x1de2f0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DE2ECu, 0x1DE2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE2F4u;
label_1de2f4:
    // 0x1de2f4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1de2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1de2f8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1de2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1de2fc: 0x24507330  addiu       $s0, $v0, 0x7330
    ctx->pc = 0x1de2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    // 0x1de300: 0x2612009c  addiu       $s2, $s0, 0x9C
    ctx->pc = 0x1de300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x1de304: 0x0  nop
    ctx->pc = 0x1de304u;
    // NOP
label_1de308:
    // 0x1de308: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1de308u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de30c: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x1de30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x1de310: 0x504001fc  beql        $v0, $zero, . + 4 + (0x1FC << 2)
    ctx->pc = 0x1DE310u;
    {
        const bool branch_taken_0x1de310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de310) {
            ctx->pc = 0x1DE314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE310u;
            // 0x1de314: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEB04u;
            goto label_1deb04;
        }
    }
    ctx->pc = 0x1DE318u;
    // 0x1de318: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1de318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1de31c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1de31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1de320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1de320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de324: 0x1860003c  blez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1DE324u;
    {
        const bool branch_taken_0x1de324 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1DE328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE324u;
        // 0x1de328: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de324) {
            ctx->pc = 0x1DE418u;
            goto label_1de418;
        }
    }
    ctx->pc = 0x1DE32Cu;
    // 0x1de32c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1de32cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1de330: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1DE330u;
    {
        const bool branch_taken_0x1de330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de330) {
            ctx->pc = 0x1DE418u;
            goto label_1de418;
        }
    }
    ctx->pc = 0x1DE338u;
    // 0x1de338: 0xc076352  jal         func_1D8D48
    ctx->pc = 0x1DE338u;
    SET_GPR_U32(ctx, 31, 0x1DE340u);
    ctx->pc = 0x1DE33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE338u;
    // 0x1de33c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8D48u, 0x1DE338u, 0x1DE340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE340u;
label_1de340:
    // 0x1de340: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1de340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1de344: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1DE344u;
    {
        const bool branch_taken_0x1de344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de344) {
            ctx->pc = 0x1DE348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE344u;
            // 0x1de348: 0x8e080000  lw          $t0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE418u;
            goto label_1de418;
        }
    }
    ctx->pc = 0x1DE34Cu;
    // 0x1de34c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1de34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1de350: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de354: 0x2484a000  addiu       $a0, $a0, -0x6000
    ctx->pc = 0x1de354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942720));
    // 0x1de358: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1de358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1de35c: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1de35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1de360: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1de360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1de364: 0x2483003c  addiu       $v1, $a0, 0x3C
    ctx->pc = 0x1de364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
    // 0x1de368: 0xae42ff98  sw          $v0, -0x68($s2)
    ctx->pc = 0x1de368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967192), GPR_U32(ctx, 2));
    // 0x1de36c: 0xae42ffd8  sw          $v0, -0x28($s2)
    ctx->pc = 0x1de36cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967256), GPR_U32(ctx, 2));
    // 0x1de370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de374: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x1de374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x1de378: 0xae40ff64  sw          $zero, -0x9C($s2)
    ctx->pc = 0x1de378u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967140), GPR_U32(ctx, 0));
    // 0x1de37c: 0xae40ff6c  sw          $zero, -0x94($s2)
    ctx->pc = 0x1de37cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967148), GPR_U32(ctx, 0));
    // 0x1de380: 0xae40ff68  sw          $zero, -0x98($s2)
    ctx->pc = 0x1de380u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967144), GPR_U32(ctx, 0));
    // 0x1de384: 0xae40ff84  sw          $zero, -0x7C($s2)
    ctx->pc = 0x1de384u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967172), GPR_U32(ctx, 0));
    // 0x1de388: 0xae56ff80  sw          $s6, -0x80($s2)
    ctx->pc = 0x1de388u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967168), GPR_U32(ctx, 22));
    // 0x1de38c: 0xae56ff7c  sw          $s6, -0x84($s2)
    ctx->pc = 0x1de38cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967164), GPR_U32(ctx, 22));
    // 0x1de390: 0xae45ffa4  sw          $a1, -0x5C($s2)
    ctx->pc = 0x1de390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967204), GPR_U32(ctx, 5));
    // 0x1de394: 0xae45ffa0  sw          $a1, -0x60($s2)
    ctx->pc = 0x1de394u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967200), GPR_U32(ctx, 5));
    // 0x1de398: 0xae45ff9c  sw          $a1, -0x64($s2)
    ctx->pc = 0x1de398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967196), GPR_U32(ctx, 5));
    // 0x1de39c: 0xae45ffac  sw          $a1, -0x54($s2)
    ctx->pc = 0x1de39cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967212), GPR_U32(ctx, 5));
    // 0x1de3a0: 0xae45ffa8  sw          $a1, -0x58($s2)
    ctx->pc = 0x1de3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967208), GPR_U32(ctx, 5));
    // 0x1de3a4: 0xae47ffb8  sw          $a3, -0x48($s2)
    ctx->pc = 0x1de3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967224), GPR_U32(ctx, 7));
    // 0x1de3a8: 0xae47ffb4  sw          $a3, -0x4C($s2)
    ctx->pc = 0x1de3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967220), GPR_U32(ctx, 7));
    // 0x1de3ac: 0xae56ffbc  sw          $s6, -0x44($s2)
    ctx->pc = 0x1de3acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967228), GPR_U32(ctx, 22));
    // 0x1de3b0: 0xae56ffb0  sw          $s6, -0x50($s2)
    ctx->pc = 0x1de3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967216), GPR_U32(ctx, 22));
    // 0x1de3b4: 0xae40ff94  sw          $zero, -0x6C($s2)
    ctx->pc = 0x1de3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967188), GPR_U32(ctx, 0));
    // 0x1de3b8: 0xae40ffc0  sw          $zero, -0x40($s2)
    ctx->pc = 0x1de3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967232), GPR_U32(ctx, 0));
    // 0x1de3bc: 0xae47ffc4  sw          $a3, -0x3C($s2)
    ctx->pc = 0x1de3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967236), GPR_U32(ctx, 7));
    // 0x1de3c0: 0xae42ffe0  sw          $v0, -0x20($s2)
    ctx->pc = 0x1de3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967264), GPR_U32(ctx, 2));
    // 0x1de3c4: 0xae42ffdc  sw          $v0, -0x24($s2)
    ctx->pc = 0x1de3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967260), GPR_U32(ctx, 2));
    // 0x1de3c8: 0xae44fff4  sw          $a0, -0xC($s2)
    ctx->pc = 0x1de3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967284), GPR_U32(ctx, 4));
    // 0x1de3cc: 0xae44fff0  sw          $a0, -0x10($s2)
    ctx->pc = 0x1de3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967280), GPR_U32(ctx, 4));
    // 0x1de3d0: 0xae43fff8  sw          $v1, -0x8($s2)
    ctx->pc = 0x1de3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967288), GPR_U32(ctx, 3));
    // 0x1de3d4: 0xae40ffe4  sw          $zero, -0x1C($s2)
    ctx->pc = 0x1de3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967268), GPR_U32(ctx, 0));
    // 0x1de3d8: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x1de3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
    // 0x1de3dc: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x1de3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x1de3e0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1de3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1de3e4: 0xae40fffc  sw          $zero, -0x4($s2)
    ctx->pc = 0x1de3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967292), GPR_U32(ctx, 0));
    // 0x1de3e8: 0xae56ffd4  sw          $s6, -0x2C($s2)
    ctx->pc = 0x1de3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967252), GPR_U32(ctx, 22));
    // 0x1de3ec: 0xae56ffd0  sw          $s6, -0x30($s2)
    ctx->pc = 0x1de3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967248), GPR_U32(ctx, 22));
    // 0x1de3f0: 0xae560040  sw          $s6, 0x40($s2)
    ctx->pc = 0x1de3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 22));
    // 0x1de3f4: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1de3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1de3f8: 0xae56003c  sw          $s6, 0x3C($s2)
    ctx->pc = 0x1de3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 22));
    // 0x1de3fc: 0xae560038  sw          $s6, 0x38($s2)
    ctx->pc = 0x1de3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 22));
    // 0x1de400: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x1de400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x1de404: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x1de404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x1de408: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x1de408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x1de40c: 0x100001bc  b           . + 4 + (0x1BC << 2)
    ctx->pc = 0x1DE40Cu;
    {
        const bool branch_taken_0x1de40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE40Cu;
        // 0x1de410: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de40c) {
            ctx->pc = 0x1DEB00u;
            goto label_1deb00;
        }
    }
    ctx->pc = 0x1DE414u;
    // 0x1de414: 0x0  nop
    ctx->pc = 0x1de414u;
    // NOP
label_1de418:
    // 0x1de418: 0x110001b9  beqz        $t0, . + 4 + (0x1B9 << 2)
    ctx->pc = 0x1DE418u;
    {
        const bool branch_taken_0x1de418 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE418u;
        // 0x1de41c: 0x31020020  andi        $v0, $t0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de418) {
            ctx->pc = 0x1DEB00u;
            goto label_1deb00;
        }
    }
    ctx->pc = 0x1DE420u;
    // 0x1de420: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1DE420u;
    {
        const bool branch_taken_0x1de420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE420u;
        // 0x1de424: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de420) {
            ctx->pc = 0x1DE4D0u;
            goto label_1de4d0;
        }
    }
    ctx->pc = 0x1DE428u;
    // 0x1de428: 0xc60000b8  lwc1        $f0, 0xB8($s0)
    ctx->pc = 0x1de428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de42c: 0xc60200b4  lwc1        $f2, 0xB4($s0)
    ctx->pc = 0x1de42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de430: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de430u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de434: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1de434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1de438: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x1de438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1de43c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de43cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1de440: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1de440u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1de444: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1DE444u;
    {
        const bool branch_taken_0x1de444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE444u;
        // 0x1de448: 0xe60100b8  swc1        $f1, 0xB8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de444) {
            ctx->pc = 0x1DE4D0u;
            goto label_1de4d0;
        }
    }
    ctx->pc = 0x1DE44Cu;
    // 0x1de44c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de44cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de450: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1de450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1de454: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1de454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1de458: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1de458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de45c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1de45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de460: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1de460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de464: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1de464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x1de468: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1de468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1de46c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE46Cu;
    {
        const bool branch_taken_0x1de46c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE46Cu;
        // 0x1de470: 0xe60000b8  swc1        $f0, 0xB8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de46c) {
            ctx->pc = 0x1DE48Cu;
            goto label_1de48c;
        }
    }
    ctx->pc = 0x1DE474u;
    // 0x1de474: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x1de474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de478: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de478u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de47c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1de47cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1de480: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1de480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1de484: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DE484u;
    {
        const bool branch_taken_0x1de484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de484) {
            ctx->pc = 0x1DE4B0u;
            goto label_1de4b0;
        }
    }
    ctx->pc = 0x1DE48Cu;
label_1de48c:
    // 0x1de48c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x1de48cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de490: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1DE490u;
    {
        const bool branch_taken_0x1de490 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE490u;
        // 0x1de494: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de490) {
            ctx->pc = 0x1DE4D0u;
            goto label_1de4d0;
        }
    }
    ctx->pc = 0x1DE498u;
    // 0x1de498: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x1de498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de49c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de49cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de4a0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1de4a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1de4a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1de4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1de4a8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DE4A8u;
    {
        const bool branch_taken_0x1de4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4A8u;
        // 0x1de4ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4a8) {
            ctx->pc = 0x1DE4D0u;
            goto label_1de4d0;
        }
    }
    ctx->pc = 0x1DE4B0u;
label_1de4b0:
    // 0x1de4b0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de4b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de4b4: 0xe601004c  swc1        $f1, 0x4C($s0)
    ctx->pc = 0x1de4b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1de4b8: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x1de4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1de4bc: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1de4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1de4c0: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x1de4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x1de4c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1de4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1de4c8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1de4c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1de4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de4d0:
    // 0x1de4d0: 0x31020040  andi        $v0, $t0, 0x40
    ctx->pc = 0x1de4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
    // 0x1de4d4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1DE4D4u;
    {
        const bool branch_taken_0x1de4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4D4u;
        // 0x1de4d8: 0x31020100  andi        $v0, $t0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4d4) {
            ctx->pc = 0x1DE588u;
            goto label_1de588;
        }
    }
    ctx->pc = 0x1DE4DCu;
    // 0x1de4dc: 0xc60000c4  lwc1        $f0, 0xC4($s0)
    ctx->pc = 0x1de4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de4e0: 0xc60200c0  lwc1        $f2, 0xC0($s0)
    ctx->pc = 0x1de4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de4e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de4e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de4e8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1de4e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1de4ec: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x1de4ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1de4f0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de4f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1de4f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1de4f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1de4f8: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1DE4F8u;
    {
        const bool branch_taken_0x1de4f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4F8u;
        // 0x1de4fc: 0xe60100c4  swc1        $f1, 0xC4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4f8) {
            ctx->pc = 0x1DE584u;
            goto label_1de584;
        }
    }
    ctx->pc = 0x1DE500u;
    // 0x1de500: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de500u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de504: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1de504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1de508: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1de508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1de50c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1de50cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de514: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1de514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de518: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x1de518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x1de51c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1de51cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1de520: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE520u;
    {
        const bool branch_taken_0x1de520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE520u;
        // 0x1de524: 0xe60000c4  swc1        $f0, 0xC4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de520) {
            ctx->pc = 0x1DE540u;
            goto label_1de540;
        }
    }
    ctx->pc = 0x1DE528u;
    // 0x1de528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de52c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1de52cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1de530: 0xc60100bc  lwc1        $f1, 0xBC($s0)
    ctx->pc = 0x1de530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de534: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1de534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de538: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1DE538u;
    {
        const bool branch_taken_0x1de538 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de538) {
            ctx->pc = 0x1DE564u;
            goto label_1de564;
        }
    }
    ctx->pc = 0x1DE540u;
label_1de540:
    // 0x1de540: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x1de540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de544: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1DE544u;
    {
        const bool branch_taken_0x1de544 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE544u;
        // 0x1de548: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de544) {
            ctx->pc = 0x1DE584u;
            goto label_1de584;
        }
    }
    ctx->pc = 0x1DE54Cu;
    // 0x1de54c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de54cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de550: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1de550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1de554: 0xc60100bc  lwc1        $f1, 0xBC($s0)
    ctx->pc = 0x1de554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de558: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1de558u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de55c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1DE55Cu;
    {
        const bool branch_taken_0x1de55c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE55Cu;
        // 0x1de560: 0x31020100  andi        $v0, $t0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de55c) {
            ctx->pc = 0x1DE588u;
            goto label_1de588;
        }
    }
    ctx->pc = 0x1DE564u;
label_1de564:
    // 0x1de564: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de564u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1de568: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x1de568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1de56c: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x1de56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1de570: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1de570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1de574: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x1de574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x1de578: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1de578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1de57c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1de57cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de580: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1de580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de584:
    // 0x1de584: 0x31020100  andi        $v0, $t0, 0x100
    ctx->pc = 0x1de584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)256);
label_1de588:
    // 0x1de588: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE588u;
    {
        const bool branch_taken_0x1de588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE588u;
        // 0x1de58c: 0x2402feff  addiu       $v0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de588) {
            ctx->pc = 0x1DE5A0u;
            goto label_1de5a0;
        }
    }
    ctx->pc = 0x1DE590u;
    // 0x1de590: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1de590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de594: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1de594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1de598: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1de598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1de59c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1de59cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de5a0:
    // 0x1de5a0: 0x31021000  andi        $v0, $t0, 0x1000
    ctx->pc = 0x1de5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4096);
    // 0x1de5a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE5A4u;
    {
        const bool branch_taken_0x1de5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5A4u;
        // 0x1de5a8: 0x2402efff  addiu       $v0, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5a4) {
            ctx->pc = 0x1DE5BCu;
            goto label_1de5bc;
        }
    }
    ctx->pc = 0x1DE5ACu;
    // 0x1de5ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1de5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de5b0: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1de5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1de5b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1de5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1de5b8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1de5b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de5bc:
    // 0x1de5bc: 0x31022000  andi        $v0, $t0, 0x2000
    ctx->pc = 0x1de5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8192);
    // 0x1de5c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE5C0u;
    {
        const bool branch_taken_0x1de5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5C0u;
        // 0x1de5c4: 0x2402dfff  addiu       $v0, $zero, -0x2001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5c0) {
            ctx->pc = 0x1DE5D4u;
            goto label_1de5d4;
        }
    }
    ctx->pc = 0x1DE5C8u;
    // 0x1de5c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1de5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de5cc: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1de5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1de5d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1de5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1de5d4:
    // 0x1de5d4: 0x10800079  beqz        $a0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1DE5D4u;
    {
        const bool branch_taken_0x1de5d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5D4u;
        // 0x1de5d8: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5d4) {
            ctx->pc = 0x1DE7BCu;
            goto label_1de7bc;
        }
    }
    ctx->pc = 0x1DE5DCu;
    // 0x1de5dc: 0x8e15004c  lw          $s5, 0x4C($s0)
    ctx->pc = 0x1de5dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1de5e0: 0x8c437328  lw          $v1, 0x7328($v0)
    ctx->pc = 0x1de5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29480)));
    // 0x1de5e4: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x1de5e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5e8: 0x27b40004  addiu       $s4, $sp, 0x4
    ctx->pc = 0x1de5e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1de5ec: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x1de5ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1de5f0: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1DE5F0u;
    {
        const bool branch_taken_0x1de5f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5F0u;
        // 0x1de5f4: 0x24110040  addiu       $s1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5f0) {
            ctx->pc = 0x1DE628u;
            goto label_1de628;
        }
    }
    ctx->pc = 0x1DE5F8u;
    // 0x1de5f8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1de5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1de5fc: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1de5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1de600: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x1de600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1de604: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1de604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1de608: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de60c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1de60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de610: 0x2471ff80  addiu       $s1, $v1, -0x80
    ctx->pc = 0x1de610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x1de614: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1de614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1de618: 0x2a220080  slti        $v0, $s1, 0x80
    ctx->pc = 0x1de618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1de61c: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x1de61cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1de620: 0xb1182a  slt         $v1, $a1, $s1
    ctx->pc = 0x1de620u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1de624: 0x83880a  movz        $s1, $a0, $v1
    ctx->pc = 0x1de624u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
label_1de628:
    // 0x1de628: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x1de628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1de62c: 0x113040  sll         $a2, $s1, 1
    ctx->pc = 0x1de62cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1de630: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1de630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1de634: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1de634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1de638: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x1de638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1de63c: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1de63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1de640: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x1de640u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x1de644: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x1de644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1de648: 0x96319b30  lhu         $s1, -0x64D0($s1)
    ctx->pc = 0x1de648u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294941488)));
    // 0x1de64c: 0x3812  mflo        $a3
    ctx->pc = 0x1de64cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1de650: 0x2010  mfhi        $a0
    ctx->pc = 0x1de650u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1de654: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x1de654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1de658: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1de658u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1de65c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1de65cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1de660: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1de660u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1de664: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x1de664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x1de668: 0x1012  mflo        $v0
    ctx->pc = 0x1de668u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1de66c: 0x2810  mfhi        $a1
    ctx->pc = 0x1de66cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1de670: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1de670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1de674: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1de674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1de678: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1de678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1de67c: 0xc081c20  jal         func_207080
    ctx->pc = 0x1DE67Cu;
    SET_GPR_U32(ctx, 31, 0x1DE684u);
    ctx->pc = 0x1DE680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE67Cu;
    // 0x1de680: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1DE67Cu, 0x1DE684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE684u;
label_1de684:
    // 0x1de684: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x1de684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1de688: 0xc081c20  jal         func_207080
    ctx->pc = 0x1DE688u;
    SET_GPR_U32(ctx, 31, 0x1DE690u);
    ctx->pc = 0x1DE68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE688u;
    // 0x1de68c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1DE688u, 0x1DE690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE690u;
label_1de690:
    // 0x1de690: 0x3c050f81  lui         $a1, 0xF81
    ctx->pc = 0x1de690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3969 << 16));
    // 0x1de694: 0x34a57e01  ori         $a1, $a1, 0x7E01
    ctx->pc = 0x1de694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32257);
    // 0x1de698: 0xc081850  jal         func_206140
    ctx->pc = 0x1DE698u;
    SET_GPR_U32(ctx, 31, 0x1DE6A0u);
    ctx->pc = 0x1DE69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE698u;
    // 0x1de69c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206140u, 0x1DE698u, 0x1DE6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6A0u;
label_1de6a0:
    // 0x1de6a0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1de6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1de6a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1de6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de6ac: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DE6ACu;
    {
        const bool branch_taken_0x1de6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DE6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6ACu;
        // 0x1de6b0: 0x28820000  slti        $v0, $a0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6ac) {
            ctx->pc = 0x1DE6D0u;
            goto label_1de6d0;
        }
    }
    ctx->pc = 0x1DE6B4u;
    // 0x1de6b4: 0xc081c20  jal         func_207080
    ctx->pc = 0x1DE6B4u;
    SET_GPR_U32(ctx, 31, 0x1DE6BCu);
    ctx->pc = 0x1DE6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6B4u;
    // 0x1de6b8: 0x8e05003c  lw          $a1, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1DE6B4u, 0x1DE6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6BCu;
label_1de6bc:
    // 0x1de6bc: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1de6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1de6c0: 0xc081850  jal         func_206140
    ctx->pc = 0x1DE6C0u;
    SET_GPR_U32(ctx, 31, 0x1DE6C8u);
    ctx->pc = 0x1DE6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6C0u;
    // 0x1de6c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206140u, 0x1DE6C0u, 0x1DE6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6C8u;
label_1de6c8:
    // 0x1de6c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6cc: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1de6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_1de6d0:
    // 0x1de6d0: 0x112a03  sra         $a1, $s1, 8
    ctx->pc = 0x1de6d0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), 8));
    // 0x1de6d4: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x1de6d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1de6d8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1de6d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1de6dc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1de6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1de6e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1de6e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1de6e4: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x1de6e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1de6e8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x1de6e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1de6ec: 0x70451018  mult1       $v0, $v0, $a1
    ctx->pc = 0x1de6ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1de6f0: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1de6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1de6f4: 0x24a5732c  addiu       $a1, $a1, 0x732C
    ctx->pc = 0x1de6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29484));
    // 0x1de6f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1de6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38732Cu));
    // 0x1de6fc: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x1de6fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1de700: 0x642007  srav        $a0, $a0, $v1
    ctx->pc = 0x1de700u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x1de704: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1de704u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1de708: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x1de708u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x1de70c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1de70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1de710: 0x28424000  slti        $v0, $v0, 0x4000
    ctx->pc = 0x1de710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x1de714: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE714u;
    {
        const bool branch_taken_0x1de714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de714) {
            ctx->pc = 0x1DE718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE714u;
            // 0x1de718: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE728u;
            goto label_1de728;
        }
    }
    ctx->pc = 0x1DE71Cu;
    // 0x1de71c: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x1de71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x1de720: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1de720u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1de724: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1de724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1de728:
    // 0x1de728: 0x28424000  slti        $v0, $v0, 0x4000
    ctx->pc = 0x1de728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x1de72c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE72Cu;
    {
        const bool branch_taken_0x1de72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de72c) {
            ctx->pc = 0x1DE730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE72Cu;
            // 0x1de730: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE740u;
            goto label_1de740;
        }
    }
    ctx->pc = 0x1DE734u;
    // 0x1de734: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x1de734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x1de738: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1de738u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1de73c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1de73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1de740:
    // 0x1de740: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1de740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1de744: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1de744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1de748: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1de748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1de74c: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x1de74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1de750: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1de750u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1de754: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1de754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1de758: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1de758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1de75c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1de75cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1de760: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1de760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de764: 0x54a20001  bnel        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE764u;
    {
        const bool branch_taken_0x1de764 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de764) {
            ctx->pc = 0x1DE768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE764u;
            // 0x1de768: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE76Cu;
            goto label_1de76c;
        }
    }
    ctx->pc = 0x1DE76Cu;
label_1de76c:
    // 0x1de76c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1de76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1de770: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1de770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1de774: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE774u;
    {
        const bool branch_taken_0x1de774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1de774) {
            ctx->pc = 0x1DE778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE774u;
            // 0x1de778: 0xae030070  sw          $v1, 0x70($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE77Cu;
            goto label_1de77c;
        }
    }
    ctx->pc = 0x1DE77Cu;
label_1de77c:
    // 0x1de77c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1de77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de780: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1de780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1de784: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DE784u;
    {
        const bool branch_taken_0x1de784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE784u;
        // 0x1de788: 0xae15004c  sw          $s5, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de784) {
            ctx->pc = 0x1DE7A8u;
            goto label_1de7a8;
        }
    }
    ctx->pc = 0x1DE78Cu;
    // 0x1de78c: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x1de78cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1de790: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1de790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de794: 0x8e070070  lw          $a3, 0x70($s0)
    ctx->pc = 0x1de794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1de798: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1DE798u;
    SET_GPR_U32(ctx, 31, 0x1DE7A0u);
    ctx->pc = 0x1DE79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE798u;
    // 0x1de79c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1DE798u, 0x1DE7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7A0u;
label_1de7a0:
    // 0x1de7a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE7A0u;
    {
        const bool branch_taken_0x1de7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7A0u;
        // 0x1de7a4: 0x8e080000  lw          $t0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7a0) {
            ctx->pc = 0x1DE7C0u;
            goto label_1de7c0;
        }
    }
    ctx->pc = 0x1DE7A8u;
label_1de7a8:
    // 0x1de7a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1de7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de7ac: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1de7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1de7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7b4: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1DE7B4u;
    SET_GPR_U32(ctx, 31, 0x1DE7BCu);
    ctx->pc = 0x1DE7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7B4u;
    // 0x1de7b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1DE7B4u, 0x1DE7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7BCu;
label_1de7bc:
    // 0x1de7bc: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1de7bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1de7c0:
    // 0x1de7c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1de7c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1de7c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1de7c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7cc: 0x31024000  andi        $v0, $t0, 0x4000
    ctx->pc = 0x1de7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16384);
    // 0x1de7d0: 0x8e07005c  lw          $a3, 0x5C($s0)
    ctx->pc = 0x1de7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1de7d4: 0x8e0c0060  lw          $t4, 0x60($s0)
    ctx->pc = 0x1de7d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1de7d8: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x1DE7D8u;
    {
        const bool branch_taken_0x1de7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7D8u;
        // 0x1de7dc: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7d8) {
            ctx->pc = 0x1DEA08u;
            goto label_1dea08;
        }
    }
    ctx->pc = 0x1DE7E0u;
    // 0x1de7e0: 0x31020010  andi        $v0, $t0, 0x10
    ctx->pc = 0x1de7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
    // 0x1de7e4: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1DE7E4u;
    {
        const bool branch_taken_0x1de7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de7e4) {
            ctx->pc = 0x1DE7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE7E4u;
            // 0x1de7e8: 0x31020200  andi        $v0, $t0, 0x200 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)512);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE88Cu;
            goto label_1de88c;
        }
    }
    ctx->pc = 0x1DE7ECu;
    // 0x1de7ec: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1de7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de7f0: 0xc60200cc  lwc1        $f2, 0xCC($s0)
    ctx->pc = 0x1de7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de7f4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1de7f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de7f8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1de7f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1de7fc: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1de7fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de800: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE800u;
    {
        const bool branch_taken_0x1de800 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE800u;
        // 0x1de804: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de800) {
            ctx->pc = 0x1DE818u;
            goto label_1de818;
        }
    }
    ctx->pc = 0x1DE808u;
    // 0x1de808: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x1de808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de80c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1de80cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de810: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1DE810u;
    {
        const bool branch_taken_0x1de810 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE810u;
        // 0x1de814: 0x2402ffef  addiu       $v0, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de810) {
            ctx->pc = 0x1DE838u;
            goto label_1de838;
        }
    }
    ctx->pc = 0x1DE818u;
label_1de818:
    // 0x1de818: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x1de818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de81c: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x1DE81Cu;
    {
        const bool branch_taken_0x1de81c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de81c) {
            ctx->pc = 0x1DE820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE81Cu;
            // 0x1de820: 0xc60000d0  lwc1        $f0, 0xD0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE850u;
            goto label_1de850;
        }
    }
    ctx->pc = 0x1DE824u;
    // 0x1de824: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x1de824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de828: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1de828u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de82c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1DE82Cu;
    {
        const bool branch_taken_0x1de82c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de82c) {
            ctx->pc = 0x1DE830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE82Cu;
            // 0x1de830: 0xc60000d0  lwc1        $f0, 0xD0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE850u;
            goto label_1de850;
        }
    }
    ctx->pc = 0x1DE834u;
    // 0x1de834: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x1de834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_1de838:
    // 0x1de838: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1de838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1de83c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1de83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1de840: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x1de840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x1de844: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1de844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1de848: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1de848u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de84c: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1de84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1de850:
    // 0x1de850: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1de850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1de854: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE854u;
    {
        const bool branch_taken_0x1de854 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de854) {
            ctx->pc = 0x1DE858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE854u;
            // 0x1de858: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE85Cu;
            goto label_1de85c;
        }
    }
    ctx->pc = 0x1DE85Cu;
label_1de85c:
    // 0x1de85c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de85cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de860: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1de860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1de864: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1de864u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de868: 0x77001a  div         $zero, $v1, $s7
    ctx->pc = 0x1de868u;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1de86c: 0x1010  mfhi        $v0
    ctx->pc = 0x1de86cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1de870: 0x1812  mflo        $v1
    ctx->pc = 0x1de870u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1de874: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1de874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1de878: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x1de878u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de87c: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1de87cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1de880: 0x1012  mflo        $v0
    ctx->pc = 0x1de880u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1de884: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1de884u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de888: 0x31020200  andi        $v0, $t0, 0x200
    ctx->pc = 0x1de888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)512);
label_1de88c:
    // 0x1de88c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1DE88Cu;
    {
        const bool branch_taken_0x1de88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE88Cu;
        // 0x1de890: 0x31020400  andi        $v0, $t0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de88c) {
            ctx->pc = 0x1DE94Cu;
            goto label_1de94c;
        }
    }
    ctx->pc = 0x1DE894u;
    // 0x1de894: 0x8e0600dc  lw          $a2, 0xDC($s0)
    ctx->pc = 0x1de894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x1de898: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x1de898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1de89c: 0x50c20026  beql        $a2, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1DE89Cu;
    {
        const bool branch_taken_0x1de89c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1de89c) {
            ctx->pc = 0x1DE8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE89Cu;
            // 0x1de8a0: 0x2402fdff  addiu       $v0, $zero, -0x201 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE938u;
            goto label_1de938;
        }
    }
    ctx->pc = 0x1DE8A4u;
    // 0x1de8a4: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x1de8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de8a8: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1de8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de8ac: 0x3c0143f0  lui         $at, 0x43F0
    ctx->pc = 0x1de8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17392 << 16));
    // 0x1de8b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1de8b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1de8b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1de8b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1de8b8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1de8b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de8bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1DE8BCu;
    {
        const bool branch_taken_0x1de8bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8BCu;
        // 0x1de8c0: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de8bc) {
            ctx->pc = 0x1DE8C8u;
            goto label_1de8c8;
        }
    }
    ctx->pc = 0x1DE8C4u;
    // 0x1de8c4: 0xe60200e4  swc1        $f2, 0xE4($s0)
    ctx->pc = 0x1de8c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1de8c8:
    // 0x1de8c8: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x1de8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de8cc: 0x3c01c3f0  lui         $at, 0xC3F0
    ctx->pc = 0x1de8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50160 << 16));
    // 0x1de8d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1de8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de8d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1de8d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de8d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE8D8u;
    {
        const bool branch_taken_0x1de8d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de8d8) {
            ctx->pc = 0x1DE8E8u;
            goto label_1de8e8;
        }
    }
    ctx->pc = 0x1DE8E0u;
    // 0x1de8e0: 0xe60100e4  swc1        $f1, 0xE4($s0)
    ctx->pc = 0x1de8e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x1de8e4: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1de8e4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1de8e8:
    // 0x1de8e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de8e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de8ec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1de8ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1de8f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1de8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1de8f4: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE8F4u;
    {
        const bool branch_taken_0x1de8f4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de8f4) {
            ctx->pc = 0x1DE8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE8F4u;
            // 0x1de8f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE8FCu;
            goto label_1de8fc;
        }
    }
    ctx->pc = 0x1DE8FCu;
label_1de8fc:
    // 0x1de8fc: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x1de8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x1de900: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1de900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de904: 0x97001a  div         $zero, $a0, $s7
    ctx->pc = 0x1de904u;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1de908: 0x1010  mfhi        $v0
    ctx->pc = 0x1de908u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1de90c: 0x2012  mflo        $a0
    ctx->pc = 0x1de90cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1de910: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1de910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1de914: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de918: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1de918u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1de91c: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x1de91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
    // 0x1de920: 0x1012  mflo        $v0
    ctx->pc = 0x1de920u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1de924: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DE924u;
    {
        const bool branch_taken_0x1de924 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DE928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE924u;
        // 0x1de928: 0x1445021  addu        $t2, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de924) {
            ctx->pc = 0x1DE948u;
            goto label_1de948;
        }
    }
    ctx->pc = 0x1DE92Cu;
    // 0x1de92c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE92Cu;
    {
        const bool branch_taken_0x1de92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE92Cu;
        // 0x1de930: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de92c) {
            ctx->pc = 0x1DE948u;
            goto label_1de948;
        }
    }
    ctx->pc = 0x1DE934u;
    // 0x1de934: 0x0  nop
    ctx->pc = 0x1de934u;
    // NOP
label_1de938:
    // 0x1de938: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x1de938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
    // 0x1de93c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1de93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1de940: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1de940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1de944: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1de944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de948:
    // 0x1de948: 0x31020400  andi        $v0, $t0, 0x400
    ctx->pc = 0x1de948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1024);
label_1de94c:
    // 0x1de94c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1DE94Cu;
    {
        const bool branch_taken_0x1de94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE94Cu;
        // 0x1de950: 0x26060080  addiu       $a2, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de94c) {
            ctx->pc = 0x1DEA08u;
            goto label_1dea08;
        }
    }
    ctx->pc = 0x1DE954u;
    // 0x1de954: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1de954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1de958: 0x3062f000  andi        $v0, $v1, 0xF000
    ctx->pc = 0x1de958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x1de95c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DE95Cu;
    {
        const bool branch_taken_0x1de95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE95Cu;
        // 0x1de960: 0x31302  srl         $v0, $v1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de95c) {
            ctx->pc = 0x1DE998u;
            goto label_1de998;
        }
    }
    ctx->pc = 0x1DE964u;
    // 0x1de964: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1de964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1de968: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x1de968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1de96c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1de96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1de970: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1de970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1de974: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1de974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1de978: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x1de978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x1de97c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1de97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1de980: 0x30640fff  andi        $a0, $v1, 0xFFF
    ctx->pc = 0x1de980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1de984: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1de984u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1de988: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1de988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1de98c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE98Cu;
    {
        const bool branch_taken_0x1de98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE98Cu;
        // 0x1de990: 0xacc50008  sw          $a1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de98c) {
            ctx->pc = 0x1DE9A0u;
            goto label_1de9a0;
        }
    }
    ctx->pc = 0x1DE994u;
    // 0x1de994: 0x0  nop
    ctx->pc = 0x1de994u;
    // NOP
label_1de998:
    // 0x1de998: 0x34626000  ori         $v0, $v1, 0x6000
    ctx->pc = 0x1de998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x1de99c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1de99cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1de9a0:
    // 0x1de9a0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1de9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1de9a4: 0x2c8200f0  sltiu       $v0, $a0, 0xF0
    ctx->pc = 0x1de9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
    // 0x1de9a8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE9A8u;
    {
        const bool branch_taken_0x1de9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de9a8) {
            ctx->pc = 0x1DE9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE9A8u;
            // 0x1de9ac: 0x8cc3000c  lw          $v1, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE9C8u;
            goto label_1de9c8;
        }
    }
    ctx->pc = 0x1DE9B0u;
    // 0x1de9b0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1de9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1de9b4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1de9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1de9b8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1de9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1de9bc: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1de9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1de9c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de9c4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1de9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1de9c8:
    // 0x1de9c8: 0x41082  srl         $v0, $a0, 2
    ctx->pc = 0x1de9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x1de9cc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1de9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1de9d0: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x1de9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1de9d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1de9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1de9d8: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE9D8u;
    {
        const bool branch_taken_0x1de9d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de9d8) {
            ctx->pc = 0x1DE9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE9D8u;
            // 0x1de9dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE9E0u;
            goto label_1de9e0;
        }
    }
    ctx->pc = 0x1DE9E0u;
label_1de9e0:
    // 0x1de9e0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1de9e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de9e4: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1de9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1de9e8: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x1de9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1de9ec: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1de9ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de9f0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1de9f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1de9f4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1de9f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de9f8: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x1de9f8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1de9fc: 0x1012  mflo        $v0
    ctx->pc = 0x1de9fcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1dea00: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1dea00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dea04: 0x244c0040  addiu       $t4, $v0, 0x40
    ctx->pc = 0x1dea04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1dea08:
    // 0x1dea08: 0x31020080  andi        $v0, $t0, 0x80
    ctx->pc = 0x1dea08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
    // 0x1dea0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DEA0Cu;
    {
        const bool branch_taken_0x1dea0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA0Cu;
        // 0x1dea10: 0x2402ff7f  addiu       $v0, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea0c) {
            ctx->pc = 0x1DEA20u;
            goto label_1dea20;
        }
    }
    ctx->pc = 0x1DEA14u;
    // 0x1dea14: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dea14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dea18: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1dea18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1dea1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dea20:
    // 0x1dea20: 0x11200037  beqz        $t1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1DEA20u;
    {
        const bool branch_taken_0x1dea20 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA20u;
        // 0x1dea24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea20) {
            ctx->pc = 0x1DEB00u;
            goto label_1deb00;
        }
    }
    ctx->pc = 0x1DEA28u;
    // 0x1dea28: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1dea28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dea2c: 0x54430019  bnel        $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1DEA2Cu;
    {
        const bool branch_taken_0x1dea2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dea2c) {
            ctx->pc = 0x1DEA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEA2Cu;
            // 0x1dea30: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEA94u;
            goto label_1dea94;
        }
    }
    ctx->pc = 0x1DEA34u;
    // 0x1dea34: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1dea34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1dea38: 0x2c620040  sltiu       $v0, $v1, 0x40
    ctx->pc = 0x1dea38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1dea3c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DEA3Cu;
    {
        const bool branch_taken_0x1dea3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA3Cu;
        // 0x1dea40: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea3c) {
            ctx->pc = 0x1DEA68u;
            goto label_1dea68;
        }
    }
    ctx->pc = 0x1DEA44u;
    // 0x1dea44: 0x2462ffc0  addiu       $v0, $v1, -0x40
    ctx->pc = 0x1dea44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x1dea48: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1dea48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1dea4c: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x1dea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1dea50: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1dea50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1dea54: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1dea54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1dea58: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x1dea58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1dea5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DEA5Cu;
    {
        const bool branch_taken_0x1dea5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA5Cu;
        // 0x1dea60: 0x1635821  addu        $t3, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea5c) {
            ctx->pc = 0x1DEA88u;
            goto label_1dea88;
        }
    }
    ctx->pc = 0x1DEA64u;
    // 0x1dea64: 0x0  nop
    ctx->pc = 0x1dea64u;
    // NOP
label_1dea68:
    // 0x1dea68: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1dea68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1dea6c: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x1dea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1dea70: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1dea70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1dea74: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x1dea74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1dea78: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1dea78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1dea7c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1dea7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1dea80: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x1dea80u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1dea84: 0x1635823  subu        $t3, $t3, $v1
    ctx->pc = 0x1dea84u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_1dea88:
    // 0x1dea88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dea88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dea8c: 0x240c0040  addiu       $t4, $zero, 0x40
    ctx->pc = 0x1dea8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1dea90: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1dea90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1dea94:
    // 0x1dea94: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x1dea94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x1dea98: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1dea98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dea9c: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x1dea9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1deaa0: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x1deaa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1deaa4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1deaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1deaa8: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x1deaa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1deaac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1deaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1deab0: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1deab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1deab4: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x1deab4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1deab8: 0xa1c00  sll         $v1, $t2, 16
    ctx->pc = 0x1deab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x1deabc: 0xb1200  sll         $v0, $t3, 8
    ctx->pc = 0x1deabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x1deac0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1deac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1deac4: 0x53600  sll         $a2, $a1, 24
    ctx->pc = 0x1deac4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1deac8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1deac8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1deacc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1deaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1dead0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1dead0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1dead4: 0x30844000  andi        $a0, $a0, 0x4000
    ctx->pc = 0x1dead4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x1dead8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEAD8u;
    {
        const bool branch_taken_0x1dead8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAD8u;
        // 0x1deadc: 0xcc3025  or          $a2, $a2, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dead8) {
            ctx->pc = 0x1DEAF4u;
            goto label_1deaf4;
        }
    }
    ctx->pc = 0x1DEAE0u;
    // 0x1deae0: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1deae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1deae4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1deae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1deae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1deae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1deaec: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x1deaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x1deaf0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1deaf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1deaf4:
    // 0x1deaf4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1deaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1deaf8: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1DEAF8u;
    SET_GPR_U32(ctx, 31, 0x1DEB00u);
    ctx->pc = 0x1DEAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEAF8u;
    // 0x1deafc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1DEAF8u, 0x1DEB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB00u;
label_1deb00:
    // 0x1deb00: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1deb00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_1deb04:
    // 0x1deb04: 0x265200e8  addiu       $s2, $s2, 0xE8
    ctx->pc = 0x1deb04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 232));
    // 0x1deb08: 0x2bc20030  slti        $v0, $fp, 0x30
    ctx->pc = 0x1deb08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1deb0c: 0x1440fdfe  bnez        $v0, . + 4 + (-0x202 << 2)
    ctx->pc = 0x1DEB0Cu;
    {
        const bool branch_taken_0x1deb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB0Cu;
        // 0x1deb10: 0x261000e8  addiu       $s0, $s0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb0c) {
            ctx->pc = 0x1DE308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de308;
        }
    }
    ctx->pc = 0x1DEB14u;
    // 0x1deb14: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1deb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1deb18: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1deb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1deb1c: 0x24517318  addiu       $s1, $v0, 0x7318
    ctx->pc = 0x1deb1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29464));
    // 0x1deb20: 0x24707310  addiu       $s0, $v1, 0x7310
    ctx->pc = 0x1deb20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29456));
    // 0x1deb24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1deb24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387318u));
    // 0x1deb28: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1deb28u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x387310u));
    // 0x1deb2c: 0x14460006  bne         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEB2Cu;
    {
        const bool branch_taken_0x1deb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1DEB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB2Cu;
        // 0x1deb30: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb2c) {
            ctx->pc = 0x1DEB48u;
            goto label_1deb48;
        }
    }
    ctx->pc = 0x1DEB34u;
    // 0x1deb34: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1deb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1deb38: 0x1047000a  beq         $v0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1DEB38u;
    {
        const bool branch_taken_0x1deb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x1DEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB38u;
        // 0x1deb3c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb38) {
            ctx->pc = 0x1DEB64u;
            goto label_1deb64;
        }
    }
    ctx->pc = 0x1DEB40u;
    // 0x1deb40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DEB40u;
    {
        const bool branch_taken_0x1deb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1deb40) {
            ctx->pc = 0x1DEB4Cu;
            goto label_1deb4c;
        }
    }
    ctx->pc = 0x1DEB48u;
label_1deb48:
    // 0x1deb48: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1deb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1deb4c:
    // 0x1deb4c: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1DEB4Cu;
    SET_GPR_U32(ctx, 31, 0x1DEB54u);
    ctx->pc = 0x1DEB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB4Cu;
    // 0x1deb50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1DEB4Cu, 0x1DEB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB54u;
label_1deb54:
    // 0x1deb54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1deb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1deb58: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1deb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1deb5c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1deb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1deb60: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1deb60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1deb64:
    // 0x1deb64: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1deb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1deb68: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1deb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1deb6c: 0x24517308  addiu       $s1, $v0, 0x7308
    ctx->pc = 0x1deb6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29448));
    // 0x1deb70: 0x24707300  addiu       $s0, $v1, 0x7300
    ctx->pc = 0x1deb70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29440));
    // 0x1deb74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1deb74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387308u));
    // 0x1deb78: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1deb78u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x387300u));
    // 0x1deb7c: 0x14460006  bne         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEB7Cu;
    {
        const bool branch_taken_0x1deb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1DEB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB7Cu;
        // 0x1deb80: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb7c) {
            ctx->pc = 0x1DEB98u;
            goto label_1deb98;
        }
    }
    ctx->pc = 0x1DEB84u;
    // 0x1deb84: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1deb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1deb88: 0x1047000a  beq         $v0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1DEB88u;
    {
        const bool branch_taken_0x1deb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x1DEB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB88u;
        // 0x1deb8c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb88) {
            ctx->pc = 0x1DEBB4u;
            goto label_1debb4;
        }
    }
    ctx->pc = 0x1DEB90u;
    // 0x1deb90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DEB90u;
    {
        const bool branch_taken_0x1deb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1deb90) {
            ctx->pc = 0x1DEB9Cu;
            goto label_1deb9c;
        }
    }
    ctx->pc = 0x1DEB98u;
label_1deb98:
    // 0x1deb98: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1deb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1deb9c:
    // 0x1deb9c: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1DEB9Cu;
    SET_GPR_U32(ctx, 31, 0x1DEBA4u);
    ctx->pc = 0x1DEBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB9Cu;
    // 0x1deba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1DEB9Cu, 0x1DEBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBA4u;
label_1deba4:
    // 0x1deba4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1deba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1deba8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1deba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1debac: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1debacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1debb0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1debb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1debb4:
    // 0x1debb4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1debb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1debb8: 0x245072f0  addiu       $s0, $v0, 0x72F0
    ctx->pc = 0x1debb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
    // 0x1debbc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1debbcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3872F0u));
    // 0x1debc0: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1debc0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3872F4u));
    // 0x1debc4: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x1debc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1debc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEBC8u;
    {
        const bool branch_taken_0x1debc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBC8u;
        // 0x1debcc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1debc8) {
            ctx->pc = 0x1DEBE0u;
            goto label_1debe0;
        }
    }
    ctx->pc = 0x1DEBD0u;
    // 0x1debd0: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1DEBD0u;
    SET_GPR_U32(ctx, 31, 0x1DEBD8u);
    ctx->pc = 0x1DEBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEBD0u;
    // 0x1debd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1DEBD0u, 0x1DEBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBD8u;
label_1debd8:
    // 0x1debd8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1debd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1debdc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1debdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1debe0:
    // 0x1debe0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1debe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1debe4: 0x245072f8  addiu       $s0, $v0, 0x72F8
    ctx->pc = 0x1debe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29432));
    // 0x1debe8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1debe8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3872F8u));
    // 0x1debec: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1debecu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3872FCu));
    // 0x1debf0: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x1debf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1debf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEBF4u;
    {
        const bool branch_taken_0x1debf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBF4u;
        // 0x1debf8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1debf4) {
            ctx->pc = 0x1DEC0Cu;
            goto label_1dec0c;
        }
    }
    ctx->pc = 0x1DEBFCu;
    // 0x1debfc: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1DEBFCu;
    SET_GPR_U32(ctx, 31, 0x1DEC04u);
    ctx->pc = 0x1DEC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEBFCu;
    // 0x1dec00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1DEBFCu, 0x1DEC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEC04u;
label_1dec04:
    // 0x1dec04: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1dec04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1dec08: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1dec08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1dec0c:
    // 0x1dec0c: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1dec0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dec10: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DEC10u;
    {
        const bool branch_taken_0x1dec10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC10u;
        // 0x1dec14: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec10) {
            ctx->pc = 0x1DEC24u;
            goto label_1dec24;
        }
    }
    ctx->pc = 0x1DEC18u;
    // 0x1dec18: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1DEC18u;
    SET_GPR_U32(ctx, 31, 0x1DEC20u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1DEC18u, 0x1DEC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEC20u;
label_1dec20:
    // 0x1dec20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1dec20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dec24:
    // 0x1dec24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1dec24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dec28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1dec28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dec2c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1dec2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dec30: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1dec30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dec34: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1dec34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dec38: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1dec38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dec3c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1dec3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1dec40: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1dec40u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dec44: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1dec44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1dec48: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC48u;
        // 0x1dec4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEC50u;
}
