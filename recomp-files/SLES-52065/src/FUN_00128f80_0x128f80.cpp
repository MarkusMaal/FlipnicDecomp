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

// Function: FUN_00128f80
// Address: 0x128f80 - 0x129420
void FUN_00128f80_0x128f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128f80_0x128f80");
#endif

    switch (ctx->pc) {
        case 0x128fa0u: goto label_128fa0;
        case 0x128fa8u: goto label_128fa8;
        case 0x12903cu: goto label_12903c;
        case 0x129048u: goto label_129048;
        case 0x129050u: goto label_129050;
        case 0x129060u: goto label_129060;
        case 0x129070u: goto label_129070;
        case 0x1290b8u: goto label_1290b8;
        case 0x129110u: goto label_129110;
        case 0x129134u: goto label_129134;
        case 0x129140u: goto label_129140;
        case 0x129148u: goto label_129148;
        case 0x129158u: goto label_129158;
        case 0x129168u: goto label_129168;
        case 0x1291c0u: goto label_1291c0;
        case 0x1291d0u: goto label_1291d0;
        case 0x1291dcu: goto label_1291dc;
        case 0x1291e4u: goto label_1291e4;
        case 0x1291f4u: goto label_1291f4;
        case 0x129204u: goto label_129204;
        case 0x12925cu: goto label_12925c;
        case 0x1292b4u: goto label_1292b4;
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

    ctx->pc = 0x128f80u;

    // 0x128f80: 0x27bdfc30  addiu       $sp, $sp, -0x3D0
    ctx->pc = 0x128f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966320));
    // 0x128f84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x128f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x128f88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x128f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x128f8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x128f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x128f90: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x128f90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x128f94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x128f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f98: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x128F98u;
    SET_GPR_U32(ctx, 31, 0x128FA0u);
    ctx->pc = 0x128F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F98u;
    // 0x128f9c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x128F98u, 0x128FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128FA0u;
label_128fa0:
    // 0x128fa0: 0xc04a050  jal         func_128140
    ctx->pc = 0x128FA0u;
    SET_GPR_U32(ctx, 31, 0x128FA8u);
    ctx->pc = 0x128FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128FA0u;
    // 0x128fa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128140u, 0x128FA0u, 0x128FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128FA8u;
label_128fa8:
    // 0x128fa8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x128fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x128fac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128facu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128fb0: 0x0  nop
    ctx->pc = 0x128fb0u;
    // NOP
    // 0x128fb4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x128fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128fb8: 0x0  nop
    ctx->pc = 0x128fb8u;
    // NOP
    // 0x128fbc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x128FBCu;
    {
        const bool branch_taken_0x128fbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128fbc) {
            ctx->pc = 0x128FD8u;
            goto label_128fd8;
        }
    }
    ctx->pc = 0x128FC4u;
    // 0x128fc4: 0xc600011c  lwc1        $f0, 0x11C($s0)
    ctx->pc = 0x128fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128fc8: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x128fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x128fcc: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x128fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x128fd0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x128FD0u;
    {
        const bool branch_taken_0x128fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128FD0u;
        // 0x128fd4: 0xae0300a8  sw          $v1, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128fd0) {
            ctx->pc = 0x128FFCu;
            goto label_128ffc;
        }
    }
    ctx->pc = 0x128FD8u;
label_128fd8:
    // 0x128fd8: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x128fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x128fdc: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x128fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x128fe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128fe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128fe4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x128fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128fe8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x128fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x128fec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x128fecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x128ff0: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x128ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x128ff4: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x128ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x128ff8: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x128ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_128ffc:
    // 0x128ffc: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x128ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x129000: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x129000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129004: 0x108300ad  beq         $a0, $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x129004u;
    {
        const bool branch_taken_0x129004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x129008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129004u;
        // 0x129008: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129004) {
            ctx->pc = 0x1292BCu;
            goto label_1292bc;
        }
    }
    ctx->pc = 0x12900Cu;
    // 0x12900c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12900Cu;
    {
        const bool branch_taken_0x12900c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12900c) {
            ctx->pc = 0x12901Cu;
            goto label_12901c;
        }
    }
    ctx->pc = 0x129014u;
    // 0x129014: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x129014u;
    {
        const bool branch_taken_0x129014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129014u;
        // 0x129018: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129014) {
            ctx->pc = 0x12940Cu;
            goto label_12940c;
        }
    }
    ctx->pc = 0x12901Cu;
