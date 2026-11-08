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

// Function: entry_00179f08
// Address: 0x179f08 - 0x179f90
void entry_00179f08_0x179f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179f08_0x179f08");
#endif

    switch (ctx->pc) {
        case 0x179f60u: goto label_179f60;
        default: break;
    }

    ctx->pc = 0x179f08u;

    // 0x179f08: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x179f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x179f0c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x179f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x179f10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x179f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x179f14: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x179f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x179f18: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x179f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x179f1c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x179f1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179f20: 0x4bc1086a  vmul.xyz    $vf1, $vf1, $vf1
    ctx->pc = 0x179f20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179f24: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x179f24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179f28: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x179f28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179f2c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x179f2cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179f30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x179f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x179f34: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x179f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x179f38: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x179f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x179f3c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x179f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x179f40: 0xc6405ff8  lwc1        $f0, 0x5FF8($s2)
    ctx->pc = 0x179f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179f44: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x179f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x179f48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x179f48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179f4c: 0x0  nop
    ctx->pc = 0x179f4cu;
    // NOP
    // 0x179f50: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x179F50u;
    {
        const bool branch_taken_0x179f50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x179F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F50u;
        // 0x179f54: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f50) {
            ctx->pc = 0x179F90u;
            return;
        }
    }
    ctx->pc = 0x179F58u;
    // 0x179f58: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x179F58u;
    SET_GPR_U32(ctx, 31, 0x179F60u);
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x179F58u, 0x179F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179F60u;
label_179f60:
    // 0x179f60: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x179f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x179f64: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x179f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x179f68: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x179f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179f6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x179f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f70: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x179f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179f74: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x179f74u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x179f78: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x179f78u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x179f7c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x179f7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x179f80: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x179f80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x179f84: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x179f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x179f88: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x179F88u;
    SET_GPR_U32(ctx, 31, 0x179F90u);
    ctx->pc = 0x179F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179F88u;
    // 0x179f8c: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x179F88u, 0x179F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179F90u;
}
