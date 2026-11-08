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

// Function: FUN_00165ad0
// Address: 0x165ad0 - 0x165c70
void FUN_00165ad0_0x165ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00165ad0_0x165ad0");
#endif

    switch (ctx->pc) {
        case 0x165b1cu: goto label_165b1c;
        case 0x165b48u: goto label_165b48;
        case 0x165b60u: goto label_165b60;
        case 0x165bd8u: goto label_165bd8;
        case 0x165c28u: goto label_165c28;
        case 0x165c30u: goto label_165c30;
        case 0x165c4cu: goto label_165c4c;
        default: break;
    }

    ctx->pc = 0x165ad0u;

    // 0x165ad0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x165ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x165ad4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x165ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x165ad8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x165ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x165adc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x165adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x165ae0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x165ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x165ae4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x165ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ae8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x165ae8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x165aec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x165aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165af0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x165af0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x165af4: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x165af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x165af8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x165af8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x165afc: 0xc4800200  lwc1        $f0, 0x200($a0)
    ctx->pc = 0x165afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165b00: 0xc4ac01c0  lwc1        $f12, 0x1C0($a1)
    ctx->pc = 0x165b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x165b04: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x165b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x165b08: 0x0  nop
    ctx->pc = 0x165b08u;
    // NOP
    // 0x165b0c: 0x46140340  add.s       $f13, $f0, $f20
    ctx->pc = 0x165b0cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x165b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b14: 0xc054e18  jal         func_153860
    ctx->pc = 0x165B14u;
    SET_GPR_U32(ctx, 31, 0x165B1Cu);
    ctx->pc = 0x165B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B14u;
    // 0x165b18: 0x26050300  addiu       $a1, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153860u, 0x165B14u, 0x165B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B1Cu;
label_165b1c:
    // 0x165b1c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x165b1cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x165b20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x165b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165b24: 0x0  nop
    ctx->pc = 0x165b24u;
    // NOP
    // 0x165b28: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x165b28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165b2c: 0x0  nop
    ctx->pc = 0x165b2cu;
    // NOP
    // 0x165b30: 0x45010047  bc1t        . + 4 + (0x47 << 2)
    ctx->pc = 0x165B30u;
    {
        const bool branch_taken_0x165b30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x165B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B30u;
        // 0x165b34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b30) {
            ctx->pc = 0x165C50u;
            goto label_165c50;
        }
    }
    ctx->pc = 0x165B38u;
    // 0x165b38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b40: 0xc042118  jal         func_108460
    ctx->pc = 0x165B40u;
    SET_GPR_U32(ctx, 31, 0x165B48u);
    ctx->pc = 0x165B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B40u;
    // 0x165b44: 0xe61502e8  swc1        $f21, 0x2E8($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x165B40u, 0x165B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B48u;
label_165b48:
    // 0x165b48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x165b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x165b4c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x165b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x165b50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165b54: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x165b54u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x165b58: 0xc0425a4  jal         func_109690
    ctx->pc = 0x165B58u;
    SET_GPR_U32(ctx, 31, 0x165B60u);
    ctx->pc = 0x165B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B58u;
    // 0x165b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x165B58u, 0x165B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B60u;
label_165b60:
    // 0x165b60: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x165b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x165b64: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x165b64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165b68: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x165b68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165b6c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x165b6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x165b70: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x165b70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x165b74: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x165b74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x165b78: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x165b78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x165b7c: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x165b7cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x165b80: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x165b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x165b84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x165b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x165b88: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x165b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x165b8c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x165b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b90: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x165b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165b94: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x165b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165b98: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x165b98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x165b9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x165b9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x165ba0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x165ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x165ba4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x165ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x165ba8: 0xc6010304  lwc1        $f1, 0x304($s0)
    ctx->pc = 0x165ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165bac: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x165bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165bb0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x165bb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x165bb4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x165bb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x165bb8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x165bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x165bbc: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x165bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x165bc0: 0xc6010308  lwc1        $f1, 0x308($s0)
    ctx->pc = 0x165bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165bc4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x165bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165bc8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x165bc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x165bcc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x165bccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x165bd0: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x165BD0u;
    SET_GPR_U32(ctx, 31, 0x165BD8u);
    ctx->pc = 0x165BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165BD0u;
    // 0x165bd4: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x165BD0u, 0x165BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165BD8u;
label_165bd8:
    // 0x165bd8: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x165bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165bdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x165bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x165be0: 0x4616a301  sub.s       $f12, $f20, $f22
    ctx->pc = 0x165be0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x165be4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x165be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165be8: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x165be8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x165bec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x165becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x165bf0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x165bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x165bf4: 0xc6010304  lwc1        $f1, 0x304($s0)
    ctx->pc = 0x165bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165bf8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x165bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165bfc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x165bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x165c00: 0x0  nop
    ctx->pc = 0x165c00u;
    // NOP
    // 0x165c04: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x165c04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x165c08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x165c08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x165c0c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x165c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x165c10: 0xc6010308  lwc1        $f1, 0x308($s0)
    ctx->pc = 0x165c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165c14: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x165c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165c18: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x165c18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x165c1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x165c1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x165c20: 0xc082520  jal         func_209480
    ctx->pc = 0x165C20u;
    SET_GPR_U32(ctx, 31, 0x165C28u);
    ctx->pc = 0x165C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C20u;
    // 0x165c24: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x165C20u, 0x165C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C28u;
label_165c28:
    // 0x165c28: 0xc082222  jal         func_208888
    ctx->pc = 0x165C28u;
    SET_GPR_U32(ctx, 31, 0x165C30u);
    ctx->pc = 0x165C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C28u;
    // 0x165c2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208888u, 0x165C28u, 0x165C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C30u;
label_165c30:
    // 0x165c30: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x165c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x165c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x165c38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x165c3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c40: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x165c40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x165c44: 0xc055b84  jal         func_156E10
    ctx->pc = 0x165C44u;
    SET_GPR_U32(ctx, 31, 0x165C4Cu);
    ctx->pc = 0x165C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C44u;
    // 0x165c48: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156E10u, 0x165C44u, 0x165C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C4Cu;
label_165c4c:
    // 0x165c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165c50:
    // 0x165c50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x165c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165c54: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x165c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x165c58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x165c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165c5c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x165c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x165c60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x165c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165c64: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x165c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x165c68: 0x3e00008  jr          $ra
    ctx->pc = 0x165C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C68u;
        // 0x165c6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165C70u;
}
