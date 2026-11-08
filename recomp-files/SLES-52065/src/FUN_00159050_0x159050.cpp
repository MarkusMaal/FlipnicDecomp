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

// Function: FUN_00159050
// Address: 0x159050 - 0x1591fc
void FUN_00159050_0x159050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00159050_0x159050");
#endif

    switch (ctx->pc) {
        case 0x159080u: goto label_159080;
        case 0x1590c4u: goto label_1590c4;
        case 0x159170u: goto label_159170;
        default: break;
    }

    ctx->pc = 0x159050u;

    // 0x159050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x159050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x159054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x159054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x159058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15905c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15905cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x159060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159064: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x159064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x159068: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x159068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15906c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x15906cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x159070: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x159070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x159074: 0x24470020  addiu       $a3, $v0, 0x20
    ctx->pc = 0x159074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x159078: 0xc057158  jal         func_15C560
    ctx->pc = 0x159078u;
    SET_GPR_U32(ctx, 31, 0x159080u);
    ctx->pc = 0x15907Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159078u;
    // 0x15907c: 0x26060060  addiu       $a2, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C560u, 0x159078u, 0x159080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159080u;
label_159080:
    // 0x159080: 0x262401e0  addiu       $a0, $s1, 0x1E0
    ctx->pc = 0x159080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x159084: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x159084u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x159088: 0x12000057  beqz        $s0, . + 4 + (0x57 << 2)
    ctx->pc = 0x159088u;
    {
        const bool branch_taken_0x159088 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159088u;
        // 0x15908c: 0xf8840000  sqc2        $vf4, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159088) {
            ctx->pc = 0x1591E8u;
            goto label_1591e8;
        }
    }
    ctx->pc = 0x159090u;
    // 0x159090: 0xc6210200  lwc1        $f1, 0x200($s1)
    ctx->pc = 0x159090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159094: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159098: 0x0  nop
    ctx->pc = 0x159098u;
    // NOP
    // 0x15909c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x15909cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1590a0: 0x0  nop
    ctx->pc = 0x1590a0u;
    // NOP
    // 0x1590a4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1590A4u;
    {
        const bool branch_taken_0x1590a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1590A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590A4u;
        // 0x1590a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590a4) {
            ctx->pc = 0x1590B8u;
            goto label_1590b8;
        }
    }
    ctx->pc = 0x1590ACu;
    // 0x1590ac: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1590ACu;
    {
        const bool branch_taken_0x1590ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1590B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590ACu;
        // 0x1590b0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590ac) {
            ctx->pc = 0x1591ECu;
            goto label_1591ec;
        }
    }
    ctx->pc = 0x1590B4u;
    // 0x1590b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1590b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1590b8:
    // 0x1590b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1590B8u;
    {
        const bool branch_taken_0x1590b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1590b8) {
            ctx->pc = 0x1590DCu;
            goto label_1590dc;
        }
    }
    ctx->pc = 0x1590C0u;
    // 0x1590c0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1590c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1590c4:
    // 0x1590c4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1590c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1590c8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1590c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1590cc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1590ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1590d0: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1590d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1590d4: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x1590d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1590d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1590d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1590dc:
    // 0x1590dc: 0x0  nop
    ctx->pc = 0x1590dcu;
    // NOP
    // 0x1590e0: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x1590e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1590e4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1590E4u;
    {
        const bool branch_taken_0x1590e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1590E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590E4u;
        // 0x1590e8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590e4) {
            ctx->pc = 0x1590C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1590c4;
        }
    }
    ctx->pc = 0x1590ECu;
    // 0x1590ec: 0xc62001e0  lwc1        $f0, 0x1E0($s1)
    ctx->pc = 0x1590ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1590f0: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x1590f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
    // 0x1590f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1590f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1590f8: 0x262701e0  addiu       $a3, $s1, 0x1E0
    ctx->pc = 0x1590f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x1590fc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1590fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x159100: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x159100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x159104: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x159104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159108: 0xe62001e0  swc1        $f0, 0x1E0($s1)
    ctx->pc = 0x159108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
    // 0x15910c: 0xc62001e4  lwc1        $f0, 0x1E4($s1)
    ctx->pc = 0x15910cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159110: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x159110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159114: 0xe62001e4  swc1        $f0, 0x1E4($s1)
    ctx->pc = 0x159114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 484), bits); }
    // 0x159118: 0xc62001e8  lwc1        $f0, 0x1E8($s1)
    ctx->pc = 0x159118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15911c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15911cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159120: 0xe62001e8  swc1        $f0, 0x1E8($s1)
    ctx->pc = 0x159120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 488), bits); }
    // 0x159124: 0xae2001ec  sw          $zero, 0x1EC($s1)
    ctx->pc = 0x159124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 0));
    // 0x159128: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x159128u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15912c: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x15912cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159130: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x159130u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159134: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x159134u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x159138: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x159138u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15913c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x15913cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159140: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x159140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159144: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x159144u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159148: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x159148u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x15914c: 0x4a0003bf  vwaitq
    ctx->pc = 0x15914cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x159150: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x159150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159154: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x159154u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x159158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15915c: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x15915cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
    // 0x159160: 0x8e2601f0  lw          $a2, 0x1F0($s1)
    ctx->pc = 0x159160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x159164: 0x862401f4  lh          $a0, 0x1F4($s1)
    ctx->pc = 0x159164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x159168: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x159168u;
    {
        const bool branch_taken_0x159168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159168u;
        // 0x15916c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159168) {
            ctx->pc = 0x1591B0u;
            goto label_1591b0;
        }
    }
    ctx->pc = 0x159170u;
