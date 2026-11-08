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

// Function: FUN_00169f40
// Address: 0x169f40 - 0x16a040
void FUN_00169f40_0x169f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00169f40_0x169f40");
#endif

    switch (ctx->pc) {
        case 0x169f40u: goto label_169f40;
        case 0x169f44u: goto label_169f44;
        case 0x169f48u: goto label_169f48;
        case 0x169f4cu: goto label_169f4c;
        case 0x169f50u: goto label_169f50;
        case 0x169f54u: goto label_169f54;
        case 0x169f58u: goto label_169f58;
        case 0x169f5cu: goto label_169f5c;
        case 0x169f60u: goto label_169f60;
        case 0x169f64u: goto label_169f64;
        case 0x169f68u: goto label_169f68;
        case 0x169f6cu: goto label_169f6c;
        case 0x169f70u: goto label_169f70;
        case 0x169f74u: goto label_169f74;
        case 0x169f78u: goto label_169f78;
        case 0x169f7cu: goto label_169f7c;
        case 0x169f80u: goto label_169f80;
        case 0x169f84u: goto label_169f84;
        case 0x169f88u: goto label_169f88;
        case 0x169f8cu: goto label_169f8c;
        case 0x169f90u: goto label_169f90;
        case 0x169f94u: goto label_169f94;
        case 0x169f98u: goto label_169f98;
        case 0x169f9cu: goto label_169f9c;
        case 0x169fa0u: goto label_169fa0;
        case 0x169fa4u: goto label_169fa4;
        case 0x169fa8u: goto label_169fa8;
        case 0x169facu: goto label_169fac;
        case 0x169fb0u: goto label_169fb0;
        case 0x169fb4u: goto label_169fb4;
        case 0x169fb8u: goto label_169fb8;
        case 0x169fbcu: goto label_169fbc;
        case 0x169fc0u: goto label_169fc0;
        case 0x169fc4u: goto label_169fc4;
        case 0x169fc8u: goto label_169fc8;
        case 0x169fccu: goto label_169fcc;
        case 0x169fd0u: goto label_169fd0;
        case 0x169fd4u: goto label_169fd4;
        case 0x169fd8u: goto label_169fd8;
        case 0x169fdcu: goto label_169fdc;
        case 0x169fe0u: goto label_169fe0;
        case 0x169fe4u: goto label_169fe4;
        case 0x169fe8u: goto label_169fe8;
        case 0x169fecu: goto label_169fec;
        case 0x169ff0u: goto label_169ff0;
        case 0x169ff4u: goto label_169ff4;
        case 0x169ff8u: goto label_169ff8;
        case 0x169ffcu: goto label_169ffc;
        case 0x16a000u: goto label_16a000;
        case 0x16a004u: goto label_16a004;
        case 0x16a008u: goto label_16a008;
        case 0x16a00cu: goto label_16a00c;
        case 0x16a010u: goto label_16a010;
        case 0x16a014u: goto label_16a014;
        case 0x16a018u: goto label_16a018;
        case 0x16a01cu: goto label_16a01c;
        case 0x16a020u: goto label_16a020;
        case 0x16a024u: goto label_16a024;
        case 0x16a028u: goto label_16a028;
        case 0x16a02cu: goto label_16a02c;
        case 0x16a030u: goto label_16a030;
        case 0x16a034u: goto label_16a034;
        case 0x16a038u: goto label_16a038;
        case 0x16a03cu: goto label_16a03c;
        default: break;
    }

    ctx->pc = 0x169f40u;

label_169f40:
    // 0x169f40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x169f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_169f44:
    // 0x169f44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x169f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_169f48:
    // 0x169f48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x169f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_169f4c:
    // 0x169f4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x169f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_169f50:
    // 0x169f50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x169f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_169f54:
    // 0x169f54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x169f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_169f58:
    // 0x169f58: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x169f58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_169f5c:
    // 0x169f5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x169f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169f60:
    // 0x169f60: 0xc454004c  lwc1        $f20, 0x4C($v0)
    ctx->pc = 0x169f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_169f64:
    // 0x169f64: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x169f64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_169f68:
    // 0x169f68: 0x0  nop
    ctx->pc = 0x169f68u;
    // NOP
label_169f6c:
    // 0x169f6c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_169f70:
    if (ctx->pc == 0x169F70u) {
        ctx->pc = 0x169F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F6Cu;
        // 0x169f70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169F74u;
        goto label_169f74;
    }
    ctx->pc = 0x169F6Cu;
    {
        const bool branch_taken_0x169f6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x169F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F6Cu;
        // 0x169f70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f6c) {
            ctx->pc = 0x169F80u;
            goto label_169f80;
        }
    }
    ctx->pc = 0x169F74u;
label_169f74:
    // 0x169f74: 0x3c023f28  lui         $v0, 0x3F28
    ctx->pc = 0x169f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16168 << 16));
label_169f78:
    // 0x169f78: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x169f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
label_169f7c:
    // 0x169f7c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x169f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_169f80:
    // 0x169f80: 0x8e040228  lw          $a0, 0x228($s0)
    ctx->pc = 0x169f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_169f84:
    // 0x169f84: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x169f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_169f88:
    // 0x169f88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169f8c:
    // 0x169f8c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x169f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_169f90:
    // 0x169f90: 0x320f809  jalr        $t9
label_169f94:
    if (ctx->pc == 0x169F94u) {
        ctx->pc = 0x169F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F90u;
        // 0x169f94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169F98u;
        goto label_169f98;
    }
    ctx->pc = 0x169F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169F98u);
        ctx->pc = 0x169F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F90u;
        // 0x169f94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169F90u, 0x169F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169F98u;
