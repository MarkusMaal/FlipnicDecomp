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

// Function: FUN_00169e60
// Address: 0x169e60 - 0x169f38
void FUN_00169e60_0x169e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00169e60_0x169e60");
#endif

    switch (ctx->pc) {
        case 0x169e60u: goto label_169e60;
        case 0x169e64u: goto label_169e64;
        case 0x169e68u: goto label_169e68;
        case 0x169e6cu: goto label_169e6c;
        case 0x169e70u: goto label_169e70;
        case 0x169e74u: goto label_169e74;
        case 0x169e78u: goto label_169e78;
        case 0x169e7cu: goto label_169e7c;
        case 0x169e80u: goto label_169e80;
        case 0x169e84u: goto label_169e84;
        case 0x169e88u: goto label_169e88;
        case 0x169e8cu: goto label_169e8c;
        case 0x169e90u: goto label_169e90;
        case 0x169e94u: goto label_169e94;
        case 0x169e98u: goto label_169e98;
        case 0x169e9cu: goto label_169e9c;
        case 0x169ea0u: goto label_169ea0;
        case 0x169ea4u: goto label_169ea4;
        case 0x169ea8u: goto label_169ea8;
        case 0x169eacu: goto label_169eac;
        case 0x169eb0u: goto label_169eb0;
        case 0x169eb4u: goto label_169eb4;
        case 0x169eb8u: goto label_169eb8;
        case 0x169ebcu: goto label_169ebc;
        case 0x169ec0u: goto label_169ec0;
        case 0x169ec4u: goto label_169ec4;
        case 0x169ec8u: goto label_169ec8;
        case 0x169eccu: goto label_169ecc;
        case 0x169ed0u: goto label_169ed0;
        case 0x169ed4u: goto label_169ed4;
        case 0x169ed8u: goto label_169ed8;
        case 0x169edcu: goto label_169edc;
        case 0x169ee0u: goto label_169ee0;
        case 0x169ee4u: goto label_169ee4;
        case 0x169ee8u: goto label_169ee8;
        case 0x169eecu: goto label_169eec;
        case 0x169ef0u: goto label_169ef0;
        case 0x169ef4u: goto label_169ef4;
        case 0x169ef8u: goto label_169ef8;
        case 0x169efcu: goto label_169efc;
        case 0x169f00u: goto label_169f00;
        case 0x169f04u: goto label_169f04;
        case 0x169f08u: goto label_169f08;
        case 0x169f0cu: goto label_169f0c;
        case 0x169f10u: goto label_169f10;
        case 0x169f14u: goto label_169f14;
        case 0x169f18u: goto label_169f18;
        case 0x169f1cu: goto label_169f1c;
        case 0x169f20u: goto label_169f20;
        case 0x169f24u: goto label_169f24;
        case 0x169f28u: goto label_169f28;
        case 0x169f2cu: goto label_169f2c;
        case 0x169f30u: goto label_169f30;
        case 0x169f34u: goto label_169f34;
        default: break;
    }

    ctx->pc = 0x169e60u;

label_169e60:
    // 0x169e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_169e64:
    // 0x169e64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x169e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_169e68:
    // 0x169e68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x169e68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_169e6c:
    // 0x169e6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x169e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_169e70:
    // 0x169e70: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x169e70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_169e74:
    // 0x169e74: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x169e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169e78:
    // 0x169e78: 0xc454004c  lwc1        $f20, 0x4C($v0)
    ctx->pc = 0x169e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_169e7c:
    // 0x169e7c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x169e7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_169e80:
    // 0x169e80: 0x0  nop
    ctx->pc = 0x169e80u;
    // NOP
label_169e84:
    // 0x169e84: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_169e88:
    if (ctx->pc == 0x169E88u) {
        ctx->pc = 0x169E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E84u;
        // 0x169e88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169E8Cu;
        goto label_169e8c;
    }
    ctx->pc = 0x169E84u;
    {
        const bool branch_taken_0x169e84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x169E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E84u;
        // 0x169e88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169e84) {
            ctx->pc = 0x169E98u;
            goto label_169e98;
        }
    }
    ctx->pc = 0x169E8Cu;
label_169e8c:
    // 0x169e8c: 0x3c023f28  lui         $v0, 0x3F28
    ctx->pc = 0x169e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16168 << 16));
label_169e90:
    // 0x169e90: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x169e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
label_169e94:
    // 0x169e94: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x169e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_169e98:
    // 0x169e98: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169e98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169e9c:
    // 0x169e9c: 0x8e050224  lw          $a1, 0x224($s0)
    ctx->pc = 0x169e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169ea0:
    // 0x169ea0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x169ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_169ea4:
    // 0x169ea4: 0x320f809  jalr        $t9
label_169ea8:
    if (ctx->pc == 0x169EA8u) {
        ctx->pc = 0x169EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EA4u;
        // 0x169ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169EACu;
        goto label_169eac;
    }
    ctx->pc = 0x169EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169EACu);
        ctx->pc = 0x169EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EA4u;
        // 0x169ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169EA4u, 0x169EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169EACu;
