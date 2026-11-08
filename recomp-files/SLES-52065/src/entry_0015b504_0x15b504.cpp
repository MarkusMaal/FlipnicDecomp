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

// Function: entry_0015b504
// Address: 0x15b504 - 0x15b5bc
void entry_0015b504_0x15b504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b504_0x15b504");
#endif

    switch (ctx->pc) {
        case 0x15b57cu: goto label_15b57c;
        case 0x15b590u: goto label_15b590;
        case 0x15b5a8u: goto label_15b5a8;
        case 0x15b5b4u: goto label_15b5b4;
        default: break;
    }

    ctx->pc = 0x15b504u;

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
            return;
        }
    }
    ctx->pc = 0x15B5BCu;
}
