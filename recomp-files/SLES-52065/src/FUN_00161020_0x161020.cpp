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

// Function: FUN_00161020
// Address: 0x161020 - 0x16147c
void FUN_00161020_0x161020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00161020_0x161020");
#endif

    switch (ctx->pc) {
        case 0x161154u: goto label_161154;
        case 0x161228u: goto label_161228;
        default: break;
    }

    ctx->pc = 0x161020u;

    // 0x161020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x161024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x161028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16102c: 0x8082000f  lb          $v0, 0xF($a0)
    ctx->pc = 0x16102cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x161030: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x161030u;
    {
        const bool branch_taken_0x161030 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x161034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161030u;
        // 0x161034: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161030) {
            ctx->pc = 0x1610BCu;
            goto label_1610bc;
        }
    }
    ctx->pc = 0x161038u;
    // 0x161038: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x161038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16103c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x16103cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x161040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161044: 0x0  nop
    ctx->pc = 0x161044u;
    // NOP
    // 0x161048: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x161048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16104c: 0x0  nop
    ctx->pc = 0x16104cu;
    // NOP
    // 0x161050: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x161050u;
    {
        const bool branch_taken_0x161050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161050) {
            ctx->pc = 0x16107Cu;
            goto label_16107c;
        }
    }
    ctx->pc = 0x161058u;
    // 0x161058: 0x8203000c  lb          $v1, 0xC($s0)
    ctx->pc = 0x161058u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16105c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16105cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161060: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x161060u;
    {
        const bool branch_taken_0x161060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x161064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161060u;
        // 0x161064: 0x3c024080  lui         $v0, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161060) {
            ctx->pc = 0x16107Cu;
            goto label_16107c;
        }
    }
    ctx->pc = 0x161068u;
    // 0x161068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16106c: 0x0  nop
    ctx->pc = 0x16106cu;
    // NOP
    // 0x161070: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x161070u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x161074: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x161074u;
    {
        const bool branch_taken_0x161074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161074u;
        // 0x161078: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161074) {
            ctx->pc = 0x1610BCu;
            goto label_1610bc;
        }
    }
    ctx->pc = 0x16107Cu;
label_16107c:
    // 0x16107c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16107cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161080: 0x0  nop
    ctx->pc = 0x161080u;
    // NOP
    // 0x161084: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x161084u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161088: 0x0  nop
    ctx->pc = 0x161088u;
    // NOP
    // 0x16108c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x16108Cu;
    {
        const bool branch_taken_0x16108c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16108c) {
            ctx->pc = 0x1610BCu;
            goto label_1610bc;
        }
    }
    ctx->pc = 0x161094u;
    // 0x161094: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x161094u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x161098: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x161098u;
    {
        const bool branch_taken_0x161098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161098) {
            ctx->pc = 0x1610BCu;
            goto label_1610bc;
        }
    }
    ctx->pc = 0x1610A0u;
    // 0x1610a0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1610a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1610a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1610a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1610a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1610a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1610ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1610acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1610b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1610b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1610b4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1610b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1610b8: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x1610b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
label_1610bc:
    // 0x1610bc: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x1610bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1610c0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1610c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1610c4: 0x14200028  bnez        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x1610C4u;
    {
        const bool branch_taken_0x1610c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1610C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610C4u;
        // 0x1610c8: 0x2841ffff  slti        $at, $v0, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1610c4) {
            ctx->pc = 0x161168u;
            goto label_161168;
        }
    }
    ctx->pc = 0x1610CCu;
    // 0x1610cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1610ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1610d0: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1610d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1610d4: 0xa203000c  sb          $v1, 0xC($s0)
    ctx->pc = 0x1610d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1610d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1610d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1610dc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1610dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1610e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1610e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1610e4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1610e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1610e8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1610e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1610ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1610ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1610f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1610f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1610f4: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x1610f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1610f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1610F8u;
    {
        const bool branch_taken_0x1610f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1610FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610F8u;
        // 0x1610fc: 0x460008c1  sub.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1610f8) {
            ctx->pc = 0x16110Cu;
            goto label_16110c;
        }
    }
    ctx->pc = 0x161100u;
    // 0x161100: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x161100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x161104: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x161104u;
    {
        const bool branch_taken_0x161104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161104u;
        // 0x161108: 0xc42c1628  lwc1        $f12, 0x1628($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 5672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161104) {
            ctx->pc = 0x161144u;
            goto label_161144;
        }
    }
    ctx->pc = 0x16110Cu;
