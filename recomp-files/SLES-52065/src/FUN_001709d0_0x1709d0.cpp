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

// Function: FUN_001709d0
// Address: 0x1709d0 - 0x170b6c
void FUN_001709d0_0x1709d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001709d0_0x1709d0");
#endif

    ctx->pc = 0x1709d0u;

    // 0x1709d0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1709d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1709d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1709d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1709d8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1709d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1709dc: 0xc7808020  lwc1        $f0, -0x7FE0($gp)
    ctx->pc = 0x1709dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1709e0: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x1709e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x1709e4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1709e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1709e8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1709e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1709ec: 0x0  nop
    ctx->pc = 0x1709ecu;
    // NOP
    // 0x1709f0: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1709f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1709f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1709f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1709f8: 0x46040043  div.s       $f1, $f0, $f4
    ctx->pc = 0x1709f8u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x1709fc: 0x0  nop
    ctx->pc = 0x1709fcu;
    // NOP
    // 0x170a00: 0x0  nop
    ctx->pc = 0x170a00u;
    // NOP
    // 0x170a04: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x170a04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170a08: 0x0  nop
    ctx->pc = 0x170a08u;
    // NOP
    // 0x170a0c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x170A0Cu;
    {
        const bool branch_taken_0x170a0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x170a0c) {
            ctx->pc = 0x170A1Cu;
            goto label_170a1c;
        }
    }
    ctx->pc = 0x170A14u;
    // 0x170a14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x170A14u;
    {
        const bool branch_taken_0x170a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A14u;
        // 0x170a18: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a14) {
            ctx->pc = 0x170A30u;
            goto label_170a30;
        }
    }
    ctx->pc = 0x170A1Cu;
label_170a1c:
    // 0x170a1c: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x170a1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170a20: 0x0  nop
    ctx->pc = 0x170a20u;
    // NOP
    // 0x170a24: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x170A24u;
    {
        const bool branch_taken_0x170a24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x170A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A24u;
        // 0x170a28: 0x3c0241b8  lui         $v0, 0x41B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a24) {
            ctx->pc = 0x170A34u;
            goto label_170a34;
        }
    }
    ctx->pc = 0x170A2Cu;
    // 0x170a2c: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x170a2cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_170a30:
    // 0x170a30: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x170a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
label_170a34:
    // 0x170a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170a38: 0x0  nop
    ctx->pc = 0x170a38u;
    // NOP
    // 0x170a3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x170a3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x170a40: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170a40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x170a44: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x170a44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x170a48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x170a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x170a4c: 0x28620017  slti        $v0, $v1, 0x17
    ctx->pc = 0x170a4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x170a50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x170A50u;
    {
        const bool branch_taken_0x170a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A50u;
        // 0x170a54: 0x460008c1  sub.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a50) {
            ctx->pc = 0x170A64u;
            goto label_170a64;
        }
    }
    ctx->pc = 0x170A58u;
    // 0x170a58: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x170a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x170a5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x170A5Cu;
    {
        const bool branch_taken_0x170a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A5Cu;
        // 0x170a60: 0xc421f4ec  lwc1        $f1, -0xB14($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a5c) {
            ctx->pc = 0x170A9Cu;
            goto label_170a9c;
        }
    }
    ctx->pc = 0x170A64u;
