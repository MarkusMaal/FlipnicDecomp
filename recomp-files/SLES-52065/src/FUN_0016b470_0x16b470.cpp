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

// Function: FUN_0016b470
// Address: 0x16b470 - 0x16b850
void FUN_0016b470_0x16b470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016b470_0x16b470");
#endif

    switch (ctx->pc) {
        case 0x16b498u: goto label_16b498;
        case 0x16b5bcu: goto label_16b5bc;
        case 0x16b7dcu: goto label_16b7dc;
        case 0x16b7ecu: goto label_16b7ec;
        case 0x16b804u: goto label_16b804;
        case 0x16b810u: goto label_16b810;
        case 0x16b824u: goto label_16b824;
        default: break;
    }

    ctx->pc = 0x16b470u;

    // 0x16b470: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16b470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16b474: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16b474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16b478: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16b478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16b47c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16b47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16b480: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16b480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b484: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16b484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16b488: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16b488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b48c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16b48cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16b490: 0xc056c4c  jal         func_15B130
    ctx->pc = 0x16B490u;
    SET_GPR_U32(ctx, 31, 0x16B498u);
    ctx->pc = 0x16B494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B490u;
    // 0x16b494: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B130u, 0x16B490u, 0x16B498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B498u;
label_16b498:
    // 0x16b498: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16b498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b49c: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x16b49cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x16b4a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B4A0u;
    {
        const bool branch_taken_0x16b4a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b4a0) {
            ctx->pc = 0x16B4B0u;
            goto label_16b4b0;
        }
    }
    ctx->pc = 0x16B4A8u;
    // 0x16b4a8: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x16B4A8u;
    {
        const bool branch_taken_0x16b4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4A8u;
        // 0x16b4ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4a8) {
            ctx->pc = 0x16B830u;
            goto label_16b830;
        }
    }
    ctx->pc = 0x16B4B0u;
label_16b4b0:
    // 0x16b4b0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B4B0u;
    {
        const bool branch_taken_0x16b4b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4B0u;
        // 0x16b4b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4b0) {
            ctx->pc = 0x16B4C0u;
            goto label_16b4c0;
        }
    }
    ctx->pc = 0x16B4B8u;
    // 0x16b4b8: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x16B4B8u;
    {
        const bool branch_taken_0x16b4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4B8u;
        // 0x16b4bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4b8) {
            ctx->pc = 0x16B830u;
            goto label_16b830;
        }
    }
    ctx->pc = 0x16B4C0u;
label_16b4c0:
    // 0x16b4c0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B4C0u;
    {
        const bool branch_taken_0x16b4c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x16B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4C0u;
        // 0x16b4c4: 0x200082a  slt         $at, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4c0) {
            ctx->pc = 0x16B4D0u;
            goto label_16b4d0;
        }
    }
    ctx->pc = 0x16B4C8u;
    // 0x16b4c8: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x16B4C8u;
    {
        const bool branch_taken_0x16b4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4C8u;
        // 0x16b4cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4c8) {
            ctx->pc = 0x16B830u;
            goto label_16b830;
        }
    }
    ctx->pc = 0x16B4D0u;
label_16b4d0:
    // 0x16b4d0: 0x142000d6  bnez        $at, . + 4 + (0xD6 << 2)
    ctx->pc = 0x16B4D0u;
    {
        const bool branch_taken_0x16b4d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b4d0) {
            ctx->pc = 0x16B82Cu;
            goto label_16b82c;
        }
    }
    ctx->pc = 0x16B4D8u;
    // 0x16b4d8: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x16b4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
    // 0x16b4dc: 0x8e2802e8  lw          $t0, 0x2E8($s1)
    ctx->pc = 0x16b4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 744)));
    // 0x16b4e0: 0x26220300  addiu       $v0, $s1, 0x300
    ctx->pc = 0x16b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x16b4e4: 0xda270000  lqc2        $vf7, 0x0($s1)
    ctx->pc = 0x16b4e4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16b4e8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16b4e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b4ec: 0x0  nop
    ctx->pc = 0x16b4ecu;
    // NOP
    // 0x16b4f0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16b4f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16b4f4: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16b4f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b4f8: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x16b4f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b4fc: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x16b4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16b500: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16b500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b504: 0xc62102e8  lwc1        $f1, 0x2E8($s1)
    ctx->pc = 0x16b504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b508: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16b508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b50c: 0x0  nop
    ctx->pc = 0x16b50cu;
    // NOP
    // 0x16b510: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16B510u;
    {
        const bool branch_taken_0x16b510 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b510) {
            ctx->pc = 0x16B51Cu;
            goto label_16b51c;
        }
    }
    ctx->pc = 0x16B518u;
    // 0x16b518: 0xe62002e8  swc1        $f0, 0x2E8($s1)
    ctx->pc = 0x16b518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
