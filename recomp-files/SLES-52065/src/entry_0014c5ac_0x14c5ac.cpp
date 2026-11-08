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

// Function: entry_0014c5ac
// Address: 0x14c5ac - 0x14c60c
void entry_0014c5ac_0x14c5ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c5ac_0x14c5ac");
#endif

    switch (ctx->pc) {
        case 0x14c5c0u: goto label_14c5c0;
        case 0x14c5d4u: goto label_14c5d4;
        case 0x14c5f8u: goto label_14c5f8;
        default: break;
    }

    ctx->pc = 0x14c5acu;

label_14c5ac:
    // 0x14c5ac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14c5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14c5b0:
    // 0x14c5b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c5b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c5b4:
    // 0x14c5b4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x14c5b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_14c5b8:
    // 0x14c5b8: 0x320f809  jalr        $t9
label_14c5bc:
    if (ctx->pc == 0x14C5BCu) {
        ctx->pc = 0x14C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5B8u;
        // 0x14c5bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C5C0u;
        goto label_14c5c0;
    }
    ctx->pc = 0x14C5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C5C0u);
        ctx->pc = 0x14C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5B8u;
        // 0x14c5bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C5B8u, 0x14C5C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C5C0u;
label_14c5c0:
    // 0x14c5c0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14c5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14c5c4:
    // 0x14c5c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c5c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c5c8:
    // 0x14c5c8: 0x8f3900a0  lw          $t9, 0xA0($t9)
    ctx->pc = 0x14c5c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 160)));
label_14c5cc:
    // 0x14c5cc: 0x320f809  jalr        $t9
label_14c5d0:
    if (ctx->pc == 0x14C5D0u) {
        ctx->pc = 0x14C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5CCu;
        // 0x14c5d0: 0xc7ac0090  lwc1        $f12, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C5D4u;
        goto label_14c5d4;
    }
    ctx->pc = 0x14C5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C5D4u);
        ctx->pc = 0x14C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5CCu;
        // 0x14c5d0: 0xc7ac0090  lwc1        $f12, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C5CCu, 0x14C5D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C5D4u;
label_14c5d4:
    // 0x14c5d4: 0x4be1e37d  vsqi.xyzw   $vf28, ($vi1++)
    ctx->pc = 0x14c5d4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_14c5d8:
    // 0x14c5d8: 0x4be1eb7d  vsqi.xyzw   $vf29, ($vi1++)
    ctx->pc = 0x14c5d8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_14c5dc:
    // 0x14c5dc: 0x4be1f37d  vsqi.xyzw   $vf30, ($vi1++)
    ctx->pc = 0x14c5dcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_14c5e0:
    // 0x14c5e0: 0x4be1fb7d  vsqi.xyzw   $vf31, ($vi1++)
    ctx->pc = 0x14c5e0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_14c5e4:
    // 0x14c5e4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14c5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14c5e8:
    // 0x14c5e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c5e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c5ec:
    // 0x14c5ec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x14c5ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_14c5f0:
    // 0x14c5f0: 0x320f809  jalr        $t9
label_14c5f4:
    if (ctx->pc == 0x14C5F4u) {
        ctx->pc = 0x14C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5F0u;
        // 0x14c5f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C5F8u;
        goto label_14c5f8;
    }
    ctx->pc = 0x14C5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C5F8u);
        ctx->pc = 0x14C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5F0u;
        // 0x14c5f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C5F0u, 0x14C5F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C5F8u;
label_14c5f8:
    // 0x14c5f8: 0x4bff0b7e  vlqd.xyzw   $vf31, (--$vi1)
    ctx->pc = 0x14c5f8u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_14c5fc:
    // 0x14c5fc: 0x4bfe0b7e  vlqd.xyzw   $vf30, (--$vi1)
    ctx->pc = 0x14c5fcu;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_14c600:
    // 0x14c600: 0x4bfd0b7e  vlqd.xyzw   $vf29, (--$vi1)
    ctx->pc = 0x14c600u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_14c604:
    // 0x14c604: 0x4bfc0b7e  vlqd.xyzw   $vf28, (--$vi1)
    ctx->pc = 0x14c604u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_14c608:
    // 0x14c608: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x14c608u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x14c60cu;
}
