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

// Function: entry_00173c34
// Address: 0x173c34 - 0x173cdc
void entry_00173c34_0x173c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173c34_0x173c34");
#endif

    switch (ctx->pc) {
        case 0x173cc8u: goto label_173cc8;
        default: break;
    }

    ctx->pc = 0x173c34u;

    // 0x173c34: 0x0  nop
    ctx->pc = 0x173c34u;
    // NOP
    // 0x173c38: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x173c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x173c3c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x173c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x173c40: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x173c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x173c44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x173c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x173c48: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x173c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x173c4c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x173c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x173c50: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x173c50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173c54: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x173c54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x173c58: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x173c58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x173c5c: 0x4bc1086a  vmul.xyz    $vf1, $vf1, $vf1
    ctx->pc = 0x173c5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x173c60: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x173c60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x173c64: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x173c64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x173c68: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x173c68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x173c6c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x173c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x173c70: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x173c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173c74: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x173c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x173c78: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x173c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173c7c: 0x0  nop
    ctx->pc = 0x173c7cu;
    // NOP
    // 0x173c80: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x173C80u;
    {
        const bool branch_taken_0x173c80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173c80) {
            ctx->pc = 0x173CDCu;
            return;
        }
    }
    ctx->pc = 0x173C88u;
    // 0x173c88: 0xc4640064  lwc1        $f4, 0x64($v1)
    ctx->pc = 0x173c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x173c8c: 0x0  nop
    ctx->pc = 0x173c8cu;
    // NOP
    // 0x173c90: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x173c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x173c94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173c98: 0x460300c4  c1          0x300C4
    ctx->pc = 0x173c98u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x173c9c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x173c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x173ca0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x173ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x173ca4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x173ca4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x173ca8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x173ca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x173cac: 0x0  nop
    ctx->pc = 0x173cacu;
    // NOP
    // 0x173cb0: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x173cb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x173cb4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x173cb4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x173cb8: 0x0  nop
    ctx->pc = 0x173cb8u;
    // NOP
    // 0x173cbc: 0x0  nop
    ctx->pc = 0x173cbcu;
    // NOP
    // 0x173cc0: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x173CC0u;
    SET_GPR_U32(ctx, 31, 0x173CC8u);
    ctx->pc = 0x173CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173CC0u;
    // 0x173cc4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x173CC0u, 0x173CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173CC8u;
label_173cc8:
    // 0x173cc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173ccc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173cd0: 0x0  nop
    ctx->pc = 0x173cd0u;
    // NOP
    // 0x173cd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173cd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173cd8: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x173cd8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->pc = 0x173cdcu;
}
