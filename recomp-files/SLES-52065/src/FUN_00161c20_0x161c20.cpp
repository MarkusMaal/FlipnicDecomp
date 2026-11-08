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

// Function: FUN_00161c20
// Address: 0x161c20 - 0x161e6c
void FUN_00161c20_0x161c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00161c20_0x161c20");
#endif

    switch (ctx->pc) {
        case 0x161c74u: goto label_161c74;
        case 0x161ca4u: goto label_161ca4;
        case 0x161cb8u: goto label_161cb8;
        case 0x161ce4u: goto label_161ce4;
        case 0x161cf4u: goto label_161cf4;
        case 0x161da0u: goto label_161da0;
        case 0x161e44u: goto label_161e44;
        default: break;
    }

    ctx->pc = 0x161c20u;

    // 0x161c20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x161c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x161c24: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x161c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x161c28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x161c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x161c2c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x161c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x161c30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x161c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x161c34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x161c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x161c38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x161c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x161c3c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x161c3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x161c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x161c44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x161c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x161c48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x161c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161c50: 0x848301f4  lh          $v1, 0x1F4($a0)
    ctx->pc = 0x161c50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 500)));
    // 0x161c54: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x161c54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x161c58: 0x0  nop
    ctx->pc = 0x161c58u;
    // NOP
    // 0x161c5c: 0x0  nop
    ctx->pc = 0x161c5cu;
    // NOP
    // 0x161c60: 0x1010  mfhi        $v0
    ctx->pc = 0x161c60u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x161c64: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x161c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x161c68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161c6c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x161C6Cu;
    SET_GPR_U32(ctx, 31, 0x161C74u);
    ctx->pc = 0x161C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161C6Cu;
    // 0x161c70: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x161C6Cu, 0x161C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161C74u;
label_161c74:
    // 0x161c74: 0xaea20228  sw          $v0, 0x228($s5)
    ctx->pc = 0x161c74u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 552), GPR_U32(ctx, 2));
    // 0x161c78: 0x86a301f4  lh          $v1, 0x1F4($s5)
    ctx->pc = 0x161c78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 500)));
    // 0x161c7c: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x161c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x161c80: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x161c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x161c84: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x161c84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x161c88: 0x0  nop
    ctx->pc = 0x161c88u;
    // NOP
    // 0x161c8c: 0x0  nop
    ctx->pc = 0x161c8cu;
    // NOP
    // 0x161c90: 0x1010  mfhi        $v0
    ctx->pc = 0x161c90u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x161c94: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x161c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x161c98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161c9c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x161C9Cu;
    SET_GPR_U32(ctx, 31, 0x161CA4u);
    ctx->pc = 0x161CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161C9Cu;
    // 0x161ca0: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x161C9Cu, 0x161CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161CA4u;
label_161ca4:
    // 0x161ca4: 0x8eb001f0  lw          $s0, 0x1F0($s5)
    ctx->pc = 0x161ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 496)));
    // 0x161ca8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x161ca8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161cac: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x161cacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161cb0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x161CB0u;
    {
        const bool branch_taken_0x161cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CB0u;
        // 0x161cb4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161cb0) {
            ctx->pc = 0x161D58u;
            goto label_161d58;
        }
    }
    ctx->pc = 0x161CB8u;
label_161cb8:
    // 0x161cb8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x161cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x161cbc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x161cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x161cc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x161cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161cc4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x161cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x161cc8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x161cc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ccc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x161cccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x161cd0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x161cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161cd4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x161cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x161cd8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x161cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x161cdc: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x161CDCu;
    SET_GPR_U32(ctx, 31, 0x161CE4u);
    ctx->pc = 0x161CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161CDCu;
    // 0x161ce0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x161CDCu, 0x161CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161CE4u;
label_161ce4:
    // 0x161ce4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x161ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ce8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x161ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161cec: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x161CECu;
    SET_GPR_U32(ctx, 31, 0x161CF4u);
    ctx->pc = 0x161CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161CECu;
    // 0x161cf0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x161CECu, 0x161CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161CF4u;