label_12901c:
    // 0x12901c: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x12901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x129020: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x129020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129024: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x129024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129028: 0x0  nop
    ctx->pc = 0x129028u;
    // NOP
    // 0x12902c: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x12902Cu;
    {
        const bool branch_taken_0x12902c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12902c) {
            ctx->pc = 0x129118u;
            goto label_129118;
        }
    }
    ctx->pc = 0x129034u;
    // 0x129034: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x129034u;
    SET_GPR_U32(ctx, 31, 0x12903Cu);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x129034u, 0x12903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12903Cu;
label_12903c:
    // 0x12903c: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x12903cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x129040: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x129040u;
    SET_GPR_U32(ctx, 31, 0x129048u);
    ctx->pc = 0x129044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129040u;
    // 0x129044: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x129040u, 0x129048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129048u;
label_129048:
    // 0x129048: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x129048u;
    SET_GPR_U32(ctx, 31, 0x129050u);
    ctx->pc = 0x12904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129048u;
    // 0x12904c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x129048u, 0x129050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129050u;
label_129050:
    // 0x129050: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x129050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x129054: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129058: 0xc04a038  jal         func_1280E0
    ctx->pc = 0x129058u;
    SET_GPR_U32(ctx, 31, 0x129060u);
    ctx->pc = 0x12905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129058u;
    // 0x12905c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280E0u, 0x129058u, 0x129060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129060u;
label_129060:
    // 0x129060: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x129060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129064: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x129064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x129068: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x129068u;
    SET_GPR_U32(ctx, 31, 0x129070u);
    ctx->pc = 0x12906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129068u;
    // 0x12906c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x129068u, 0x129070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129070u;
label_129070:
    // 0x129070: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x129070u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x129074: 0xc7a101b0  lwc1        $f1, 0x1B0($sp)
    ctx->pc = 0x129074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129078: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x129078u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x12907c: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x12907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129080: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x129080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x129084: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x129084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x129088: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x129088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x12908c: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x12908cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x129090: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x129090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x129094: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x129094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x129098: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x129098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x12909c: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x12909cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x1290a0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1290a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1290a4: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x1290a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x1290a8: 0x0  nop
    ctx->pc = 0x1290a8u;
    // NOP
    // 0x1290ac: 0x0  nop
    ctx->pc = 0x1290acu;
    // NOP
    // 0x1290b0: 0xc049860  jal         func_126180
    ctx->pc = 0x1290B0u;
    SET_GPR_U32(ctx, 31, 0x1290B8u);
    ctx->pc = 0x126180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126180u, 0x1290B0u, 0x1290B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1290B8u;
label_1290b8:
    // 0x1290b8: 0x7ba301c0  lq          $v1, 0x1C0($sp)
    ctx->pc = 0x1290b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1290bc: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1290bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1290c0: 0x7ba201d0  lq          $v0, 0x1D0($sp)
    ctx->pc = 0x1290c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1290c4: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x1290c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1290c8: 0x27a800f4  addiu       $t0, $sp, 0xF4
    ctx->pc = 0x1290c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1290cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1290ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1290d0: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1290d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1290d4: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x1290d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x1290d8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1290d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1290dc: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x1290dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1290e0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1290e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1290e4: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x1290e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1290e8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1290e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1290ec: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1290ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1290f0: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x1290f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x1290f4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1290f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1290f8: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1290f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x1290fc: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1290fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129100: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x129100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x129104: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x129104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129108: 0xc049948  jal         func_126520
    ctx->pc = 0x129108u;
    SET_GPR_U32(ctx, 31, 0x129110u);
    ctx->pc = 0x12910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129108u;
    // 0x12910c: 0xe7a00214  swc1        $f0, 0x214($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126520u, 0x129108u, 0x129110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129110u;
label_129110:
    // 0x129110: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x129110u;
    {
        const bool branch_taken_0x129110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129110) {
            ctx->pc = 0x129408u;
            goto label_129408;
        }
    }
    ctx->pc = 0x129118u;
