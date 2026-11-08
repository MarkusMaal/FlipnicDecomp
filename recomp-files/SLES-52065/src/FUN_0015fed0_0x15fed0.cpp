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

// Function: FUN_0015fed0
// Address: 0x15fed0 - 0x15ffdc
void FUN_0015fed0_0x15fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015fed0_0x15fed0");
#endif

    switch (ctx->pc) {
        case 0x15fee0u: goto label_15fee0;
        case 0x15ff54u: goto label_15ff54;
        default: break;
    }

    ctx->pc = 0x15fed0u;

    // 0x15fed0: 0x4a10016  bgez        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x15FED0u;
    {
        const bool branch_taken_0x15fed0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x15FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FED0u;
        // 0x15fed4: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fed0) {
            ctx->pc = 0x15FF2Cu;
            goto label_15ff2c;
        }
    }
    ctx->pc = 0x15FED8u;
    // 0x15fed8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15FED8u;
    {
        const bool branch_taken_0x15fed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FED8u;
        // 0x15fedc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fed8) {
            ctx->pc = 0x15FF14u;
            goto label_15ff14;
        }
    }
    ctx->pc = 0x15FEE0u;
label_15fee0:
    // 0x15fee0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x15fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15fee4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15fee8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15feec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15feecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15fef0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15fef4: 0x84630228  lh          $v1, 0x228($v1)
    ctx->pc = 0x15fef4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 552)));
    // 0x15fef8: 0x2861ffff  slti        $at, $v1, -0x1
    ctx->pc = 0x15fef8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x15fefc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15FEFCu;
    {
        const bool branch_taken_0x15fefc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fefc) {
            ctx->pc = 0x15FF0Cu;
            goto label_15ff0c;
        }
    }
    ctx->pc = 0x15FF04u;
    // 0x15ff04: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x15FF04u;
    {
        const bool branch_taken_0x15ff04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ff04) {
            ctx->pc = 0x15FFD4u;
            goto label_15ffd4;
        }
    }
    ctx->pc = 0x15FF0Cu;
label_15ff0c:
    // 0x15ff0c: 0x0  nop
    ctx->pc = 0x15ff0cu;
    // NOP
    // 0x15ff10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15ff14:
    // 0x15ff14: 0x0  nop
    ctx->pc = 0x15ff14u;
    // NOP
    // 0x15ff18: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x15ff18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15ff1c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15FF1Cu;
    {
        const bool branch_taken_0x15ff1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF1Cu;
        // 0x15ff20: 0x21900  sll         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff1c) {
            ctx->pc = 0x15FEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15fee0;
        }
    }
    ctx->pc = 0x15FF24u;
    // 0x15ff24: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x15FF24u;
    {
        const bool branch_taken_0x15ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF24u;
        // 0x15ff28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff24) {
            ctx->pc = 0x15FFD4u;
            goto label_15ffd4;
        }
    }
    ctx->pc = 0x15FF2Cu;
label_15ff2c:
    // 0x15ff2c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x15ff2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15ff30: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x15ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15ff34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ff34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15ff3c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15ff40: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15ff44: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15ff48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ff48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ff4c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x15FF4Cu;
    {
        const bool branch_taken_0x15ff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF4Cu;
        // 0x15ff50: 0x24480040  addiu       $t0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff4c) {
            ctx->pc = 0x15FFC4u;
            goto label_15ffc4;
        }
    }
    ctx->pc = 0x15FF54u;
label_15ff54:
    // 0x15ff54: 0x10e5001a  beq         $a3, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x15FF54u;
    {
        const bool branch_taken_0x15ff54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x15FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF54u;
        // 0x15ff58: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff54) {
            ctx->pc = 0x15FFC0u;
            goto label_15ffc0;
        }
    }
    ctx->pc = 0x15FF5Cu;
    // 0x15ff5c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x15ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x15ff60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15ff64: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x15ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x15ff68: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15ff6c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x15ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15ff70: 0x84620228  lh          $v0, 0x228($v1)
    ctx->pc = 0x15ff70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 552)));
    // 0x15ff74: 0x2841ffff  slti        $at, $v0, -0x1
    ctx->pc = 0x15ff74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x15ff78: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x15FF78u;
    {
        const bool branch_taken_0x15ff78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ff78) {
            ctx->pc = 0x15FFC0u;
            goto label_15ffc0;
        }
    }
    ctx->pc = 0x15FF80u;
    // 0x15ff80: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x15ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x15ff84: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15ff84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ff88: 0xd9050000  lqc2        $vf5, 0x0($t0)
    ctx->pc = 0x15ff88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15ff8c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x15ff8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15ff90: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x15ff90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15ff94: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x15ff94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15ff98: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x15ff98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15ff9c: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x15ff9cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15ffa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ffa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ffa4: 0x0  nop
    ctx->pc = 0x15ffa4u;
    // NOP
    // 0x15ffa8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15ffa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ffac: 0x0  nop
    ctx->pc = 0x15ffacu;
    // NOP
    // 0x15ffb0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x15FFB0u;
    {
        const bool branch_taken_0x15ffb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ffb0) {
            ctx->pc = 0x15FFC0u;
            goto label_15ffc0;
        }
    }
    ctx->pc = 0x15FFB8u;
    // 0x15ffb8: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x15ffb8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x15ffbc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x15ffbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15ffc0:
    // 0x15ffc0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15ffc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_15ffc4:
    // 0x15ffc4: 0x0  nop
    ctx->pc = 0x15ffc4u;
    // NOP
    // 0x15ffc8: 0x28e2000a  slti        $v0, $a3, 0xA
    ctx->pc = 0x15ffc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15ffcc: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x15FFCCu;
    {
        const bool branch_taken_0x15ffcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFCCu;
        // 0x15ffd0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ffcc) {
            ctx->pc = 0x15FF54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ff54;
        }
    }
    ctx->pc = 0x15FFD4u;
label_15ffd4:
    // 0x15ffd4: 0x3e00008  jr          $ra
    ctx->pc = 0x15FFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FFDCu;
}
