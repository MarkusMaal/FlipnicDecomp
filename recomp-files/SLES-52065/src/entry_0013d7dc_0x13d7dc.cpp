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

// Function: entry_0013d7dc
// Address: 0x13d7dc - 0x13d830
void entry_0013d7dc_0x13d7dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d7dc_0x13d7dc");
#endif

    switch (ctx->pc) {
        case 0x13d804u: goto label_13d804;
        default: break;
    }

    ctx->pc = 0x13d7dcu;

label_13d7dc:
    // 0x13d7dc: 0x4be1e37d  vsqi.xyzw   $vf28, ($vi1++)
    ctx->pc = 0x13d7dcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_13d7e0:
    // 0x13d7e0: 0x4be1eb7d  vsqi.xyzw   $vf29, ($vi1++)
    ctx->pc = 0x13d7e0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_13d7e4:
    // 0x13d7e4: 0x4be1f37d  vsqi.xyzw   $vf30, ($vi1++)
    ctx->pc = 0x13d7e4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_13d7e8:
    // 0x13d7e8: 0x4be1fb7d  vsqi.xyzw   $vf31, ($vi1++)
    ctx->pc = 0x13d7e8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_13d7ec:
    // 0x13d7ec: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x13d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_13d7f0:
    // 0x13d7f0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x13d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13d7f4:
    // 0x13d7f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13d7f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13d7f8:
    // 0x13d7f8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x13d7f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_13d7fc:
    // 0x13d7fc: 0x320f809  jalr        $t9
label_13d800:
    if (ctx->pc == 0x13D800u) {
        ctx->pc = 0x13D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7FCu;
        // 0x13d800: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D804u;
        goto label_13d804;
    }
    ctx->pc = 0x13D7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D804u);
        ctx->pc = 0x13D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7FCu;
        // 0x13d800: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D7FCu, 0x13D804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D804u;
label_13d804:
    // 0x13d804: 0x4bff0b7e  vlqd.xyzw   $vf31, (--$vi1)
    ctx->pc = 0x13d804u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_13d808:
    // 0x13d808: 0x4bfe0b7e  vlqd.xyzw   $vf30, (--$vi1)
    ctx->pc = 0x13d808u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_13d80c:
    // 0x13d80c: 0x4bfd0b7e  vlqd.xyzw   $vf29, (--$vi1)
    ctx->pc = 0x13d80cu;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_13d810:
    // 0x13d810: 0x4bfc0b7e  vlqd.xyzw   $vf28, (--$vi1)
    ctx->pc = 0x13d810u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_13d814:
    // 0x13d814: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x13d814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_13d818:
    // 0x13d818: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x13d818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_13d81c:
    // 0x13d81c: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x13d81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_13d820:
    // 0x13d820: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x13d820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_13d824:
    // 0x13d824: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x13d824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_13d828:
    // 0x13d828: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x13d828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_13d82c:
    // 0x13d82c: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x13d82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    ctx->pc = 0x13d830u;
}
