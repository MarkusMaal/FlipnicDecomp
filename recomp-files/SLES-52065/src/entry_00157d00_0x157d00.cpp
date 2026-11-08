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

// Function: entry_00157d00
// Address: 0x157d00 - 0x157dd4
void entry_00157d00_0x157d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157d00_0x157d00");
#endif

    ctx->pc = 0x157d00u;

    // 0x157d00: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x157d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157d04: 0x26050270  addiu       $a1, $s0, 0x270
    ctx->pc = 0x157d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x157d08: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x157d08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157d0c: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x157d0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x157d10: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x157d10u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x157d14: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x157d14u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x157d18: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x157d18u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157d1c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x157d1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x157d20: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x157d20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x157d24: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x157d24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x157d28: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x157d28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x157d2c: 0xf8a90000  sqc2        $vf9, 0x0($a1)
    ctx->pc = 0x157d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x157d30: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x157d30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x157d34: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x157d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157d38: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x157d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157d3c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x157d3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157d40: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x157d40u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x157d44: 0x4a0003bf  vwaitq
    ctx->pc = 0x157d44u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x157d48: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x157d48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157d4c: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x157d4cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x157d50: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x157d50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157d54: 0x4a0003bf  vwaitq
    ctx->pc = 0x157d54u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x157d58: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x157d58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157d5c: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x157d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157d60: 0x3c033d1e  lui         $v1, 0x3D1E
    ctx->pc = 0x157d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15646 << 16));
    // 0x157d64: 0x3463611c  ori         $v1, $v1, 0x611C
    ctx->pc = 0x157d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24860);
    // 0x157d68: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x157d68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x157d6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x157d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157d70: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x157d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x157d74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x157d74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d78: 0xc600026c  lwc1        $f0, 0x26C($s0)
    ctx->pc = 0x157d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157d7c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x157d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x157d80: 0x3466cccd  ori         $a2, $v1, 0xCCCD
    ctx->pc = 0x157d80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x157d84: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x157d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x157d88: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x157d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x157d8c: 0xc60201c0  lwc1        $f2, 0x1C0($s0)
    ctx->pc = 0x157d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157d90: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x157d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x157d94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x157d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157d98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x157d98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157d9c: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x157d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x157da0: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x157da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x157da4: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x157da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x157da8: 0xae0701c0  sw          $a3, 0x1C0($s0)
    ctx->pc = 0x157da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 7));
    // 0x157dac: 0xae070060  sw          $a3, 0x60($s0)
    ctx->pc = 0x157dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
    // 0x157db0: 0xae0601d8  sw          $a2, 0x1D8($s0)
    ctx->pc = 0x157db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 6));
    // 0x157db4: 0xae0501dc  sw          $a1, 0x1DC($s0)
    ctx->pc = 0x157db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 5));
    // 0x157db8: 0xa60001ea  sh          $zero, 0x1EA($s0)
    ctx->pc = 0x157db8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 490), (uint16_t)GPR_U32(ctx, 0));
    // 0x157dbc: 0xa60001e8  sh          $zero, 0x1E8($s0)
    ctx->pc = 0x157dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 488), (uint16_t)GPR_U32(ctx, 0));
    // 0x157dc0: 0xa60401ec  sh          $a0, 0x1EC($s0)
    ctx->pc = 0x157dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 492), (uint16_t)GPR_U32(ctx, 4));
    // 0x157dc4: 0xa60401ee  sh          $a0, 0x1EE($s0)
    ctx->pc = 0x157dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 494), (uint16_t)GPR_U32(ctx, 4));
    // 0x157dc8: 0xae040340  sw          $a0, 0x340($s0)
    ctx->pc = 0x157dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 4));
    // 0x157dcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x157DCCu;
    {
        const bool branch_taken_0x157dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157DCCu;
        // 0x157dd0: 0xae030344  sw          $v1, 0x344($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157dcc) {
            ctx->pc = 0x157DE0u;
            return;
        }
    }
    ctx->pc = 0x157DD4u;
}