label_16b51c:
    // 0x16b51c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B51Cu;
    {
        const bool branch_taken_0x16b51c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x16B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B51Cu;
        // 0x16b520: 0x101043  sra         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b51c) {
            ctx->pc = 0x16B52Cu;
            goto label_16b52c;
        }
    }
    ctx->pc = 0x16B524u;
    // 0x16b524: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16b524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16b528: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16b528u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_16b52c:
    // 0x16b52c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x16b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x16b530: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16b530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b534: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16B534u;
    {
        const bool branch_taken_0x16b534 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x16b534) {
            ctx->pc = 0x16B550u;
            goto label_16b550;
        }
    }
    ctx->pc = 0x16B53Cu;
    // 0x16b53c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B53Cu;
    {
        const bool branch_taken_0x16b53c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b53c) {
            ctx->pc = 0x16B54Cu;
            goto label_16b54c;
        }
    }
    ctx->pc = 0x16B544u;
    // 0x16b544: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16B544u;
    {
        const bool branch_taken_0x16b544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B544u;
        // 0x16b548: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b544) {
            ctx->pc = 0x16B550u;
            goto label_16b550;
        }
    }
    ctx->pc = 0x16B54Cu;
label_16b54c:
    // 0x16b54c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16b54cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b550:
    // 0x16b550: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16b550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b554: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16b554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16b558: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x16b558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16b55c: 0x26240290  addiu       $a0, $s1, 0x290
    ctx->pc = 0x16b55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x16b560: 0xc4600300  lwc1        $f0, 0x300($v1)
    ctx->pc = 0x16b560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b564: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16b564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16b568: 0x26220300  addiu       $v0, $s1, 0x300
    ctx->pc = 0x16b568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x16b56c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16b56cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16b570: 0xe4600300  swc1        $f0, 0x300($v1)
    ctx->pc = 0x16b570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 768), bits); }
    // 0x16b574: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16b574u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b578: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16b578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b57c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16b57cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b580: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16b580u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b584: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16b584u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16b588: 0x4a0003bf  vwaitq
    ctx->pc = 0x16b588u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16b58c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16b58cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b590: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16b590u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16b594: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16b594u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b598: 0x4a0003bf  vwaitq
    ctx->pc = 0x16b598u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16b59c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16b59cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b5a0: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x16b5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16b5a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16b5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b5a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x16b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16b5ac: 0xc4540054  lwc1        $f20, 0x54($v0)
    ctx->pc = 0x16b5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16b5b0: 0xc455004c  lwc1        $f21, 0x4C($v0)
    ctx->pc = 0x16b5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16b5b4: 0xc055c70  jal         func_1571C0
    ctx->pc = 0x16B5B4u;
    SET_GPR_U32(ctx, 31, 0x16B5BCu);
    ctx->pc = 0x16B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B5B4u;
    // 0x16b5b8: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1571C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1571C0u, 0x16B5B4u, 0x16B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B5BCu;
