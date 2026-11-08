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

// Function: FUN_00178a20
// Address: 0x178a20 - 0x178c34
void FUN_00178a20_0x178a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00178a20_0x178a20");
#endif

    switch (ctx->pc) {
        case 0x178a44u: goto label_178a44;
        case 0x178a8cu: goto label_178a8c;
        case 0x178a94u: goto label_178a94;
        case 0x178a9cu: goto label_178a9c;
        case 0x178ab4u: goto label_178ab4;
        case 0x178ac4u: goto label_178ac4;
        case 0x178ad0u: goto label_178ad0;
        case 0x178b10u: goto label_178b10;
        case 0x178b38u: goto label_178b38;
        case 0x178b44u: goto label_178b44;
        case 0x178b7cu: goto label_178b7c;
        default: break;
    }

    ctx->pc = 0x178a20u;

    // 0x178a20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x178a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x178a24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x178a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x178a28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x178a2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178a34: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x178a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x178a38: 0x26250420  addiu       $a1, $s1, 0x420
    ctx->pc = 0x178a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
    // 0x178a3c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x178A3Cu;
    SET_GPR_U32(ctx, 31, 0x178A44u);
    ctx->pc = 0x178A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A3Cu;
    // 0x178a40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x178A3Cu, 0x178A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A44u;
label_178a44:
    // 0x178a44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178a48: 0x26230420  addiu       $v1, $s1, 0x420
    ctx->pc = 0x178a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
    // 0x178a4c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x178a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x178a50: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x178a50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178a54: 0x4bc1086a  vmul.xyz    $vf1, $vf1, $vf1
    ctx->pc = 0x178a54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x178a58: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x178a58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x178a5c: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x178a5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x178a60: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x178a60u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x178a64: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x178a64u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178a68: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x178a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x178a6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178a70: 0x0  nop
    ctx->pc = 0x178a70u;
    // NOP
    // 0x178a74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x178a74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x178a78: 0x0  nop
    ctx->pc = 0x178a78u;
    // NOP
    // 0x178a7c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x178A7Cu;
    {
        const bool branch_taken_0x178a7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x178A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A7Cu;
        // 0x178a80: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a7c) {
            ctx->pc = 0x178B08u;
            goto label_178b08;
        }
    }
    ctx->pc = 0x178A84u;
    // 0x178a84: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178A84u;
    SET_GPR_U32(ctx, 31, 0x178A8Cu);
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178A84u, 0x178A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A8Cu;
label_178a8c:
    // 0x178a8c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178A8Cu;
    SET_GPR_U32(ctx, 31, 0x178A94u);
    ctx->pc = 0x178A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A8Cu;
    // 0x178a90: 0xe6200440  swc1        $f0, 0x440($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1088), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178A8Cu, 0x178A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A94u;
label_178a94:
    // 0x178a94: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178A94u;
    SET_GPR_U32(ctx, 31, 0x178A9Cu);
    ctx->pc = 0x178A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A94u;
    // 0x178a98: 0xe6200444  swc1        $f0, 0x444($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1092), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178A94u, 0x178A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A9Cu;
label_178a9c:
    // 0x178a9c: 0x26240440  addiu       $a0, $s1, 0x440
    ctx->pc = 0x178a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
    // 0x178aa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178aa4: 0xe6200448  swc1        $f0, 0x448($s1)
    ctx->pc = 0x178aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1096), bits); }
    // 0x178aa8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x178aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178aac: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x178AACu;
    SET_GPR_U32(ctx, 31, 0x178AB4u);
    ctx->pc = 0x178AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178AACu;
    // 0x178ab0: 0xae22044c  sw          $v0, 0x44C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x178AACu, 0x178AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178AB4u;
label_178ab4:
    // 0x178ab4: 0x26240440  addiu       $a0, $s1, 0x440
    ctx->pc = 0x178ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
    // 0x178ab8: 0x26260430  addiu       $a2, $s1, 0x430
    ctx->pc = 0x178ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1072));
    // 0x178abc: 0xc07d300  jal         func_1F4C00
    ctx->pc = 0x178ABCu;
    SET_GPR_U32(ctx, 31, 0x178AC4u);
    ctx->pc = 0x178AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178ABCu;
    // 0x178ac0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x178ABCu, 0x178AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178AC4u;
label_178ac4:
    // 0x178ac4: 0x26240440  addiu       $a0, $s1, 0x440
    ctx->pc = 0x178ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
    // 0x178ac8: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x178AC8u;
    SET_GPR_U32(ctx, 31, 0x178AD0u);
    ctx->pc = 0x178ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178AC8u;
    // 0x178acc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x178AC8u, 0x178AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178AD0u;
