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

// Function: FUN_00156cf0
// Address: 0x156cf0 - 0x156e04
void FUN_00156cf0_0x156cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00156cf0_0x156cf0");
#endif

    switch (ctx->pc) {
        case 0x156de4u: goto label_156de4;
        default: break;
    }

    ctx->pc = 0x156cf0u;

    // 0x156cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156cf4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x156cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156cf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x156cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x156cfc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x156cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156d00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x156d04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x156d04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x156d0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x156d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156d10: 0xc4830334  lwc1        $f3, 0x334($a0)
    ctx->pc = 0x156d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x156d14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x156d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156d18: 0xc7848020  lwc1        $f4, -0x7FE0($gp)
    ctx->pc = 0x156d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x156d1c: 0xc48102f0  lwc1        $f1, 0x2F0($a0)
    ctx->pc = 0x156d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156d20: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x156d20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x156d24: 0xac800280  sw          $zero, 0x280($a0)
    ctx->pc = 0x156d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 0));
    // 0x156d28: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x156d28u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x156d2c: 0x46046b42  mul.s       $f13, $f13, $f4
    ctx->pc = 0x156d2cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[4]);
    // 0x156d30: 0x0  nop
    ctx->pc = 0x156d30u;
    // NOP
    // 0x156d34: 0x0  nop
    ctx->pc = 0x156d34u;
    // NOP
    // 0x156d38: 0x460d0032  c.eq.s      $f0, $f13
    ctx->pc = 0x156d38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156d3c: 0x0  nop
    ctx->pc = 0x156d3cu;
    // NOP
    // 0x156d40: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x156D40u;
    {
        const bool branch_taken_0x156d40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x156D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D40u;
        // 0x156d44: 0x460c0802  mul.s       $f0, $f1, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d40) {
            ctx->pc = 0x156D54u;
            goto label_156d54;
        }
    }
    ctx->pc = 0x156D48u;
    // 0x156d48: 0x460c0802  mul.s       $f0, $f1, $f12
    ctx->pc = 0x156d48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x156d4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x156D4Cu;
    {
        const bool branch_taken_0x156d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D4Cu;
        // 0x156d50: 0xe62002a0  swc1        $f0, 0x2A0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d4c) {
            ctx->pc = 0x156D68u;
            goto label_156d68;
        }
    }
    ctx->pc = 0x156D54u;
label_156d54:
    // 0x156d54: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x156d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x156d58: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x156D58u;
    {
        const bool branch_taken_0x156d58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x156D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D58u;
        // 0x156d5c: 0xe62002a0  swc1        $f0, 0x2A0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d58) {
            ctx->pc = 0x156D68u;
            goto label_156d68;
        }
    }
    ctx->pc = 0x156D60u;
    // 0x156d60: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x156d60u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x156d64: 0x7e260290  sq          $a2, 0x290($s1)
    ctx->pc = 0x156d64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 656), GPR_VEC(ctx, 6));
label_156d68:
    // 0x156d68: 0xc6230334  lwc1        $f3, 0x334($s1)
    ctx->pc = 0x156d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x156d6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x156d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156d70: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x156d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156d74: 0x26250300  addiu       $a1, $s1, 0x300
    ctx->pc = 0x156d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x156d78: 0xc62002e8  lwc1        $f0, 0x2E8($s1)
    ctx->pc = 0x156d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156d7c: 0x26220290  addiu       $v0, $s1, 0x290
    ctx->pc = 0x156d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x156d80: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x156d80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x156d84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x156d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156d88: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x156d88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x156d8c: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x156d8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x156d90: 0xe6200334  swc1        $f0, 0x334($s1)
    ctx->pc = 0x156d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 820), bits); }
    // 0x156d94: 0xc62002a0  lwc1        $f0, 0x2A0($s1)
    ctx->pc = 0x156d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156d98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x156d98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156d9c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x156d9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156da0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x156da0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x156da4: 0x0  nop
    ctx->pc = 0x156da4u;
    // NOP
    // 0x156da8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x156da8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x156dac: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x156dacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156db0: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x156db0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x156db4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156db8: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x156db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156dbc: 0xc6200330  lwc1        $f0, 0x330($s1)
    ctx->pc = 0x156dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156dc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156dc4: 0xe6200330  swc1        $f0, 0x330($s1)
    ctx->pc = 0x156dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
    // 0x156dc8: 0xc6210334  lwc1        $f1, 0x334($s1)
    ctx->pc = 0x156dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156dcc: 0xc62002a0  lwc1        $f0, 0x2A0($s1)
    ctx->pc = 0x156dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156dd0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x156dd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x156dd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x156dd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156dd8: 0xe62002f0  swc1        $f0, 0x2F0($s1)
    ctx->pc = 0x156dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 752), bits); }
    // 0x156ddc: 0xc055cf4  jal         func_1573D0
    ctx->pc = 0x156DDCu;
    SET_GPR_U32(ctx, 31, 0x156DE4u);
    ctx->pc = 0x156DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156DDCu;
    // 0x156de0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1573D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1573D0u, 0x156DDCu, 0x156DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DE4u;
label_156de4:
    // 0x156de4: 0xe62002f0  swc1        $f0, 0x2F0($s1)
    ctx->pc = 0x156de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 752), bits); }
    // 0x156de8: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x156de8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x156dec: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x156decu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
    // 0x156df0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x156df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156df4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x156df4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156df8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x156DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156DFCu;
        // 0x156e00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156E04u;
}
