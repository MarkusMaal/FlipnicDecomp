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

// Function: FUN_0015b490
// Address: 0x15b490 - 0x15b5d4
void FUN_0015b490_0x15b490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015b490_0x15b490");
#endif

    switch (ctx->pc) {
        case 0x15b4acu: goto label_15b4ac;
        case 0x15b57cu: goto label_15b57c;
        case 0x15b590u: goto label_15b590;
        case 0x15b5a8u: goto label_15b5a8;
        case 0x15b5b4u: goto label_15b5b4;
        default: break;
    }

    ctx->pc = 0x15b490u;

    // 0x15b490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15b490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15b494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15b498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b49c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b4a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15b4a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b4a4: 0xc056c4c  jal         func_15B130
    ctx->pc = 0x15B4A4u;
    SET_GPR_U32(ctx, 31, 0x15B4ACu);
    ctx->pc = 0x15B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B4A4u;
    // 0x15b4a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B130u, 0x15B4A4u, 0x15B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B4ACu;
label_15b4ac:
    // 0x15b4ac: 0x4400043  bltz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x15B4ACu;
    {
        const bool branch_taken_0x15b4ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15b4ac) {
            ctx->pc = 0x15B5BCu;
            goto label_15b5bc;
        }
    }
    ctx->pc = 0x15B4B4u;
    // 0x15b4b4: 0x8e0802e8  lw          $t0, 0x2E8($s0)
    ctx->pc = 0x15b4b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x15b4b8: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x15b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x15b4bc: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x15b4bcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15b4c0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15b4c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15b4c4: 0x0  nop
    ctx->pc = 0x15b4c4u;
    // NOP
    // 0x15b4c8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x15b4c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x15b4cc: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x15b4ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15b4d0: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x15b4d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15b4d4: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x15b4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15b4d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15b4d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b4dc: 0xc60102e8  lwc1        $f1, 0x2E8($s0)
    ctx->pc = 0x15b4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b4e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15b4e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b4e4: 0x0  nop
    ctx->pc = 0x15b4e4u;
    // NOP
    // 0x15b4e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15B4E8u;
    {
        const bool branch_taken_0x15b4e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4E8u;
        // 0x15b4ec: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4e8) {
            ctx->pc = 0x15B4F4u;
            goto label_15b4f4;
        }
    }
    ctx->pc = 0x15B4F0u;
    // 0x15b4f0: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x15b4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
label_15b4f4:
    // 0x15b4f4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B4F4u;
    {
        const bool branch_taken_0x15b4f4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15b4f4) {
            ctx->pc = 0x15B504u;
            goto label_15b504;
        }
    }
    ctx->pc = 0x15B4FCu;
    // 0x15b4fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15b500: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x15b500u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_15b504:
    // 0x15b504: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x15b504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x15b508: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15b508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15b50c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x15b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15b510: 0x26040290  addiu       $a0, $s0, 0x290
    ctx->pc = 0x15b510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x15b514: 0xc4600300  lwc1        $f0, 0x300($v1)
    ctx->pc = 0x15b514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b518: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15b518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b51c: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x15b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x15b520: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15b520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15b524: 0xe4600300  swc1        $f0, 0x300($v1)
    ctx->pc = 0x15b524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 768), bits); }
    // 0x15b528: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15b528u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b52c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x15b52cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15b530: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15b530u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15b534: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15b534u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15b538: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x15b538u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x15b53c: 0x4a0003bf  vwaitq
    ctx->pc = 0x15b53cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15b540: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x15b540u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15b544: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x15b544u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x15b548: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x15b548u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15b54c: 0x4a0003bf  vwaitq
    ctx->pc = 0x15b54cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15b550: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x15b550u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15b554: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x15b554u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15b558: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x15b558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x15b55c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x15b55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x15b560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15b560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b564: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15b564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15b568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b56c: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x15b56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b570: 0xc44c004c  lwc1        $f12, 0x4C($v0)
    ctx->pc = 0x15b570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b574: 0xc056194  jal         func_158650
    ctx->pc = 0x15B574u;
    SET_GPR_U32(ctx, 31, 0x15B57Cu);
    ctx->pc = 0x15B578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B574u;
    // 0x15b578: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x15B574u, 0x15B57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B57Cu;
label_15b57c:
    // 0x15b57c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x15b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x15b580: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x15b580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x15b584: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15b584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15b588: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x15B588u;
    SET_GPR_U32(ctx, 31, 0x15B590u);
    ctx->pc = 0x15B58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B588u;
    // 0x15b58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x15B588u, 0x15B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B590u;
label_15b590:
    // 0x15b590: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15b590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b594: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15b594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15b598: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15b598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15b59c: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x15b59cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x15b5a0: 0xc0425a4  jal         func_109690
    ctx->pc = 0x15B5A0u;
    SET_GPR_U32(ctx, 31, 0x15B5A8u);
    ctx->pc = 0x15B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B5A0u;
    // 0x15b5a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x15B5A0u, 0x15B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B5A8u;
label_15b5a8:
    // 0x15b5a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5ac: 0xc042118  jal         func_108460
    ctx->pc = 0x15B5ACu;
    SET_GPR_U32(ctx, 31, 0x15B5B4u);
    ctx->pc = 0x15B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B5ACu;
    // 0x15b5b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x15B5ACu, 0x15B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B5B4u;
label_15b5b4:
    // 0x15b5b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15B5B4u;
    {
        const bool branch_taken_0x15b5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5B4u;
        // 0x15b5b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5b4) {
            ctx->pc = 0x15B5C0u;
            goto label_15b5c0;
        }
    }
    ctx->pc = 0x15B5BCu;
label_15b5bc:
    // 0x15b5bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15b5c0:
    // 0x15b5c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15b5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b5c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b5c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b5c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x15B5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5CCu;
        // 0x15b5d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B5D4u;
}
