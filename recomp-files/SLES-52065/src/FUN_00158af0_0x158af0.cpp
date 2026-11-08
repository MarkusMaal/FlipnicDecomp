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

// Function: FUN_00158af0
// Address: 0x158af0 - 0x158c04
void FUN_00158af0_0x158af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158af0_0x158af0");
#endif

    switch (ctx->pc) {
        case 0x158b20u: goto label_158b20;
        case 0x158bf8u: goto label_158bf8;
        default: break;
    }

    ctx->pc = 0x158af0u;

    // 0x158af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x158af4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x158af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158afc: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x158afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x158b00: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x158b00u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x158b04: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x158B04u;
    {
        const bool branch_taken_0x158b04 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x158B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B04u;
        // 0x158b08: 0x3c033c04  lui         $v1, 0x3C04 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15364 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b04) {
            ctx->pc = 0x158B10u;
            goto label_158b10;
        }
    }
    ctx->pc = 0x158B0Cu;
    // 0x158b0c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x158b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_158b10:
    // 0x158b10: 0x3463b5dd  ori         $v1, $v1, 0xB5DD
    ctx->pc = 0x158b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46557);
    // 0x158b14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158b18: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x158B18u;
    {
        const bool branch_taken_0x158b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B18u;
        // 0x158b1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b18) {
            ctx->pc = 0x158B84u;
            goto label_158b84;
        }
    }
    ctx->pc = 0x158B20u;
label_158b20:
    // 0x158b20: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x158b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x158b24: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x158b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x158b28: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x158b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158b2c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x158B2Cu;
    {
        const bool branch_taken_0x158b2c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x158b2c) {
            ctx->pc = 0x158B38u;
            goto label_158b38;
        }
    }
    ctx->pc = 0x158B34u;
    // 0x158b34: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x158b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_158b38:
    // 0x158b38: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x158b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x158b3c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x158b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x158b40: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x158b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x158b44: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x158b44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158b48: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x158b48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158b4c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x158b4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x158b50: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x158b50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x158b54: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x158b54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x158b58: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x158b58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x158b5c: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x158b5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x158b60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x158b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158b64: 0x0  nop
    ctx->pc = 0x158b64u;
    // NOP
    // 0x158b68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x158b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158b6c: 0x0  nop
    ctx->pc = 0x158b6cu;
    // NOP
    // 0x158b70: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x158B70u;
    {
        const bool branch_taken_0x158b70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158b70) {
            ctx->pc = 0x158B80u;
            goto label_158b80;
        }
    }
    ctx->pc = 0x158B78u;
    // 0x158b78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x158B78u;
    {
        const bool branch_taken_0x158b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B78u;
        // 0x158b7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b78) {
            ctx->pc = 0x158B98u;
            goto label_158b98;
        }
    }
    ctx->pc = 0x158B80u;
label_158b80:
    // 0x158b80: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x158b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_158b84:
    // 0x158b84: 0x0  nop
    ctx->pc = 0x158b84u;
    // NOP
    // 0x158b88: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x158b88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x158b8c: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x158B8Cu;
    {
        const bool branch_taken_0x158b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158b8c) {
            ctx->pc = 0x158B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158b20;
        }
    }
    ctx->pc = 0x158B94u;
    // 0x158b94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x158b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158b98:
    // 0x158b98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158b9c: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x158B9Cu;
    {
        const bool branch_taken_0x158b9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x158b9c) {
            ctx->pc = 0x158BACu;
            goto label_158bac;
        }
    }
    ctx->pc = 0x158BA4u;
    // 0x158ba4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x158BA4u;
    {
        const bool branch_taken_0x158ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BA4u;
        // 0x158ba8: 0xa08301f2  sb          $v1, 0x1F2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 498), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ba4) {
            ctx->pc = 0x158BF8u;
            goto label_158bf8;
        }
    }
    ctx->pc = 0x158BACu;
label_158bac:
    // 0x158bac: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x158bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x158bb0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x158bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x158bb4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x158bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x158bb8: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x158bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x158bbc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x158bbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158bc0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x158bc0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158bc4: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x158bc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x158bc8: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x158bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x158bcc: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x158bccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x158bd0: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x158bd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158bd4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x158bd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158bd8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x158bd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158bdc: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x158bdcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x158be0: 0x4a0003bf  vwaitq
    ctx->pc = 0x158be0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x158be4: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x158be4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158be8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x158be8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x158bec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x158becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x158bf0: 0xc056304  jal         func_158C10
    ctx->pc = 0x158BF0u;
    SET_GPR_U32(ctx, 31, 0x158BF8u);
    ctx->pc = 0x158BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158BF0u;
    // 0x158bf4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158C10u, 0x158BF0u, 0x158BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158BF8u;
label_158bf8:
    // 0x158bf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x158BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BFCu;
        // 0x158c00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158C04u;
}
