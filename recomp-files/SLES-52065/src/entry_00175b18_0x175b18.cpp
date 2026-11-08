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

// Function: entry_00175b18
// Address: 0x175b18 - 0x175c54
void entry_00175b18_0x175b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175b18_0x175b18");
#endif

    switch (ctx->pc) {
        case 0x175b58u: goto label_175b58;
        case 0x175b84u: goto label_175b84;
        case 0x175bbcu: goto label_175bbc;
        default: break;
    }

    ctx->pc = 0x175b18u;

    // 0x175b18: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x175b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x175b1c: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x175b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x175b20: 0x8e0500d0  lw          $a1, 0xD0($s0)
    ctx->pc = 0x175b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x175b24: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x175b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x175b28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175b2c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x175b2cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175b30: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x175b30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x175b34: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x175b34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x175b38: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x175b38u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x175b3c: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x175b3cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x175b40: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x175b40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175b44: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x175b44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175b48: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x175b48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x175b4c: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x175b4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x175b50: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175B50u;
    SET_GPR_U32(ctx, 31, 0x175B58u);
    ctx->pc = 0x175B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B50u;
    // 0x175b54: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175B50u, 0x175B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B58u;
label_175b58:
    // 0x175b58: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x175b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175b5c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175b60: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175b64: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175b68: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175b6c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175b70: 0x0  nop
    ctx->pc = 0x175b70u;
    // NOP
    // 0x175b74: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175b74u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175b78: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x175b78u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175b7c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175B7Cu;
    SET_GPR_U32(ctx, 31, 0x175B84u);
    ctx->pc = 0x175B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B7Cu;
    // 0x175b80: 0xe7a000e0  swc1        $f0, 0xE0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175B7Cu, 0x175B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B84u;
label_175b84:
    // 0x175b84: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175b88: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175b8c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175b90: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175b90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175b94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175b98: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x175b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175b9c: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175b9cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175ba0: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x175ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x175ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175ba8: 0x0  nop
    ctx->pc = 0x175ba8u;
    // NOP
    // 0x175bac: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x175bacu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175bb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x175bb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x175bb4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x175BB4u;
    SET_GPR_U32(ctx, 31, 0x175BBCu);
    ctx->pc = 0x175BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175BB4u;
    // 0x175bb8: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x175BB4u, 0x175BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175BBCu;
label_175bbc:
    // 0x175bbc: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x175bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175bc0: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x175bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x175bc4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175bc8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x175bcc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x175bccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175bd0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x175bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175bd4: 0x0  nop
    ctx->pc = 0x175bd4u;
    // NOP
    // 0x175bd8: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x175bd8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x175bdc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175be0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x175be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x175be4: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x175be4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x175be8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x175be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175bec: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x175becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x175bf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x175bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175bf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175bf8: 0x0  nop
    ctx->pc = 0x175bf8u;
    // NOP
    // 0x175bfc: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x175bfcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175c00: 0x0  nop
    ctx->pc = 0x175c00u;
    // NOP
    // 0x175c04: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x175C04u;
    {
        const bool branch_taken_0x175c04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x175C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C04u;
        // 0x175c08: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c04) {
            ctx->pc = 0x175C54u;
            return;
        }
    }
    ctx->pc = 0x175C0Cu;
    // 0x175c0c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x175c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175c10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175c14: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x175c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175c18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x175c18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x175c1c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175c20: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x175c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x175c24: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x175c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175c28: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x175c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175c2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175c2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175c30: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175c34: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x175c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x175c38: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x175c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175c3c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x175c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175c40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175c40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175c44: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175c44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175c48: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x175c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x175c4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x175C4Cu;
    {
        const bool branch_taken_0x175c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C4Cu;
        // 0x175c50: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c4c) {
            ctx->pc = 0x175C60u;
            return;
        }
    }
    ctx->pc = 0x175C54u;
}
