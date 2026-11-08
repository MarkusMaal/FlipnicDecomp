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

// Function: entry_0010d1d4
// Address: 0x10d1d4 - 0x10d2a8
void entry_0010d1d4_0x10d1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d1d4_0x10d1d4");
#endif

    switch (ctx->pc) {
        case 0x10d1f4u: goto label_10d1f4;
        case 0x10d200u: goto label_10d200;
        case 0x10d258u: goto label_10d258;
        case 0x10d288u: goto label_10d288;
        default: break;
    }

    ctx->pc = 0x10d1d4u;

    // 0x10d1d4: 0xc6200244  lwc1        $f0, 0x244($s1)
    ctx->pc = 0x10d1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d1d8: 0x3c024116  lui         $v0, 0x4116
    ctx->pc = 0x10d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16662 << 16));
    // 0x10d1dc: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x10d1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x10d1e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10d1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10d1e4: 0x0  nop
    ctx->pc = 0x10d1e4u;
    // NOP
    // 0x10d1e8: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x10d1e8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10d1ec: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x10D1ECu;
    SET_GPR_U32(ctx, 31, 0x10D1F4u);
    ctx->pc = 0x10D1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D1ECu;
    // 0x10d1f0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x10D1ECu, 0x10D1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1F4u;
label_10d1f4:
    // 0x10d1f4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x10d1f4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x10d1f8: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x10D1F8u;
    SET_GPR_U32(ctx, 31, 0x10D200u);
    ctx->pc = 0x10D1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D1F8u;
    // 0x10d1fc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x10D1F8u, 0x10D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D200u;
label_10d200:
    // 0x10d200: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x10d200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x10d204: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x10d204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x10d208: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x10d208u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x10d20c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x10d20cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d210: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x10d210u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d214: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x10d214u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10d218: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x10d218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10d21c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x10d21cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10d220: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x10d220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10d224: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x10d224u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x10d228: 0x4a0003bf  vwaitq
    ctx->pc = 0x10d228u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10d22c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x10d22cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10d230: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10d230u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10d234: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10d234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10d238: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x10d238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x10d23c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10d23cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d240: 0x3c023f54  lui         $v0, 0x3F54
    ctx->pc = 0x10d240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16212 << 16));
    // 0x10d244: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x10d244u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x10d248: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x10d248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x10d24c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10d24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d250: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x10D250u;
    SET_GPR_U32(ctx, 31, 0x10D258u);
    ctx->pc = 0x10D254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D250u;
    // 0x10d254: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x10D250u, 0x10D258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D258u;
label_10d258:
    // 0x10d258: 0x4600b042  mul.s       $f1, $f22, $f0
    ctx->pc = 0x10d258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x10d25c: 0x3c023f54  lui         $v0, 0x3F54
    ctx->pc = 0x10d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16212 << 16));
    // 0x10d260: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x10d260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x10d264: 0xc6200220  lwc1        $f0, 0x220($s1)
    ctx->pc = 0x10d264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d268: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x10d268u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x10d26c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10d26cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x10d270: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x10d270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x10d274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10d274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d278: 0xc6210224  lwc1        $f1, 0x224($s1)
    ctx->pc = 0x10d278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10d27c: 0x46150302  mul.s       $f12, $f0, $f21
    ctx->pc = 0x10d27cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x10d280: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x10D280u;
    SET_GPR_U32(ctx, 31, 0x10D288u);
    ctx->pc = 0x10D284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D280u;
    // 0x10d284: 0xe6210014  swc1        $f1, 0x14($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x10D280u, 0x10D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D288u;
label_10d288:
    // 0x10d288: 0x4600b842  mul.s       $f1, $f23, $f0
    ctx->pc = 0x10d288u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x10d28c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x10d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x10d290: 0xc6200228  lwc1        $f0, 0x228($s1)
    ctx->pc = 0x10d290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d294: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x10d294u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x10d298: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10d298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x10d29c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x10d29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x10d2a0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x10D2A0u;
    {
        const bool branch_taken_0x10d2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D2A0u;
        // 0x10d2a4: 0xae23001c  sw          $v1, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d2a0) {
            ctx->pc = 0x10D3C0u;
            return;
        }
    }
    ctx->pc = 0x10D2A8u;
}