label_169f98:
    // 0x169f98: 0x16200019  bnez        $s1, . + 4 + (0x19 << 2)
label_169f9c:
    if (ctx->pc == 0x169F9Cu) {
        ctx->pc = 0x169F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F98u;
        // 0x169f9c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169FA0u;
        goto label_169fa0;
    }
    ctx->pc = 0x169F98u;
    {
        const bool branch_taken_0x169f98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x169F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F98u;
        // 0x169f9c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f98) {
            ctx->pc = 0x16A000u;
            goto label_16a000;
        }
    }
    ctx->pc = 0x169FA0u;
label_169fa0:
    // 0x169fa0: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169fa4:
    // 0x169fa4: 0x8e050224  lw          $a1, 0x224($s0)
    ctx->pc = 0x169fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169fa8:
    // 0x169fa8: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x169fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_169fac:
    // 0x169fac: 0x320f809  jalr        $t9
label_169fb0:
    if (ctx->pc == 0x169FB0u) {
        ctx->pc = 0x169FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FACu;
        // 0x169fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169FB4u;
        goto label_169fb4;
    }
    ctx->pc = 0x169FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169FB4u);
        ctx->pc = 0x169FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FACu;
        // 0x169fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169FACu, 0x169FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169FB4u;
label_169fb4:
    // 0x169fb4: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x169fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169fb8:
    // 0x169fb8: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x169fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
label_169fbc:
    // 0x169fbc: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x169fbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_169fc0:
    // 0x169fc0: 0x4b002107  vsubw.x     $vf4, $vf4, $vf0w
    ctx->pc = 0x169fc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_169fc4:
    // 0x169fc4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x169fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_169fc8:
    // 0x169fc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x169fc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169fcc:
    // 0x169fcc: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x169fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169fd0:
    // 0x169fd0: 0xc056194  jal         func_158650
label_169fd4:
    if (ctx->pc == 0x169FD4u) {
        ctx->pc = 0x169FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FD0u;
        // 0x169fd4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x169FD8u;
        goto label_169fd8;
    }
    ctx->pc = 0x169FD0u;
    SET_GPR_U32(ctx, 31, 0x169FD8u);
    ctx->pc = 0x169FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169FD0u;
    // 0x169fd4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x169FD0u, 0x169FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169FD8u;
label_169fd8:
    // 0x169fd8: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169fdc:
    // 0x169fdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169fe0:
    // 0x169fe0: 0x8e050224  lw          $a1, 0x224($s0)
    ctx->pc = 0x169fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169fe4:
    // 0x169fe4: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x169fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_169fe8:
    // 0x169fe8: 0x320f809  jalr        $t9
label_169fec:
    if (ctx->pc == 0x169FECu) {
        ctx->pc = 0x169FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FE8u;
        // 0x169fec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169FF0u;
        goto label_169ff0;
    }
    ctx->pc = 0x169FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169FF0u);
        ctx->pc = 0x169FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FE8u;
        // 0x169fec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169FE8u, 0x169FF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169FF0u;
label_169ff0:
    // 0x169ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169ff4:
    // 0x169ff4: 0xc042118  jal         func_108460
label_169ff8:
    if (ctx->pc == 0x169FF8u) {
        ctx->pc = 0x169FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FF4u;
        // 0x169ff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169FFCu;
        goto label_169ffc;
    }
    ctx->pc = 0x169FF4u;
    SET_GPR_U32(ctx, 31, 0x169FFCu);
    ctx->pc = 0x169FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169FF4u;
    // 0x169ff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x169FF4u, 0x169FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169FFCu;
label_169ffc:
    // 0x169ffc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x169ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_16a000:
    // 0x16a000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a004:
    // 0x16a004: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16a004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16a008:
    // 0x16a008: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16a008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16a00c:
    // 0x16a00c: 0xc0425a4  jal         func_109690
label_16a010:
    if (ctx->pc == 0x16A010u) {
        ctx->pc = 0x16A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A00Cu;
        // 0x16a010: 0xae000224  sw          $zero, 0x224($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A014u;
        goto label_16a014;
    }
    ctx->pc = 0x16A00Cu;
    SET_GPR_U32(ctx, 31, 0x16A014u);
    ctx->pc = 0x16A010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A00Cu;
    // 0x16a010: 0xae000224  sw          $zero, 0x224($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16A00Cu, 0x16A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A014u;
label_16a014:
    // 0x16a014: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x16a014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16a018:
    // 0x16a018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a01c:
    // 0x16a01c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16a01cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16a020:
    // 0x16a020: 0x320f809  jalr        $t9
label_16a024:
    if (ctx->pc == 0x16A024u) {
        ctx->pc = 0x16A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A020u;
        // 0x16a024: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A028u;
        goto label_16a028;
    }
    ctx->pc = 0x16A020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16A028u);
        ctx->pc = 0x16A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A020u;
        // 0x16a024: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A020u, 0x16A028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A028u;
label_16a028:
    // 0x16a028: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16a028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16a02c:
    // 0x16a02c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16a02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16a030:
    // 0x16a030: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16a030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16a034:
    // 0x16a034: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16a034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16a038:
    // 0x16a038: 0x3e00008  jr          $ra
label_16a03c:
    if (ctx->pc == 0x16A03Cu) {
        ctx->pc = 0x16A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A038u;
        // 0x16a03c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A040u;
        goto label_fallthrough_0x16a038;
    }
    ctx->pc = 0x16A038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A038u;
        // 0x16a03c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16a038:
    ctx->pc = 0x16A040u;
}
