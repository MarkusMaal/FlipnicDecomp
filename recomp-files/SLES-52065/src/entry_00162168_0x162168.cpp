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

// Function: entry_00162168
// Address: 0x162168 - 0x1621e4
void entry_00162168_0x162168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162168_0x162168");
#endif

    switch (ctx->pc) {
        case 0x1621b4u: goto label_1621b4;
        default: break;
    }

    ctx->pc = 0x162168u;

    // 0x162168: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x162168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16216c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16216cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x162170: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x162170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x162174: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162178: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x162178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16217c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16217cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162180: 0x0  nop
    ctx->pc = 0x162180u;
    // NOP
    // 0x162184: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x162184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x162188: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x162188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x16218c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x16218cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x162190: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x162190u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x162194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162198: 0x0  nop
    ctx->pc = 0x162198u;
    // NOP
    // 0x16219c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16219cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1621a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1621a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1621a4: 0x0  nop
    ctx->pc = 0x1621a4u;
    // NOP
    // 0x1621a8: 0x0  nop
    ctx->pc = 0x1621a8u;
    // NOP
    // 0x1621ac: 0xc055cb4  jal         func_1572D0
    ctx->pc = 0x1621ACu;
    SET_GPR_U32(ctx, 31, 0x1621B4u);
    ctx->pc = 0x1621B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1621ACu;
    // 0x1621b0: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1572D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1572D0u, 0x1621ACu, 0x1621B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1621B4u;
label_1621b4:
    // 0x1621b4: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1621b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1621b8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1621b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1621bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1621bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1621c0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1621c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1621c4: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1621c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1621c8: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1621c8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1621cc: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1621ccu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1621d0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1621d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1621d4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1621d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1621d8: 0x4be8324a  vmaddz.xyzw $vf9, $vf6, $vf8z
    ctx->pc = 0x1621d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1621dc: 0xf8490000  sqc2        $vf9, 0x0($v0)
    ctx->pc = 0x1621dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1621e0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1621e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x1621e4u;
}
