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

// Function: FUN_0016aba0
// Address: 0x16aba0 - 0x16aee0
void FUN_0016aba0_0x16aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016aba0_0x16aba0");
#endif

    switch (ctx->pc) {
        case 0x16abd8u: goto label_16abd8;
        case 0x16ac00u: goto label_16ac00;
        case 0x16ac18u: goto label_16ac18;
        case 0x16adacu: goto label_16adac;
        case 0x16ae38u: goto label_16ae38;
        case 0x16ae60u: goto label_16ae60;
        case 0x16ae94u: goto label_16ae94;
        case 0x16aea0u: goto label_16aea0;
        case 0x16aeb4u: goto label_16aeb4;
        default: break;
    }

    ctx->pc = 0x16aba0u;

    // 0x16aba0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16aba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16aba4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16aba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x16aba8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16aba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x16abac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16abacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16abb0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16abb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16abb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16abb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16abb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16abb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16abbc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x16abbcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x16abc0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16abc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16abc4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16abc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16abc8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16abcc: 0x80530022  lb          $s3, 0x22($v0)
    ctx->pc = 0x16abccu;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x16abd0: 0xc056c4c  jal         func_15B130
    ctx->pc = 0x16ABD0u;
    SET_GPR_U32(ctx, 31, 0x16ABD8u);
    ctx->pc = 0x16ABD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ABD0u;
    // 0x16abd4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B130u, 0x16ABD0u, 0x16ABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ABD8u;
label_16abd8:
    // 0x16abd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16abd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16abdc: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x16abdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x16abe0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x16ABE0u;
    {
        const bool branch_taken_0x16abe0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16abe0) {
            ctx->pc = 0x16ABF0u;
            goto label_16abf0;
        }
    }
    ctx->pc = 0x16ABE8u;
    // 0x16abe8: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x16ABE8u;
    {
        const bool branch_taken_0x16abe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABE8u;
        // 0x16abec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16abe8) {
            ctx->pc = 0x16AEB8u;
            goto label_16aeb8;
        }
    }
    ctx->pc = 0x16ABF0u;
label_16abf0:
    // 0x16abf0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16ABF0u;
    {
        const bool branch_taken_0x16abf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABF0u;
        // 0x16abf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16abf0) {
            ctx->pc = 0x16AC08u;
            goto label_16ac08;
        }
    }
    ctx->pc = 0x16ABF8u;
    // 0x16abf8: 0xc055c40  jal         func_157100
    ctx->pc = 0x16ABF8u;
    SET_GPR_U32(ctx, 31, 0x16AC00u);
    ctx->pc = 0x16ABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ABF8u;
    // 0x16abfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16ABF8u, 0x16AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC00u;
label_16ac00:
    // 0x16ac00: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x16AC00u;
    {
        const bool branch_taken_0x16ac00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC00u;
        // 0x16ac04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac00) {
            ctx->pc = 0x16AEB8u;
            goto label_16aeb8;
        }
    }
    ctx->pc = 0x16AC08u;
label_16ac08:
    // 0x16ac08: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AC08u;
    {
        const bool branch_taken_0x16ac08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x16AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC08u;
        // 0x16ac0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac08) {
            ctx->pc = 0x16AC20u;
            goto label_16ac20;
        }
    }
    ctx->pc = 0x16AC10u;
    // 0x16ac10: 0xc055c40  jal         func_157100
    ctx->pc = 0x16AC10u;
    SET_GPR_U32(ctx, 31, 0x16AC18u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16AC10u, 0x16AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC18u;
label_16ac18:
    // 0x16ac18: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x16AC18u;
    {
        const bool branch_taken_0x16ac18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC18u;
        // 0x16ac1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac18) {
            ctx->pc = 0x16AEB8u;
            goto label_16aeb8;
        }
    }
    ctx->pc = 0x16AC20u;