label_161cf4:
    // 0x161cf4: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x161cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x161cf8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x161cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x161cfc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x161cfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161d00: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x161d00u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161d04: 0xda870000  lqc2        $vf7, 0x0($s4)
    ctx->pc = 0x161d04u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x161d08: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x161d08u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x161d0c: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x161d0cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x161d10: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x161d10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x161d14: 0x4bc639e8  vadd.xyz    $vf7, $vf7, $vf6
    ctx->pc = 0x161d14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x161d18: 0xfa870000  sqc2        $vf7, 0x0($s4)
    ctx->pc = 0x161d18u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x161d1c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x161d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x161d20: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x161d20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x161d24: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x161d24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x161d28: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x161d28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x161d2c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x161d2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x161d30: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x161d30u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x161d34: 0x4a0003bf  vwaitq
    ctx->pc = 0x161d34u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x161d38: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x161d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x161d3c: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x161d3cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x161d40: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x161d40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x161d44: 0x4a0003bf  vwaitq
    ctx->pc = 0x161d44u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x161d48: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x161d48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x161d4c: 0xfa860000  sqc2        $vf6, 0x0($s4)
    ctx->pc = 0x161d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x161d50: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x161d50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x161d54: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x161d54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_161d58:
    // 0x161d58: 0x86a301f4  lh          $v1, 0x1F4($s5)
    ctx->pc = 0x161d58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 500)));
    // 0x161d5c: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x161d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x161d60: 0x34445556  ori         $a0, $v0, 0x5556
    ctx->pc = 0x161d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x161d64: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x161d64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x161d68: 0x0  nop
    ctx->pc = 0x161d68u;
    // NOP
    // 0x161d6c: 0x0  nop
    ctx->pc = 0x161d6cu;
    // NOP
    // 0x161d70: 0x1010  mfhi        $v0
    ctx->pc = 0x161d70u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x161d74: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x161d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x161d78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161d7c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x161d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x161d80: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x161D80u;
    {
        const bool branch_taken_0x161d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D80u;
        // 0x161d84: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d80) {
            ctx->pc = 0x161CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161cb8;
        }
    }
    ctx->pc = 0x161D88u;
    // 0x161d88: 0x8ea50228  lw          $a1, 0x228($s5)
    ctx->pc = 0x161d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 552)));
    // 0x161d8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x161d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x161d90: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x161d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x161d94: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x161d94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x161D98u;
    {
        const bool branch_taken_0x161d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D98u;
        // 0x161d9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d98) {
            ctx->pc = 0x161DD8u;
            goto label_161dd8;
        }
    }
    ctx->pc = 0x161DA0u;
label_161da0:
    // 0x161da0: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x161da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161da4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x161da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x161da8: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x161da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161dac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x161dacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x161db0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x161db0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x161db4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x161db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x161db8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x161db8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x161dbc: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x161dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161dc0: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x161dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161dc4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x161dc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x161dc8: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x161dc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x161dcc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x161dccu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x161dd0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x161dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x161dd4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x161dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_161dd8:
    // 0x161dd8: 0x86a201f4  lh          $v0, 0x1F4($s5)
    ctx->pc = 0x161dd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 500)));
    // 0x161ddc: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x161ddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x161de0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x161de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x161de4: 0x0  nop
    ctx->pc = 0x161de4u;
    // NOP
    // 0x161de8: 0x1010  mfhi        $v0
    ctx->pc = 0x161de8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x161dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161df0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x161df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x161df4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x161df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x161df8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x161DF8u;
    {
        const bool branch_taken_0x161df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161df8) {
            ctx->pc = 0x161DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161da0;
        }
    }
    ctx->pc = 0x161E00u;
    // 0x161e00: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x161e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161e04: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x161e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x161e08: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x161e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161e0c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x161e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e10: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x161e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x161e14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x161e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x161e18: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x161e18u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x161e1c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x161e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x161e20: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x161e20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x161e24: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x161e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161e28: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x161e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161e2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x161e2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x161e30: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x161e30u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x161e34: 0x0  nop
    ctx->pc = 0x161e34u;
    // NOP
    // 0x161e38: 0x0  nop
    ctx->pc = 0x161e38u;
    // NOP
    // 0x161e3c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x161E3Cu;
    SET_GPR_U32(ctx, 31, 0x161E44u);
    ctx->pc = 0x161E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161E3Cu;
    // 0x161e40: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x161E3Cu, 0x161E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161E44u;
label_161e44:
    // 0x161e44: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x161e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x161e48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x161e48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x161e4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x161e4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161e50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x161e50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161e54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x161e54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161e58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x161e58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161e5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161e60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161e64: 0x3e00008  jr          $ra
    ctx->pc = 0x161E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E64u;
        // 0x161e68: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161E6Cu;
}
