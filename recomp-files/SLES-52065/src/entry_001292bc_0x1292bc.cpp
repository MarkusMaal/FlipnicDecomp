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

// Function: entry_001292bc
// Address: 0x1292bc - 0x129408
void entry_001292bc_0x1292bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001292bc_0x1292bc");
#endif

    switch (ctx->pc) {
        case 0x1292c4u: goto label_1292c4;
        case 0x1292d0u: goto label_1292d0;
        case 0x1292d8u: goto label_1292d8;
        case 0x1292e8u: goto label_1292e8;
        case 0x1292f8u: goto label_1292f8;
        case 0x129354u: goto label_129354;
        case 0x1293b8u: goto label_1293b8;
        case 0x1293d8u: goto label_1293d8;
        default: break;
    }

    ctx->pc = 0x1292bcu;

    // 0x1292bc: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1292BCu;
    SET_GPR_U32(ctx, 31, 0x1292C4u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1292BCu, 0x1292C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1292C4u;
label_1292c4:
    // 0x1292c4: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x1292c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1292c8: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x1292C8u;
    SET_GPR_U32(ctx, 31, 0x1292D0u);
    ctx->pc = 0x1292CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1292C8u;
    // 0x1292cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x1292C8u, 0x1292D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1292D0u;
label_1292d0:
    // 0x1292d0: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1292D0u;
    SET_GPR_U32(ctx, 31, 0x1292D8u);
    ctx->pc = 0x1292D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1292D0u;
    // 0x1292d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1292D0u, 0x1292D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1292D8u;
label_1292d8:
    // 0x1292d8: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x1292d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1292dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1292dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1292e0: 0xc04a038  jal         func_1280E0
    ctx->pc = 0x1292E0u;
    SET_GPR_U32(ctx, 31, 0x1292E8u);
    ctx->pc = 0x1292E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1292E0u;
    // 0x1292e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280E0u, 0x1292E0u, 0x1292E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1292E8u;
label_1292e8:
    // 0x1292e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1292e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1292ec: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x1292ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1292f0: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x1292F0u;
    SET_GPR_U32(ctx, 31, 0x1292F8u);
    ctx->pc = 0x1292F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1292F0u;
    // 0x1292f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x1292F0u, 0x1292F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1292F8u;
label_1292f8:
    // 0x1292f8: 0x27a20310  addiu       $v0, $sp, 0x310
    ctx->pc = 0x1292f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1292fc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1292fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x129300: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x129300u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129304: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x129304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x129308: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x129308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x12930c: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x12930cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x129310: 0x27a20320  addiu       $v0, $sp, 0x320
    ctx->pc = 0x129310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x129314: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x129314u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x129318: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x129318u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12931c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x12931cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x129320: 0xc7a10330  lwc1        $f1, 0x330($sp)
    ctx->pc = 0x129320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129324: 0xc7a00334  lwc1        $f0, 0x334($sp)
    ctx->pc = 0x129324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129328: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x129328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x12932c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x12932cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x129330: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x129330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129334: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x129334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129338: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x129338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12933c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12933cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x129340: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x129340u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x129344: 0x0  nop
    ctx->pc = 0x129344u;
    // NOP
    // 0x129348: 0x0  nop
    ctx->pc = 0x129348u;
    // NOP
    // 0x12934c: 0xc049860  jal         func_126180
    ctx->pc = 0x12934Cu;
    SET_GPR_U32(ctx, 31, 0x129354u);
    ctx->pc = 0x126180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126180u, 0x12934Cu, 0x129354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129354u;
label_129354:
    // 0x129354: 0x27a20340  addiu       $v0, $sp, 0x340
    ctx->pc = 0x129354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x129358: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x129358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12935c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x12935cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129360: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x129360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x129364: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x129364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x129368: 0x27a90094  addiu       $t1, $sp, 0x94
    ctx->pc = 0x129368u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x12936c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12936cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129370: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x129370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x129374: 0x27a20350  addiu       $v0, $sp, 0x350
    ctx->pc = 0x129374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x129378: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x129378u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x12937c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x12937cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129380: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x129380u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x129384: 0xc7a00360  lwc1        $f0, 0x360($sp)
    ctx->pc = 0x129384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129388: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x129388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x12938c: 0xc7a00364  lwc1        $f0, 0x364($sp)
    ctx->pc = 0x12938cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129390: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x129390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x129394: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x129394u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x129398: 0x7fa20370  sq          $v0, 0x370($sp)
    ctx->pc = 0x129398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 2));
    // 0x12939c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x12939cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1293a0: 0x7fa20380  sq          $v0, 0x380($sp)
    ctx->pc = 0x1293a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 2));
    // 0x1293a4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1293a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1293a8: 0xe7a00390  swc1        $f0, 0x390($sp)
    ctx->pc = 0x1293a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 912), bits); }
    // 0x1293ac: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x1293acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1293b0: 0xc049948  jal         func_126520
    ctx->pc = 0x1293B0u;
    SET_GPR_U32(ctx, 31, 0x1293B8u);
    ctx->pc = 0x1293B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1293B0u;
    // 0x1293b4: 0xe7a00394  swc1        $f0, 0x394($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 916), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126520u, 0x1293B0u, 0x1293B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1293B8u;
label_1293b8:
    // 0x1293b8: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1293b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1293bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1293bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1293c0: 0xae030110  sw          $v1, 0x110($s0)
    ctx->pc = 0x1293c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
    // 0x1293c4: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1293c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1293c8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1293C8u;
    {
        const bool branch_taken_0x1293c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1293CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293C8u;
        // 0x1293cc: 0x27a403a0  addiu       $a0, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293c8) {
            ctx->pc = 0x129408u;
            return;
        }
    }
    ctx->pc = 0x1293D0u;
    // 0x1293d0: 0xc0498ac  jal         func_1262B0
    ctx->pc = 0x1293D0u;
    SET_GPR_U32(ctx, 31, 0x1293D8u);
    ctx->pc = 0x1293D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1293D0u;
    // 0x1293d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1262B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1262B0u, 0x1293D0u, 0x1293D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1293D8u;
label_1293d8:
    // 0x1293d8: 0x27a303a0  addiu       $v1, $sp, 0x3A0
    ctx->pc = 0x1293d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x1293dc: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x1293dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x1293e0: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1293e0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1293e4: 0x7e0500b0  sq          $a1, 0xB0($s0)
    ctx->pc = 0x1293e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 5));
    // 0x1293e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1293e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1293ec: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x1293ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1293f0: 0x7e0400c0  sq          $a0, 0xC0($s0)
    ctx->pc = 0x1293f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 4));
    // 0x1293f4: 0xc7a003c0  lwc1        $f0, 0x3C0($sp)
    ctx->pc = 0x1293f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1293f8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1293f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1293fc: 0xc7a003c4  lwc1        $f0, 0x3C4($sp)
    ctx->pc = 0x1293fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129400: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x129400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x129404: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x129404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    ctx->pc = 0x129408u;
}
