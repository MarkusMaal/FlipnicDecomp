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

// Function: FUN_00119c90
// Address: 0x119c90 - 0x119d0c
void FUN_00119c90_0x119c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119c90_0x119c90");
#endif

    switch (ctx->pc) {
        case 0x119c90u: goto label_119c90;
        case 0x119c94u: goto label_119c94;
        case 0x119c98u: goto label_119c98;
        case 0x119c9cu: goto label_119c9c;
        case 0x119ca0u: goto label_119ca0;
        case 0x119ca4u: goto label_119ca4;
        case 0x119ca8u: goto label_119ca8;
        case 0x119cacu: goto label_119cac;
        case 0x119cb0u: goto label_119cb0;
        case 0x119cb4u: goto label_119cb4;
        case 0x119cb8u: goto label_119cb8;
        case 0x119cbcu: goto label_119cbc;
        case 0x119cc0u: goto label_119cc0;
        case 0x119cc4u: goto label_119cc4;
        case 0x119cc8u: goto label_119cc8;
        case 0x119cccu: goto label_119ccc;
        case 0x119cd0u: goto label_119cd0;
        case 0x119cd4u: goto label_119cd4;
        case 0x119cd8u: goto label_119cd8;
        case 0x119cdcu: goto label_119cdc;
        case 0x119ce0u: goto label_119ce0;
        case 0x119ce4u: goto label_119ce4;
        case 0x119ce8u: goto label_119ce8;
        case 0x119cecu: goto label_119cec;
        case 0x119cf0u: goto label_119cf0;
        case 0x119cf4u: goto label_119cf4;
        case 0x119cf8u: goto label_119cf8;
        case 0x119cfcu: goto label_119cfc;
        case 0x119d00u: goto label_119d00;
        case 0x119d04u: goto label_119d04;
        case 0x119d08u: goto label_119d08;
        default: break;
    }

    ctx->pc = 0x119c90u;

label_119c90:
    // 0x119c90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_119c94:
    // 0x119c94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x119c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_119c98:
    // 0x119c98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x119c98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_119c9c:
    // 0x119c9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x119c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_119ca0:
    // 0x119ca0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x119ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_119ca4:
    // 0x119ca4: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x119ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_119ca8:
    // 0x119ca8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x119ca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_119cac:
    // 0x119cac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x119cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_119cb0:
    // 0x119cb0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x119cb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_119cb4:
    // 0x119cb4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_119cb8:
    if (ctx->pc == 0x119CB8u) {
        ctx->pc = 0x119CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CB4u;
        // 0x119cb8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x119CBCu;
        goto label_119cbc;
    }
    ctx->pc = 0x119CB4u;
    {
        const bool branch_taken_0x119cb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x119CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CB4u;
        // 0x119cb8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cb4) {
            ctx->pc = 0x119CD4u;
            goto label_119cd4;
        }
    }
    ctx->pc = 0x119CBCu;
label_119cbc:
    // 0x119cbc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x119cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_119cc0:
    // 0x119cc0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x119cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_119cc4:
    // 0x119cc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_119cc8:
    // 0x119cc8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119ccc:
    // 0x119ccc: 0xc04c72c  jal         func_131CB0
label_119cd0:
    if (ctx->pc == 0x119CD0u) {
        ctx->pc = 0x119CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CCCu;
        // 0x119cd0: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x119CD4u;
        goto label_119cd4;
    }
    ctx->pc = 0x119CCCu;
    SET_GPR_U32(ctx, 31, 0x119CD4u);
    ctx->pc = 0x119CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119CCCu;
    // 0x119cd0: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x119CCCu, 0x119CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119CD4u;
label_119cd4:
    // 0x119cd4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x119cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_119cd8:
    // 0x119cd8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x119cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_119cdc:
    // 0x119cdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_119ce0:
    // 0x119ce0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119ce4:
    // 0x119ce4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119ce8:
    // 0x119ce8: 0x8f3900a4  lw          $t9, 0xA4($t9)
    ctx->pc = 0x119ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 164)));
label_119cec:
    // 0x119cec: 0x320f809  jalr        $t9
label_119cf0:
    if (ctx->pc == 0x119CF0u) {
        ctx->pc = 0x119CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CECu;
        // 0x119cf0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x119CF4u;
        goto label_119cf4;
    }
    ctx->pc = 0x119CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119CF4u);
        ctx->pc = 0x119CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CECu;
        // 0x119cf0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119CECu, 0x119CF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119CF4u;
label_119cf4:
    // 0x119cf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_119cf8:
    // 0x119cf8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x119cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_119cfc:
    // 0x119cfc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x119cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_119d00:
    // 0x119d00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x119d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_119d04:
    // 0x119d04: 0x3e00008  jr          $ra
label_119d08:
    if (ctx->pc == 0x119D08u) {
        ctx->pc = 0x119D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D04u;
        // 0x119d08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119D0Cu;
        goto label_fallthrough_0x119d04;
    }
    ctx->pc = 0x119D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D04u;
        // 0x119d08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x119d04:
    ctx->pc = 0x119D0Cu;
}