label_169eac:
    // 0x169eac: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x169eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169eb0:
    // 0x169eb0: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x169eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
label_169eb4:
    // 0x169eb4: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x169eb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_169eb8:
    // 0x169eb8: 0x4b002107  vsubw.x     $vf4, $vf4, $vf0w
    ctx->pc = 0x169eb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_169ebc:
    // 0x169ebc: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x169ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_169ec0:
    // 0x169ec0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x169ec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169ec4:
    // 0x169ec4: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x169ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169ec8:
    // 0x169ec8: 0xc056194  jal         func_158650
label_169ecc:
    if (ctx->pc == 0x169ECCu) {
        ctx->pc = 0x169ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EC8u;
        // 0x169ecc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x169ED0u;
        goto label_169ed0;
    }
    ctx->pc = 0x169EC8u;
    SET_GPR_U32(ctx, 31, 0x169ED0u);
    ctx->pc = 0x169ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169EC8u;
    // 0x169ecc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x169EC8u, 0x169ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169ED0u;
label_169ed0:
    // 0x169ed0: 0x8e050224  lw          $a1, 0x224($s0)
    ctx->pc = 0x169ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169ed4:
    // 0x169ed4: 0xc60d0200  lwc1        $f13, 0x200($s0)
    ctx->pc = 0x169ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_169ed8:
    // 0x169ed8: 0xc4ac01c0  lwc1        $f12, 0x1C0($a1)
    ctx->pc = 0x169ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_169edc:
    // 0x169edc: 0xc054f5c  jal         func_153D70
label_169ee0:
    if (ctx->pc == 0x169EE0u) {
        ctx->pc = 0x169EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EDCu;
        // 0x169ee0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169EE4u;
        goto label_169ee4;
    }
    ctx->pc = 0x169EDCu;
    SET_GPR_U32(ctx, 31, 0x169EE4u);
    ctx->pc = 0x169EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169EDCu;
    // 0x169ee0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153D70u, 0x169EDCu, 0x169EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169EE4u;
label_169ee4:
    // 0x169ee4: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169ee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169ee8:
    // 0x169ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169eec:
    // 0x169eec: 0x8e050224  lw          $a1, 0x224($s0)
    ctx->pc = 0x169eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169ef0:
    // 0x169ef0: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x169ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_169ef4:
    // 0x169ef4: 0x320f809  jalr        $t9
label_169ef8:
    if (ctx->pc == 0x169EF8u) {
        ctx->pc = 0x169EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EF4u;
        // 0x169ef8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169EFCu;
        goto label_169efc;
    }
    ctx->pc = 0x169EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169EFCu);
        ctx->pc = 0x169EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EF4u;
        // 0x169ef8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169EF4u, 0x169EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169EFCu;
label_169efc:
    // 0x169efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169f00:
    // 0x169f00: 0xc042118  jal         func_108460
label_169f04:
    if (ctx->pc == 0x169F04u) {
        ctx->pc = 0x169F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F00u;
        // 0x169f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169F08u;
        goto label_169f08;
    }
    ctx->pc = 0x169F00u;
    SET_GPR_U32(ctx, 31, 0x169F08u);
    ctx->pc = 0x169F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F00u;
    // 0x169f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x169F00u, 0x169F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F08u;
label_169f08:
    // 0x169f08: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x169f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
label_169f0c:
    // 0x169f0c: 0x8e040228  lw          $a0, 0x228($s0)
    ctx->pc = 0x169f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_169f10:
    // 0x169f10: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_169f14:
    if (ctx->pc == 0x169F14u) {
        ctx->pc = 0x169F18u;
        goto label_169f18;
    }
    ctx->pc = 0x169F10u;
    {
        const bool branch_taken_0x169f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x169f10) {
            ctx->pc = 0x169F24u;
            goto label_169f24;
        }
    }
    ctx->pc = 0x169F18u;
label_169f18:
    // 0x169f18: 0xc04be08  jal         func_12F820
label_169f1c:
    if (ctx->pc == 0x169F1Cu) {
        ctx->pc = 0x169F20u;
        goto label_169f20;
    }
    ctx->pc = 0x169F18u;
    SET_GPR_U32(ctx, 31, 0x169F20u);
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x169F18u, 0x169F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F20u;
label_169f20:
    // 0x169f20: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x169f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_169f24:
    // 0x169f24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x169f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_169f28:
    // 0x169f28: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x169f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_169f2c:
    // 0x169f2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x169f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_169f30:
    // 0x169f30: 0x3e00008  jr          $ra
label_169f34:
    if (ctx->pc == 0x169F34u) {
        ctx->pc = 0x169F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F30u;
        // 0x169f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169F38u;
        goto label_fallthrough_0x169f30;
    }
    ctx->pc = 0x169F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F30u;
        // 0x169f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x169f30:
    ctx->pc = 0x169F38u;
}
