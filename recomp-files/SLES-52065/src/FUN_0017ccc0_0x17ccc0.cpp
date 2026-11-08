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

// Function: FUN_0017ccc0
// Address: 0x17ccc0 - 0x17cdd0
void FUN_0017ccc0_0x17ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017ccc0_0x17ccc0");
#endif

    switch (ctx->pc) {
        case 0x17cce4u: goto label_17cce4;
        default: break;
    }

    ctx->pc = 0x17ccc0u;

    // 0x17ccc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17ccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17ccc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17ccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17ccc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17ccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17cccc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17ccccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17ccd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ccd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ccd4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17ccd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17ccd8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17ccd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ccdc: 0xc05f2e8  jal         func_17CBA0
    ctx->pc = 0x17CCDCu;
    SET_GPR_U32(ctx, 31, 0x17CCE4u);
    ctx->pc = 0x17CCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CCDCu;
    // 0x17cce0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CBA0u, 0x17CCDCu, 0x17CCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CCE4u;
label_17cce4:
    // 0x17cce4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17cce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cce8: 0x0  nop
    ctx->pc = 0x17cce8u;
    // NOP
    // 0x17ccec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17ccecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ccf0: 0x0  nop
    ctx->pc = 0x17ccf0u;
    // NOP
    // 0x17ccf4: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x17CCF4u;
    {
        const bool branch_taken_0x17ccf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ccf4) {
            ctx->pc = 0x17CD9Cu;
            goto label_17cd9c;
        }
    }
    ctx->pc = 0x17CCFCu;
    // 0x17ccfc: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x17ccfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17cd00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17cd04: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x17cd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x17cd08: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x17cd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17cd0c: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x17cd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17cd10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17cd10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cd14: 0x4604a100  add.s       $f4, $f20, $f4
    ctx->pc = 0x17cd14u;
    ctx->f[4] = FPU_ADD_S(ctx->f[20], ctx->f[4]);
    // 0x17cd18: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x17cd18u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[4]); }
    // 0x17cd1c: 0x4605a140  add.s       $f5, $f20, $f5
    ctx->pc = 0x17cd1cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[20], ctx->f[5]);
    // 0x17cd20: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x17cd20u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x17cd24: 0x46051883  div.s       $f2, $f3, $f5
    ctx->pc = 0x17cd24u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[5]); }
    // 0x17cd28: 0x0  nop
    ctx->pc = 0x17cd28u;
    // NOP
    // 0x17cd2c: 0x4602109c  madd.s      $f2, $f2, $f2
    ctx->pc = 0x17cd2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x17cd30: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x17cd30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17cd34: 0x0  nop
    ctx->pc = 0x17cd34u;
    // NOP
    // 0x17cd38: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x17CD38u;
    {
        const bool branch_taken_0x17cd38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD38u;
        // 0x17cd3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd38) {
            ctx->pc = 0x17CD88u;
            goto label_17cd88;
        }
    }
    ctx->pc = 0x17CD40u;
    // 0x17cd40: 0x0  nop
    ctx->pc = 0x17cd40u;
    // NOP
    // 0x17cd44: 0x0  nop
    ctx->pc = 0x17cd44u;
    // NOP
    // 0x17cd48: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x17cd48u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x17cd4c: 0x0  nop
    ctx->pc = 0x17cd4cu;
    // NOP
    // 0x17cd50: 0x0  nop
    ctx->pc = 0x17cd50u;
    // NOP
    // 0x17cd54: 0x0  nop
    ctx->pc = 0x17cd54u;
    // NOP
    // 0x17cd58: 0x46010084  c1          0x10084
    ctx->pc = 0x17cd58u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x17cd5c: 0x3c023f81  lui         $v0, 0x3F81
    ctx->pc = 0x17cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16257 << 16));
    // 0x17cd60: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x17cd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x17cd64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cd68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17cd68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cd6c: 0x0  nop
    ctx->pc = 0x17cd6cu;
    // NOP
    // 0x17cd70: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x17cd70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x17cd74: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x17cd74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x17cd78: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x17cd78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x17cd7c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x17cd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cd80: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x17cd80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x17cd84: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x17cd84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_17cd88:
    // 0x17cd88: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CD88u;
    {
        const bool branch_taken_0x17cd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cd88) {
            ctx->pc = 0x17CD9Cu;
            goto label_17cd9c;
        }
    }
    ctx->pc = 0x17CD90u;
    // 0x17cd90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17cd90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cd94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17CD94u;
    {
        const bool branch_taken_0x17cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD94u;
        // 0x17cd98: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd94) {
            ctx->pc = 0x17CDBCu;
            goto label_17cdbc;
        }
    }
    ctx->pc = 0x17CD9Cu;
label_17cd9c:
    // 0x17cd9c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17cd9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cda0: 0x0  nop
    ctx->pc = 0x17cda0u;
    // NOP
    // 0x17cda4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17cda4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17cda8: 0x0  nop
    ctx->pc = 0x17cda8u;
    // NOP
    // 0x17cdac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x17CDACu;
    {
        const bool branch_taken_0x17cdac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDACu;
        // 0x17cdb0: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cdac) {
            ctx->pc = 0x17CDB8u;
            goto label_17cdb8;
        }
    }
    ctx->pc = 0x17CDB4u;
    // 0x17cdb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cdb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17cdb8:
    // 0x17cdb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17cdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17cdbc:
    // 0x17cdbc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17cdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17cdc0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17cdc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cdc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17cdc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x17CDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDC8u;
        // 0x17cdcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CDD0u;
}
