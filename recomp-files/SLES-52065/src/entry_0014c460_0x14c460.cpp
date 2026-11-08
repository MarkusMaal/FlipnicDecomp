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

// Function: entry_0014c460
// Address: 0x14c460 - 0x14c4dc
void entry_0014c460_0x14c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c460_0x14c460");
#endif

    switch (ctx->pc) {
        case 0x14c4b0u: goto label_14c4b0;
        case 0x14c4d8u: goto label_14c4d8;
        default: break;
    }

    ctx->pc = 0x14c460u;

label_14c460:
    // 0x14c460: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x14c460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_14c464:
    // 0x14c464: 0x8ca402b4  lw          $a0, 0x2B4($a1)
    ctx->pc = 0x14c464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 692)));
label_14c468:
    // 0x14c468: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_14c46c:
    if (ctx->pc == 0x14C46Cu) {
        ctx->pc = 0x14C470u;
        goto label_14c470;
    }
    ctx->pc = 0x14C468u;
    {
        const bool branch_taken_0x14c468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c468) {
            ctx->pc = 0x14C4DCu;
            return;
        }
    }
    ctx->pc = 0x14C470u;
label_14c470:
    // 0x14c470: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x14c470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c474:
    // 0x14c474: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x14c474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_14c478:
    // 0x14c478: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14c478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c47c:
    // 0x14c47c: 0x0  nop
    ctx->pc = 0x14c47cu;
    // NOP
label_14c480:
    // 0x14c480: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14c480u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c484:
    // 0x14c484: 0x0  nop
    ctx->pc = 0x14c484u;
    // NOP
label_14c488:
    // 0x14c488: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_14c48c:
    if (ctx->pc == 0x14C48Cu) {
        ctx->pc = 0x14C490u;
        goto label_14c490;
    }
    ctx->pc = 0x14C488u;
    {
        const bool branch_taken_0x14c488 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c488) {
            ctx->pc = 0x14C4DCu;
            return;
        }
    }
    ctx->pc = 0x14C490u;
label_14c490:
    // 0x14c490: 0x4be1e37d  vsqi.xyzw   $vf28, ($vi1++)
    ctx->pc = 0x14c490u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_14c494:
    // 0x14c494: 0x4be1eb7d  vsqi.xyzw   $vf29, ($vi1++)
    ctx->pc = 0x14c494u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_14c498:
    // 0x14c498: 0x4be1f37d  vsqi.xyzw   $vf30, ($vi1++)
    ctx->pc = 0x14c498u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_14c49c:
    // 0x14c49c: 0x4be1fb7d  vsqi.xyzw   $vf31, ($vi1++)
    ctx->pc = 0x14c49cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_14c4a0:
    // 0x14c4a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c4a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c4a4:
    // 0x14c4a4: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x14c4a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_14c4a8:
    // 0x14c4a8: 0x320f809  jalr        $t9
label_14c4ac:
    if (ctx->pc == 0x14C4ACu) {
        ctx->pc = 0x14C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C4A8u;
        // 0x14c4ac: 0x8ca503c4  lw          $a1, 0x3C4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 964)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C4B0u;
        goto label_14c4b0;
    }
    ctx->pc = 0x14C4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C4B0u);
        ctx->pc = 0x14C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C4A8u;
        // 0x14c4ac: 0x8ca503c4  lw          $a1, 0x3C4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 964)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C4A8u, 0x14C4B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C4B0u;
label_14c4b0:
    // 0x14c4b0: 0x4bff0b7e  vlqd.xyzw   $vf31, (--$vi1)
    ctx->pc = 0x14c4b0u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_14c4b4:
    // 0x14c4b4: 0x4bfe0b7e  vlqd.xyzw   $vf30, (--$vi1)
    ctx->pc = 0x14c4b4u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_14c4b8:
    // 0x14c4b8: 0x4bfd0b7e  vlqd.xyzw   $vf29, (--$vi1)
    ctx->pc = 0x14c4b8u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_14c4bc:
    // 0x14c4bc: 0x4bfc0b7e  vlqd.xyzw   $vf28, (--$vi1)
    ctx->pc = 0x14c4bcu;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_14c4c0:
    // 0x14c4c0: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x14c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_14c4c4:
    // 0x14c4c4: 0x8c4402b4  lw          $a0, 0x2B4($v0)
    ctx->pc = 0x14c4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_14c4c8:
    // 0x14c4c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c4c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c4cc:
    // 0x14c4cc: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x14c4ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_14c4d0:
    // 0x14c4d0: 0x320f809  jalr        $t9
label_14c4d4:
    if (ctx->pc == 0x14C4D4u) {
        ctx->pc = 0x14C4D8u;
        goto label_14c4d8;
    }
    ctx->pc = 0x14C4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C4D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C4D0u, 0x14C4D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C4D8u;
label_14c4d8:
    // 0x14c4d8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x14c4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->pc = 0x14c4dcu;
}