label_16110c:
    // 0x16110c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x16110cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x161110: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x161110u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x161114: 0x244215f4  addiu       $v0, $v0, 0x15F4
    ctx->pc = 0x161114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5620));
    // 0x161118: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x161118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16111c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16111cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x161120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161124: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x161124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x161128: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x161128u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x16112c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x16112cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x161130: 0x244215f0  addiu       $v0, $v0, 0x15F0
    ctx->pc = 0x161130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5616));
    // 0x161134: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x161134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x161138: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x161138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16113c: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x16113cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x161140: 0x46000b1c  madd.s      $f12, $f1, $f0
    ctx->pc = 0x161140u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_161144:
    // 0x161144: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x161144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x161148: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x161148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16114c: 0xc05486c  jal         func_1521B0
    ctx->pc = 0x16114Cu;
    SET_GPR_U32(ctx, 31, 0x161154u);
    ctx->pc = 0x161150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16114Cu;
    // 0x161150: 0x248415c0  addiu       $a0, $a0, 0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B0u, 0x16114Cu, 0x161154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161154u;
label_161154:
    // 0x161154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161158: 0x0  nop
    ctx->pc = 0x161158u;
    // NOP
    // 0x16115c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16115cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x161160: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x161160u;
    {
        const bool branch_taken_0x161160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161160u;
        // 0x161164: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161160) {
            ctx->pc = 0x161238u;
            goto label_161238;
        }
    }
    ctx->pc = 0x161168u;
label_161168:
    // 0x161168: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x161168u;
    {
        const bool branch_taken_0x161168 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161168u;
        // 0x16116c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161168) {
            ctx->pc = 0x161238u;
            goto label_161238;
        }
    }
    ctx->pc = 0x161170u;
    // 0x161170: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x161170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x161174: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x161174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x161178: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161178u;
    {
        const bool branch_taken_0x161178 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161178u;
        // 0x16117c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161178) {
            ctx->pc = 0x16118Cu;
            goto label_16118c;
        }
    }
    ctx->pc = 0x161180u;
    // 0x161180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161184: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x161184u;
    {
        const bool branch_taken_0x161184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161184u;
        // 0x161188: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161184) {
            ctx->pc = 0x1611A4u;
            goto label_1611a4;
        }
    }
    ctx->pc = 0x16118Cu;
label_16118c:
    // 0x16118c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16118cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x161190: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x161190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x161194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161198: 0x0  nop
    ctx->pc = 0x161198u;
    // NOP
    // 0x16119c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x16119cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1611a0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1611a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1611a4:
    // 0x1611a4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1611a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1611a8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1611a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1611ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1611acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1611b0: 0x0  nop
    ctx->pc = 0x1611b0u;
    // NOP
    // 0x1611b4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1611b4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x1611b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1611b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1611bc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1611bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1611c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1611c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1611c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1611c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1611c8: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x1611c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1611cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1611CCu;
    {
        const bool branch_taken_0x1611cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1611D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611CCu;
        // 0x1611d0: 0x460008c1  sub.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611cc) {
            ctx->pc = 0x1611E0u;
            goto label_1611e0;
        }
    }
    ctx->pc = 0x1611D4u;
    // 0x1611d4: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1611d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1611d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1611D8u;
    {
        const bool branch_taken_0x1611d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1611DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611D8u;
        // 0x1611dc: 0xc42c15dc  lwc1        $f12, 0x15DC($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 5596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611d8) {
            ctx->pc = 0x161218u;
            goto label_161218;
        }
    }
    ctx->pc = 0x1611E0u;
label_1611e0:
    // 0x1611e0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1611e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1611e4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1611e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1611e8: 0x244215c4  addiu       $v0, $v0, 0x15C4
    ctx->pc = 0x1611e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5572));
    // 0x1611ec: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1611ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1611f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1611f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1611f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1611f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1611f8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1611f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1611fc: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x1611fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x161200: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x161200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x161204: 0x244215c0  addiu       $v0, $v0, 0x15C0
    ctx->pc = 0x161204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5568));
    // 0x161208: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x161208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16120c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16120cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161210: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x161210u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x161214: 0x46000b1c  madd.s      $f12, $f1, $f0
    ctx->pc = 0x161214u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_161218:
    // 0x161218: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x161218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x16121c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16121cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x161220: 0xc054848  jal         func_152120
    ctx->pc = 0x161220u;
    SET_GPR_U32(ctx, 31, 0x161228u);
    ctx->pc = 0x161224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161220u;
    // 0x161224: 0x248415f0  addiu       $a0, $a0, 0x15F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152120u, 0x161220u, 0x161228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161228u;
