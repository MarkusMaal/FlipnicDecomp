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

// Function: entry_0014c4dc
// Address: 0x14c4dc - 0x14c554
void entry_0014c4dc_0x14c4dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c4dc_0x14c4dc");
#endif

    switch (ctx->pc) {
        case 0x14c528u: goto label_14c528;
        case 0x14c550u: goto label_14c550;
        default: break;
    }

    ctx->pc = 0x14c4dcu;

label_14c4dc:
    // 0x14c4dc: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x14c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_14c4e0:
    // 0x14c4e0: 0x8c6402b8  lw          $a0, 0x2B8($v1)
    ctx->pc = 0x14c4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 696)));
label_14c4e4:
    // 0x14c4e4: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_14c4e8:
    if (ctx->pc == 0x14C4E8u) {
        ctx->pc = 0x14C4ECu;
        goto label_14c4ec;
    }
    ctx->pc = 0x14C4E4u;
    {
        const bool branch_taken_0x14c4e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c4e4) {
            ctx->pc = 0x14C554u;
            return;
        }
    }
    ctx->pc = 0x14C4ECu;
label_14c4ec:
    // 0x14c4ec: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x14c4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c4f0:
    // 0x14c4f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c4f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c4f4:
    // 0x14c4f4: 0x0  nop
    ctx->pc = 0x14c4f4u;
    // NOP
label_14c4f8:
    // 0x14c4f8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14c4f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c4fc:
    // 0x14c4fc: 0x0  nop
    ctx->pc = 0x14c4fcu;
    // NOP
label_14c500:
    // 0x14c500: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_14c504:
    if (ctx->pc == 0x14C504u) {
        ctx->pc = 0x14C508u;
        goto label_14c508;
    }
    ctx->pc = 0x14C500u;
    {
        const bool branch_taken_0x14c500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c500) {
            ctx->pc = 0x14C554u;
            return;
        }
    }
    ctx->pc = 0x14C508u;
label_14c508:
    // 0x14c508: 0x4be1e37d  vsqi.xyzw   $vf28, ($vi1++)
    ctx->pc = 0x14c508u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_14c50c:
    // 0x14c50c: 0x4be1eb7d  vsqi.xyzw   $vf29, ($vi1++)
    ctx->pc = 0x14c50cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_14c510:
    // 0x14c510: 0x4be1f37d  vsqi.xyzw   $vf30, ($vi1++)
    ctx->pc = 0x14c510u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_14c514:
    // 0x14c514: 0x4be1fb7d  vsqi.xyzw   $vf31, ($vi1++)
    ctx->pc = 0x14c514u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_14c518:
    // 0x14c518: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c51c:
    // 0x14c51c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x14c51cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_14c520:
    // 0x14c520: 0x320f809  jalr        $t9
label_14c524:
    if (ctx->pc == 0x14C524u) {
        ctx->pc = 0x14C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C520u;
        // 0x14c524: 0x8c6503c8  lw          $a1, 0x3C8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C528u;
        goto label_14c528;
    }
    ctx->pc = 0x14C520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C528u);
        ctx->pc = 0x14C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C520u;
        // 0x14c524: 0x8c6503c8  lw          $a1, 0x3C8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C520u, 0x14C528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C528u;
label_14c528:
    // 0x14c528: 0x4bff0b7e  vlqd.xyzw   $vf31, (--$vi1)
    ctx->pc = 0x14c528u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_14c52c:
    // 0x14c52c: 0x4bfe0b7e  vlqd.xyzw   $vf30, (--$vi1)
    ctx->pc = 0x14c52cu;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_14c530:
    // 0x14c530: 0x4bfd0b7e  vlqd.xyzw   $vf29, (--$vi1)
    ctx->pc = 0x14c530u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_14c534:
    // 0x14c534: 0x4bfc0b7e  vlqd.xyzw   $vf28, (--$vi1)
    ctx->pc = 0x14c534u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_14c538:
    // 0x14c538: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x14c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_14c53c:
    // 0x14c53c: 0x8c4402b8  lw          $a0, 0x2B8($v0)
    ctx->pc = 0x14c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 696)));
label_14c540:
    // 0x14c540: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c544:
    // 0x14c544: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x14c544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_14c548:
    // 0x14c548: 0x320f809  jalr        $t9
label_14c54c:
    if (ctx->pc == 0x14C54Cu) {
        ctx->pc = 0x14C550u;
        goto label_14c550;
    }
    ctx->pc = 0x14C548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C550u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C548u, 0x14C550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C550u;
label_14c550:
    // 0x14c550: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x14c550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->pc = 0x14c554u;
}
