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

// Function: entry_001629a0
// Address: 0x1629a0 - 0x162a70
void entry_001629a0_0x1629a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001629a0_0x1629a0");
#endif

    switch (ctx->pc) {
        case 0x1629a8u: goto label_1629a8;
        default: break;
    }

    ctx->pc = 0x1629a0u;

    // 0x1629a0: 0xc055ccc  jal         func_157330
    ctx->pc = 0x1629A0u;
    SET_GPR_U32(ctx, 31, 0x1629A8u);
    ctx->pc = 0x1629A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1629A0u;
    // 0x1629a4: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157330u, 0x1629A0u, 0x1629A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1629A8u;
label_1629a8:
    // 0x1629a8: 0x27a30210  addiu       $v1, $sp, 0x210
    ctx->pc = 0x1629a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1629ac: 0x27a20240  addiu       $v0, $sp, 0x240
    ctx->pc = 0x1629acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1629b0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1629b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1629b4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1629b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1629b8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1629b8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1629bc: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x1629bcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1629c0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1629c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1629c4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1629c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1629c8: 0x4be8324a  vmaddz.xyzw $vf9, $vf6, $vf8z
    ctx->pc = 0x1629c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1629cc: 0xf8690000  sqc2        $vf9, 0x0($v1)
    ctx->pc = 0x1629ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1629d0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1629d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1629d4: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1629d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1629d8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1629d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1629dc: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1629dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1629e0: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1629e0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1629e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1629e4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1629e8: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1629e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1629ec: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x1629ecu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1629f0: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1629f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1629f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1629f4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1629f8: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1629f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1629fc: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x1629fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x162a00: 0x0  nop
    ctx->pc = 0x162a00u;
    // NOP
    // 0x162a04: 0x0  nop
    ctx->pc = 0x162a04u;
    // NOP
    // 0x162a08: 0x0  nop
    ctx->pc = 0x162a08u;
    // NOP
    // 0x162a0c: 0x46150004  c1          0x150004
    ctx->pc = 0x162a0cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x162a10: 0x0  nop
    ctx->pc = 0x162a10u;
    // NOP
    // 0x162a14: 0x0  nop
    ctx->pc = 0x162a14u;
    // NOP
    // 0x162a18: 0x0  nop
    ctx->pc = 0x162a18u;
    // NOP
    // 0x162a1c: 0x46000104  c1          0x104
    ctx->pc = 0x162a1cu;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x162a20: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x162a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x162a24: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x162a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x162a28: 0x3c02400c  lui         $v0, 0x400C
    ctx->pc = 0x162a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16396 << 16));
    // 0x162a2c: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x162a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x162a30: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x162a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x162a34: 0x86420220  lh          $v0, 0x220($s2)
    ctx->pc = 0x162a34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x162a38: 0xc6230334  lwc1        $f3, 0x334($s1)
    ctx->pc = 0x162a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x162a3c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x162a3cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x162a40: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x162a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162a44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x162a44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162a48: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x162a48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x162a4c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x162a4cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x162a50: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x162a50u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x162a54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x162a54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162a58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162A58u;
    {
        const bool branch_taken_0x162a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A58u;
        // 0x162a5c: 0x4604035c  madd.s      $f13, $f0, $f4 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a58) {
            ctx->pc = 0x162A70u;
            return;
        }
    }
    ctx->pc = 0x162A60u;
    // 0x162a60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x162a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x162a64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162a68: 0x0  nop
    ctx->pc = 0x162a68u;
    // NOP
    // 0x162a6c: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x162a6cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->pc = 0x162a70u;
}