label_161228:
    // 0x161228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16122c: 0x0  nop
    ctx->pc = 0x16122cu;
    // NOP
    // 0x161230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x161234: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x161234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_161238:
    // 0x161238: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x161238u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16123c: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x16123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161240: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x161240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161244: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x161244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x161248: 0x0  nop
    ctx->pc = 0x161248u;
    // NOP
    // 0x16124c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16124cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x161250: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x161250u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x161254: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x161254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161258: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x161258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x16125c: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x16125cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x161260: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x161260u;
    {
        const bool branch_taken_0x161260 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x161260) {
            ctx->pc = 0x1612E0u;
            goto label_1612e0;
        }
    }
    ctx->pc = 0x161268u;
    // 0x161268: 0x9204000d  lbu         $a0, 0xD($s0)
    ctx->pc = 0x161268u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x16126c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16126Cu;
    {
        const bool branch_taken_0x16126c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x161270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16126Cu;
        // 0x161270: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16126c) {
            ctx->pc = 0x161280u;
            goto label_161280;
        }
    }
    ctx->pc = 0x161274u;
    // 0x161274: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x161274u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161278: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x161278u;
    {
        const bool branch_taken_0x161278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161278u;
        // 0x16127c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161278) {
            ctx->pc = 0x161298u;
            goto label_161298;
        }
    }
    ctx->pc = 0x161280u;
label_161280:
    // 0x161280: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x161280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x161284: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x161284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x161288: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16128c: 0x0  nop
    ctx->pc = 0x16128cu;
    // NOP
    // 0x161290: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x161290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x161294: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x161294u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_161298:
    // 0x161298: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x161298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16129c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16129cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1612a0: 0x0  nop
    ctx->pc = 0x1612a0u;
    // NOP
    // 0x1612a4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1612A4u;
    {
        const bool branch_taken_0x1612a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1612a4) {
            ctx->pc = 0x1612E0u;
            goto label_1612e0;
        }
    }
    ctx->pc = 0x1612ACu;
    // 0x1612ac: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1612ACu;
    {
        const bool branch_taken_0x1612ac = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1612B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612ACu;
        // 0x1612b0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612ac) {
            ctx->pc = 0x1612C0u;
            goto label_1612c0;
        }
    }
    ctx->pc = 0x1612B4u;
    // 0x1612b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1612b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1612b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1612B8u;
    {
        const bool branch_taken_0x1612b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1612BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612B8u;
        // 0x1612bc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612b8) {
            ctx->pc = 0x1612D8u;
            goto label_1612d8;
        }
    }
    ctx->pc = 0x1612C0u;
label_1612c0:
    // 0x1612c0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1612c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1612c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1612c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1612c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1612c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1612cc: 0x0  nop
    ctx->pc = 0x1612ccu;
    // NOP
    // 0x1612d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1612d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1612d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1612d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1612d8:
    // 0x1612d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1612D8u;
    {
        const bool branch_taken_0x1612d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1612DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612D8u;
        // 0x1612dc: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612d8) {
            ctx->pc = 0x161304u;
            goto label_161304;
        }
    }
    ctx->pc = 0x1612E0u;
label_1612e0:
    // 0x1612e0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1612e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1612e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1612e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1612e8: 0x0  nop
    ctx->pc = 0x1612e8u;
    // NOP
    // 0x1612ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1612ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1612f0: 0x0  nop
    ctx->pc = 0x1612f0u;
    // NOP
    // 0x1612f4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1612F4u;
    {
        const bool branch_taken_0x1612f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1612f4) {
            ctx->pc = 0x161304u;
            goto label_161304;
        }
    }
    ctx->pc = 0x1612FCu;
    // 0x1612fc: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1612fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x161300: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x161300u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
label_161304:
    // 0x161304: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x161304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x161308: 0x18400030  blez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x161308u;
    {
        const bool branch_taken_0x161308 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x161308) {
            ctx->pc = 0x1613CCu;
            goto label_1613cc;
        }
    }
    ctx->pc = 0x161310u;
    // 0x161310: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x161310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x161314: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161314u;
    {
        const bool branch_taken_0x161314 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x161318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161314u;
        // 0x161318: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161314) {
            ctx->pc = 0x161328u;
            goto label_161328;
        }
    }
    ctx->pc = 0x16131Cu;
    // 0x16131c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16131cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161320: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x161320u;
    {
        const bool branch_taken_0x161320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161320u;
        // 0x161324: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161320) {
            ctx->pc = 0x161340u;
            goto label_161340;
        }
    }
    ctx->pc = 0x161328u;