label_16b5bc:
    // 0x16b5bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16b5c0: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x16b5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x16b5c4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x16b5c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16b5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16b5cc: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x16b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x16b5d0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16b5d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b5d4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x16b5d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b5d8: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16b5d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b5dc: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x16b5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16b5e0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x16b5e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16b5e4: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16b5e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b5e8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16b5e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b5ec: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16b5ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b5f0: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16b5f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16b5f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x16b5f4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16b5f8: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16b5f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b5fc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16b5fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16b600: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16b600u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16b604: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16b604u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b608: 0x4a0003bf  vwaitq
    ctx->pc = 0x16b608u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16b60c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16b60cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b610: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x16b610u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16b614: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16b614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16b618: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x16b618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x16b61c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b620: 0x0  nop
    ctx->pc = 0x16b620u;
    // NOP
    // 0x16b624: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x16b624u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b628: 0x0  nop
    ctx->pc = 0x16b628u;
    // NOP
    // 0x16b62c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16B62Cu;
    {
        const bool branch_taken_0x16b62c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b62c) {
            ctx->pc = 0x16B638u;
            goto label_16b638;
        }
    }
    ctx->pc = 0x16B634u;
    // 0x16b634: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x16b634u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_16b638:
    // 0x16b638: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x16b638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x16b63c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16b63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x16b640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b644: 0x0  nop
    ctx->pc = 0x16b644u;
    // NOP
    // 0x16b648: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x16b648u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b64c: 0x0  nop
    ctx->pc = 0x16b64cu;
    // NOP
    // 0x16b650: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
    ctx->pc = 0x16B650u;
    {
        const bool branch_taken_0x16b650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b650) {
            ctx->pc = 0x16B74Cu;
            goto label_16b74c;
        }
    }
    ctx->pc = 0x16B658u;
    // 0x16b658: 0xc6210298  lwc1        $f1, 0x298($s1)
    ctx->pc = 0x16b658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b65c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16b65cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b660: 0x0  nop
    ctx->pc = 0x16b660u;
    // NOP
    // 0x16b664: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16b664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b668: 0x0  nop
    ctx->pc = 0x16b668u;
    // NOP
    // 0x16b66c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16B66Cu;
    {
        const bool branch_taken_0x16b66c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B66Cu;
        // 0x16b670: 0x3c023f35  lui         $v0, 0x3F35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16181 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b66c) {
            ctx->pc = 0x16B684u;
            goto label_16b684;
        }
    }
    ctx->pc = 0x16B674u;
    // 0x16b674: 0x3c02bf35  lui         $v0, 0xBF35
    ctx->pc = 0x16b674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48949 << 16));
    // 0x16b678: 0x344204f3  ori         $v0, $v0, 0x4F3
    ctx->pc = 0x16b678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1267);
    // 0x16b67c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16B67Cu;
    {
        const bool branch_taken_0x16b67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B67Cu;
        // 0x16b680: 0xae220298  sw          $v0, 0x298($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b67c) {
            ctx->pc = 0x16B68Cu;
            goto label_16b68c;
        }
    }
    ctx->pc = 0x16B684u;
label_16b684:
    // 0x16b684: 0x344204f3  ori         $v0, $v0, 0x4F3
    ctx->pc = 0x16b684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1267);
    // 0x16b688: 0xae220298  sw          $v0, 0x298($s1)
    ctx->pc = 0x16b688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 2));
label_16b68c:
    // 0x16b68c: 0xc6210290  lwc1        $f1, 0x290($s1)
    ctx->pc = 0x16b68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b690: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16b690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b694: 0x0  nop
    ctx->pc = 0x16b694u;
    // NOP
    // 0x16b698: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16b698u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b69c: 0x0  nop
    ctx->pc = 0x16b69cu;
    // NOP
    // 0x16b6a0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16B6A0u;
    {
        const bool branch_taken_0x16b6a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6A0u;
        // 0x16b6a4: 0x3c023f35  lui         $v0, 0x3F35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16181 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6a0) {
            ctx->pc = 0x16B6B8u;
            goto label_16b6b8;
        }
    }
    ctx->pc = 0x16B6A8u;
    // 0x16b6a8: 0x3c02bf35  lui         $v0, 0xBF35
    ctx->pc = 0x16b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48949 << 16));
    // 0x16b6ac: 0x344204f3  ori         $v0, $v0, 0x4F3
    ctx->pc = 0x16b6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1267);
    // 0x16b6b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16B6B0u;
    {
        const bool branch_taken_0x16b6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6B0u;
        // 0x16b6b4: 0xae220290  sw          $v0, 0x290($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6b0) {
            ctx->pc = 0x16B6C0u;
            goto label_16b6c0;
        }
    }
    ctx->pc = 0x16B6B8u;
label_16b6b8:
    // 0x16b6b8: 0x344204f3  ori         $v0, $v0, 0x4F3
    ctx->pc = 0x16b6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1267);
    // 0x16b6bc: 0xae220290  sw          $v0, 0x290($s1)
    ctx->pc = 0x16b6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 2));
