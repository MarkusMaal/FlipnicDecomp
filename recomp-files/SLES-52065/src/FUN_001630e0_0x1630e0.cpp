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

// Function: FUN_001630e0
// Address: 0x1630e0 - 0x163240
void FUN_001630e0_0x1630e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001630e0_0x1630e0");
#endif

    switch (ctx->pc) {
        case 0x163100u: goto label_163100;
        case 0x16310cu: goto label_16310c;
        case 0x163120u: goto label_163120;
        case 0x1631b0u: goto label_1631b0;
        default: break;
    }

    ctx->pc = 0x1630e0u;

    // 0x1630e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1630e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1630e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1630e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1630e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1630e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1630ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1630ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1630f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1630f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1630f4: 0x8490024c  lh          $s0, 0x24C($a0)
    ctx->pc = 0x1630f4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 588)));
    // 0x1630f8: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1630F8u;
    SET_GPR_U32(ctx, 31, 0x163100u);
    ctx->pc = 0x1630FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1630F8u;
    // 0x1630fc: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1630F8u, 0x163100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163100u;
label_163100:
    // 0x163100: 0xae220244  sw          $v0, 0x244($s1)
    ctx->pc = 0x163100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 2));
    // 0x163104: 0xc040168  jal         func_1005A0
    ctx->pc = 0x163104u;
    SET_GPR_U32(ctx, 31, 0x16310Cu);
    ctx->pc = 0x163108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163104u;
    // 0x163108: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x163104u, 0x16310Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16310Cu;
label_16310c:
    // 0x16310c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16310cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163110: 0xae220248  sw          $v0, 0x248($s1)
    ctx->pc = 0x163110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
    // 0x163114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163118: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x163118u;
    {
        const bool branch_taken_0x163118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163118u;
        // 0x16311c: 0x2604ffff  addiu       $a0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163118) {
            ctx->pc = 0x163194u;
            goto label_163194;
        }
    }
    ctx->pc = 0x163120u;
label_163120:
    // 0x163120: 0x8e230240  lw          $v1, 0x240($s1)
    ctx->pc = 0x163120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
    // 0x163124: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x163124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x163128: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x163128u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16312c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x16312cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x163130: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x163130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x163134: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x163134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163138: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x163138u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16313c: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x16313cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x163140: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x163140u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163144: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x163144u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163148: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x163148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16314c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16314cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163150: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x163150u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x163154: 0x4a0003bf  vwaitq
    ctx->pc = 0x163154u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x163158: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x163158u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16315c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16315cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x163160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163164: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x163164u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x163168: 0x8e230244  lw          $v1, 0x244($s1)
    ctx->pc = 0x163168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x16316c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x16316cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x163170: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x163170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x163174: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x163174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x163178: 0x8e230248  lw          $v1, 0x248($s1)
    ctx->pc = 0x163178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x16317c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16317cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x163180: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x163180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x163184: 0x8e230244  lw          $v1, 0x244($s1)
    ctx->pc = 0x163184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x163188: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x163188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16318c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x16318cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163190: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x163190u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_163194:
    // 0x163194: 0x0  nop
    ctx->pc = 0x163194u;
    // NOP
    // 0x163198: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x163198u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x16319c: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x16319Cu;
    {
        const bool branch_taken_0x16319c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16319c) {
            ctx->pc = 0x163120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163120;
        }
    }
    ctx->pc = 0x1631A4u;
    // 0x1631a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1631a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1631a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1631A8u;
    {
        const bool branch_taken_0x1631a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1631ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631A8u;
        // 0x1631ac: 0x2604ffff  addiu       $a0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631a8) {
            ctx->pc = 0x1631CCu;
            goto label_1631cc;
        }
    }
    ctx->pc = 0x1631B0u;
label_1631b0:
    // 0x1631b0: 0x8e230248  lw          $v1, 0x248($s1)
    ctx->pc = 0x1631b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x1631b4: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1631b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1631b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1631b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1631bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1631bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1631c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1631c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1631c4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1631c4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1631c8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1631c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1631cc:
    // 0x1631cc: 0x0  nop
    ctx->pc = 0x1631ccu;
    // NOP
    // 0x1631d0: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x1631d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1631d4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1631D4u;
    {
        const bool branch_taken_0x1631d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1631d4) {
            ctx->pc = 0x1631B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1631b0;
        }
    }
    ctx->pc = 0x1631DCu;
    // 0x1631dc: 0x8e230244  lw          $v1, 0x244($s1)
    ctx->pc = 0x1631dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x1631e0: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x1631e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1631e4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1631e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1631e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1631e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1631ec: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1631ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1631f0: 0xc461fff8  lwc1        $f1, -0x8($v1)
    ctx->pc = 0x1631f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1631f4: 0xe461fffc  swc1        $f1, -0x4($v1)
    ctx->pc = 0x1631f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    // 0x1631f8: 0x8e230248  lw          $v1, 0x248($s1)
    ctx->pc = 0x1631f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x1631fc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1631fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x163200: 0xac64fffc  sw          $a0, -0x4($v1)
    ctx->pc = 0x163200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 4));
    // 0x163204: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x163204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163208: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x163208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16320c: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x16320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163210: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x163210u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x163214: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163214u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163218: 0x0  nop
    ctx->pc = 0x163218u;
    // NOP
    // 0x16321c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16321Cu;
    {
        const bool branch_taken_0x16321c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x163220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16321Cu;
        // 0x163220: 0xe621022c  swc1        $f1, 0x22C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16321c) {
            ctx->pc = 0x16322Cu;
            goto label_16322c;
        }
    }
    ctx->pc = 0x163224u;
    // 0x163224: 0xc7808020  lwc1        $f0, -0x7FE0($gp)
    ctx->pc = 0x163224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163228: 0xe620022c  swc1        $f0, 0x22C($s1)
    ctx->pc = 0x163228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
label_16322c:
    // 0x16322c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16322cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163238: 0x3e00008  jr          $ra
    ctx->pc = 0x163238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163238u;
        // 0x16323c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163240u;
}