label_129118:
    // 0x129118: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x129118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12911c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12911cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129120: 0x0  nop
    ctx->pc = 0x129120u;
    // NOP
    // 0x129124: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x129124u;
    {
        const bool branch_taken_0x129124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129124) {
            ctx->pc = 0x1291C8u;
            goto label_1291c8;
        }
    }
    ctx->pc = 0x12912Cu;
    // 0x12912c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x12912Cu;
    SET_GPR_U32(ctx, 31, 0x129134u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x12912Cu, 0x129134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129134u;
label_129134:
    // 0x129134: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x129134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x129138: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x129138u;
    SET_GPR_U32(ctx, 31, 0x129140u);
    ctx->pc = 0x12913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129138u;
    // 0x12913c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x129138u, 0x129140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129140u;
label_129140:
    // 0x129140: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x129140u;
    SET_GPR_U32(ctx, 31, 0x129148u);
    ctx->pc = 0x129144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129140u;
    // 0x129144: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x129140u, 0x129148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129148u;
label_129148:
    // 0x129148: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x129148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x12914c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12914cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129150: 0xc04a038  jal         func_1280E0
    ctx->pc = 0x129150u;
    SET_GPR_U32(ctx, 31, 0x129158u);
    ctx->pc = 0x129154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129150u;
    // 0x129154: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280E0u, 0x129150u, 0x129158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129158u;
label_129158:
    // 0x129158: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x129158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12915c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x12915cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x129160: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x129160u;
    SET_GPR_U32(ctx, 31, 0x129168u);
    ctx->pc = 0x129164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129160u;
    // 0x129164: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x129160u, 0x129168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129168u;
label_129168:
    // 0x129168: 0x7ba30220  lq          $v1, 0x220($sp)
    ctx->pc = 0x129168u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x12916c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x12916cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x129170: 0x7ba20230  lq          $v0, 0x230($sp)
    ctx->pc = 0x129170u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x129174: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x129174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x129178: 0x27a80124  addiu       $t0, $sp, 0x124
    ctx->pc = 0x129178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x12917c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12917cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129180: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x129180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x129184: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x129184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x129188: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x129188u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x12918c: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x12918cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129190: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x129190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x129194: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x129194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129198: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x129198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x12919c: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x12919cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1291a0: 0x7fa20250  sq          $v0, 0x250($sp)
    ctx->pc = 0x1291a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
    // 0x1291a4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1291a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1291a8: 0x7fa20260  sq          $v0, 0x260($sp)
    ctx->pc = 0x1291a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
    // 0x1291ac: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1291acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1291b0: 0xe7a00270  swc1        $f0, 0x270($sp)
    ctx->pc = 0x1291b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x1291b4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1291b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1291b8: 0xc049948  jal         func_126520
    ctx->pc = 0x1291B8u;
    SET_GPR_U32(ctx, 31, 0x1291C0u);
    ctx->pc = 0x1291BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1291B8u;
    // 0x1291bc: 0xe7a00274  swc1        $f0, 0x274($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126520u, 0x1291B8u, 0x1291C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1291C0u;
label_1291c0:
    // 0x1291c0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1291C0u;
    {
        const bool branch_taken_0x1291c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1291c0) {
            ctx->pc = 0x129408u;
            goto label_129408;
        }
    }
    ctx->pc = 0x1291C8u;
