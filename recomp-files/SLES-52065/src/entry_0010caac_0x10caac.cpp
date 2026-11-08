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

// Function: entry_0010caac
// Address: 0x10caac - 0x10cb60
void entry_0010caac_0x10caac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010caac_0x10caac");
#endif

    switch (ctx->pc) {
        case 0x10cab4u: goto label_10cab4;
        case 0x10cac0u: goto label_10cac0;
        case 0x10cad8u: goto label_10cad8;
        case 0x10caecu: goto label_10caec;
        default: break;
    }

    ctx->pc = 0x10caacu;

label_10caac:
    // 0x10caac: 0xc05fe4c  jal         func_17F930
label_10cab0:
    if (ctx->pc == 0x10CAB0u) {
        ctx->pc = 0x10CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CAACu;
        // 0x10cab0: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CAB4u;
        goto label_10cab4;
    }
    ctx->pc = 0x10CAACu;
    SET_GPR_U32(ctx, 31, 0x10CAB4u);
    ctx->pc = 0x10CAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAACu;
    // 0x10cab0: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x10CAACu, 0x10CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAB4u;
label_10cab4:
    // 0x10cab4: 0x86250030  lh          $a1, 0x30($s1)
    ctx->pc = 0x10cab4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_10cab8:
    // 0x10cab8: 0xc05fec0  jal         func_17FB00
label_10cabc:
    if (ctx->pc == 0x10CABCu) {
        ctx->pc = 0x10CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CAB8u;
        // 0x10cabc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CAC0u;
        goto label_10cac0;
    }
    ctx->pc = 0x10CAB8u;
    SET_GPR_U32(ctx, 31, 0x10CAC0u);
    ctx->pc = 0x10CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAB8u;
    // 0x10cabc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB00u, 0x10CAB8u, 0x10CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAC0u;
label_10cac0:
    // 0x10cac0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10cac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10cac4:
    // 0x10cac4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10cac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10cac8:
    // 0x10cac8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10cac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10cacc:
    // 0x10cacc: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x10caccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_10cad0:
    // 0x10cad0: 0x320f809  jalr        $t9
label_10cad4:
    if (ctx->pc == 0x10CAD4u) {
        ctx->pc = 0x10CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CAD0u;
        // 0x10cad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CAD8u;
        goto label_10cad8;
    }
    ctx->pc = 0x10CAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10CAD8u);
        ctx->pc = 0x10CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CAD0u;
        // 0x10cad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CAD0u, 0x10CAD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10CAD8u;
label_10cad8:
    // 0x10cad8: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10cad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10cadc:
    // 0x10cadc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10cae0:
    // 0x10cae0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10cae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10cae4:
    // 0x10cae4: 0x320f809  jalr        $t9
label_10cae8:
    if (ctx->pc == 0x10CAE8u) {
        ctx->pc = 0x10CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CAE4u;
        // 0x10cae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CAECu;
        goto label_10caec;
    }
    ctx->pc = 0x10CAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10CAECu);
        ctx->pc = 0x10CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CAE4u;
        // 0x10cae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CAE4u, 0x10CAECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10CAECu;
label_10caec:
    // 0x10caec: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x10caecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_10caf0:
    // 0x10caf0: 0xae022300  sw          $v0, 0x2300($s0)
    ctx->pc = 0x10caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8960), GPR_U32(ctx, 2));
label_10caf4:
    // 0x10caf4: 0x86220020  lh          $v0, 0x20($s1)
    ctx->pc = 0x10caf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
label_10caf8:
    // 0x10caf8: 0xa60201f4  sh          $v0, 0x1F4($s0)
    ctx->pc = 0x10caf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 500), (uint16_t)GPR_U32(ctx, 2));
label_10cafc:
    // 0x10cafc: 0x860301f4  lh          $v1, 0x1F4($s0)
    ctx->pc = 0x10cafcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
label_10cb00:
    // 0x10cb00: 0x8e022300  lw          $v0, 0x2300($s0)
    ctx->pc = 0x10cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8960)));
label_10cb04:
    // 0x10cb04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10cb08:
    // 0x10cb08: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10cb0c:
    // 0x10cb0c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x10cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10cb10:
    // 0x10cb10: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10cb10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_10cb14:
    // 0x10cb14: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x10cb14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_10cb18:
    // 0x10cb18: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x10cb18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_10cb1c:
    // 0x10cb1c: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x10cb1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10cb20:
    // 0x10cb20: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x10cb20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10cb24:
    // 0x10cb24: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x10cb24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10cb28:
    // 0x10cb28: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x10cb28u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_10cb2c:
    // 0x10cb2c: 0x4a0003bf  vwaitq
    ctx->pc = 0x10cb2cu;
    // VWAITQ (Q already resolved in this runtime)
label_10cb30:
    // 0x10cb30: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x10cb30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10cb34:
    // 0x10cb34: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10cb34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_10cb38:
    // 0x10cb38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10cb38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10cb3c:
    // 0x10cb3c: 0xae022304  sw          $v0, 0x2304($s0)
    ctx->pc = 0x10cb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8964), GPR_U32(ctx, 2));
label_10cb40:
    // 0x10cb40: 0xa200007a  sb          $zero, 0x7A($s0)
    ctx->pc = 0x10cb40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 0));
label_10cb44:
    // 0x10cb44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10cb44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10cb48:
    // 0x10cb48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10cb4c:
    // 0x10cb4c: 0xa2020078  sb          $v0, 0x78($s0)
    ctx->pc = 0x10cb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 2));
label_10cb50:
    // 0x10cb50: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x10cb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
label_10cb54:
    // 0x10cb54: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x10cb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
label_10cb58:
    // 0x10cb58: 0x10000009  b           . + 4 + (0x9 << 2)
label_10cb5c:
    if (ctx->pc == 0x10CB5Cu) {
        ctx->pc = 0x10CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB58u;
        // 0x10cb5c: 0xae000268  sw          $zero, 0x268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CB60u;
        goto label_fallthrough_0x10cb58;
    }
    ctx->pc = 0x10CB58u;
    {
        const bool branch_taken_0x10cb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB58u;
        // 0x10cb5c: 0xae000268  sw          $zero, 0x268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb58) {
            ctx->pc = 0x10CB80u;
            return;
        }
    }
label_fallthrough_0x10cb58:
    ctx->pc = 0x10CB60u;
}
