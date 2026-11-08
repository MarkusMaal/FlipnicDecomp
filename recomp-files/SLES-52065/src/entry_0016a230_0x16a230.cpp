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

// Function: entry_0016a230
// Address: 0x16a230 - 0x16a2e4
void entry_0016a230_0x16a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a230_0x16a230");
#endif

    switch (ctx->pc) {
        case 0x16a28cu: goto label_16a28c;
        case 0x16a2acu: goto label_16a2ac;
        case 0x16a2ccu: goto label_16a2cc;
        default: break;
    }

    ctx->pc = 0x16a230u;

label_16a230:
    // 0x16a230: 0x8e220224  lw          $v0, 0x224($s1)
    ctx->pc = 0x16a230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_16a234:
    // 0x16a234: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_16a238:
    if (ctx->pc == 0x16A238u) {
        ctx->pc = 0x16A23Cu;
        goto label_16a23c;
    }
    ctx->pc = 0x16A234u;
    {
        const bool branch_taken_0x16a234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a234) {
            ctx->pc = 0x16A2FCu;
            return;
        }
    }
    ctx->pc = 0x16A23Cu;
label_16a23c:
    // 0x16a23c: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x16a23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16a240:
    // 0x16a240: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16a244:
    // 0x16a244: 0x0  nop
    ctx->pc = 0x16a244u;
    // NOP
label_16a248:
    // 0x16a248: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16a248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16a24c:
    // 0x16a24c: 0x0  nop
    ctx->pc = 0x16a24cu;
    // NOP
label_16a250:
    // 0x16a250: 0x45010042  bc1t        . + 4 + (0x42 << 2)
label_16a254:
    if (ctx->pc == 0x16A254u) {
        ctx->pc = 0x16A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A250u;
        // 0x16a254: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A258u;
        goto label_16a258;
    }
    ctx->pc = 0x16A250u;
    {
        const bool branch_taken_0x16a250 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A250u;
        // 0x16a254: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a250) {
            ctx->pc = 0x16A35Cu;
            return;
        }
    }
    ctx->pc = 0x16A258u;
label_16a258:
    // 0x16a258: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x16a258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16a25c:
    // 0x16a25c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x16a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_16a260:
    // 0x16a260: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16a260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16a264:
    // 0x16a264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a268:
    // 0x16a268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16a268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16a26c:
    // 0x16a26c: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x16a26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_16a270:
    // 0x16a270: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x16a270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_16a274:
    // 0x16a274: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x16a274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16a278:
    // 0x16a278: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16a27c:
    // 0x16a27c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x16a27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_16a280:
    // 0x16a280: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x16a280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16a284:
    // 0x16a284: 0xc05f330  jal         func_17CCC0
label_16a288:
    if (ctx->pc == 0x16A288u) {
        ctx->pc = 0x16A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A284u;
        // 0x16a288: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A28Cu;
        goto label_16a28c;
    }
    ctx->pc = 0x16A284u;
    SET_GPR_U32(ctx, 31, 0x16A28Cu);
    ctx->pc = 0x16A288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A284u;
    // 0x16a288: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CCC0u, 0x16A284u, 0x16A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A28Cu;
label_16a28c:
    // 0x16a28c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16a28cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16a290:
    // 0x16a290: 0x0  nop
    ctx->pc = 0x16a290u;
    // NOP
label_16a294:
    // 0x16a294: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16a294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16a298:
    // 0x16a298: 0x0  nop
    ctx->pc = 0x16a298u;
    // NOP
label_16a29c:
    // 0x16a29c: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
label_16a2a0:
    if (ctx->pc == 0x16A2A0u) {
        ctx->pc = 0x16A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A29Cu;
        // 0x16a2a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A2A4u;
        goto label_16a2a4;
    }
    ctx->pc = 0x16A29Cu;
    {
        const bool branch_taken_0x16a29c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A29Cu;
        // 0x16a2a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a29c) {
            ctx->pc = 0x16A358u;
            return;
        }
    }
    ctx->pc = 0x16A2A4u;
label_16a2a4:
    // 0x16a2a4: 0xc042118  jal         func_108460
label_16a2a8:
    if (ctx->pc == 0x16A2A8u) {
        ctx->pc = 0x16A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2A4u;
        // 0x16a2a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A2ACu;
        goto label_16a2ac;
    }
    ctx->pc = 0x16A2A4u;
    SET_GPR_U32(ctx, 31, 0x16A2ACu);
    ctx->pc = 0x16A2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A2A4u;
    // 0x16a2a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16A2A4u, 0x16A2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A2ACu;
label_16a2ac:
    // 0x16a2ac: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x16a2acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_16a2b0:
    // 0x16a2b0: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x16a2b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_16a2b4:
    // 0x16a2b4: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x16a2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_16a2b8:
    // 0x16a2b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16a2bc:
    // 0x16a2bc: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16a2bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16a2c0:
    // 0x16a2c0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16a2c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16a2c4:
    // 0x16a2c4: 0x320f809  jalr        $t9
label_16a2c8:
    if (ctx->pc == 0x16A2C8u) {
        ctx->pc = 0x16A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2C4u;
        // 0x16a2c8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A2CCu;
        goto label_16a2cc;
    }
    ctx->pc = 0x16A2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16A2CCu);
        ctx->pc = 0x16A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2C4u;
        // 0x16a2c8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A2C4u, 0x16A2CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A2CCu;
label_16a2cc:
    // 0x16a2cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16a2d0:
    // 0x16a2d0: 0x80620024  lb          $v0, 0x24($v1)
    ctx->pc = 0x16a2d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_16a2d4:
    // 0x16a2d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16a2d8:
    if (ctx->pc == 0x16A2D8u) {
        ctx->pc = 0x16A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2D4u;
        // 0x16a2d8: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A2DCu;
        goto label_16a2dc;
    }
    ctx->pc = 0x16A2D4u;
    {
        const bool branch_taken_0x16a2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2D4u;
        // 0x16a2d8: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2d4) {
            ctx->pc = 0x16A2E4u;
            return;
        }
    }
    ctx->pc = 0x16A2DCu;
label_16a2dc:
    // 0x16a2dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_16a2e0:
    if (ctx->pc == 0x16A2E0u) {
        ctx->pc = 0x16A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2DCu;
        // 0x16a2e0: 0xa6220220  sh          $v0, 0x220($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A2E4u;
        goto label_fallthrough_0x16a2dc;
    }
    ctx->pc = 0x16A2DCu;
    {
        const bool branch_taken_0x16a2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2DCu;
        // 0x16a2e0: 0xa6220220  sh          $v0, 0x220($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2dc) {
            ctx->pc = 0x16A2F0u;
            return;
        }
    }
label_fallthrough_0x16a2dc:
    ctx->pc = 0x16A2E4u;
}
