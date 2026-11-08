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

// Function: entry_001658fc
// Address: 0x1658fc - 0x165964
void entry_001658fc_0x1658fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001658fc_0x1658fc");
#endif

    ctx->pc = 0x1658fcu;

    // 0x1658fc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1658fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165900: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x165900u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165904: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x165904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165908: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x165908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16590c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16590cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x165910: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x165910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165914: 0xc60201c0  lwc1        $f2, 0x1C0($s0)
    ctx->pc = 0x165914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x165918: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x165918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16591c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x16591cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x165920: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x165920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x165924: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x165924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165928: 0x0  nop
    ctx->pc = 0x165928u;
    // NOP
    // 0x16592c: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x16592Cu;
    {
        const bool branch_taken_0x16592c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x165930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16592Cu;
        // 0x165930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16592c) {
            ctx->pc = 0x165A00u;
            return;
        }
    }
    ctx->pc = 0x165934u;
    // 0x165934: 0xae0002e8  sw          $zero, 0x2E8($s0)
    ctx->pc = 0x165934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 0));
    // 0x165938: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x165938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16593c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x16593cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165940: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x165940u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165944: 0x0  nop
    ctx->pc = 0x165944u;
    // NOP
    // 0x165948: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x165948u;
    {
        const bool branch_taken_0x165948 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165948u;
        // 0x16594c: 0x26020290  addiu       $v0, $s0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165948) {
            ctx->pc = 0x165964u;
            return;
        }
    }
    ctx->pc = 0x165950u;
    // 0x165950: 0x26020290  addiu       $v0, $s0, 0x290
    ctx->pc = 0x165950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x165954: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x165954u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x165958: 0x4b002103  vaddw.x     $vf4, $vf4, $vf0w
    ctx->pc = 0x165958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16595c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16595Cu;
    {
        const bool branch_taken_0x16595c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16595Cu;
        // 0x165960: 0xf8440000  sqc2        $vf4, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16595c) {
            ctx->pc = 0x165970u;
            return;
        }
    }
    ctx->pc = 0x165964u;
}
