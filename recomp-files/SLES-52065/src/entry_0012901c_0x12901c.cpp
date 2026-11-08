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

// Function: entry_0012901c
// Address: 0x12901c - 0x129118
void entry_0012901c_0x12901c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012901c_0x12901c");
#endif

    switch (ctx->pc) {
        case 0x12903cu: goto label_12903c;
        case 0x129048u: goto label_129048;
        case 0x129050u: goto label_129050;
        case 0x129060u: goto label_129060;
        case 0x129070u: goto label_129070;
        case 0x1290b8u: goto label_1290b8;
        case 0x129110u: goto label_129110;
        default: break;
    }

    ctx->pc = 0x12901cu;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x129118u;
}
