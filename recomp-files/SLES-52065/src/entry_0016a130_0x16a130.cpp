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

// Function: entry_0016a130
// Address: 0x16a130 - 0x16a208
void entry_0016a130_0x16a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a130_0x16a130");
#endif

    switch (ctx->pc) {
        case 0x16a174u: goto label_16a174;
        case 0x16a1d8u: goto label_16a1d8;
        case 0x16a1ecu: goto label_16a1ec;
        case 0x16a200u: goto label_16a200;
        default: break;
    }

    ctx->pc = 0x16a130u;

    // 0x16a130: 0x92230222  lbu         $v1, 0x222($s1)
    ctx->pc = 0x16a130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 546)));
    // 0x16a134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a138: 0x1462003d  bne         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x16A138u;
    {
        const bool branch_taken_0x16a138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16a138) {
            ctx->pc = 0x16A230u;
            return;
        }
    }
    ctx->pc = 0x16A140u;
    // 0x16a140: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x16a140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a144: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x16a144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x16a148: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16a148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x16a14c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a150: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16a150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a154: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x16a154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x16a158: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x16a158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x16a15c: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x16a15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a160: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a160u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a164: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x16a164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x16a168: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x16a168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16a16c: 0xc05f330  jal         func_17CCC0
    ctx->pc = 0x16A16Cu;
    SET_GPR_U32(ctx, 31, 0x16A174u);
    ctx->pc = 0x16A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A16Cu;
    // 0x16a170: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CCC0u, 0x16A16Cu, 0x16A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A174u;
label_16a174:
    // 0x16a174: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x16a174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16a178: 0x0  nop
    ctx->pc = 0x16a178u;
    // NOP
    // 0x16a17c: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x16a17cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a180: 0x0  nop
    ctx->pc = 0x16a180u;
    // NOP
    // 0x16a184: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x16A184u;
    {
        const bool branch_taken_0x16a184 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a184) {
            ctx->pc = 0x16A208u;
            return;
        }
    }
    ctx->pc = 0x16A18Cu;
    // 0x16a18c: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x16a18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x16a190: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x16a190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x16a194: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x16a194u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16a198: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16a198u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a19c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x16a19cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16a1a0: 0x0  nop
    ctx->pc = 0x16a1a0u;
    // NOP
    // 0x16a1a4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16a1a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16a1a8: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16a1a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16a1ac: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x16a1acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16a1b0: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x16a1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16a1b4: 0x26020290  addiu       $v0, $s0, 0x290
    ctx->pc = 0x16a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x16a1b8: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x16a1b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16a1bc: 0x4b002107  vsubw.x     $vf4, $vf4, $vf0w
    ctx->pc = 0x16a1bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16a1c0: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16a1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16a1c4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x16a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x16a1c8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16a1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x16a1cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16a1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a1d0: 0xc056194  jal         func_158650
    ctx->pc = 0x16A1D0u;
    SET_GPR_U32(ctx, 31, 0x16A1D8u);
    ctx->pc = 0x16A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A1D0u;
    // 0x16a1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x16A1D0u, 0x16A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A1D8u;
label_16a1d8:
    // 0x16a1d8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x16a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x16a1dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16a1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x16a1e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16a1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a1e4: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x16A1E4u;
    SET_GPR_U32(ctx, 31, 0x16A1ECu);
    ctx->pc = 0x16A1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A1E4u;
    // 0x16a1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x16A1E4u, 0x16A1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A1ECu;
label_16a1ec:
    // 0x16a1ec: 0xc62d0200  lwc1        $f13, 0x200($s1)
    ctx->pc = 0x16a1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16a1f0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x16a1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x16a1f4: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x16a1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16a1f8: 0xc054f5c  jal         func_153D70
    ctx->pc = 0x16A1F8u;
    SET_GPR_U32(ctx, 31, 0x16A200u);
    ctx->pc = 0x16A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A1F8u;
    // 0x16a1fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153D70u, 0x16A1F8u, 0x16A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A200u;
label_16a200:
    // 0x16a200: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16A200u;
    {
        const bool branch_taken_0x16a200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A200u;
        // 0x16a204: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a200) {
            ctx->pc = 0x16A20Cu;
            return;
        }
    }
    ctx->pc = 0x16A208u;
}