label_16b6c0:
    // 0x16b6c0: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x16b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x16b6c4: 0x26230290  addiu       $v1, $s1, 0x290
    ctx->pc = 0x16b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x16b6c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b6cc: 0x0  nop
    ctx->pc = 0x16b6ccu;
    // NOP
    // 0x16b6d0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x16b6d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x16b6d4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16b6d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b6d8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x16b6d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16b6dc: 0x0  nop
    ctx->pc = 0x16b6dcu;
    // NOP
    // 0x16b6e0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16b6e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16b6e4: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16b6e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b6e8: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x16b6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16b6ec: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x16b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16b6f0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16b6f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b6f4: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x16b6f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16b6f8: 0x0  nop
    ctx->pc = 0x16b6f8u;
    // NOP
    // 0x16b6fc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16b6fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16b700: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16b700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b704: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x16b704u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16b708: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16b708u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b70c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x16b70cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b710: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16b710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b714: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x16b714u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16b718: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16b718u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b71c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16b71cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b720: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16b720u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b724: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16b724u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b728: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16b728u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16b72c: 0x4a0003bf  vwaitq
    ctx->pc = 0x16b72cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16b730: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16b730u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b734: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16b734u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16b738: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16b738u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b73c: 0x4a0003bf  vwaitq
    ctx->pc = 0x16b73cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16b740: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16b740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b744: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16B744u;
    {
        const bool branch_taken_0x16b744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B744u;
        // 0x16b748: 0xf8660000  sqc2        $vf6, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b744) {
            ctx->pc = 0x16B7B4u;
            goto label_16b7b4;
        }
    }
    ctx->pc = 0x16B74Cu;
label_16b74c:
    // 0x16b74c: 0xc6210298  lwc1        $f1, 0x298($s1)
    ctx->pc = 0x16b74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b750: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16b750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b754: 0x0  nop
    ctx->pc = 0x16b754u;
    // NOP
    // 0x16b758: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16b758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b75c: 0x0  nop
    ctx->pc = 0x16b75cu;
    // NOP
    // 0x16b760: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16B760u;
    {
        const bool branch_taken_0x16b760 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B760u;
        // 0x16b764: 0x3c023f35  lui         $v0, 0x3F35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16181 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b760) {
            ctx->pc = 0x16B778u;
            goto label_16b778;
        }
    }
    ctx->pc = 0x16B768u;
    // 0x16b768: 0x3c02bf35  lui         $v0, 0xBF35
    ctx->pc = 0x16b768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48949 << 16));
    // 0x16b76c: 0x344204f3  ori         $v0, $v0, 0x4F3
    ctx->pc = 0x16b76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1267);
    // 0x16b770: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16B770u;
    {
        const bool branch_taken_0x16b770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B770u;
        // 0x16b774: 0xae220298  sw          $v0, 0x298($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b770) {
            ctx->pc = 0x16B780u;
            goto label_16b780;
        }
    }
    ctx->pc = 0x16B778u;
label_16b778:
    // 0x16b778: 0x344204f3  ori         $v0, $v0, 0x4F3
    ctx->pc = 0x16b778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1267);
    // 0x16b77c: 0xae220298  sw          $v0, 0x298($s1)
    ctx->pc = 0x16b77cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 2));
label_16b780:
    // 0x16b780: 0xc6210290  lwc1        $f1, 0x290($s1)
    ctx->pc = 0x16b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b784: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16b784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b788: 0x0  nop
    ctx->pc = 0x16b788u;
    // NOP
    // 0x16b78c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16b78cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b790: 0x0  nop
    ctx->pc = 0x16b790u;
    // NOP
    // 0x16b794: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16B794u;
    {
        const bool branch_taken_0x16b794 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B794u;
        // 0x16b798: 0x3c023f35  lui         $v0, 0x3F35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16181 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b794) {
            ctx->pc = 0x16B7ACu;
            goto label_16b7ac;
        }
    }
    ctx->pc = 0x16B79Cu;
    // 0x16b79c: 0x3c02bf35  lui         $v0, 0xBF35
    ctx->pc = 0x16b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48949 << 16));
    // 0x16b7a0: 0x344204f3  ori         $v0, $v0, 0x4F3
    ctx->pc = 0x16b7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1267);
    // 0x16b7a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16B7A4u;
    {
        const bool branch_taken_0x16b7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B7A4u;
        // 0x16b7a8: 0xae220290  sw          $v0, 0x290($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b7a4) {
            ctx->pc = 0x16B7B4u;
            goto label_16b7b4;
        }
    }
    ctx->pc = 0x16B7ACu;