label_16ac20:
    // 0x16ac20: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x16AC20u;
    {
        const bool branch_taken_0x16ac20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC20u;
        // 0x16ac24: 0x200082a  slt         $at, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac20) {
            ctx->pc = 0x16AC3Cu;
            goto label_16ac3c;
        }
    }
    ctx->pc = 0x16AC28u;
    // 0x16ac28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ac2c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AC2Cu;
    {
        const bool branch_taken_0x16ac2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x16AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC2Cu;
        // 0x16ac30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac2c) {
            ctx->pc = 0x16AC3Cu;
            goto label_16ac3c;
        }
    }
    ctx->pc = 0x16AC34u;
    // 0x16ac34: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x16AC34u;
    {
        const bool branch_taken_0x16ac34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC34u;
        // 0x16ac38: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac34) {
            ctx->pc = 0x16AEBCu;
            goto label_16aebc;
        }
    }
    ctx->pc = 0x16AC3Cu;
label_16ac3c:
    // 0x16ac3c: 0x1420009e  bnez        $at, . + 4 + (0x9E << 2)
    ctx->pc = 0x16AC3Cu;
    {
        const bool branch_taken_0x16ac3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC3Cu;
        // 0x16ac40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac3c) {
            ctx->pc = 0x16AEB8u;
            goto label_16aeb8;
        }
    }
    ctx->pc = 0x16AC44u;
    // 0x16ac44: 0x8e2802e8  lw          $t0, 0x2E8($s1)
    ctx->pc = 0x16ac44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 744)));
    // 0x16ac48: 0x26220300  addiu       $v0, $s1, 0x300
    ctx->pc = 0x16ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x16ac4c: 0xda270000  lqc2        $vf7, 0x0($s1)
    ctx->pc = 0x16ac4cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16ac50: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16ac50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ac54: 0x0  nop
    ctx->pc = 0x16ac54u;
    // NOP
    // 0x16ac58: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16ac58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16ac5c: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16ac5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ac60: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x16ac60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ac64: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x16ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16ac68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16ac68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ac6c: 0xc62102e8  lwc1        $f1, 0x2E8($s1)
    ctx->pc = 0x16ac6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ac70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16ac70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ac74: 0x0  nop
    ctx->pc = 0x16ac74u;
    // NOP
    // 0x16ac78: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16AC78u;
    {
        const bool branch_taken_0x16ac78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC78u;
        // 0x16ac7c: 0x101043  sra         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac78) {
            ctx->pc = 0x16AC84u;
            goto label_16ac84;
        }
    }
    ctx->pc = 0x16AC80u;
    // 0x16ac80: 0xe62002e8  swc1        $f0, 0x2E8($s1)
    ctx->pc = 0x16ac80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