label_178ad0:
    // 0x178ad0: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x178ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178ad4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178ad8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x178ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178adc: 0x3c0241c9  lui         $v0, 0x41C9
    ctx->pc = 0x178adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16841 << 16));
    // 0x178ae0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x178ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x178ae4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x178ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178ae8: 0x0  nop
    ctx->pc = 0x178ae8u;
    // NOP
    // 0x178aec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x178aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x178af0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x178af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x178af4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178af4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x178af8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x178af8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x178afc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x178afcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x178b00: 0xe620044c  swc1        $f0, 0x44C($s1)
    ctx->pc = 0x178b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1100), bits); }
    // 0x178b04: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x178b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_178b08:
    // 0x178b08: 0xc07d308  jal         func_1F4C20
    ctx->pc = 0x178B08u;
    SET_GPR_U32(ctx, 31, 0x178B10u);
    ctx->pc = 0x178B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B08u;
    // 0x178b0c: 0x26250430  addiu       $a1, $s1, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C20u, 0x178B08u, 0x178B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B10u;
label_178b10:
    // 0x178b10: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x178b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
    // 0x178b14: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x178b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x178b18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x178b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178b1c: 0x0  nop
    ctx->pc = 0x178b1cu;
    // NOP
    // 0x178b20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x178b20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x178b24: 0x0  nop
    ctx->pc = 0x178b24u;
    // NOP
    // 0x178b28: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x178B28u;
    {
        const bool branch_taken_0x178b28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x178B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B28u;
        // 0x178b2c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b28) {
            ctx->pc = 0x178B84u;
            goto label_178b84;
        }
    }
    ctx->pc = 0x178B30u;
    // 0x178b30: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x178B30u;
    SET_GPR_U32(ctx, 31, 0x178B38u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x178B30u, 0x178B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B38u;
label_178b38:
    // 0x178b38: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x178b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x178b3c: 0xc05c550  jal         func_171540
    ctx->pc = 0x178B3Cu;
    SET_GPR_U32(ctx, 31, 0x178B44u);
    ctx->pc = 0x178B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B3Cu;
    // 0x178b40: 0x26250440  addiu       $a1, $s1, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x178B3Cu, 0x178B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B44u;
label_178b44:
    // 0x178b44: 0x26240430  addiu       $a0, $s1, 0x430
    ctx->pc = 0x178b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1072));
    // 0x178b48: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x178b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x178b4c: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x178b4cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x178b50: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x178b50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178b54: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x178b54u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x178b58: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x178b58u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x178b5c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x178b5cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x178b60: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x178b60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x178b64: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x178b64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x178b68: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x178b68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x178b6c: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x178b6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x178b70: 0xf8880000  sqc2        $vf8, 0x0($a0)
    ctx->pc = 0x178b70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x178b74: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x178B74u;
    SET_GPR_U32(ctx, 31, 0x178B7Cu);
    ctx->pc = 0x178B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B74u;
    // 0x178b78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x178B74u, 0x178B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B7Cu;
label_178b7c:
    // 0x178b7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178b80: 0xae22043c  sw          $v0, 0x43C($s1)
    ctx->pc = 0x178b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1084), GPR_U32(ctx, 2));
label_178b84:
    // 0x178b84: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x178b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178b88: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x178b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x178b8c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x178b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x178b90: 0x26240420  addiu       $a0, $s1, 0x420
    ctx->pc = 0x178b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
    // 0x178b94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x178b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178b98: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x178b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x178b9c: 0xc6200430  lwc1        $f0, 0x430($s1)
    ctx->pc = 0x178b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178ba0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x178ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x178ba4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x178ba4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x178ba8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x178ba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x178bac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178bacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x178bb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x178bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x178bb4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x178bb4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x178bb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x178bb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x178bbc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x178bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x178bc0: 0xc6200434  lwc1        $f0, 0x434($s1)
    ctx->pc = 0x178bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178bc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x178bc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x178bc8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x178bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x178bcc: 0xc6200438  lwc1        $f0, 0x438($s1)
    ctx->pc = 0x178bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178bd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x178bd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x178bd4: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x178bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x178bd8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x178bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x178bdc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x178bdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x178be0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x178be0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178be4: 0x4bc110a8  vadd.xyz    $vf2, $vf2, $vf1
    ctx->pc = 0x178be4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x178be8: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x178be8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x178bec: 0x8e220450  lw          $v0, 0x450($s1)
    ctx->pc = 0x178becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x178bf0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x178bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178bf4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x178bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x178bf8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x178bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x178bfc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x178bfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x178c00: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x178c00u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x178c04: 0x8e220450  lw          $v0, 0x450($s1)
    ctx->pc = 0x178c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x178c08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x178c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x178c0c: 0xae220450  sw          $v0, 0x450($s1)
    ctx->pc = 0x178c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1104), GPR_U32(ctx, 2));
    // 0x178c10: 0x2c420040  sltiu       $v0, $v0, 0x40
    ctx->pc = 0x178c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x178c14: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x178C14u;
    {
        const bool branch_taken_0x178c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C14u;
        // 0x178c18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c14) {
            ctx->pc = 0x178C20u;
            goto label_178c20;
        }
    }
    ctx->pc = 0x178C1Cu;
    // 0x178c1c: 0xae200450  sw          $zero, 0x450($s1)
    ctx->pc = 0x178c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1104), GPR_U32(ctx, 0));
label_178c20:
    // 0x178c20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x178c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178c24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178c28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x178C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C2Cu;
        // 0x178c30: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178C34u;
}
