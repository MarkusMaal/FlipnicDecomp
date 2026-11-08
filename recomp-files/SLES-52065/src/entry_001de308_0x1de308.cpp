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

// Function: entry_001de308
// Address: 0x1de308 - 0x1de418
void entry_001de308_0x1de308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de308_0x1de308");
#endif

    switch (ctx->pc) {
        case 0x1de340u: goto label_1de340;
        default: break;
    }

    ctx->pc = 0x1de308u;

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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1DE414u;
    // 0x1de414: 0x0  nop
    ctx->pc = 0x1de414u;
    // NOP
    ctx->pc = 0x1de418u;
}
