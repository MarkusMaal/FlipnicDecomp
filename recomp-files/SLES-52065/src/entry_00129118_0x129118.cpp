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

// Function: entry_00129118
// Address: 0x129118 - 0x1291c8
void entry_00129118_0x129118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129118_0x129118");
#endif

    switch (ctx->pc) {
        case 0x129134u: goto label_129134;
        case 0x129140u: goto label_129140;
        case 0x129148u: goto label_129148;
        case 0x129158u: goto label_129158;
        case 0x129168u: goto label_129168;
        case 0x1291c0u: goto label_1291c0;
        default: break;
    }

    ctx->pc = 0x129118u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1291C8u;
}
