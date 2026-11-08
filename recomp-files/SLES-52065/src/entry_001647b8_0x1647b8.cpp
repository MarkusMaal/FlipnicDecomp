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

// Function: entry_001647b8
// Address: 0x1647b8 - 0x164820
void entry_001647b8_0x1647b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001647b8_0x1647b8");
#endif

    switch (ctx->pc) {
        case 0x1647fcu: goto label_1647fc;
        default: break;
    }

    ctx->pc = 0x1647b8u;

    // 0x1647b8: 0x862303c6  lh          $v1, 0x3C6($s1)
    ctx->pc = 0x1647b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 966)));
    // 0x1647bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1647bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1647c0: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1647C0u;
    {
        const bool branch_taken_0x1647c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1647C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647C0u;
        // 0x1647c4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647c0) {
            ctx->pc = 0x164844u;
            return;
        }
    }
    ctx->pc = 0x1647C8u;
    // 0x1647c8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1647c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1647cc: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1647ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1647d0: 0x4a802103  vaddw.y     $vf4, $vf4, $vf0w
    ctx->pc = 0x1647d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1647d4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1647d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1647d8: 0xc62102a0  lwc1        $f1, 0x2A0($s1)
    ctx->pc = 0x1647d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1647dc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1647dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1647e0: 0xc62003c0  lwc1        $f0, 0x3C0($s1)
    ctx->pc = 0x1647e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1647e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1647e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1647e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1647e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1647ec: 0xe62003c0  swc1        $f0, 0x3C0($s1)
    ctx->pc = 0x1647ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 960), bits); }
    // 0x1647f0: 0xc62e03c0  lwc1        $f14, 0x3C0($s1)
    ctx->pc = 0x1647f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1647f4: 0xc05be24  jal         func_16F890
    ctx->pc = 0x1647F4u;
    SET_GPR_U32(ctx, 31, 0x1647FCu);
    ctx->pc = 0x1647F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647F4u;
    // 0x1647f8: 0xc62d03c8  lwc1        $f13, 0x3C8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F890u, 0x1647F4u, 0x1647FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647FCu;
label_1647fc:
    // 0x1647fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1647fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164800: 0x0  nop
    ctx->pc = 0x164800u;
    // NOP
    // 0x164804: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x164804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164808: 0x0  nop
    ctx->pc = 0x164808u;
    // NOP
    // 0x16480c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16480Cu;
    {
        const bool branch_taken_0x16480c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x164810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16480Cu;
        // 0x164810: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16480c) {
            ctx->pc = 0x164820u;
            return;
        }
    }
    ctx->pc = 0x164814u;
    // 0x164814: 0xa62003c6  sh          $zero, 0x3C6($s1)
    ctx->pc = 0x164814u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 966), (uint16_t)GPR_U32(ctx, 0));
    // 0x164818: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x164818u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x16481c: 0xe62103c0  swc1        $f1, 0x3C0($s1)
    ctx->pc = 0x16481cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 960), bits); }
    ctx->pc = 0x164820u;
}
