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

// Function: entry_001576d8
// Address: 0x1576d8 - 0x157758
void entry_001576d8_0x1576d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001576d8_0x1576d8");
#endif

    ctx->pc = 0x1576d8u;

    // 0x1576d8: 0xc4820334  lwc1        $f2, 0x334($a0)
    ctx->pc = 0x1576d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1576dc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1576dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1576e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1576e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1576e4: 0x24830300  addiu       $v1, $a0, 0x300
    ctx->pc = 0x1576e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    // 0x1576e8: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x1576e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1576ec: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1576ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1576f0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1576f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1576f4: 0xe4800334  swc1        $f0, 0x334($a0)
    ctx->pc = 0x1576f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 820), bits); }
    // 0x1576f8: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x1576f8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1576fc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1576fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157700: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x157700u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x157704: 0x0  nop
    ctx->pc = 0x157704u;
    // NOP
    // 0x157708: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x157708u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x15770c: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x15770cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157710: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x157710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157714: 0xf8850000  sqc2        $vf5, 0x0($a0)
    ctx->pc = 0x157714u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x157718: 0x460c0881  sub.s       $f2, $f1, $f12
    ctx->pc = 0x157718u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x15771c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15771cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157720: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x157720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x157724: 0x0  nop
    ctx->pc = 0x157724u;
    // NOP
    // 0x157728: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x157728u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x15772c: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x15772cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157730: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x157730u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157734: 0xc48102f0  lwc1        $f1, 0x2F0($a0)
    ctx->pc = 0x157734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157738: 0xc4800330  lwc1        $f0, 0x330($a0)
    ctx->pc = 0x157738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15773c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x15773cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x157740: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157744: 0xe4800330  swc1        $f0, 0x330($a0)
    ctx->pc = 0x157744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 816), bits); }
    // 0x157748: 0xc48002f0  lwc1        $f0, 0x2F0($a0)
    ctx->pc = 0x157748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15774c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x15774cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157750: 0x3e00008  jr          $ra
    ctx->pc = 0x157750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157750u;
        // 0x157754: 0xe48002f0  swc1        $f0, 0x2F0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 752), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157758u;
}
