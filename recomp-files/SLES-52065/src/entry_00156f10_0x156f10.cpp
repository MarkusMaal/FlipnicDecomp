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

// Function: entry_00156f10
// Address: 0x156f10 - 0x156f98
void entry_00156f10_0x156f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156f10_0x156f10");
#endif

    switch (ctx->pc) {
        case 0x156f8cu: goto label_156f8c;
        default: break;
    }

    ctx->pc = 0x156f10u;

    // 0x156f10: 0xc6230334  lwc1        $f3, 0x334($s1)
    ctx->pc = 0x156f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x156f14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x156f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156f18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x156f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156f1c: 0x26250300  addiu       $a1, $s1, 0x300
    ctx->pc = 0x156f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x156f20: 0xc62002e8  lwc1        $f0, 0x2E8($s1)
    ctx->pc = 0x156f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156f24: 0x26220290  addiu       $v0, $s1, 0x290
    ctx->pc = 0x156f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x156f28: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x156f28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x156f2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x156f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156f30: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x156f30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x156f34: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x156f34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x156f38: 0xe6200334  swc1        $f0, 0x334($s1)
    ctx->pc = 0x156f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 820), bits); }
    // 0x156f3c: 0xc62002a0  lwc1        $f0, 0x2A0($s1)
    ctx->pc = 0x156f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156f40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x156f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156f44: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x156f44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156f48: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x156f48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x156f4c: 0x0  nop
    ctx->pc = 0x156f4cu;
    // NOP
    // 0x156f50: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x156f50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x156f54: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x156f54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156f58: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x156f58u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x156f5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f60: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x156f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156f64: 0xc6200330  lwc1        $f0, 0x330($s1)
    ctx->pc = 0x156f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156f68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156f68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156f6c: 0xe6200330  swc1        $f0, 0x330($s1)
    ctx->pc = 0x156f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
    // 0x156f70: 0xc6210334  lwc1        $f1, 0x334($s1)
    ctx->pc = 0x156f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156f74: 0xc62002a0  lwc1        $f0, 0x2A0($s1)
    ctx->pc = 0x156f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156f78: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x156f78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x156f7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x156f7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156f80: 0xe62002f0  swc1        $f0, 0x2F0($s1)
    ctx->pc = 0x156f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 752), bits); }
    // 0x156f84: 0xc055cf4  jal         func_1573D0
    ctx->pc = 0x156F84u;
    SET_GPR_U32(ctx, 31, 0x156F8Cu);
    ctx->pc = 0x156F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F84u;
    // 0x156f88: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1573D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1573D0u, 0x156F84u, 0x156F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F8Cu;
label_156f8c:
    // 0x156f8c: 0xe62002f0  swc1        $f0, 0x2F0($s1)
    ctx->pc = 0x156f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 752), bits); }
    // 0x156f90: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x156f90u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x156f94: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x156f94u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
    ctx->pc = 0x156f98u;
}
