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

// Function: entry_0018f14c
// Address: 0x18f14c - 0x18f234
void entry_0018f14c_0x18f14c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f14c_0x18f14c");
#endif

    switch (ctx->pc) {
        case 0x18f17cu: goto label_18f17c;
        case 0x18f1b0u: goto label_18f1b0;
        case 0x18f1bcu: goto label_18f1bc;
        case 0x18f204u: goto label_18f204;
        case 0x18f21cu: goto label_18f21c;
        case 0x18f224u: goto label_18f224;
        default: break;
    }

    ctx->pc = 0x18f14cu;

    // 0x18f14c: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x18f14cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18f150: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x18f150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
    // 0x18f154: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18f154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f158: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18f158u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f15c: 0x26650300  addiu       $a1, $s3, 0x300
    ctx->pc = 0x18f15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
    // 0x18f160: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18f160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f164: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x18f164u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x18f168: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x18f168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x18f16c: 0xc68d0200  lwc1        $f13, 0x200($s4)
    ctx->pc = 0x18f16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18f170: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18f174: 0xc059930  jal         func_1664C0
    ctx->pc = 0x18F174u;
    SET_GPR_U32(ctx, 31, 0x18F17Cu);
    ctx->pc = 0x18F178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F174u;
    // 0x18f178: 0x26670290  addiu       $a3, $s3, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1664C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1664C0u, 0x18F174u, 0x18F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F17Cu;
label_18f17c:
    // 0x18f17c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18f17cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f180: 0x0  nop
    ctx->pc = 0x18f180u;
    // NOP
    // 0x18f184: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18f184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f188: 0x0  nop
    ctx->pc = 0x18f188u;
    // NOP
    // 0x18f18c: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x18F18Cu;
    {
        const bool branch_taken_0x18f18c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F18Cu;
        // 0x18f190: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f18c) {
            ctx->pc = 0x18F248u;
            return;
        }
    }
    ctx->pc = 0x18F194u;
    // 0x18f194: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18f194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f198: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18f19c: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x18f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x18f1a0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x18f1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x18f1a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18f1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18f1a8: 0xc056194  jal         func_158650
    ctx->pc = 0x18F1A8u;
    SET_GPR_U32(ctx, 31, 0x18F1B0u);
    ctx->pc = 0x18F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F1A8u;
    // 0x18f1ac: 0xe66002e8  swc1        $f0, 0x2E8($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 744), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x18F1A8u, 0x18F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F1B0u;
label_18f1b0:
    // 0x18f1b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1b4: 0xc0564b8  jal         func_1592E0
    ctx->pc = 0x18F1B4u;
    SET_GPR_U32(ctx, 31, 0x18F1BCu);
    ctx->pc = 0x18F1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F1B4u;
    // 0x18f1b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x18F1B4u, 0x18F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F1BCu;
label_18f1bc:
    // 0x18f1bc: 0x8e822714  lw          $v0, 0x2714($s4)
    ctx->pc = 0x18f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10004)));
    // 0x18f1c0: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x18F1C0u;
    {
        const bool branch_taken_0x18f1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1C0u;
        // 0x18f1c4: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1c0) {
            ctx->pc = 0x18F234u;
            return;
        }
    }
    ctx->pc = 0x18F1C8u;
    // 0x18f1c8: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x18f1c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18f1cc: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x18f1ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18f1d0: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x18f1d0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18f1d4: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x18f1d4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18f1d8: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x18f1d8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f1dc: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x18f1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18f1e0: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x18f1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18f1e4: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x18f1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x18f1e8: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x18f1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x18f1ec: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x18f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18f1f0: 0x7a660000  lq          $a2, 0x0($s3)
    ctx->pc = 0x18f1f0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18f1f4: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x18f1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x18f1f8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x18f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x18f1fc: 0xc046458  jal         func_119160
    ctx->pc = 0x18F1FCu;
    SET_GPR_U32(ctx, 31, 0x18F204u);
    ctx->pc = 0x18F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F1FCu;
    // 0x18f200: 0x2484fda0  addiu       $a0, $a0, -0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x18F1FCu, 0x18F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F204u;
label_18f204:
    // 0x18f204: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x18f204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18f208: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x18f208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18f20c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x18f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x18f210: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f214: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x18F214u;
    SET_GPR_U32(ctx, 31, 0x18F21Cu);
    ctx->pc = 0x18F218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F214u;
    // 0x18f218: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x18F214u, 0x18F21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F21Cu;
label_18f21c:
    // 0x18f21c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x18F21Cu;
    SET_GPR_U32(ctx, 31, 0x18F224u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18F21Cu, 0x18F224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F224u;
label_18f224:
    // 0x18f224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f228: 0x240500e1  addiu       $a1, $zero, 0xE1
    ctx->pc = 0x18f228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x18f22c: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x18F22Cu;
    SET_GPR_U32(ctx, 31, 0x18F234u);
    ctx->pc = 0x18F230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F22Cu;
    // 0x18f230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18F22Cu, 0x18F234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F234u;
}