label_16ac84:
    // 0x16ac84: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AC84u;
    {
        const bool branch_taken_0x16ac84 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x16AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC84u;
        // 0x16ac88: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac84) {
            ctx->pc = 0x16AC98u;
            goto label_16ac98;
        }
    }
    ctx->pc = 0x16AC8Cu;
    // 0x16ac8c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16ac90: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16ac90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16ac94: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_16ac98:
    // 0x16ac98: 0x26240290  addiu       $a0, $s1, 0x290
    ctx->pc = 0x16ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x16ac9c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x16ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16aca0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16aca4: 0xc4600300  lwc1        $f0, 0x300($v1)
    ctx->pc = 0x16aca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16aca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16aca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16acac: 0x26220300  addiu       $v0, $s1, 0x300
    ctx->pc = 0x16acacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x16acb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16acb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16acb4: 0xe4600300  swc1        $f0, 0x300($v1)
    ctx->pc = 0x16acb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 768), bits); }
    // 0x16acb8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16acb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16acbc: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16acbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16acc0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16acc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16acc4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16acc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16acc8: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16acc8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16accc: 0x4a0003bf  vwaitq
    ctx->pc = 0x16acccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16acd0: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16acd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16acd4: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16acd4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16acd8: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16acd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16acdc: 0x4a0003bf  vwaitq
    ctx->pc = 0x16acdcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ace0: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16ace0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ace4: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x16ace4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16ace8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x16ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x16acec: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x16acecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16acf0: 0x244216a0  addiu       $v0, $v0, 0x16A0
    ctx->pc = 0x16acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5792));
    // 0x16acf4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x16acf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16acf8: 0xc62201c0  lwc1        $f2, 0x1C0($s1)
    ctx->pc = 0x16acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16acfc: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x16acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x16ad00: 0xc6410210  lwc1        $f1, 0x210($s2)
    ctx->pc = 0x16ad00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ad04: 0x24841690  addiu       $a0, $a0, 0x1690
    ctx->pc = 0x16ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5776));
    // 0x16ad08: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x16ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ad0c: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x16ad0cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x211690u));
    // 0x16ad10: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x16ad10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x16ad14: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x16ad14u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x16ad18: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x16ad18u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x2116A0u));
    // 0x16ad1c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x16ad1cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x16ad20: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16ad20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x16ad24: 0x46000885  abs.s       $f2, $f1
    ctx->pc = 0x16ad24u;
    ctx->f[2] = FPU_ABS_S(ctx->f[1]);
    // 0x16ad28: 0x3c023fbd  lui         $v0, 0x3FBD
    ctx->pc = 0x16ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16317 << 16));
    // 0x16ad2c: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x16ad2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x16ad30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ad30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ad34: 0x0  nop
    ctx->pc = 0x16ad34u;
    // NOP
    // 0x16ad38: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x16ad38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x16ad3c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x16ad3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ad40: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x16ad40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16ad44: 0x0  nop
    ctx->pc = 0x16ad44u;
    // NOP
    // 0x16ad48: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16ad48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16ad4c: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16ad4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ad50: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x16ad50u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16ad54: 0xd8a70000  lqc2        $vf7, 0x0($a1)
    ctx->pc = 0x16ad54u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ad58: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16ad58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ad5c: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x16ad5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16ad60: 0x0  nop
    ctx->pc = 0x16ad60u;
    // NOP
    // 0x16ad64: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16ad64u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16ad68: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16ad68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ad6c: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x16ad6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ad70: 0xf8a50000  sqc2        $vf5, 0x0($a1)
    ctx->pc = 0x16ad70u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16ad74: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x16ad74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ad78: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16ad78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ad7c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16ad7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ad80: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16ad80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ad84: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16ad84u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16ad88: 0x4a0003bf  vwaitq
    ctx->pc = 0x16ad88u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ad8c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16ad8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ad90: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16ad90u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16ad94: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16ad94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ad98: 0x4a0003bf  vwaitq
    ctx->pc = 0x16ad98u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ad9c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16ad9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ada0: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x16ada0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16ada4: 0xc055c9c  jal         func_157270
    ctx->pc = 0x16ADA4u;
    SET_GPR_U32(ctx, 31, 0x16ADACu);
    ctx->pc = 0x16ADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ADA4u;
    // 0x16ada8: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157270u, 0x16ADA4u, 0x16ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ADACu;
label_16adac:
    // 0x16adac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16adacu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x16adb0: 0x0  nop
    ctx->pc = 0x16adb0u;
    // NOP
    // 0x16adb4: 0x0  nop
    ctx->pc = 0x16adb4u;
    // NOP
    // 0x16adb8: 0x0  nop
    ctx->pc = 0x16adb8u;
    // NOP
    // 0x16adbc: 0x46140504  c1          0x140504
    ctx->pc = 0x16adbcu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x16adc0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x16adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x16adc4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16adc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x16adc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16adc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16adcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16adccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16add0: 0x0  nop
    ctx->pc = 0x16add0u;
    // NOP
    // 0x16add4: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x16add4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x16add8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16add8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16addc: 0x0  nop
    ctx->pc = 0x16addcu;
    // NOP
    // 0x16ade0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16ADE0u;
    {
        const bool branch_taken_0x16ade0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADE0u;
        // 0x16ade4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ade0) {
            ctx->pc = 0x16ADECu;
            goto label_16adec;
        }
    }
    ctx->pc = 0x16ADE8u;
    // 0x16ade8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16ade8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16adec:
    // 0x16adec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16adecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16adf0: 0x0  nop
    ctx->pc = 0x16adf0u;
    // NOP
    // 0x16adf4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x16adf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16adf8: 0x0  nop
    ctx->pc = 0x16adf8u;
    // NOP
    // 0x16adfc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16ADFCu;
    {
        const bool branch_taken_0x16adfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16adfc) {
            ctx->pc = 0x16AE08u;
            goto label_16ae08;
        }
    }
    ctx->pc = 0x16AE04u;
    // 0x16ae04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16ae04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16ae08:
    // 0x16ae08: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x16ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16ae0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16ae10: 0xc476004c  lwc1        $f22, 0x4C($v1)
    ctx->pc = 0x16ae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16ae14: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16AE14u;
    {
        const bool branch_taken_0x16ae14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE14u;
        // 0x16ae18: 0xc4750054  lwc1        $f21, 0x54($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae14) {
            ctx->pc = 0x16AE54u;
            goto label_16ae54;
        }
    }
    ctx->pc = 0x16AE1Cu;
    // 0x16ae1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ae20: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AE20u;
    {
        const bool branch_taken_0x16ae20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE20u;
        // 0x16ae24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae20) {
            ctx->pc = 0x16AE30u;
            goto label_16ae30;
        }
    }
    ctx->pc = 0x16AE28u;
    // 0x16ae28: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16AE28u;
    {
        const bool branch_taken_0x16ae28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE28u;
        // 0x16ae2c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae28) {
            ctx->pc = 0x16AE64u;
            goto label_16ae64;
        }
    }
    ctx->pc = 0x16AE30u;