label_170a64:
    // 0x170a64: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x170a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x170a68: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x170a68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x170a6c: 0x2442f494  addiu       $v0, $v0, -0xB6C
    ctx->pc = 0x170a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964372));
    // 0x170a70: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x170a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x170a74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170a7c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x170a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x170a80: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x170a80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x170a84: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x170a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x170a88: 0x2442f490  addiu       $v0, $v0, -0xB70
    ctx->pc = 0x170a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964368));
    // 0x170a8c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x170a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x170a90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x170a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170a94: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x170a94u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x170a98: 0x4600085c  madd.s      $f1, $f1, $f0
    ctx->pc = 0x170a98u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_170a9c:
    // 0x170a9c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x170a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170aa0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x170aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x170aa4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x170aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x170aa8: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x170AA8u;
    {
        const bool branch_taken_0x170aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x170AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AA8u;
        // 0x170aac: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170aa8) {
            ctx->pc = 0x170AFCu;
            goto label_170afc;
        }
    }
    ctx->pc = 0x170AB0u;
    // 0x170ab0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x170ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170ab4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x170AB4u;
    {
        const bool branch_taken_0x170ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x170AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AB4u;
        // 0x170ab8: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ab4) {
            ctx->pc = 0x170AECu;
            goto label_170aec;
        }
    }
    ctx->pc = 0x170ABCu;
    // 0x170abc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170ac0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170AC0u;
    {
        const bool branch_taken_0x170ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x170AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AC0u;
        // 0x170ac4: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ac0) {
            ctx->pc = 0x170AD0u;
            goto label_170ad0;
        }
    }
    ctx->pc = 0x170AC8u;
    // 0x170ac8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x170AC8u;
    {
        const bool branch_taken_0x170ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AC8u;
        // 0x170acc: 0xc4810008  lwc1        $f1, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ac8) {
            ctx->pc = 0x170B14u;
            goto label_170b14;
        }
    }
    ctx->pc = 0x170AD0u;
label_170ad0:
    // 0x170ad0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x170ad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170ad8: 0xac207500  sw          $zero, 0x7500($at)
    ctx->pc = 0x170ad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x367500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x367500u, _value); } while (0);
    // 0x170adc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x170ae0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x170ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x170ae4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x170AE4u;
    {
        const bool branch_taken_0x170ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AE4u;
        // 0x170ae8: 0xe4207508  swc1        $f0, 0x7508($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 29960), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ae4) {
            ctx->pc = 0x170B10u;
            goto label_170b10;
        }
    }
    ctx->pc = 0x170AECu;
label_170aec:
    // 0x170aec: 0xe4217500  swc1        $f1, 0x7500($at)
    ctx->pc = 0x170aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 29952), bits); }
    // 0x170af0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x170af4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x170AF4u;
    {
        const bool branch_taken_0x170af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AF4u;
        // 0x170af8: 0xac207508  sw          $zero, 0x7508($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170af4) {
            ctx->pc = 0x170B10u;
            goto label_170b10;
        }
    }
    ctx->pc = 0x170AFCu;
label_170afc:
    // 0x170afc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x170b00: 0xac207508  sw          $zero, 0x7508($at)
    ctx->pc = 0x170b00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x367508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x367508u, _value); } while (0);
    // 0x170b04: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x170b04u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x170b08: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x170b0c: 0xe4207500  swc1        $f0, 0x7500($at)
    ctx->pc = 0x170b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x367500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x367500u, _value); } while (0); }
label_170b10:
    // 0x170b10: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x170b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170b14:
    // 0x170b14: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x170b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x170b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170b1c: 0x0  nop
    ctx->pc = 0x170b1cu;
    // NOP
    // 0x170b20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170b24: 0x0  nop
    ctx->pc = 0x170b24u;
    // NOP
    // 0x170b28: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x170B28u;
    {
        const bool branch_taken_0x170b28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x170b28) {
            ctx->pc = 0x170B40u;
            goto label_170b40;
        }
    }
    ctx->pc = 0x170B30u;
    // 0x170b30: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x170b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x170b34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170b38: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x170B38u;
    {
        const bool branch_taken_0x170b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B38u;
        // 0x170b3c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b38) {
            ctx->pc = 0x170B64u;
            goto label_170b64;
        }
    }
    ctx->pc = 0x170B40u;
label_170b40:
    // 0x170b40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x170b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x170b44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x170B44u;
    {
        const bool branch_taken_0x170b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B44u;
        // 0x170b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b44) {
            ctx->pc = 0x170B64u;
            goto label_170b64;
        }
    }
    ctx->pc = 0x170B4Cu;
    // 0x170b4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170b54: 0x0  nop
    ctx->pc = 0x170b54u;
    // NOP
    // 0x170b58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x170b58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x170b5c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x170b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x170b60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x170b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170b64:
    // 0x170b64: 0x3e00008  jr          $ra
    ctx->pc = 0x170B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170B6Cu;
}
