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

// Function: FUN_0015b5e0
// Address: 0x15b5e0 - 0x15b790
void FUN_0015b5e0_0x15b5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015b5e0_0x15b5e0");
#endif

    switch (ctx->pc) {
        case 0x15b5fcu: goto label_15b5fc;
        case 0x15b6ccu: goto label_15b6cc;
        case 0x15b6e0u: goto label_15b6e0;
        case 0x15b6f8u: goto label_15b6f8;
        case 0x15b704u: goto label_15b704;
        case 0x15b764u: goto label_15b764;
        default: break;
    }

    ctx->pc = 0x15b5e0u;

    // 0x15b5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15b5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15b5e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15b5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15b5e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b5ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b5f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15b5f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5f4: 0xc056c4c  jal         func_15B130
    ctx->pc = 0x15B5F4u;
    SET_GPR_U32(ctx, 31, 0x15B5FCu);
    ctx->pc = 0x15B5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B5F4u;
    // 0x15b5f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B130u, 0x15B5F4u, 0x15B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B5FCu;
label_15b5fc:
    // 0x15b5fc: 0x4400043  bltz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x15B5FCu;
    {
        const bool branch_taken_0x15b5fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15b5fc) {
            ctx->pc = 0x15B70Cu;
            goto label_15b70c;
        }
    }
    ctx->pc = 0x15B604u;
    // 0x15b604: 0x8e0802e8  lw          $t0, 0x2E8($s0)
    ctx->pc = 0x15b604u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x15b608: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x15b608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x15b60c: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x15b60cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15b610: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15b610u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15b614: 0x0  nop
    ctx->pc = 0x15b614u;
    // NOP
    // 0x15b618: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x15b618u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x15b61c: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x15b61cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15b620: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x15b620u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15b624: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x15b624u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15b628: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15b628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b62c: 0xc60102e8  lwc1        $f1, 0x2E8($s0)
    ctx->pc = 0x15b62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b630: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15b630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b634: 0x0  nop
    ctx->pc = 0x15b634u;
    // NOP
    // 0x15b638: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15B638u;
    {
        const bool branch_taken_0x15b638 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B638u;
        // 0x15b63c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b638) {
            ctx->pc = 0x15B644u;
            goto label_15b644;
        }
    }
    ctx->pc = 0x15B640u;
    // 0x15b640: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x15b640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
label_15b644:
    // 0x15b644: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B644u;
    {
        const bool branch_taken_0x15b644 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15b644) {
            ctx->pc = 0x15B654u;
            goto label_15b654;
        }
    }
    ctx->pc = 0x15B64Cu;
    // 0x15b64c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15b650: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x15b650u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_15b654:
    // 0x15b654: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x15b654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x15b658: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15b658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15b65c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x15b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15b660: 0x26040290  addiu       $a0, $s0, 0x290
    ctx->pc = 0x15b660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x15b664: 0xc4600300  lwc1        $f0, 0x300($v1)
    ctx->pc = 0x15b664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b668: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15b668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b66c: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x15b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x15b670: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15b670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15b674: 0xe4600300  swc1        $f0, 0x300($v1)
    ctx->pc = 0x15b674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 768), bits); }
    // 0x15b678: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15b678u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b67c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x15b67cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15b680: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15b680u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15b684: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15b684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15b688: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x15b688u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x15b68c: 0x4a0003bf  vwaitq
    ctx->pc = 0x15b68cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15b690: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x15b690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15b694: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x15b694u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x15b698: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x15b698u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15b69c: 0x4a0003bf  vwaitq
    ctx->pc = 0x15b69cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15b6a0: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x15b6a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15b6a4: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x15b6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15b6a8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x15b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x15b6ac: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x15b6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x15b6b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15b6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b6b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b6b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15b6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b6bc: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x15b6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b6c0: 0xc44c004c  lwc1        $f12, 0x4C($v0)
    ctx->pc = 0x15b6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b6c4: 0xc056194  jal         func_158650
    ctx->pc = 0x15B6C4u;
    SET_GPR_U32(ctx, 31, 0x15B6CCu);
    ctx->pc = 0x15B6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B6C4u;
    // 0x15b6c8: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x15B6C4u, 0x15B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B6CCu;
