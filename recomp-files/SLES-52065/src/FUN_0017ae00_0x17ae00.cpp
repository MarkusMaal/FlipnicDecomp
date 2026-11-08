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

// Function: FUN_0017ae00
// Address: 0x17ae00 - 0x17af98
void FUN_0017ae00_0x17ae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017ae00_0x17ae00");
#endif

    switch (ctx->pc) {
        case 0x17ae3cu: goto label_17ae3c;
        case 0x17ae94u: goto label_17ae94;
        case 0x17aebcu: goto label_17aebc;
        case 0x17aee0u: goto label_17aee0;
        case 0x17af10u: goto label_17af10;
        case 0x17af54u: goto label_17af54;
        case 0x17af78u: goto label_17af78;
        default: break;
    }

    ctx->pc = 0x17ae00u;

    // 0x17ae00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17ae00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17ae04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17ae04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ae08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17ae08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17ae0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ae0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ae10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ae10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ae14: 0x8c9003d0  lw          $s0, 0x3D0($a0)
    ctx->pc = 0x17ae14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 976)));
    // 0x17ae18: 0x1603000b  bne         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x17AE18u;
    {
        const bool branch_taken_0x17ae18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x17AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE18u;
        // 0x17ae1c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae18) {
            ctx->pc = 0x17AE48u;
            goto label_17ae48;
        }
    }
    ctx->pc = 0x17AE20u;
    // 0x17ae20: 0x86230408  lh          $v1, 0x408($s1)
    ctx->pc = 0x17ae20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1032)));
    // 0x17ae24: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17ae24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17ae28: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x17ae2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17ae2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ae30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17ae30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17ae34: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x17AE34u;
    SET_GPR_U32(ctx, 31, 0x17AE3Cu);
    ctx->pc = 0x17AE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE34u;
    // 0x17ae38: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x17AE34u, 0x17AE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AE3Cu;
label_17ae3c:
    // 0x17ae3c: 0xae220404  sw          $v0, 0x404($s1)
    ctx->pc = 0x17ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1028), GPR_U32(ctx, 2));
    // 0x17ae40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ae44: 0xae2303d0  sw          $v1, 0x3D0($s1)
    ctx->pc = 0x17ae44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 976), GPR_U32(ctx, 3));
label_17ae48:
    // 0x17ae48: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x17AE48u;
    {
        const bool branch_taken_0x17ae48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE48u;
        // 0x17ae4c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae48) {
            ctx->pc = 0x17AEC0u;
            goto label_17aec0;
        }
    }
    ctx->pc = 0x17AE50u;
    // 0x17ae50: 0x26220300  addiu       $v0, $s1, 0x300
    ctx->pc = 0x17ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x17ae54: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17ae58: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17ae58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ae5c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x17ae5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17ae60: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x17ae60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17ae64: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x17ae64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17ae68: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17ae68u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x17ae6c: 0x4a0003bf  vwaitq
    ctx->pc = 0x17ae6cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17ae70: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x17ae70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17ae74: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x17ae74u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x17ae78: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x17ae78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17ae7c: 0x4a0003bf  vwaitq
    ctx->pc = 0x17ae7cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17ae80: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x17ae80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17ae84: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x17ae84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17ae88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17ae88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17ae8c: 0xc054924  jal         func_152490
    ctx->pc = 0x17AE8Cu;
    SET_GPR_U32(ctx, 31, 0x17AE94u);
    ctx->pc = 0x17AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE8Cu;
    // 0x17ae90: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152490u, 0x17AE8Cu, 0x17AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AE94u;
label_17ae94:
    // 0x17ae94: 0x7a260000  lq          $a2, 0x0($s1)
    ctx->pc = 0x17ae94u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17ae98: 0x7e260050  sq          $a2, 0x50($s1)
    ctx->pc = 0x17ae98u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 6));
    // 0x17ae9c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x17ae9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17aea0: 0x86230408  lh          $v1, 0x408($s1)
    ctx->pc = 0x17aea0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1032)));
    // 0x17aea4: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x17aea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x17aea8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x17aeac: 0x8e250404  lw          $a1, 0x404($s1)
    ctx->pc = 0x17aeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
    // 0x17aeb0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17aeb4: 0xc0466e4  jal         func_119B90
    ctx->pc = 0x17AEB4u;
    SET_GPR_U32(ctx, 31, 0x17AEBCu);
    ctx->pc = 0x17AEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AEB4u;
    // 0x17aeb8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B90u, 0x17AEB4u, 0x17AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AEBCu;
label_17aebc:
    // 0x17aebc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17aec0:
    // 0x17aec0: 0x1603000b  bne         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x17AEC0u;
    {
        const bool branch_taken_0x17aec0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x17AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AEC0u;
        // 0x17aec4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aec0) {
            ctx->pc = 0x17AEF0u;
            goto label_17aef0;
        }
    }
    ctx->pc = 0x17AEC8u;
    // 0x17aec8: 0x86230408  lh          $v1, 0x408($s1)
    ctx->pc = 0x17aec8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1032)));
    // 0x17aecc: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x17aed0: 0x8e250404  lw          $a1, 0x404($s1)
    ctx->pc = 0x17aed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
    // 0x17aed4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17aed8: 0xc046744  jal         func_119D10
    ctx->pc = 0x17AED8u;
    SET_GPR_U32(ctx, 31, 0x17AEE0u);
    ctx->pc = 0x17AEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AED8u;
    // 0x17aedc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x17AED8u, 0x17AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AEE0u;
label_17aee0:
    // 0x17aee0: 0xae2003d0  sw          $zero, 0x3D0($s1)
    ctx->pc = 0x17aee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 976), GPR_U32(ctx, 0));
    // 0x17aee4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17aee8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x17AEE8u;
    {
        const bool branch_taken_0x17aee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AEE8u;
        // 0x17aeec: 0xae230404  sw          $v1, 0x404($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aee8) {
            ctx->pc = 0x17AF84u;
            goto label_17af84;
        }
    }
    ctx->pc = 0x17AEF0u;
label_17aef0:
    // 0x17aef0: 0x16030024  bne         $s0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x17AEF0u;
    {
        const bool branch_taken_0x17aef0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x17aef0) {
            ctx->pc = 0x17AF84u;
            goto label_17af84;
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
label_17af84:
    // 0x17af84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17af84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17af88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17af88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17af8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17af8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17af90: 0x3e00008  jr          $ra
    ctx->pc = 0x17AF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF90u;
        // 0x17af94: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AF98u;
}
