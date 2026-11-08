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

// Function: FUN_00168ad0
// Address: 0x168ad0 - 0x168bbc
void FUN_00168ad0_0x168ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168ad0_0x168ad0");
#endif

    switch (ctx->pc) {
        case 0x168ae8u: goto label_168ae8;
        case 0x168af8u: goto label_168af8;
        case 0x168b04u: goto label_168b04;
        case 0x168b40u: goto label_168b40;
        default: break;
    }

    ctx->pc = 0x168ad0u;

    // 0x168ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168ad4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x168ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x168ad8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x168ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x168adc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ae0: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x168AE0u;
    SET_GPR_U32(ctx, 31, 0x168AE8u);
    ctx->pc = 0x168AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168AE0u;
    // 0x168ae4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x168AE0u, 0x168AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168AE8u;
label_168ae8:
    // 0x168ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168aec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x168aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168af0: 0xc042570  jal         func_1095C0
    ctx->pc = 0x168AF0u;
    SET_GPR_U32(ctx, 31, 0x168AF8u);
    ctx->pc = 0x168AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168AF0u;
    // 0x168af4: 0xa20001d0  sb          $zero, 0x1D0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x168AF0u, 0x168AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168AF8u;
label_168af8:
    // 0x168af8: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x168af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x168afc: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x168AFCu;
    SET_GPR_U32(ctx, 31, 0x168B04u);
    ctx->pc = 0x168B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168AFCu;
    // 0x168b00: 0xae0001d4  sw          $zero, 0x1D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x168AFCu, 0x168B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168B04u;
label_168b04:
    // 0x168b04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168b08: 0x0  nop
    ctx->pc = 0x168b08u;
    // NOP
    // 0x168b0c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x168b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x168b10: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x168b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x168b14: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x168b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x168b18: 0x3c024e80  lui         $v0, 0x4E80
    ctx->pc = 0x168b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20096 << 16));
    // 0x168b1c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x168b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x168b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168b24: 0x0  nop
    ctx->pc = 0x168b24u;
    // NOP
    // 0x168b28: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x168b28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x168b2c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x168b2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x168b30: 0x0  nop
    ctx->pc = 0x168b30u;
    // NOP
    // 0x168b34: 0x0  nop
    ctx->pc = 0x168b34u;
    // NOP
    // 0x168b38: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x168B38u;
    SET_GPR_U32(ctx, 31, 0x168B40u);
    ctx->pc = 0x168B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168B38u;
    // 0x168b3c: 0x46020501  sub.s       $f20, $f0, $f2 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x168B38u, 0x168B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168B40u;
label_168b40:
    // 0x168b40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x168b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168b44: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x168b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x168b48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x168b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168b4c: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x168b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x168b50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x168b50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x168b54: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x168b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x168b58: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x168b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x168b5c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x168b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x168b60: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x168b60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x168b64: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x168b64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168b68: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x168b68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168b6c: 0x0  nop
    ctx->pc = 0x168b6cu;
    // NOP
    // 0x168b70: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x168b70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x168b74: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x168b74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x168b78: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x168b78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x168b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x168b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168b80: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x168b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x168b84: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x168b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x168b88: 0x0  nop
    ctx->pc = 0x168b88u;
    // NOP
    // 0x168b8c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x168b8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x168b90: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x168b90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x168b94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x168b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x168b98: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x168b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x168b9c: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x168b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
    // 0x168ba0: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x168ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x168ba4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x168ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x168ba8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x168ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168bac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x168bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x168bb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x168bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x168BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BB4u;
        // 0x168bb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168BBCu;
}
