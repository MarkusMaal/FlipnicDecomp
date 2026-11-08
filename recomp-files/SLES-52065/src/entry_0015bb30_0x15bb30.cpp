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

// Function: entry_0015bb30
// Address: 0x15bb30 - 0x15bb80
void entry_0015bb30_0x15bb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bb30_0x15bb30");
#endif

    ctx->pc = 0x15bb30u;

    // 0x15bb30: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x15bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x15bb34: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x15bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x15bb38: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x15bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x15bb3c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x15bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x15bb40: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15bb40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15bb44: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x15bb44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15bb48: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x15bb48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15bb4c: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x15bb4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15bb50: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x15bb50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15bb54: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x15bb54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15bb58: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x15bb58u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15bb5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15bb5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15bb60: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x15bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x15bb64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15bb64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bb68: 0x0  nop
    ctx->pc = 0x15bb68u;
    // NOP
    // 0x15bb6c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15bb6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bb70: 0x0  nop
    ctx->pc = 0x15bb70u;
    // NOP
    // 0x15bb74: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x15BB74u;
    {
        const bool branch_taken_0x15bb74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB74u;
        // 0x15bb78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb74) {
            ctx->pc = 0x15BB80u;
            return;
        }
    }
    ctx->pc = 0x15BB7Cu;
    // 0x15bb7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15bb80u;
}
