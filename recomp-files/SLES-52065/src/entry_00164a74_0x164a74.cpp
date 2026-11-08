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

// Function: entry_00164a74
// Address: 0x164a74 - 0x164adc
void entry_00164a74_0x164a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164a74_0x164a74");
#endif

    switch (ctx->pc) {
        case 0x164ab8u: goto label_164ab8;
        default: break;
    }

    ctx->pc = 0x164a74u;

    // 0x164a74: 0x862303c6  lh          $v1, 0x3C6($s1)
    ctx->pc = 0x164a74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 966)));
    // 0x164a78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164a7c: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x164A7Cu;
    {
        const bool branch_taken_0x164a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A7Cu;
        // 0x164a80: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a7c) {
            ctx->pc = 0x164B00u;
            return;
        }
    }
    ctx->pc = 0x164A84u;
    // 0x164a84: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x164a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x164a88: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x164a88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164a8c: 0x4a802103  vaddw.y     $vf4, $vf4, $vf0w
    ctx->pc = 0x164a8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164a90: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x164a90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164a94: 0xc62102a0  lwc1        $f1, 0x2A0($s1)
    ctx->pc = 0x164a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164a98: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x164a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x164a9c: 0xc62003c0  lwc1        $f0, 0x3C0($s1)
    ctx->pc = 0x164a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164aa0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164aa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x164aa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x164aa8: 0xe62003c0  swc1        $f0, 0x3C0($s1)
    ctx->pc = 0x164aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 960), bits); }
    // 0x164aac: 0xc62e03c0  lwc1        $f14, 0x3C0($s1)
    ctx->pc = 0x164aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x164ab0: 0xc05be24  jal         func_16F890
    ctx->pc = 0x164AB0u;
    SET_GPR_U32(ctx, 31, 0x164AB8u);
    ctx->pc = 0x164AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164AB0u;
    // 0x164ab4: 0xc62d03c8  lwc1        $f13, 0x3C8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F890u, 0x164AB0u, 0x164AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164AB8u;
label_164ab8:
    // 0x164ab8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x164ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164abc: 0x0  nop
    ctx->pc = 0x164abcu;
    // NOP
    // 0x164ac0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x164ac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164ac4: 0x0  nop
    ctx->pc = 0x164ac4u;
    // NOP
    // 0x164ac8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x164AC8u;
    {
        const bool branch_taken_0x164ac8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x164ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AC8u;
        // 0x164acc: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ac8) {
            ctx->pc = 0x164ADCu;
            return;
        }
    }
    ctx->pc = 0x164AD0u;
    // 0x164ad0: 0xa62003c6  sh          $zero, 0x3C6($s1)
    ctx->pc = 0x164ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 966), (uint16_t)GPR_U32(ctx, 0));
    // 0x164ad4: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x164ad4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x164ad8: 0xe62103c0  swc1        $f1, 0x3C0($s1)
    ctx->pc = 0x164ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 960), bits); }
    ctx->pc = 0x164adcu;
}