label_16ae30:
    // 0x16ae30: 0xc042118  jal         func_108460
    ctx->pc = 0x16AE30u;
    SET_GPR_U32(ctx, 31, 0x16AE38u);
    ctx->pc = 0x16AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE30u;
    // 0x16ae34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16AE30u, 0x16AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE38u;
label_16ae38:
    // 0x16ae38: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x16ae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ae3c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16ae40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ae40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ae44: 0x0  nop
    ctx->pc = 0x16ae44u;
    // NOP
    // 0x16ae48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16ae48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16ae4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16AE4Cu;
    {
        const bool branch_taken_0x16ae4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE4Cu;
        // 0x16ae50: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae4c) {
            ctx->pc = 0x16AE60u;
            goto label_16ae60;
        }
    }
    ctx->pc = 0x16AE54u;
label_16ae54:
    // 0x16ae54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ae54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae58: 0xc042118  jal         func_108460
    ctx->pc = 0x16AE58u;
    SET_GPR_U32(ctx, 31, 0x16AE60u);
    ctx->pc = 0x16AE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE58u;
    // 0x16ae5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16AE58u, 0x16AE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE60u;
label_16ae60:
    // 0x16ae60: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_16ae64:
    // 0x16ae64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ae64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ae68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ae6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16ae6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae70: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16ae70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x16ae74: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x16ae74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16ae78: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x16ae78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x16ae7c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16ae7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16ae80: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x16ae80u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x16ae84: 0x0  nop
    ctx->pc = 0x16ae84u;
    // NOP
    // 0x16ae88: 0x0  nop
    ctx->pc = 0x16ae88u;
    // NOP
    // 0x16ae8c: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x16AE8Cu;
    SET_GPR_U32(ctx, 31, 0x16AE94u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x16AE8Cu, 0x16AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE94u;
label_16ae94:
    // 0x16ae94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ae94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae98: 0xc0564b8  jal         func_1592E0
    ctx->pc = 0x16AE98u;
    SET_GPR_U32(ctx, 31, 0x16AEA0u);
    ctx->pc = 0x16AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE98u;
    // 0x16ae9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x16AE98u, 0x16AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AEA0u;
label_16aea0:
    // 0x16aea0: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x16aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x16aea4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16aea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x16aea8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16aea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16aeac: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x16AEACu;
    SET_GPR_U32(ctx, 31, 0x16AEB4u);
    ctx->pc = 0x16AEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AEACu;
    // 0x16aeb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x16AEACu, 0x16AEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AEB4u;
label_16aeb4:
    // 0x16aeb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16aeb8:
    // 0x16aeb8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16aeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16aebc:
    // 0x16aebc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x16aebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16aec0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16aec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16aec4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16aec8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16aec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16aecc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16aeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16aed0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16aed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16aed4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16aed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16aed8: 0x3e00008  jr          $ra
    ctx->pc = 0x16AED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AED8u;
        // 0x16aedc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AEE0u;
}