label_15b6cc:
    // 0x15b6cc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x15b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x15b6d0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x15b6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x15b6d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15b6d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15b6d8: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x15B6D8u;
    SET_GPR_U32(ctx, 31, 0x15B6E0u);
    ctx->pc = 0x15B6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B6D8u;
    // 0x15b6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x15B6D8u, 0x15B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B6E0u;
label_15b6e0:
    // 0x15b6e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b6e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15b6e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15b6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15b6ec: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x15b6ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x15b6f0: 0xc0425a4  jal         func_109690
    ctx->pc = 0x15B6F0u;
    SET_GPR_U32(ctx, 31, 0x15B6F8u);
    ctx->pc = 0x15B6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B6F0u;
    // 0x15b6f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x15B6F0u, 0x15B6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B6F8u;
label_15b6f8:
    // 0x15b6f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b6fc: 0xc042118  jal         func_108460
    ctx->pc = 0x15B6FCu;
    SET_GPR_U32(ctx, 31, 0x15B704u);
    ctx->pc = 0x15B700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B6FCu;
    // 0x15b700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x15B6FCu, 0x15B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B704u;
label_15b704:
    // 0x15b704: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15B704u;
    {
        const bool branch_taken_0x15b704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B704u;
        // 0x15b708: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b704) {
            ctx->pc = 0x15B710u;
            goto label_15b710;
        }
    }
    ctx->pc = 0x15B70Cu;
label_15b70c:
    // 0x15b70c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15b710:
    // 0x15b710: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15B710u;
    {
        const bool branch_taken_0x15b710 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15b710) {
            ctx->pc = 0x15B778u;
            goto label_15b778;
        }
    }
    ctx->pc = 0x15B718u;
    // 0x15b718: 0x8e2201d4  lw          $v0, 0x1D4($s1)
    ctx->pc = 0x15b718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x15b71c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15b720: 0xae2201d4  sw          $v0, 0x1D4($s1)
    ctx->pc = 0x15b720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 2));
    // 0x15b724: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x15b724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x15b728: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x15b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x15b72c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x15b72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b730: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15b730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15b734: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x15b734u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15b738: 0x0  nop
    ctx->pc = 0x15b738u;
    // NOP
    // 0x15b73c: 0x0  nop
    ctx->pc = 0x15b73cu;
    // NOP
    // 0x15b740: 0x1010  mfhi        $v0
    ctx->pc = 0x15b740u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x15b744: 0xa082002b  sb          $v0, 0x2B($a0)
    ctx->pc = 0x15b744u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b748: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x15b748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x15b74c: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x15b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x15b750: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15B750u;
    {
        const bool branch_taken_0x15b750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B750u;
        // 0x15b754: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b750) {
            ctx->pc = 0x15B770u;
            goto label_15b770;
        }
    }
    ctx->pc = 0x15B758u;
    // 0x15b758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b75c: 0xc042570  jal         func_1095C0
    ctx->pc = 0x15B75Cu;
    SET_GPR_U32(ctx, 31, 0x15B764u);
    ctx->pc = 0x15B760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B75Cu;
    // 0x15b760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x15B75Cu, 0x15B764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B764u;
label_15b764:
    // 0x15b764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15b764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b768: 0xa22201d3  sb          $v0, 0x1D3($s1)
    ctx->pc = 0x15b768u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b76c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b770:
    // 0x15b770: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15B770u;
    {
        const bool branch_taken_0x15b770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B770u;
        // 0x15b774: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b770) {
            ctx->pc = 0x15B780u;
            goto label_15b780;
        }
    }
    ctx->pc = 0x15B778u;
label_15b778:
    // 0x15b778: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15b778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b77c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15b77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15b780:
    // 0x15b780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b788: 0x3e00008  jr          $ra
    ctx->pc = 0x15B788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B788u;
        // 0x15b78c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B790u;
}
