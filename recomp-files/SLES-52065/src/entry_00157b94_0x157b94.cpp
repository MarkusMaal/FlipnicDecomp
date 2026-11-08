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

// Function: entry_00157b94
// Address: 0x157b94 - 0x157be0
void entry_00157b94_0x157b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157b94_0x157b94");
#endif

    ctx->pc = 0x157b94u;

    // 0x157b94: 0x0  nop
    ctx->pc = 0x157b94u;
    // NOP
    // 0x157b98: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x157b98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x157b9c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x157B9Cu;
    {
        const bool branch_taken_0x157b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B9Cu;
        // 0x157ba0: 0x41140  sll         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b9c) {
            ctx->pc = 0x157B74u;
            return;
        }
    }
    ctx->pc = 0x157BA4u;
    // 0x157ba4: 0x3c0244fe  lui         $v0, 0x44FE
    ctx->pc = 0x157ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17662 << 16));
    // 0x157ba8: 0x344240cc  ori         $v0, $v0, 0x40CC
    ctx->pc = 0x157ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16588);
    // 0x157bac: 0xae0201c8  sw          $v0, 0x1C8($s0)
    ctx->pc = 0x157bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 2));
    // 0x157bb0: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157bb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157bb4: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x157bb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157bb8: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x157bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157bbc: 0x260201b0  addiu       $v0, $s0, 0x1B0
    ctx->pc = 0x157bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x157bc0: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157bc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157bc4: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x157bc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157bc8: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x157bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157bcc: 0x26020260  addiu       $v0, $s0, 0x260
    ctx->pc = 0x157bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x157bd0: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157bd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157bd4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x157bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157bd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x157BD8u;
    {
        const bool branch_taken_0x157bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BD8u;
        // 0x157bdc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bd8) {
            ctx->pc = 0x157BECu;
            return;
        }
    }
    ctx->pc = 0x157BE0u;
}
