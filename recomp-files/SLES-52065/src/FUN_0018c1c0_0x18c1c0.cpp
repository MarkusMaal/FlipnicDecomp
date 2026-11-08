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

// Function: FUN_0018c1c0
// Address: 0x18c1c0 - 0x18c304
void FUN_0018c1c0_0x18c1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018c1c0_0x18c1c0");
#endif

    switch (ctx->pc) {
        case 0x18c1e8u: goto label_18c1e8;
        case 0x18c228u: goto label_18c228;
        case 0x18c234u: goto label_18c234;
        case 0x18c254u: goto label_18c254;
        case 0x18c260u: goto label_18c260;
        case 0x18c280u: goto label_18c280;
        default: break;
    }

    ctx->pc = 0x18c1c0u;

    // 0x18c1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c1c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18c1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18c1c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18c1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18c1cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18c1ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18c1d0: 0x8c820540  lw          $v0, 0x540($a0)
    ctx->pc = 0x18c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1344)));
    // 0x18c1d4: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x18C1D4u;
    {
        const bool branch_taken_0x18c1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C1D4u;
        // 0x18c1d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c1d4) {
            ctx->pc = 0x18C2ECu;
            goto label_18c2ec;
        }
    }
    ctx->pc = 0x18C1DCu;
    // 0x18c1dc: 0xc60c057c  lwc1        $f12, 0x57C($s0)
    ctx->pc = 0x18c1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18c1e0: 0xc0631cc  jal         func_18C730
    ctx->pc = 0x18C1E0u;
    SET_GPR_U32(ctx, 31, 0x18C1E8u);
    ctx->pc = 0x18C1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C1E0u;
    // 0x18c1e4: 0x26050520  addiu       $a1, $s0, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C730u, 0x18C1E0u, 0x18C1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C1E8u;
label_18c1e8:
    // 0x18c1e8: 0x8e020560  lw          $v0, 0x560($s0)
    ctx->pc = 0x18c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x18c1ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18C1ECu;
    {
        const bool branch_taken_0x18c1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c1ec) {
            ctx->pc = 0x18C220u;
            goto label_18c220;
        }
    }
    ctx->pc = 0x18C1F4u;
    // 0x18c1f4: 0xc60104e0  lwc1        $f1, 0x4E0($s0)
    ctx->pc = 0x18c1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c1f8: 0xc6000570  lwc1        $f0, 0x570($s0)
    ctx->pc = 0x18c1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c1fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18c1fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c200: 0xe60004e0  swc1        $f0, 0x4E0($s0)
    ctx->pc = 0x18c200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1248), bits); }
    // 0x18c204: 0xc60104e4  lwc1        $f1, 0x4E4($s0)
    ctx->pc = 0x18c204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c208: 0xc6000574  lwc1        $f0, 0x574($s0)
    ctx->pc = 0x18c208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c20c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18c20cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c210: 0xe60004e4  swc1        $f0, 0x4E4($s0)
    ctx->pc = 0x18c210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1252), bits); }
    // 0x18c214: 0x8e020560  lw          $v0, 0x560($s0)
    ctx->pc = 0x18c214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x18c218: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18c21c: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x18c21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
label_18c220:
    // 0x18c220: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18C220u;
    SET_GPR_U32(ctx, 31, 0x18C228u);
    ctx->pc = 0x18C224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C220u;
    // 0x18c224: 0xc60c04e4  lwc1        $f12, 0x4E4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18C220u, 0x18C228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C228u;
label_18c228:
    // 0x18c228: 0xc60c04e0  lwc1        $f12, 0x4E0($s0)
    ctx->pc = 0x18c228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18c22c: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x18C22Cu;
    SET_GPR_U32(ctx, 31, 0x18C234u);
    ctx->pc = 0x18C230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C22Cu;
    // 0x18c230: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x18C22Cu, 0x18C234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C234u;
label_18c234:
    // 0x18c234: 0x4600a082  mul.s       $f2, $f20, $f0
    ctx->pc = 0x18c234u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x18c238: 0xc601055c  lwc1        $f1, 0x55C($s0)
    ctx->pc = 0x18c238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c23c: 0xc60004d0  lwc1        $f0, 0x4D0($s0)
    ctx->pc = 0x18c23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c240: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18c240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18c244: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18c244u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18c248: 0xe60004d0  swc1        $f0, 0x4D0($s0)
    ctx->pc = 0x18c248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1232), bits); }
    // 0x18c24c: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x18C24Cu;
    SET_GPR_U32(ctx, 31, 0x18C254u);
    ctx->pc = 0x18C250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C24Cu;
    // 0x18c250: 0xc60c04e4  lwc1        $f12, 0x4E4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x18C24Cu, 0x18C254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C254u;
