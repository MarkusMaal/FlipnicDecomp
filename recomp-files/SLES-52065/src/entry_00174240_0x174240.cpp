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

// Function: entry_00174240
// Address: 0x174240 - 0x1742e0
void entry_00174240_0x174240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174240_0x174240");
#endif

    ctx->pc = 0x174240u;

    // 0x174240: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x174240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x174244: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x174244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x174248: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x174248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x17424c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x17424cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174250: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x174250u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174254: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x174254u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x174258: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x174258u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17425c: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x17425cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x174260: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x174260u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174264: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x174264u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174268: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x174268u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17426c: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x17426cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x174270: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x174270u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x174274: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x174274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x174278: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x174278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17427c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17427cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x174280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174284: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x174284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x174288: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x174288u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17428c: 0x0  nop
    ctx->pc = 0x17428cu;
    // NOP
    // 0x174290: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x174290u;
    {
        const bool branch_taken_0x174290 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x174294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174290u;
        // 0x174294: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174290) {
            ctx->pc = 0x1742E0u;
            return;
        }
    }
    ctx->pc = 0x174298u;
    // 0x174298: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x174298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17429c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17429cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1742a0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1742a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1742a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1742a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1742a8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1742a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1742ac: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1742acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1742b0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1742b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1742b4: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x1742b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1742b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1742b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1742bc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1742bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1742c0: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1742c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1742c4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1742c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1742c8: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x1742c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1742cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1742ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1742d0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1742d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1742d4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1742d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1742d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1742D8u;
    {
        const bool branch_taken_0x1742d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1742DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1742D8u;
        // 0x1742dc: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1742d8) {
            ctx->pc = 0x1742E8u;
            return;
        }
    }
    ctx->pc = 0x1742E0u;
}
