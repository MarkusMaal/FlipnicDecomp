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

// Function: entry_0017b4e4
// Address: 0x17b4e4 - 0x17b52c
void entry_0017b4e4_0x17b4e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b4e4_0x17b4e4");
#endif

    ctx->pc = 0x17b4e4u;

    // 0x17b4e4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17b4e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b4e8: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x17b4e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17b4ec: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x17b4ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b4f0: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x17b4f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b4f4: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x17b4f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b4f8: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x17b4f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b4fc: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x17b4fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17b500: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17b500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17b504: 0x3c0246c8  lui         $v0, 0x46C8
    ctx->pc = 0x17b504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18120 << 16));
    // 0x17b508: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b50c: 0x0  nop
    ctx->pc = 0x17b50cu;
    // NOP
    // 0x17b510: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17b510u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b514: 0x0  nop
    ctx->pc = 0x17b514u;
    // NOP
    // 0x17b518: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x17B518u;
    {
        const bool branch_taken_0x17b518 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B518u;
        // 0x17b51c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b518) {
            ctx->pc = 0x17B52Cu;
            return;
        }
    }
    ctx->pc = 0x17B520u;
    // 0x17b520: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b524: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x17B524u;
    {
        const bool branch_taken_0x17b524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B524u;
        // 0x17b528: 0xae0303d0  sw          $v1, 0x3D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 976), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b524) {
            ctx->pc = 0x17B728u;
            return;
        }
    }
    ctx->pc = 0x17B52Cu;
}
