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

// Function: entry_001447d8
// Address: 0x1447d8 - 0x14482c
void entry_001447d8_0x1447d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001447d8_0x1447d8");
#endif

    switch (ctx->pc) {
        case 0x144800u: goto label_144800;
        default: break;
    }

    ctx->pc = 0x1447d8u;

label_1447d8:
    // 0x1447d8: 0x4be1e37d  vsqi.xyzw   $vf28, ($vi1++)
    ctx->pc = 0x1447d8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_1447dc:
    // 0x1447dc: 0x4be1eb7d  vsqi.xyzw   $vf29, ($vi1++)
    ctx->pc = 0x1447dcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1447e0:
    // 0x1447e0: 0x4be1f37d  vsqi.xyzw   $vf30, ($vi1++)
    ctx->pc = 0x1447e0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1447e4:
    // 0x1447e4: 0x4be1fb7d  vsqi.xyzw   $vf31, ($vi1++)
    ctx->pc = 0x1447e4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1447e8:
    // 0x1447e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1447e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1447ec:
    // 0x1447ec: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1447ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1447f0:
    // 0x1447f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1447f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1447f4:
    // 0x1447f4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x1447f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_1447f8:
    // 0x1447f8: 0x320f809  jalr        $t9
label_1447fc:
    if (ctx->pc == 0x1447FCu) {
        ctx->pc = 0x1447FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447F8u;
        // 0x1447fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144800u;
        goto label_144800;
    }
    ctx->pc = 0x1447F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x144800u);
        ctx->pc = 0x1447FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447F8u;
        // 0x1447fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1447F8u, 0x144800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144800u;
label_144800:
    // 0x144800: 0x4bff0b7e  vlqd.xyzw   $vf31, (--$vi1)
    ctx->pc = 0x144800u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_144804:
    // 0x144804: 0x4bfe0b7e  vlqd.xyzw   $vf30, (--$vi1)
    ctx->pc = 0x144804u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_144808:
    // 0x144808: 0x4bfd0b7e  vlqd.xyzw   $vf29, (--$vi1)
    ctx->pc = 0x144808u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_14480c:
    // 0x14480c: 0x4bfc0b7e  vlqd.xyzw   $vf28, (--$vi1)
    ctx->pc = 0x14480cu;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_144810:
    // 0x144810: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x144810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_144814:
    // 0x144814: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x144814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_144818:
    // 0x144818: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x144818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_14481c:
    // 0x14481c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x14481cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_144820:
    // 0x144820: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x144820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_144824:
    // 0x144824: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x144824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_144828:
    // 0x144828: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x144828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    ctx->pc = 0x14482cu;
}
