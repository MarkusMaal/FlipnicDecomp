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

// Function: entry_00167c24
// Address: 0x167c24 - 0x167c90
void entry_00167c24_0x167c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167c24_0x167c24");
#endif

    ctx->pc = 0x167c24u;

    // 0x167c24: 0xa6220220  sh          $v0, 0x220($s1)
    ctx->pc = 0x167c24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 2));
    // 0x167c28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x167c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167c2c: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x167c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167c30: 0x46000d05  abs.s       $f20, $f1
    ctx->pc = 0x167c30u;
    ctx->f[20] = FPU_ABS_S(ctx->f[1]);
    // 0x167c34: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x167c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x167c38: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x167c38u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167c3c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x167c3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167c40: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x167c40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x167c44: 0x0  nop
    ctx->pc = 0x167c44u;
    // NOP
    // 0x167c48: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x167c48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x167c4c: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x167c4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x167c50: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x167c50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x167c54: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x167c54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x167c58: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x167c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x167c5c: 0x822201d1  lb          $v0, 0x1D1($s1)
    ctx->pc = 0x167c5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 465)));
    // 0x167c60: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x167C60u;
    {
        const bool branch_taken_0x167c60 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x167c60) {
            ctx->pc = 0x167CA8u;
            return;
        }
    }
    ctx->pc = 0x167C68u;
    // 0x167c68: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x167c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x167c6c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x167c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x167c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167c74: 0x0  nop
    ctx->pc = 0x167c74u;
    // NOP
    // 0x167c78: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x167c78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167c7c: 0x0  nop
    ctx->pc = 0x167c7cu;
    // NOP
    // 0x167c80: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x167C80u;
    {
        const bool branch_taken_0x167c80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x167C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C80u;
        // 0x167c84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c80) {
            ctx->pc = 0x167C90u;
            return;
        }
    }
    ctx->pc = 0x167C88u;
    // 0x167c88: 0xc042118  jal         func_108460
    ctx->pc = 0x167C88u;
    SET_GPR_U32(ctx, 31, 0x167C90u);
    ctx->pc = 0x167C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167C88u;
    // 0x167c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x167C88u, 0x167C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167C90u;
}
