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

// Function: entry_00162cf4
// Address: 0x162cf4 - 0x162dc8
void entry_00162cf4_0x162cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162cf4_0x162cf4");
#endif

    switch (ctx->pc) {
        case 0x162d44u: goto label_162d44;
        case 0x162dc0u: goto label_162dc0;
        default: break;
    }

    ctx->pc = 0x162cf4u;

    // 0x162cf4: 0x26230290  addiu       $v1, $s1, 0x290
    ctx->pc = 0x162cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x162cf8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x162cf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162cfc: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x162cfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162d00: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x162d00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162d04: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x162d04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162d08: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x162d08u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x162d0c: 0x4a0003bf  vwaitq
    ctx->pc = 0x162d0cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x162d10: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x162d10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162d14: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x162d14u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x162d18: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x162d18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x162d1c: 0x4a0003bf  vwaitq
    ctx->pc = 0x162d1cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x162d20: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x162d20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x162d24: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x162d24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x162d28: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x162d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x162d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162d30: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x162d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x162d34: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x162d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x162d38: 0xc44c004c  lwc1        $f12, 0x4C($v0)
    ctx->pc = 0x162d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x162d3c: 0xc055bec  jal         func_156FB0
    ctx->pc = 0x162D3Cu;
    SET_GPR_U32(ctx, 31, 0x162D44u);
    ctx->pc = 0x162D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162D3Cu;
    // 0x162d40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156FB0u, 0x162D3Cu, 0x162D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D44u;
label_162d44:
    // 0x162d44: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x162d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x162d48: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x162d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x162d4c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x162d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x162d50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162d54: 0xc62002f0  lwc1        $f0, 0x2F0($s1)
    ctx->pc = 0x162d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162d58: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x162d58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x162d5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162d60: 0x0  nop
    ctx->pc = 0x162d60u;
    // NOP
    // 0x162d64: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x162D64u;
    {
        const bool branch_taken_0x162d64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D64u;
        // 0x162d68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d64) {
            ctx->pc = 0x162DD0u;
            return;
        }
    }
    ctx->pc = 0x162D6Cu;
    // 0x162d6c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x162d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x162d70: 0xa243021f  sb          $v1, 0x21F($s2)
    ctx->pc = 0x162d70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 543), (uint8_t)GPR_U32(ctx, 3));
    // 0x162d74: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x162d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x162d78: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x162d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x162d7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162d80: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x162d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162d84: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x162d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x162d88: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x162d88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162d8c: 0x0  nop
    ctx->pc = 0x162d8cu;
    // NOP
    // 0x162d90: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x162D90u;
    {
        const bool branch_taken_0x162d90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D90u;
        // 0x162d94: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d90) {
            ctx->pc = 0x162DD0u;
            return;
        }
    }
    ctx->pc = 0x162D98u;
    // 0x162d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162d9c: 0x0  nop
    ctx->pc = 0x162d9cu;
    // NOP
    // 0x162da0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x162da0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x162da4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x162da4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162da8: 0x0  nop
    ctx->pc = 0x162da8u;
    // NOP
    // 0x162dac: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x162DACu;
    {
        const bool branch_taken_0x162dac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x162DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DACu;
        // 0x162db0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162dac) {
            ctx->pc = 0x162DC8u;
            return;
        }
    }
    ctx->pc = 0x162DB4u;
    // 0x162db4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162db8: 0xc042118  jal         func_108460
    ctx->pc = 0x162DB8u;
    SET_GPR_U32(ctx, 31, 0x162DC0u);
    ctx->pc = 0x162DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162DB8u;
    // 0x162dbc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x162DB8u, 0x162DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162DC0u;
label_162dc0:
    // 0x162dc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x162DC0u;
    {
        const bool branch_taken_0x162dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162dc0) {
            ctx->pc = 0x162DD0u;
            return;
        }
    }
    ctx->pc = 0x162DC8u;
}
