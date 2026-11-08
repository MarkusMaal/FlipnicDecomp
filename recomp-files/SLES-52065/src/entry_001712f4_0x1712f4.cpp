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

// Function: entry_001712f4
// Address: 0x1712f4 - 0x1713c8
void entry_001712f4_0x1712f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001712f4_0x1712f4");
#endif

    switch (ctx->pc) {
        case 0x1712fcu: goto label_1712fc;
        case 0x17138cu: goto label_17138c;
        case 0x171394u: goto label_171394;
        case 0x1713b8u: goto label_1713b8;
        default: break;
    }

    ctx->pc = 0x1712f4u;

    // 0x1712f4: 0xc055c40  jal         func_157100
    ctx->pc = 0x1712F4u;
    SET_GPR_U32(ctx, 31, 0x1712FCu);
    ctx->pc = 0x1712F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1712F4u;
    // 0x1712f8: 0x8e040254  lw          $a0, 0x254($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1712F4u, 0x1712FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1712FCu;
label_1712fc:
    // 0x1712fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1712fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x171300: 0x26040240  addiu       $a0, $s0, 0x240
    ctx->pc = 0x171300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x171304: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x171304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x171308: 0xc6010230  lwc1        $f1, 0x230($s0)
    ctx->pc = 0x171308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17130c: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x17130cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171310: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x171310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x171314: 0x46141881  sub.s       $f2, $f3, $f20
    ctx->pc = 0x171314u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
    // 0x171318: 0x4601a01a  mula.s      $f20, $f1
    ctx->pc = 0x171318u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[20], ctx->f[1]));
    // 0x17131c: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x17131cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x171320: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x171320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x171324: 0xc6010234  lwc1        $f1, 0x234($s0)
    ctx->pc = 0x171324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171328: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x171328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x17132c: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x17132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171330: 0x4601a01a  mula.s      $f20, $f1
    ctx->pc = 0x171330u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[20], ctx->f[1]));
    // 0x171334: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x171334u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x171338: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x171338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x17133c: 0xc6010238  lwc1        $f1, 0x238($s0)
    ctx->pc = 0x17133cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171340: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x171340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x171344: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x171344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171348: 0x4601a01a  mula.s      $f20, $f1
    ctx->pc = 0x171348u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[20], ctx->f[1]));
    // 0x17134c: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x17134cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x171350: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x171350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x171354: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x171354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x171358: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x171358u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17135c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x17135cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x171360: 0x4a200180  vaddx.w     $vf6, $vf0, $vf0x
    ctx->pc = 0x171360u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x171364: 0x4bc521a8  vadd.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x171364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x171368: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x171368u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17136c: 0x8e040254  lw          $a0, 0x254($s0)
    ctx->pc = 0x17136cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x171370: 0xc4800344  lwc1        $f0, 0x344($a0)
    ctx->pc = 0x171370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171374: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x171374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171378: 0x0  nop
    ctx->pc = 0x171378u;
    // NOP
    // 0x17137c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x17137Cu;
    {
        const bool branch_taken_0x17137c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x171380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17137Cu;
        // 0x171380: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17137c) {
            ctx->pc = 0x1713C8u;
            return;
        }
    }
    ctx->pc = 0x171384u;
    // 0x171384: 0xc0561e4  jal         func_158790
    ctx->pc = 0x171384u;
    SET_GPR_U32(ctx, 31, 0x17138Cu);
    ctx->pc = 0x158790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158790u, 0x171384u, 0x17138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17138Cu;
label_17138c:
    // 0x17138c: 0xc055c40  jal         func_157100
    ctx->pc = 0x17138Cu;
    SET_GPR_U32(ctx, 31, 0x171394u);
    ctx->pc = 0x171390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17138Cu;
    // 0x171390: 0x8e040254  lw          $a0, 0x254($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x17138Cu, 0x171394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171394u;
label_171394:
    // 0x171394: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x171394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171398: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x171398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x17139c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x17139cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1713a0: 0x8e040254  lw          $a0, 0x254($s0)
    ctx->pc = 0x1713a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x1713a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1713a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1713a8: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x1713a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1713ac: 0xc46c004c  lwc1        $f12, 0x4C($v1)
    ctx->pc = 0x1713acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1713b0: 0xc056194  jal         func_158650
    ctx->pc = 0x1713B0u;
    SET_GPR_U32(ctx, 31, 0x1713B8u);
    ctx->pc = 0x1713B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1713B0u;
    // 0x1713b4: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x1713B0u, 0x1713B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1713B8u;
label_1713b8:
    // 0x1713b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1713b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1713bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713c0: 0xc042118  jal         func_108460
    ctx->pc = 0x1713C0u;
    SET_GPR_U32(ctx, 31, 0x1713C8u);
    ctx->pc = 0x1713C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1713C0u;
    // 0x1713c4: 0xae000254  sw          $zero, 0x254($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1713C0u, 0x1713C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1713C8u;
}
