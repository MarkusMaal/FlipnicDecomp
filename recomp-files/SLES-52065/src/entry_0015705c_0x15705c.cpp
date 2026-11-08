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

// Function: entry_0015705c
// Address: 0x15705c - 0x1570f8
void entry_0015705c_0x15705c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015705c_0x15705c");
#endif

    switch (ctx->pc) {
        case 0x1570d8u: goto label_1570d8;
        default: break;
    }

    ctx->pc = 0x15705cu;

    // 0x15705c: 0xc6230334  lwc1        $f3, 0x334($s1)
    ctx->pc = 0x15705cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x157060: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x157060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x157064: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x157064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x157068: 0x26250300  addiu       $a1, $s1, 0x300
    ctx->pc = 0x157068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x15706c: 0xc62002e8  lwc1        $f0, 0x2E8($s1)
    ctx->pc = 0x15706cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157070: 0x26220290  addiu       $v0, $s1, 0x290
    ctx->pc = 0x157070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x157074: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x157074u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x157078: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x157078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15707c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x15707cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x157080: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x157080u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x157084: 0xe6200334  swc1        $f0, 0x334($s1)
    ctx->pc = 0x157084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 820), bits); }
    // 0x157088: 0xc62002a0  lwc1        $f0, 0x2A0($s1)
    ctx->pc = 0x157088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15708c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15708cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157090: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x157090u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157094: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x157094u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x157098: 0x0  nop
    ctx->pc = 0x157098u;
    // NOP
    // 0x15709c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x15709cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1570a0: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x1570a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1570a4: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x1570a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1570a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1570a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1570ac: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x1570acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1570b0: 0xc6200330  lwc1        $f0, 0x330($s1)
    ctx->pc = 0x1570b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1570b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1570b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1570b8: 0xe6200330  swc1        $f0, 0x330($s1)
    ctx->pc = 0x1570b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
    // 0x1570bc: 0xc6210334  lwc1        $f1, 0x334($s1)
    ctx->pc = 0x1570bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1570c0: 0xc62002a0  lwc1        $f0, 0x2A0($s1)
    ctx->pc = 0x1570c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1570c4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1570c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1570c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1570c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1570cc: 0xe62002f0  swc1        $f0, 0x2F0($s1)
    ctx->pc = 0x1570ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 752), bits); }
    // 0x1570d0: 0xc055cf4  jal         func_1573D0
    ctx->pc = 0x1570D0u;
    SET_GPR_U32(ctx, 31, 0x1570D8u);
    ctx->pc = 0x1570D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1570D0u;
    // 0x1570d4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1573D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1573D0u, 0x1570D0u, 0x1570D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1570D8u;
label_1570d8:
    // 0x1570d8: 0xe62002f0  swc1        $f0, 0x2F0($s1)
    ctx->pc = 0x1570d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 752), bits); }
    // 0x1570dc: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x1570dcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1570e0: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x1570e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
    // 0x1570e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1570e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1570e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1570e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1570ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1570ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1570f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1570F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1570F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570F0u;
        // 0x1570f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1570F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1570F8u;
}