label_18c254:
    // 0x18c254: 0xc60c04e0  lwc1        $f12, 0x4E0($s0)
    ctx->pc = 0x18c254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18c258: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x18C258u;
    SET_GPR_U32(ctx, 31, 0x18C260u);
    ctx->pc = 0x18C25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C258u;
    // 0x18c25c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x18C258u, 0x18C260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C260u;
label_18c260:
    // 0x18c260: 0x4600a082  mul.s       $f2, $f20, $f0
    ctx->pc = 0x18c260u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x18c264: 0xc601055c  lwc1        $f1, 0x55C($s0)
    ctx->pc = 0x18c264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c268: 0xc60004d8  lwc1        $f0, 0x4D8($s0)
    ctx->pc = 0x18c268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c26c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18c26cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18c270: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18c270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18c274: 0xe60004d8  swc1        $f0, 0x4D8($s0)
    ctx->pc = 0x18c274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1240), bits); }
    // 0x18c278: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18C278u;
    SET_GPR_U32(ctx, 31, 0x18C280u);
    ctx->pc = 0x18C27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C278u;
    // 0x18c27c: 0xc60c04e0  lwc1        $f12, 0x4E0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18C278u, 0x18C280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C280u;
label_18c280:
    // 0x18c280: 0xc602055c  lwc1        $f2, 0x55C($s0)
    ctx->pc = 0x18c280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c284: 0x260304d0  addiu       $v1, $s0, 0x4D0
    ctx->pc = 0x18c284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1232));
    // 0x18c288: 0xc60104d4  lwc1        $f1, 0x4D4($s0)
    ctx->pc = 0x18c288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c28c: 0x26020520  addiu       $v0, $s0, 0x520
    ctx->pc = 0x18c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x18c290: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18c290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18c294: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18c294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c298: 0xe60004d4  swc1        $f0, 0x4D4($s0)
    ctx->pc = 0x18c298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1236), bits); }
    // 0x18c29c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x18c29cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18c2a0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x18c2a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c2a4: 0x4bc4296c  vsub.xyz    $vf5, $vf5, $vf4
    ctx->pc = 0x18c2a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18c2a8: 0x4bc5292a  vmul.xyz    $vf4, $vf5, $vf5
    ctx->pc = 0x18c2a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18c2ac: 0x4b85233d  vmr32.xy    $vf5, $vf4
    ctx->pc = 0x18c2acu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18c2b0: 0x4b062b3d  vmr32.x     $vf6, $vf5
    ctx->pc = 0x18c2b0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18c2b4: 0x4b0521e8  vadd.x      $vf7, $vf4, $vf5
    ctx->pc = 0x18c2b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18c2b8: 0x4b073168  vadd.x      $vf5, $vf6, $vf7
    ctx->pc = 0x18c2b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18c2bc: 0x4a0503bd  .word       0x4A0503BD                   # vsqrt       $Q, $vf5x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18c2bcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18c2c0: 0x4a0003bf  vwaitq
    ctx->pc = 0x18c2c0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18c2c4: 0x4842b000  cfc2.ni     $v0, $vi22
    ctx->pc = 0x18c2c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18c2c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18c2c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c2cc: 0xc600055c  lwc1        $f0, 0x55C($s0)
    ctx->pc = 0x18c2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c2d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18c2d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c2d4: 0x0  nop
    ctx->pc = 0x18c2d4u;
    // NOP
    // 0x18c2d8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x18C2D8u;
    {
        const bool branch_taken_0x18c2d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2D8u;
        // 0x18c2dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2d8) {
            ctx->pc = 0x18C2E8u;
            goto label_18c2e8;
        }
    }
    ctx->pc = 0x18C2E0u;
    // 0x18c2e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C2E0u;
    {
        const bool branch_taken_0x18c2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2E0u;
        // 0x18c2e4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2e0) {
            ctx->pc = 0x18C2F4u;
            goto label_18c2f4;
        }
    }
    ctx->pc = 0x18C2E8u;
label_18c2e8:
    // 0x18c2e8: 0xae000540  sw          $zero, 0x540($s0)
    ctx->pc = 0x18c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1344), GPR_U32(ctx, 0));
label_18c2ec:
    // 0x18c2ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18c2ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c2f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18c2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18c2f4:
    // 0x18c2f4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18c2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18c2f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18c2f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x18C2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2FCu;
        // 0x18c300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C304u;
}