label_16b7ac:
    // 0x16b7ac: 0x344204f3  ori         $v0, $v0, 0x4F3
    ctx->pc = 0x16b7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1267);
    // 0x16b7b0: 0xae220290  sw          $v0, 0x290($s1)
    ctx->pc = 0x16b7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 2));
label_16b7b4:
    // 0x16b7b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b7b8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16B7B8u;
    {
        const bool branch_taken_0x16b7b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B7B8u;
        // 0x16b7bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b7b8) {
            ctx->pc = 0x16B7E4u;
            goto label_16b7e4;
        }
    }
    ctx->pc = 0x16B7C0u;
    // 0x16b7c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b7c4: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B7C4u;
    {
        const bool branch_taken_0x16b7c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B7C4u;
        // 0x16b7c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b7c4) {
            ctx->pc = 0x16B7D4u;
            goto label_16b7d4;
        }
    }
    ctx->pc = 0x16B7CCu;
    // 0x16b7cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16B7CCu;
    {
        const bool branch_taken_0x16b7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B7CCu;
        // 0x16b7d0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b7cc) {
            ctx->pc = 0x16B7F0u;
            goto label_16b7f0;
        }
    }
    ctx->pc = 0x16B7D4u;
label_16b7d4:
    // 0x16b7d4: 0xc042118  jal         func_108460
    ctx->pc = 0x16B7D4u;
    SET_GPR_U32(ctx, 31, 0x16B7DCu);
    ctx->pc = 0x16B7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B7D4u;
    // 0x16b7d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16B7D4u, 0x16B7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B7DCu;
label_16b7dc:
    // 0x16b7dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16B7DCu;
    {
        const bool branch_taken_0x16b7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b7dc) {
            ctx->pc = 0x16B7ECu;
            goto label_16b7ec;
        }
    }
    ctx->pc = 0x16B7E4u;
label_16b7e4:
    // 0x16b7e4: 0xc042118  jal         func_108460
    ctx->pc = 0x16B7E4u;
    SET_GPR_U32(ctx, 31, 0x16B7ECu);
    ctx->pc = 0x16B7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B7E4u;
    // 0x16b7e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16B7E4u, 0x16B7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B7ECu;
label_16b7ec:
    // 0x16b7ec: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16b7ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_16b7f0:
    // 0x16b7f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b7f4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x16b7f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x16b7f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16b7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b7fc: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x16B7FCu;
    SET_GPR_U32(ctx, 31, 0x16B804u);
    ctx->pc = 0x16B800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B7FCu;
    // 0x16b800: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x16B7FCu, 0x16B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B804u;
label_16b804:
    // 0x16b804: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16b804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b808: 0xc0564b8  jal         func_1592E0
    ctx->pc = 0x16B808u;
    SET_GPR_U32(ctx, 31, 0x16B810u);
    ctx->pc = 0x16B80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B808u;
    // 0x16b80c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x16B808u, 0x16B810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B810u;
label_16b810:
    // 0x16b810: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x16b810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x16b814: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16b814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x16b818: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16b818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16b81c: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x16B81Cu;
    SET_GPR_U32(ctx, 31, 0x16B824u);
    ctx->pc = 0x16B820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B81Cu;
    // 0x16b820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x16B81Cu, 0x16B824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B824u;
label_16b824:
    // 0x16b824: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16B824u;
    {
        const bool branch_taken_0x16b824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B824u;
        // 0x16b828: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b824) {
            ctx->pc = 0x16B830u;
            goto label_16b830;
        }
    }
    ctx->pc = 0x16B82Cu;
label_16b82c:
    // 0x16b82c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16b830:
    // 0x16b830: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16b830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b834: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16b834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16b838: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16b838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b83c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16b83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16b840: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16b840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b844: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16b844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b848: 0x3e00008  jr          $ra
    ctx->pc = 0x16B848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B848u;
        // 0x16b84c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B850u;
}
