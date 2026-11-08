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

// Function: entry_00170288
// Address: 0x170288 - 0x170350
void entry_00170288_0x170288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170288_0x170288");
#endif

    switch (ctx->pc) {
        case 0x170290u: goto label_170290;
        case 0x1702a0u: goto label_1702a0;
        case 0x170334u: goto label_170334;
        default: break;
    }

    ctx->pc = 0x170288u;

    // 0x170288: 0xc062d50  jal         func_18B540
    ctx->pc = 0x170288u;
    SET_GPR_U32(ctx, 31, 0x170290u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x170288u, 0x170290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170290u;
label_170290:
    // 0x170290: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170294: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x170294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x170298: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x170298u;
    SET_GPR_U32(ctx, 31, 0x1702A0u);
    ctx->pc = 0x17029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170298u;
    // 0x17029c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x170298u, 0x1702A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1702A0u;
label_1702a0:
    // 0x1702a0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1702a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1702a4: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1702a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1702a8: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x1702a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1702ac: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1702acu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1702b0: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1702b0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1702b4: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1702b4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1702b8: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x1702b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1702bc: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x1702bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1702c0: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x1702c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1702c4: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1702c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1702c8: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1702c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1702cc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1702ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1702d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1702d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1702d4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1702d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1702d8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1702d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1702dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1702dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1702e0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1702e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1702e4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1702e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1702e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1702e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1702ec: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x1702ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1702f0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1702f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1702f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1702f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1702f8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1702f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1702fc: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x1702fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x170300: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x170300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x170304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170308: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x170308u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17030c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17030cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170310: 0x4be721a8  vadd.xyzw   $vf6, $vf4, $vf7
    ctx->pc = 0x170310u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x170314: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x170314u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x170318: 0x0  nop
    ctx->pc = 0x170318u;
    // NOP
    // 0x17031c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x17031cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x170320: 0x4be53118  vmulx.xyzw  $vf4, $vf6, $vf5x
    ctx->pc = 0x170320u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x170324: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x170324u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x170328: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x170328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17032c: 0xc046458  jal         func_119160
    ctx->pc = 0x17032Cu;
    SET_GPR_U32(ctx, 31, 0x170334u);
    ctx->pc = 0x170330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17032Cu;
    // 0x170330: 0x2484f480  addiu       $a0, $a0, -0xB80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x17032Cu, 0x170334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170334u;
label_170334:
    // 0x170334: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x170334u;
    {
        const bool branch_taken_0x170334 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x170338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170334u;
        // 0x170338: 0x21900  sll         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170334) {
            ctx->pc = 0x170350u;
            return;
        }
    }
    ctx->pc = 0x17033Cu;
    // 0x17033c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17033cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x170340: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x170340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x170344: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170348: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x170348u;
    SET_GPR_U32(ctx, 31, 0x170350u);
    ctx->pc = 0x17034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170348u;
    // 0x17034c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x170348u, 0x170350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170350u;
}
