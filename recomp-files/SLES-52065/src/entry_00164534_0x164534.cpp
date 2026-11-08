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

// Function: entry_00164534
// Address: 0x164534 - 0x16458c
void entry_00164534_0x164534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164534_0x164534");
#endif

    ctx->pc = 0x164534u;

    // 0x164534: 0x8e4201f0  lw          $v0, 0x1F0($s2)
    ctx->pc = 0x164534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x164538: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x164538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x16453c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164540: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x164540u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x164544: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x164544u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164548: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x164548u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16454c: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x16454cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164550: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x164550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164554: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x164554u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164558: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x164558u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16455c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16455cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164560: 0x0  nop
    ctx->pc = 0x164560u;
    // NOP
    // 0x164564: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x164564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164568: 0x0  nop
    ctx->pc = 0x164568u;
    // NOP
    // 0x16456c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x16456Cu;
    {
        const bool branch_taken_0x16456c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16456c) {
            ctx->pc = 0x1645D0u;
            return;
        }
    }
    ctx->pc = 0x164574u;
    // 0x164574: 0x922201f4  lbu         $v0, 0x1F4($s1)
    ctx->pc = 0x164574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x164578: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164578u;
    {
        const bool branch_taken_0x164578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164578u;
        // 0x16457c: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164578) {
            ctx->pc = 0x16458Cu;
            return;
        }
    }
    ctx->pc = 0x164580u;
    // 0x164580: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x164580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164584: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x164584u;
    {
        const bool branch_taken_0x164584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164584u;
        // 0x164588: 0xa62301ea  sh          $v1, 0x1EA($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 490), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164584) {
            ctx->pc = 0x164900u;
            return;
        }
    }
    ctx->pc = 0x16458Cu;
}
