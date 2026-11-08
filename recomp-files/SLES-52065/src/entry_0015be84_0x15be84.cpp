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

// Function: entry_0015be84
// Address: 0x15be84 - 0x15bf14
void entry_0015be84_0x15be84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015be84_0x15be84");
#endif

    ctx->pc = 0x15be84u;

    // 0x15be84: 0x0  nop
    ctx->pc = 0x15be84u;
    // NOP
    // 0x15be88: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x15be88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x15be8c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x15BE8Cu;
    {
        const bool branch_taken_0x15be8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE8Cu;
        // 0x15be90: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be8c) {
            ctx->pc = 0x15BE4Cu;
            return;
        }
    }
    ctx->pc = 0x15BE94u;
    // 0x15be94: 0xc6200210  lwc1        $f0, 0x210($s1)
    ctx->pc = 0x15be94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15be98: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x15be98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x15be9c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x15be9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x15bea0: 0x26230210  addiu       $v1, $s1, 0x210
    ctx->pc = 0x15bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x15bea4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15bea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15bea8: 0x0  nop
    ctx->pc = 0x15bea8u;
    // NOP
    // 0x15beac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15beacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15beb0: 0xe6200210  swc1        $f0, 0x210($s1)
    ctx->pc = 0x15beb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 528), bits); }
    // 0x15beb4: 0xc6200214  lwc1        $f0, 0x214($s1)
    ctx->pc = 0x15beb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15beb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15beb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15bebc: 0xe6200214  swc1        $f0, 0x214($s1)
    ctx->pc = 0x15bebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 532), bits); }
    // 0x15bec0: 0xc6200218  lwc1        $f0, 0x218($s1)
    ctx->pc = 0x15bec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bec4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15bec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15bec8: 0xe6200218  swc1        $f0, 0x218($s1)
    ctx->pc = 0x15bec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 536), bits); }
    // 0x15becc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15beccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15bed0: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x15bed0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15bed4: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x15bed4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15bed8: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x15bed8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15bedc: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15bedcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15bee0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15bee0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15bee4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x15bee4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x15bee8: 0x4a0003bf  vwaitq
    ctx->pc = 0x15bee8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15beec: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x15beecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15bef0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15bef0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15bef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15bef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bef8: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x15bef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
    // 0x15befc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15befcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15bf00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15bf00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bf04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bf04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bf08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bf08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x15BF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF0Cu;
        // 0x15bf10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BF14u;
}
