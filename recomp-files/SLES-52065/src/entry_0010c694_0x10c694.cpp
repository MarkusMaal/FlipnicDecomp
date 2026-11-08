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

// Function: entry_0010c694
// Address: 0x10c694 - 0x10c764
void entry_0010c694_0x10c694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c694_0x10c694");
#endif

    switch (ctx->pc) {
        case 0x10c72cu: goto label_10c72c;
        case 0x10c740u: goto label_10c740;
        default: break;
    }

    ctx->pc = 0x10c694u;

label_10c694:
    // 0x10c694: 0x7a260030  lq          $a2, 0x30($s1)
    ctx->pc = 0x10c694u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_10c698:
    // 0x10c698: 0x7a270040  lq          $a3, 0x40($s1)
    ctx->pc = 0x10c698u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_10c69c:
    // 0x10c69c: 0x7a280050  lq          $t0, 0x50($s1)
    ctx->pc = 0x10c69cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 17), 80)));
label_10c6a0:
    // 0x10c6a0: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x10c6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_10c6a4:
    // 0x10c6a4: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x10c6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
label_10c6a8:
    // 0x10c6a8: 0x7c680020  sq          $t0, 0x20($v1)
    ctx->pc = 0x10c6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 8));
label_10c6ac:
    // 0x10c6ac: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x10c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_10c6b0:
    // 0x10c6b0: 0x7a260010  lq          $a2, 0x10($s1)
    ctx->pc = 0x10c6b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_10c6b4:
    // 0x10c6b4: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x10c6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
label_10c6b8:
    // 0x10c6b8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x10c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_10c6bc:
    // 0x10c6bc: 0xc6210258  lwc1        $f1, 0x258($s1)
    ctx->pc = 0x10c6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10c6c0:
    // 0x10c6c0: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x10c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_10c6c4:
    // 0x10c6c4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x10c6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_10c6c8:
    // 0x10c6c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10c6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10c6cc:
    // 0x10c6cc: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x10c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_10c6d0:
    // 0x10c6d0: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x10c6d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_10c6d4:
    // 0x10c6d4: 0xc6210200  lwc1        $f1, 0x200($s1)
    ctx->pc = 0x10c6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10c6d8:
    // 0x10c6d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10c6d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_10c6dc:
    // 0x10c6dc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x10c6dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_10c6e0:
    // 0x10c6e0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x10c6e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_10c6e4:
    // 0x10c6e4: 0x0  nop
    ctx->pc = 0x10c6e4u;
    // NOP
label_10c6e8:
    // 0x10c6e8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x10c6e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_10c6ec:
    // 0x10c6ec: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x10c6ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_10c6f0:
    // 0x10c6f0: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x10c6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_10c6f4:
    // 0x10c6f4: 0xd8860000  lqc2        $vf6, 0x0($a0)
    ctx->pc = 0x10c6f4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_10c6f8:
    // 0x10c6f8: 0x4bc53198  vmulx.xyz   $vf6, $vf6, $vf5x
    ctx->pc = 0x10c6f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_10c6fc:
    // 0x10c6fc: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x10c6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_10c700:
    // 0x10c700: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10c700u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_10c704:
    // 0x10c704: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x10c704u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_10c708:
    // 0x10c708: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10c708u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_10c70c:
    // 0x10c70c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x10c70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10c710:
    // 0x10c710: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x10c710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10c714:
    // 0x10c714: 0x86230254  lh          $v1, 0x254($s1)
    ctx->pc = 0x10c714u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 596)));
label_10c718:
    // 0x10c718: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10c71c:
    // 0x10c71c: 0x86250256  lh          $a1, 0x256($s1)
    ctx->pc = 0x10c71cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 598)));
label_10c720:
    // 0x10c720: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10c720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10c724:
    // 0x10c724: 0xc0466e4  jal         func_119B90
label_10c728:
    if (ctx->pc == 0x10C728u) {
        ctx->pc = 0x10C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C724u;
        // 0x10c728: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C72Cu;
        goto label_10c72c;
    }
    ctx->pc = 0x10C724u;
    SET_GPR_U32(ctx, 31, 0x10C72Cu);
    ctx->pc = 0x10C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C724u;
    // 0x10c728: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B90u, 0x10C724u, 0x10C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C72Cu;
label_10c72c:
    // 0x10c72c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10c72cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10c730:
    // 0x10c730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c734:
    // 0x10c734: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x10c734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_10c738:
    // 0x10c738: 0x320f809  jalr        $t9
label_10c73c:
    if (ctx->pc == 0x10C73Cu) {
        ctx->pc = 0x10C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C738u;
        // 0x10c73c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C740u;
        goto label_10c740;
    }
    ctx->pc = 0x10C738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C740u);
        ctx->pc = 0x10C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C738u;
        // 0x10c73c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C738u, 0x10C740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C740u;
label_10c740:
    // 0x10c740: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x10c740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_10c744:
    // 0x10c744: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x10c744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_10c748:
    // 0x10c748: 0x24420260  addiu       $v0, $v0, 0x260
    ctx->pc = 0x10c748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
label_10c74c:
    // 0x10c74c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x10c74cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_10c750:
    // 0x10c750: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x10c750u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_10c754:
    // 0x10c754: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10c754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10c758:
    // 0x10c758: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x10c758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_10c75c:
    // 0x10c75c: 0x320f809  jalr        $t9
label_10c760:
    if (ctx->pc == 0x10C760u) {
        ctx->pc = 0x10C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C75Cu;
        // 0x10c760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C764u;
        goto label_fallthrough_0x10c75c;
    }
    ctx->pc = 0x10C75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C764u);
        ctx->pc = 0x10C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C75Cu;
        // 0x10c760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C75Cu, 0x10C764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x10c75c:
    ctx->pc = 0x10C764u;
}
