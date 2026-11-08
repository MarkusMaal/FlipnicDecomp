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

// Function: entry_001689d8
// Address: 0x1689d8 - 0x168a28
void entry_001689d8_0x1689d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001689d8_0x1689d8");
#endif

    switch (ctx->pc) {
        case 0x1689e8u: goto label_1689e8;
        case 0x1689f0u: goto label_1689f0;
        default: break;
    }

    ctx->pc = 0x1689d8u;

    // 0x1689d8: 0xc6340024  lwc1        $f20, 0x24($s1)
    ctx->pc = 0x1689d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1689dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1689dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1689e0: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1689E0u;
    SET_GPR_U32(ctx, 31, 0x1689E8u);
    ctx->pc = 0x1689E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1689E0u;
    // 0x1689e4: 0xae2001d4  sw          $zero, 0x1D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1689E0u, 0x1689E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1689E8u;
label_1689e8:
    // 0x1689e8: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x1689E8u;
    SET_GPR_U32(ctx, 31, 0x1689F0u);
    ctx->pc = 0x1689ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1689E8u;
    // 0x1689ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x1689E8u, 0x1689F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1689F0u;
label_1689f0:
    // 0x1689f0: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x1689f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x1689f4: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x1689f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
    // 0x1689f8: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1689f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1689fc: 0x4a402107  vsubw.z     $vf4, $vf4, $vf0w
    ctx->pc = 0x1689fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x168a00: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x168a00u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x168a04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x168a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168a08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x168a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168a0c: 0xc44d0054  lwc1        $f13, 0x54($v0)
    ctx->pc = 0x168a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x168a10: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x168a10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168a14: 0x0  nop
    ctx->pc = 0x168a14u;
    // NOP
    // 0x168a18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x168A18u;
    {
        const bool branch_taken_0x168a18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x168A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A18u;
        // 0x168a1c: 0x3c023f99  lui         $v0, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a18) {
            ctx->pc = 0x168A28u;
            return;
        }
    }
    ctx->pc = 0x168A20u;
    // 0x168a20: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x168a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x168a24: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x168a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    ctx->pc = 0x168a28u;
}