label_159170:
    // 0x159170: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x159170u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x159174: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x159174u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159178: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x159178u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15917c: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x15917cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159180: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x159180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159184: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x159184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159188: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x159188u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15918c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15918cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159190: 0x0  nop
    ctx->pc = 0x159190u;
    // NOP
    // 0x159194: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x159194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159198: 0x0  nop
    ctx->pc = 0x159198u;
    // NOP
    // 0x15919c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15919Cu;
    {
        const bool branch_taken_0x15919c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15919c) {
            ctx->pc = 0x1591A8u;
            goto label_1591a8;
        }
    }
    ctx->pc = 0x1591A4u;
    // 0x1591a4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1591a4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1591a8:
    // 0x1591a8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1591a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1591ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1591acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1591b0:
    // 0x1591b0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x1591b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1591b4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1591B4u;
    {
        const bool branch_taken_0x1591b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1591b4) {
            ctx->pc = 0x159170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159170;
        }
    }
    ctx->pc = 0x1591BCu;
    // 0x1591bc: 0x0  nop
    ctx->pc = 0x1591bcu;
    // NOP
    // 0x1591c0: 0x0  nop
    ctx->pc = 0x1591c0u;
    // NOP
    // 0x1591c4: 0x0  nop
    ctx->pc = 0x1591c4u;
    // NOP
    // 0x1591c8: 0x46020084  c1          0x20084
    ctx->pc = 0x1591c8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1591cc: 0x0  nop
    ctx->pc = 0x1591ccu;
    // NOP
    // 0x1591d0: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x1591d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1591d4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1591d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1591d8: 0x0  nop
    ctx->pc = 0x1591d8u;
    // NOP
    // 0x1591dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1591DCu;
    {
        const bool branch_taken_0x1591dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1591dc) {
            ctx->pc = 0x1591E8u;
            goto label_1591e8;
        }
    }
    ctx->pc = 0x1591E4u;
    // 0x1591e4: 0xe6220200  swc1        $f2, 0x200($s1)
    ctx->pc = 0x1591e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
label_1591e8:
    // 0x1591e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1591e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1591ec:
    // 0x1591ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1591ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1591f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1591f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1591f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1591F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1591F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1591F4u;
        // 0x1591f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1591F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1591FCu;
}
