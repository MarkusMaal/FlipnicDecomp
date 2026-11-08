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

// Function: entry_001667e8
// Address: 0x1667e8 - 0x166878
void entry_001667e8_0x1667e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001667e8_0x1667e8");
#endif

    switch (ctx->pc) {
        case 0x166870u: goto label_166870;
        default: break;
    }

    ctx->pc = 0x1667e8u;

    // 0x1667e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1667e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1667ec: 0x0  nop
    ctx->pc = 0x1667ecu;
    // NOP
    // 0x1667f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1667f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1667f4: 0x0  nop
    ctx->pc = 0x1667f4u;
    // NOP
    // 0x1667f8: 0x45010060  bc1t        . + 4 + (0x60 << 2)
    ctx->pc = 0x1667F8u;
    {
        const bool branch_taken_0x1667f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1667FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667F8u;
        // 0x1667fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667f8) {
            ctx->pc = 0x16697Cu;
            return;
        }
    }
    ctx->pc = 0x166800u;
    // 0x166800: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x166800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166804: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x166804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x166808: 0xc4740054  lwc1        $f20, 0x54($v1)
    ctx->pc = 0x166808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16680c: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x16680cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x166810: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x166810u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x166814: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x166814u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166818: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x166818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16681c: 0x0  nop
    ctx->pc = 0x16681cu;
    // NOP
    // 0x166820: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x166820u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x166824: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x166824u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166828: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x166828u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16682c: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x16682cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x166830: 0x822201d1  lb          $v0, 0x1D1($s1)
    ctx->pc = 0x166830u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 465)));
    // 0x166834: 0x4410017  bgez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x166834u;
    {
        const bool branch_taken_0x166834 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x166838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166834u;
        // 0x166838: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166834) {
            ctx->pc = 0x166894u;
            return;
        }
    }
    ctx->pc = 0x16683Cu;
    // 0x16683c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x16683cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x166840: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x166840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x166844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166848: 0x0  nop
    ctx->pc = 0x166848u;
    // NOP
    // 0x16684c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x16684cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166850: 0x0  nop
    ctx->pc = 0x166850u;
    // NOP
    // 0x166854: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x166854u;
    {
        const bool branch_taken_0x166854 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x166854) {
            ctx->pc = 0x166878u;
            return;
        }
    }
    ctx->pc = 0x16685Cu;
    // 0x16685c: 0x822201d0  lb          $v0, 0x1D0($s1)
    ctx->pc = 0x16685cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x166860: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x166860u;
    {
        const bool branch_taken_0x166860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166860u;
        // 0x166864: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166860) {
            ctx->pc = 0x166878u;
            return;
        }
    }
    ctx->pc = 0x166868u;
    // 0x166868: 0xc042118  jal         func_108460
    ctx->pc = 0x166868u;
    SET_GPR_U32(ctx, 31, 0x166870u);
    ctx->pc = 0x16686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166868u;
    // 0x16686c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x166868u, 0x166870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166870u;
label_166870:
    // 0x166870: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x166870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x166874: 0xa22201d0  sb          $v0, 0x1D0($s1)
    ctx->pc = 0x166874u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 464), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x166878u;
}
