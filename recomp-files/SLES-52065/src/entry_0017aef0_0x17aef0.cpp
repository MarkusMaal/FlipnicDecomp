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

// Function: entry_0017aef0
// Address: 0x17aef0 - 0x17af84
void entry_0017aef0_0x17aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017aef0_0x17aef0");
#endif

    switch (ctx->pc) {
        case 0x17af10u: goto label_17af10;
        case 0x17af54u: goto label_17af54;
        case 0x17af78u: goto label_17af78;
        default: break;
    }

    ctx->pc = 0x17aef0u;

    // 0x17aef0: 0x16030024  bne         $s0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x17AEF0u;
    {
        const bool branch_taken_0x17aef0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x17aef0) {
            ctx->pc = 0x17AF84u;
            return;
        }
    }
    ctx->pc = 0x17AEF8u;
    // 0x17aef8: 0x86230408  lh          $v1, 0x408($s1)
    ctx->pc = 0x17aef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1032)));
    // 0x17aefc: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x17af00: 0x8e250404  lw          $a1, 0x404($s1)
    ctx->pc = 0x17af00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
    // 0x17af04: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17af04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17af08: 0xc046744  jal         func_119D10
    ctx->pc = 0x17AF08u;
    SET_GPR_U32(ctx, 31, 0x17AF10u);
    ctx->pc = 0x17AF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AF08u;
    // 0x17af0c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x17AF08u, 0x17AF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AF10u;
label_17af10:
    // 0x17af10: 0x26220300  addiu       $v0, $s1, 0x300
    ctx->pc = 0x17af10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x17af14: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x17af14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17af18: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17af18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17af1c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x17af1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17af20: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x17af20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17af24: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x17af24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17af28: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17af28u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x17af2c: 0x4a0003bf  vwaitq
    ctx->pc = 0x17af2cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17af30: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x17af30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17af34: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x17af34u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x17af38: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x17af38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17af3c: 0x4a0003bf  vwaitq
    ctx->pc = 0x17af3cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17af40: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x17af40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17af44: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x17af44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17af48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17af48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17af4c: 0xc054924  jal         func_152490
    ctx->pc = 0x17AF4Cu;
    SET_GPR_U32(ctx, 31, 0x17AF54u);
    ctx->pc = 0x17AF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AF4Cu;
    // 0x17af50: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152490u, 0x17AF4Cu, 0x17AF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AF54u;
label_17af54:
    // 0x17af54: 0x7a260000  lq          $a2, 0x0($s1)
    ctx->pc = 0x17af54u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17af58: 0x7e260050  sq          $a2, 0x50($s1)
    ctx->pc = 0x17af58u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 6));
    // 0x17af5c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x17af5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x17af60: 0x8623040a  lh          $v1, 0x40A($s1)
    ctx->pc = 0x17af60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1034)));
    // 0x17af64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17af64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af68: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x17af6c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17af6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17af70: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x17AF70u;
    SET_GPR_U32(ctx, 31, 0x17AF78u);
    ctx->pc = 0x17AF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AF70u;
    // 0x17af74: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x17AF70u, 0x17AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AF78u;
label_17af78:
    // 0x17af78: 0xae2003d0  sw          $zero, 0x3D0($s1)
    ctx->pc = 0x17af78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 976), GPR_U32(ctx, 0));
    // 0x17af7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17af7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17af80: 0xae230404  sw          $v1, 0x404($s1)
    ctx->pc = 0x17af80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1028), GPR_U32(ctx, 3));
    ctx->pc = 0x17af84u;
}
