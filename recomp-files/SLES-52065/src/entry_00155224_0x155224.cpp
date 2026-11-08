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

// Function: entry_00155224
// Address: 0x155224 - 0x155328
void entry_00155224_0x155224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155224_0x155224");
#endif

    switch (ctx->pc) {
        case 0x1552ccu: goto label_1552cc;
        default: break;
    }

    ctx->pc = 0x155224u;

    // 0x155224: 0x0  nop
    ctx->pc = 0x155224u;
    // NOP
    // 0x155228: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x155228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15522c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x15522Cu;
    {
        const bool branch_taken_0x15522c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15522c) {
            ctx->pc = 0x155208u;
            return;
        }
    }
    ctx->pc = 0x155234u;
    // 0x155234: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x155234u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155238: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x155238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x15523c: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x15523cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x155240: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x155240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x155244: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x155244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155248: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x155248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x15524c: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x15524cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x155250: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x155250u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x155254: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x155254u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155258: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x155258u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15525c: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x15525cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155260: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x155260u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155264: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x155264u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155268: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x155268u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15526c: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x15526cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x155270: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x155270u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155274: 0xf9060000  sqc2        $vf6, 0x0($t0)
    ctx->pc = 0x155274u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155278: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x155278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15527c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x15527cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155280: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x155280u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x155284: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x155284u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155288: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x155288u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15528c: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x15528cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155290: 0xf8e60000  sqc2        $vf6, 0x0($a3)
    ctx->pc = 0x155290u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155294: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x155294u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x155298: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x155298u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15529c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15529cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1552a0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1552a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1552a4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1552a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1552a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1552a8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1552ac: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1552acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1552b0: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x1552b0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1552b4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1552b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1552b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1552b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1552bc: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1552bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1552c0: 0xf8e60000  sqc2        $vf6, 0x0($a3)
    ctx->pc = 0x1552c0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1552c4: 0xc055334  jal         func_154CD0
    ctx->pc = 0x1552C4u;
    SET_GPR_U32(ctx, 31, 0x1552CCu);
    ctx->pc = 0x1552C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1552C4u;
    // 0x1552c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154CD0u, 0x1552C4u, 0x1552CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1552CCu;
label_1552cc:
    // 0x1552cc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1552ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1552d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1552d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1552d4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1552d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1552d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1552d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1552dc: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x1552dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1552e0: 0x46140881  sub.s       $f2, $f1, $f20
    ctx->pc = 0x1552e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1552e4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1552e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1552e8: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1552e8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1552ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1552ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1552f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1552f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1552f4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1552f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1552f8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1552f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1552fc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1552fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155300: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x155300u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x155304: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x155304u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x155308: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x155308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15530c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x15530cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x155310: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x155310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155314: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x155314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155318: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x155318u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x15531c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15531cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x155320: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x155320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x155324: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x155324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    ctx->pc = 0x155328u;
}