label_1291c8:
    // 0x1291c8: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1291C8u;
    SET_GPR_U32(ctx, 31, 0x1291D0u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1291C8u, 0x1291D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1291D0u;
label_1291d0:
    // 0x1291d0: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x1291d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1291d4: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x1291D4u;
    SET_GPR_U32(ctx, 31, 0x1291DCu);
    ctx->pc = 0x1291D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1291D4u;
    // 0x1291d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x1291D4u, 0x1291DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1291DCu;
label_1291dc:
    // 0x1291dc: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1291DCu;
    SET_GPR_U32(ctx, 31, 0x1291E4u);
    ctx->pc = 0x1291E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1291DCu;
    // 0x1291e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1291DCu, 0x1291E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1291E4u;
label_1291e4:
    // 0x1291e4: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x1291e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1291e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1291e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1291ec: 0xc04a038  jal         func_1280E0
    ctx->pc = 0x1291ECu;
    SET_GPR_U32(ctx, 31, 0x1291F4u);
    ctx->pc = 0x1291F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1291ECu;
    // 0x1291f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280E0u, 0x1291ECu, 0x1291F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1291F4u;
label_1291f4:
    // 0x1291f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1291f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1291f8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x1291f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x1291fc: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x1291FCu;
    SET_GPR_U32(ctx, 31, 0x129204u);
    ctx->pc = 0x129200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1291FCu;
    // 0x129200: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x1291FCu, 0x129204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129204u;
label_129204:
    // 0x129204: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x129204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x129208: 0x7ba30280  lq          $v1, 0x280($sp)
    ctx->pc = 0x129208u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x12920c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x12920cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x129210: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x129210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x129214: 0xc7a202a0  lwc1        $f2, 0x2A0($sp)
    ctx->pc = 0x129214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129218: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x129218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x12921c: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x12921cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x129220: 0xc7a102a4  lwc1        $f1, 0x2A4($sp)
    ctx->pc = 0x129220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129224: 0x46141801  sub.s       $f0, $f3, $f20
    ctx->pc = 0x129224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
    // 0x129228: 0x260600e0  addiu       $a2, $s0, 0xE0
    ctx->pc = 0x129228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x12922c: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x12922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
    // 0x129230: 0xe7a20150  swc1        $f2, 0x150($sp)
    ctx->pc = 0x129230u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x129234: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x129234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x129238: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x129238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x12923c: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x12923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x129240: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x129240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129244: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x129244u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x129248: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x129248u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x12924c: 0x0  nop
    ctx->pc = 0x12924cu;
    // NOP
    // 0x129250: 0x0  nop
    ctx->pc = 0x129250u;
    // NOP
    // 0x129254: 0xc049860  jal         func_126180
    ctx->pc = 0x129254u;
    SET_GPR_U32(ctx, 31, 0x12925Cu);
    ctx->pc = 0x126180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126180u, 0x129254u, 0x12925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12925Cu;
label_12925c:
    // 0x12925c: 0x7ba302b0  lq          $v1, 0x2B0($sp)
    ctx->pc = 0x12925cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x129260: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x129260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x129264: 0x7ba202c0  lq          $v0, 0x2C0($sp)
    ctx->pc = 0x129264u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x129268: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x129268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x12926c: 0x27a80184  addiu       $t0, $sp, 0x184
    ctx->pc = 0x12926cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x129270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129274: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x129274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x129278: 0x7fa30160  sq          $v1, 0x160($sp)
    ctx->pc = 0x129278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 3));
    // 0x12927c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x12927cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x129280: 0xc7a002d0  lwc1        $f0, 0x2D0($sp)
    ctx->pc = 0x129280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129284: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x129284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x129288: 0xc7a002d4  lwc1        $f0, 0x2D4($sp)
    ctx->pc = 0x129288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12928c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x12928cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x129290: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x129290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x129294: 0x7fa202e0  sq          $v0, 0x2E0($sp)
    ctx->pc = 0x129294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 2));
    // 0x129298: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x129298u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12929c: 0x7fa202f0  sq          $v0, 0x2F0($sp)
    ctx->pc = 0x12929cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 2));
    // 0x1292a0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1292a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1292a4: 0xe7a00300  swc1        $f0, 0x300($sp)
    ctx->pc = 0x1292a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
    // 0x1292a8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1292a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1292ac: 0xc049948  jal         func_126520
    ctx->pc = 0x1292ACu;
    SET_GPR_U32(ctx, 31, 0x1292B4u);
    ctx->pc = 0x1292B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1292ACu;
    // 0x1292b0: 0xe7a00304  swc1        $f0, 0x304($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 772), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126520u, 0x1292ACu, 0x1292B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1292B4u;
label_1292b4:
    // 0x1292b4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1292B4u;
    {
        const bool branch_taken_0x1292b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1292b4) {
            ctx->pc = 0x129408u;
            goto label_129408;
        }
    }
    ctx->pc = 0x1292BCu;
label_1292bc:
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
            goto label_129408;
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
label_129408:
    // 0x129408: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x129408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12940c:
    // 0x12940c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x12940cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x129410: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x129410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129414: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x129414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129418: 0x3e00008  jr          $ra
    ctx->pc = 0x129418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129418u;
        // 0x12941c: 0x27bd03d0  addiu       $sp, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129420u;
}
