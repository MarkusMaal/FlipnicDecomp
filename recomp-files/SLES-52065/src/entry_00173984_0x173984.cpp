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

// Function: entry_00173984
// Address: 0x173984 - 0x1739fc
void entry_00173984_0x173984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173984_0x173984");
#endif

    switch (ctx->pc) {
        case 0x1739a4u: goto label_1739a4;
        default: break;
    }

    ctx->pc = 0x173984u;

    // 0x173984: 0x0  nop
    ctx->pc = 0x173984u;
    // NOP
    // 0x173988: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x173988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17398c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17398cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x173990: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x173990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x173994: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x173994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x173998: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x173998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17399c: 0xc05c550  jal         func_171540
    ctx->pc = 0x17399Cu;
    SET_GPR_U32(ctx, 31, 0x1739A4u);
    ctx->pc = 0x1739A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17399Cu;
    // 0x1739a0: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x17399Cu, 0x1739A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1739A4u;
label_1739a4:
    // 0x1739a4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1739a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1739a8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1739a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1739ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1739acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1739b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1739b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1739b4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1739b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1739b8: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x1739b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1739bc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1739bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1739c0: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1739c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1739c4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1739c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1739c8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1739c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1739cc: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1739ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1739d0: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1739d0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1739d4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1739d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1739d8: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1739d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1739dc: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1739dcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1739e0: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1739e0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1739e4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1739e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1739e8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1739e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1739ec: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1739ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1739f0: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x1739f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1739f4: 0xf8880000  sqc2        $vf8, 0x0($a0)
    ctx->pc = 0x1739f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1739f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1739f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1739fcu;
}
