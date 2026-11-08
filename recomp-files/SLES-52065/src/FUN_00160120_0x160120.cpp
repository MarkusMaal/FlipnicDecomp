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

// Function: FUN_00160120
// Address: 0x160120 - 0x1601f4
void FUN_00160120_0x160120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00160120_0x160120");
#endif

    switch (ctx->pc) {
        case 0x16015cu: goto label_16015c;
        default: break;
    }

    ctx->pc = 0x160120u;

    // 0x160120: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x160120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x160124: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x160124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x160128: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x160128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x16012c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16012cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160134: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x160134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x160138: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x160138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16013c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x16013cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x160140: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x160140u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x160144: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x160144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x160148: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x160148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16014c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16014cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x160150: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x160150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x160154: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x160154u;
    {
        const bool branch_taken_0x160154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160154u;
        // 0x160158: 0x244a0040  addiu       $t2, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160154) {
            ctx->pc = 0x1601DCu;
            goto label_1601dc;
        }
    }
    ctx->pc = 0x16015Cu;
label_16015c:
    // 0x16015c: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x16015cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x160160: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x160160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x160164: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x160164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x160168: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x160168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16016c: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x16016cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x160170: 0x90e20234  lbu         $v0, 0x234($a3)
    ctx->pc = 0x160170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 564)));
    // 0x160174: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x160174u;
    {
        const bool branch_taken_0x160174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160174) {
            ctx->pc = 0x1601D8u;
            goto label_1601d8;
        }
    }
    ctx->pc = 0x16017Cu;
    // 0x16017c: 0x11250016  beq         $t1, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x16017Cu;
    {
        const bool branch_taken_0x16017c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        if (branch_taken_0x16017c) {
            ctx->pc = 0x1601D8u;
            goto label_1601d8;
        }
    }
    ctx->pc = 0x160184u;
    // 0x160184: 0x84e20228  lh          $v0, 0x228($a3)
    ctx->pc = 0x160184u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 552)));
    // 0x160188: 0x10460013  beq         $v0, $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x160188u;
    {
        const bool branch_taken_0x160188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x160188) {
            ctx->pc = 0x1601D8u;
            goto label_1601d8;
        }
    }
    ctx->pc = 0x160190u;
    // 0x160190: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x160190u;
    {
        const bool branch_taken_0x160190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x160190) {
            ctx->pc = 0x1601D8u;
            goto label_1601d8;
        }
    }
    ctx->pc = 0x160198u;
    // 0x160198: 0x24e20040  addiu       $v0, $a3, 0x40
    ctx->pc = 0x160198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x16019c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16019cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1601a0: 0xd9450000  lqc2        $vf5, 0x0($t2)
    ctx->pc = 0x1601a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1601a4: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1601a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1601a8: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x1601a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1601ac: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x1601acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1601b0: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x1601b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1601b4: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x1601b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1601b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1601b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1601bc: 0x0  nop
    ctx->pc = 0x1601bcu;
    // NOP
    // 0x1601c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1601c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1601c4: 0x0  nop
    ctx->pc = 0x1601c4u;
    // NOP
    // 0x1601c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1601C8u;
    {
        const bool branch_taken_0x1601c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1601c8) {
            ctx->pc = 0x1601D8u;
            goto label_1601d8;
        }
    }
    ctx->pc = 0x1601D0u;
    // 0x1601d0: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1601d0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x1601d4: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x1601d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1601d8:
    // 0x1601d8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1601d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1601dc:
    // 0x1601dc: 0x0  nop
    ctx->pc = 0x1601dcu;
    // NOP
    // 0x1601e0: 0x2922000a  slti        $v0, $t1, 0xA
    ctx->pc = 0x1601e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1601e4: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1601E4u;
    {
        const bool branch_taken_0x1601e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1601E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601E4u;
        // 0x1601e8: 0x91100  sll         $v0, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1601e4) {
            ctx->pc = 0x16015Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16015c;
        }
    }
    ctx->pc = 0x1601ECu;
    // 0x1601ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1601ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1601F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601ECu;
        // 0x1601f0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1601ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1601F4u;
}