label_161328:
    // 0x161328: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x161328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16132c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16132cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x161330: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161330u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161334: 0x0  nop
    ctx->pc = 0x161334u;
    // NOP
    // 0x161338: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x161338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16133c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x16133cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_161340:
    // 0x161340: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x161340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161344: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x161344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x161348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16134c: 0x0  nop
    ctx->pc = 0x16134cu;
    // NOP
    // 0x161350: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x161350u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x161354: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x161354u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x161358: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x161358u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16135c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16135cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x161360: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x161364: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x161364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x161368: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161368u;
    {
        const bool branch_taken_0x161368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161368u;
        // 0x16136c: 0x460008c1  sub.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161368) {
            ctx->pc = 0x16137Cu;
            goto label_16137c;
        }
    }
    ctx->pc = 0x161370u;
    // 0x161370: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x161370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x161374: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x161374u;
    {
        const bool branch_taken_0x161374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161374u;
        // 0x161378: 0xc42115dc  lwc1        $f1, 0x15DC($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 5596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161374) {
            ctx->pc = 0x1613B4u;
            goto label_1613b4;
        }
    }
    ctx->pc = 0x16137Cu;
label_16137c:
    // 0x16137c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x16137cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x161380: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x161380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x161384: 0x244215c4  addiu       $v0, $v0, 0x15C4
    ctx->pc = 0x161384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5572));
    // 0x161388: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x161388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16138c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16138cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x161390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161394: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x161394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x161398: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x161398u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x16139c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x16139cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1613a0: 0x244215c0  addiu       $v0, $v0, 0x15C0
    ctx->pc = 0x1613a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5568));
    // 0x1613a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1613a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1613a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1613a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1613ac: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x1613acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1613b0: 0x4600085c  madd.s      $f1, $f1, $f0
    ctx->pc = 0x1613b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_1613b4:
    // 0x1613b4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1613b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1613b8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1613b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1613bc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1613bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1613c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1613c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1613c4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1613C4u;
    {
        const bool branch_taken_0x1613c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1613C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613C4u;
        // 0x1613c8: 0x46001000  add.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613c4) {
            ctx->pc = 0x161468u;
            goto label_161468;
        }
    }
    ctx->pc = 0x1613CCu;
label_1613cc:
    // 0x1613cc: 0x4410024  bgez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1613CCu;
    {
        const bool branch_taken_0x1613cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1613cc) {
            ctx->pc = 0x161460u;
            goto label_161460;
        }
    }
    ctx->pc = 0x1613D4u;
    // 0x1613d4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1613d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1613d8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1613d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1613dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1613dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1613e0: 0x0  nop
    ctx->pc = 0x1613e0u;
    // NOP
    // 0x1613e4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1613e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1613e8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1613e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1613ec: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1613ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1613f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1613f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1613f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1613f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1613f8: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x1613f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1613fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1613FCu;
    {
        const bool branch_taken_0x1613fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613FCu;
        // 0x161400: 0x460008c1  sub.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613fc) {
            ctx->pc = 0x161410u;
            goto label_161410;
        }
    }
    ctx->pc = 0x161404u;
    // 0x161404: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x161404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x161408: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x161408u;
    {
        const bool branch_taken_0x161408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161408u;
        // 0x16140c: 0xc4211628  lwc1        $f1, 0x1628($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 5672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161408) {
            ctx->pc = 0x161448u;
            goto label_161448;
        }
    }
    ctx->pc = 0x161410u;
label_161410:
    // 0x161410: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x161410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x161414: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x161414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x161418: 0x244215f4  addiu       $v0, $v0, 0x15F4
    ctx->pc = 0x161418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5620));
    // 0x16141c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x16141cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x161420: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x161420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x161424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161428: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x161428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16142c: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x16142cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x161430: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x161430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x161434: 0x244215f0  addiu       $v0, $v0, 0x15F0
    ctx->pc = 0x161434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5616));
    // 0x161438: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x161438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16143c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16143cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161440: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x161440u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x161444: 0x4600085c  madd.s      $f1, $f1, $f0
    ctx->pc = 0x161444u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_161448:
    // 0x161448: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x161448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16144c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x16144cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161450: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x161450u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x161454: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x161454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x161458: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x161458u;
    {
        const bool branch_taken_0x161458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161458u;
        // 0x16145c: 0x46001000  add.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161458) {
            ctx->pc = 0x161468u;
            goto label_161468;
        }
    }
    ctx->pc = 0x161460u;
label_161460:
    // 0x161460: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x161460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161464: 0x0  nop
    ctx->pc = 0x161464u;
    // NOP
label_161468:
    // 0x161468: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x161468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x16146c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16146cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161470: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161474: 0x3e00008  jr          $ra
    ctx->pc = 0x161474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161474u;
        // 0x161478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16147Cu;
}
