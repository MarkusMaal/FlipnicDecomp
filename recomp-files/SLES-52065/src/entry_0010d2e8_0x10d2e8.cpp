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

// Function: entry_0010d2e8
// Address: 0x10d2e8 - 0x10d3b4
void entry_0010d2e8_0x10d2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d2e8_0x10d2e8");
#endif

    switch (ctx->pc) {
        case 0x10d308u: goto label_10d308;
        case 0x10d310u: goto label_10d310;
        case 0x10d368u: goto label_10d368;
        case 0x10d398u: goto label_10d398;
        default: break;
    }

    ctx->pc = 0x10d2e8u;

    // 0x10d2e8: 0xc6200244  lwc1        $f0, 0x244($s1)
    ctx->pc = 0x10d2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d2ec: 0x3c024116  lui         $v0, 0x4116
    ctx->pc = 0x10d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16662 << 16));
    // 0x10d2f0: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x10d2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x10d2f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10d2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10d2f8: 0x0  nop
    ctx->pc = 0x10d2f8u;
    // NOP
    // 0x10d2fc: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x10d2fcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10d300: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x10D300u;
    SET_GPR_U32(ctx, 31, 0x10D308u);
    ctx->pc = 0x10D304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D300u;
    // 0x10d304: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x10D300u, 0x10D308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D308u;
label_10d308:
    // 0x10d308: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x10D308u;
    SET_GPR_U32(ctx, 31, 0x10D310u);
    ctx->pc = 0x10D30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D308u;
    // 0x10d30c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x10D308u, 0x10D310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D310u;
label_10d310:
    // 0x10d310: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x10d310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x10d314: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x10d314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x10d318: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x10d318u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x10d31c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x10d31cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d320: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x10d320u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d324: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x10d324u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10d328: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x10d328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10d32c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x10d32cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10d330: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x10d330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10d334: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x10d334u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x10d338: 0x4a0003bf  vwaitq
    ctx->pc = 0x10d338u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10d33c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x10d33cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10d340: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10d340u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10d344: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10d344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10d348: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x10d348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x10d34c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10d34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d350: 0x3c023f54  lui         $v0, 0x3F54
    ctx->pc = 0x10d350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16212 << 16));
    // 0x10d354: 0x46010581  sub.s       $f22, $f0, $f1
    ctx->pc = 0x10d354u;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x10d358: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x10d358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x10d35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10d35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d360: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x10D360u;
    SET_GPR_U32(ctx, 31, 0x10D368u);
    ctx->pc = 0x10D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D360u;
    // 0x10d364: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x10D360u, 0x10D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D368u;
label_10d368:
    // 0x10d368: 0x4600b082  mul.s       $f2, $f22, $f0
    ctx->pc = 0x10d368u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x10d36c: 0x3c023f54  lui         $v0, 0x3F54
    ctx->pc = 0x10d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16212 << 16));
    // 0x10d370: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x10d370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x10d374: 0xc6210220  lwc1        $f1, 0x220($s1)
    ctx->pc = 0x10d374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10d378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10d378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d37c: 0x0  nop
    ctx->pc = 0x10d37cu;
    // NOP
    // 0x10d380: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x10d380u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x10d384: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x10d384u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x10d388: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x10d388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x10d38c: 0xc6200224  lwc1        $f0, 0x224($s1)
    ctx->pc = 0x10d38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d390: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x10D390u;
    SET_GPR_U32(ctx, 31, 0x10D398u);
    ctx->pc = 0x10D394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D390u;
    // 0x10d394: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x10D390u, 0x10D398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D398u;
label_10d398:
    // 0x10d398: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x10d398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x10d39c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x10d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x10d3a0: 0xc6200228  lwc1        $f0, 0x228($s1)
    ctx->pc = 0x10d3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d3a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10d3a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x10d3a8: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x10d3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x10d3ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10D3ACu;
    {
        const bool branch_taken_0x10d3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3ACu;
        // 0x10d3b0: 0xae23001c  sw          $v1, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3ac) {
            ctx->pc = 0x10D3C0u;
            return;
        }
    }
    ctx->pc = 0x10D3B4u;
}
