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

// Function: FUN_0017bd50
// Address: 0x17bd50 - 0x17be58
void FUN_0017bd50_0x17bd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017bd50_0x17bd50");
#endif

    switch (ctx->pc) {
        case 0x17bd98u: goto label_17bd98;
        case 0x17be30u: goto label_17be30;
        default: break;
    }

    ctx->pc = 0x17bd50u;

    // 0x17bd50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17bd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17bd54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17bd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17bd58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17bd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17bd5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17bd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17bd60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17bd60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17bd68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17bd68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd6c: 0x8c820210  lw          $v0, 0x210($a0)
    ctx->pc = 0x17bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x17bd70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BD70u;
    {
        const bool branch_taken_0x17bd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD70u;
        // 0x17bd74: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd70) {
            ctx->pc = 0x17BD80u;
            goto label_17bd80;
        }
    }
    ctx->pc = 0x17BD78u;
    // 0x17bd78: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x17BD78u;
    {
        const bool branch_taken_0x17bd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD78u;
        // 0x17bd7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd78) {
            ctx->pc = 0x17BE40u;
            goto label_17be40;
        }
    }
    ctx->pc = 0x17BD80u;
label_17bd80:
    // 0x17bd80: 0xc62c01c0  lwc1        $f12, 0x1C0($s1)
    ctx->pc = 0x17bd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17bd84: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x17bd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x17bd88: 0xc64d0200  lwc1        $f13, 0x200($s2)
    ctx->pc = 0x17bd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x17bd8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17bd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd90: 0xc054e78  jal         func_1539E0
    ctx->pc = 0x17BD90u;
    SET_GPR_U32(ctx, 31, 0x17BD98u);
    ctx->pc = 0x17BD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD90u;
    // 0x17bd94: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539E0u, 0x17BD90u, 0x17BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD98u;
label_17bd98:
    // 0x17bd98: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x17bd98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17bd9c: 0x0  nop
    ctx->pc = 0x17bd9cu;
    // NOP
    // 0x17bda0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x17bda0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17bda4: 0x0  nop
    ctx->pc = 0x17bda4u;
    // NOP
    // 0x17bda8: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x17BDA8u;
    {
        const bool branch_taken_0x17bda8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BDA8u;
        // 0x17bdac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bda8) {
            ctx->pc = 0x17BE40u;
            goto label_17be40;
        }
    }
    ctx->pc = 0x17BDB0u;
    // 0x17bdb0: 0xc6220300  lwc1        $f2, 0x300($s1)
    ctx->pc = 0x17bdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17bdb4: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x17bdb4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x17bdb8: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x17bdb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17bdbc: 0x0  nop
    ctx->pc = 0x17bdbcu;
    // NOP
    // 0x17bdc0: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x17BDC0u;
    {
        const bool branch_taken_0x17bdc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17bdc0) {
            ctx->pc = 0x17BE3Cu;
            goto label_17be3c;
        }
    }
    ctx->pc = 0x17BDC8u;
    // 0x17bdc8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x17bdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17bdcc: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x17bdccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17bdd0: 0x0  nop
    ctx->pc = 0x17bdd0u;
    // NOP
    // 0x17bdd4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x17BDD4u;
    {
        const bool branch_taken_0x17bdd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BDD4u;
        // 0x17bdd8: 0x46020800  add.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bdd4) {
            ctx->pc = 0x17BE3Cu;
            goto label_17be3c;
        }
    }
    ctx->pc = 0x17BDDCu;
    // 0x17bddc: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x17bddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17bde0: 0x0  nop
    ctx->pc = 0x17bde0u;
    // NOP
    // 0x17bde4: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x17BDE4u;
    {
        const bool branch_taken_0x17bde4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17bde4) {
            ctx->pc = 0x17BE3Cu;
            goto label_17be3c;
        }
    }
    ctx->pc = 0x17BDECu;
    // 0x17bdec: 0xc6200308  lwc1        $f0, 0x308($s1)
    ctx->pc = 0x17bdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bdf0: 0xc62301c0  lwc1        $f3, 0x1C0($s1)
    ctx->pc = 0x17bdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17bdf4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17bdf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17bdf8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x17bdf8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x17bdfc: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x17bdfcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x17be00: 0xc6400200  lwc1        $f0, 0x200($s2)
    ctx->pc = 0x17be00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17be04: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x17be04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x17be08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17be08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17be0c: 0x0  nop
    ctx->pc = 0x17be0cu;
    // NOP
    // 0x17be10: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x17BE10u;
    {
        const bool branch_taken_0x17be10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17be10) {
            ctx->pc = 0x17BE3Cu;
            goto label_17be3c;
        }
    }
    ctx->pc = 0x17BE18u;
    // 0x17be18: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x17be18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17be1c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17be20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17be20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17be24: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x17be24u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x17be28: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17BE28u;
    SET_GPR_U32(ctx, 31, 0x17BE30u);
    ctx->pc = 0x17BE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BE28u;
    // 0x17be2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17BE28u, 0x17BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE30u;
label_17be30:
    // 0x17be30: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x17be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17be34: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17be34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17be38: 0xae420210  sw          $v0, 0x210($s2)
    ctx->pc = 0x17be38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 528), GPR_U32(ctx, 2));
label_17be3c:
    // 0x17be3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17be3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17be40:
    // 0x17be40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17be40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17be44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17be44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17be48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17be48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17be4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17be4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17be50: 0x3e00008  jr          $ra
    ctx->pc = 0x17BE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE50u;
        // 0x17be54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BE58u;
}
