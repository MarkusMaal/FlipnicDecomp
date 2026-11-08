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

// Function: FUN_00158c10
// Address: 0x158c10 - 0x158d54
void FUN_00158c10_0x158c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158c10_0x158c10");
#endif

    switch (ctx->pc) {
        case 0x158c40u: goto label_158c40;
        case 0x158c4cu: goto label_158c4c;
        case 0x158c58u: goto label_158c58;
        case 0x158ca8u: goto label_158ca8;
        case 0x158cb8u: goto label_158cb8;
        case 0x158cc8u: goto label_158cc8;
        default: break;
    }

    ctx->pc = 0x158c10u;

    // 0x158c10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x158c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x158c14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x158c18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x158c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x158c1c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x158c1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x158c20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x158c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158c24: 0xc48001c0  lwc1        $f0, 0x1C0($a0)
    ctx->pc = 0x158c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158c28: 0xc4ad0008  lwc1        $f13, 0x8($a1)
    ctx->pc = 0x158c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x158c2c: 0x46006503  div.s       $f20, $f12, $f0
    ctx->pc = 0x158c2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x158c30: 0x0  nop
    ctx->pc = 0x158c30u;
    // NOP
    // 0x158c34: 0x0  nop
    ctx->pc = 0x158c34u;
    // NOP
    // 0x158c38: 0xc07ef40  jal         func_1FBD00
    ctx->pc = 0x158C38u;
    SET_GPR_U32(ctx, 31, 0x158C40u);
    ctx->pc = 0x158C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C38u;
    // 0x158c3c: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x158C38u, 0x158C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C40u;
label_158c40:
    // 0x158c40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x158c40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x158c44: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x158C44u;
    SET_GPR_U32(ctx, 31, 0x158C4Cu);
    ctx->pc = 0x158C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C44u;
    // 0x158c48: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x158C44u, 0x158C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C4Cu;
label_158c4c:
    // 0x158c4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x158c4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x158c50: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x158C50u;
    SET_GPR_U32(ctx, 31, 0x158C58u);
    ctx->pc = 0x158C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C50u;
    // 0x158c54: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x158C50u, 0x158C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C58u;
label_158c58:
    // 0x158c58: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x158c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x158c5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158c60: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x158c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x158c64: 0x920301f2  lbu         $v1, 0x1F2($s0)
    ctx->pc = 0x158c64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 498)));
    // 0x158c68: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x158C68u;
    {
        const bool branch_taken_0x158c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x158C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C68u;
        // 0x158c6c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c68) {
            ctx->pc = 0x158C74u;
            goto label_158c74;
        }
    }
    ctx->pc = 0x158C70u;
    // 0x158c70: 0xa20001f2  sb          $zero, 0x1F2($s0)
    ctx->pc = 0x158c70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 498), (uint8_t)GPR_U32(ctx, 0));
label_158c74:
    // 0x158c74: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x158c74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x158c78: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x158c78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x158c7c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x158c7cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158c80: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x158c80u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x158c84: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x158c84u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x158c88: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x158c88u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x158c8c: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x158c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x158c90: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x158c90u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x158c94: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x158c94u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x158c98: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x158c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158c9c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x158c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158ca0: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x158CA0u;
    SET_GPR_U32(ctx, 31, 0x158CA8u);
    ctx->pc = 0x158CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158CA0u;
    // 0x158ca4: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x158CA0u, 0x158CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158CA8u;
label_158ca8:
    // 0x158ca8: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x158ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x158cac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x158cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158cb0: 0xc07d3fe  jal         func_1F4FF8
    ctx->pc = 0x158CB0u;
    SET_GPR_U32(ctx, 31, 0x158CB8u);
    ctx->pc = 0x158CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158CB0u;
    // 0x158cb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x158CB0u, 0x158CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158CB8u;
label_158cb8:
    // 0x158cb8: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x158cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x158cbc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x158cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158cc0: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x158CC0u;
    SET_GPR_U32(ctx, 31, 0x158CC8u);
    ctx->pc = 0x158CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158CC0u;
    // 0x158cc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x158CC0u, 0x158CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158CC8u;
label_158cc8:
    // 0x158cc8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x158cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x158ccc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x158cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158cd0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x158cd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158cd4: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x158cd4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x158cd8: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x158cd8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x158cdc: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x158cdcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x158ce0: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x158ce0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158ce4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x158ce4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158ce8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x158ce8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158cec: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x158cecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158cf0: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x158cf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x158cf4: 0xd8880010  lqc2        $vf8, 0x10($a0)
    ctx->pc = 0x158cf4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x158cf8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x158cf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158cfc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x158cfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158d00: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x158d00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158d04: 0x4be83a8b  vmaddw.xyzw $vf10, $vf7, $vf8w
    ctx->pc = 0x158d04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x158d08: 0xd8880020  lqc2        $vf8, 0x20($a0)
    ctx->pc = 0x158d08u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x158d0c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x158d0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158d10: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x158d10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158d14: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x158d14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158d18: 0x4be83acb  vmaddw.xyzw $vf11, $vf7, $vf8w
    ctx->pc = 0x158d18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x158d1c: 0xd8880030  lqc2        $vf8, 0x30($a0)
    ctx->pc = 0x158d1cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x158d20: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x158d20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158d24: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x158d24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158d28: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x158d28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x158d2c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x158d2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x158d30: 0xf8890000  sqc2        $vf9, 0x0($a0)
    ctx->pc = 0x158d30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x158d34: 0xf88a0010  sqc2        $vf10, 0x10($a0)
    ctx->pc = 0x158d34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x158d38: 0xf88b0020  sqc2        $vf11, 0x20($a0)
    ctx->pc = 0x158d38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x158d3c: 0xf88c0030  sqc2        $vf12, 0x30($a0)
    ctx->pc = 0x158d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x158d40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158d44: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x158d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x158d48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x158d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x158D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D4Cu;
        // 0x158d50: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158D54u;
}
