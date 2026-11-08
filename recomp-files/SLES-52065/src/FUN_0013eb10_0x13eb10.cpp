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

// Function: FUN_0013eb10
// Address: 0x13eb10 - 0x13ebd0
void FUN_0013eb10_0x13eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013eb10_0x13eb10");
#endif

    switch (ctx->pc) {
        case 0x13eb3cu: goto label_13eb3c;
        case 0x13ebc4u: goto label_13ebc4;
        default: break;
    }

    ctx->pc = 0x13eb10u;

    // 0x13eb10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13eb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13eb14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13eb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13eb18: 0x8c860124  lw          $a2, 0x124($a0)
    ctx->pc = 0x13eb18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x13eb1c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x13EB1Cu;
    {
        const bool branch_taken_0x13eb1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eb1c) {
            ctx->pc = 0x13EB34u;
            goto label_13eb34;
        }
    }
    ctx->pc = 0x13EB24u;
    // 0x13eb24: 0x8c83017c  lw          $v1, 0x17C($a0)
    ctx->pc = 0x13eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x13eb28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13eb2c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13EB2Cu;
    {
        const bool branch_taken_0x13eb2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13eb2c) {
            ctx->pc = 0x13EB44u;
            goto label_13eb44;
        }
    }
    ctx->pc = 0x13EB34u;
label_13eb34:
    // 0x13eb34: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x13EB34u;
    SET_GPR_U32(ctx, 31, 0x13EB3Cu);
    ctx->pc = 0x13EB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EB34u;
    // 0x13eb38: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x13EB34u, 0x13EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB3Cu;
label_13eb3c:
    // 0x13eb3c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x13EB3Cu;
    {
        const bool branch_taken_0x13eb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB3Cu;
        // 0x13eb40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb3c) {
            ctx->pc = 0x13EBC8u;
            goto label_13ebc8;
        }
    }
    ctx->pc = 0x13EB44u;
label_13eb44:
    // 0x13eb44: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x13eb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eb48: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13eb48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13eb4c: 0x0  nop
    ctx->pc = 0x13eb4cu;
    // NOP
    // 0x13eb50: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x13eb50u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x13eb54: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x13eb54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13eb58: 0x0  nop
    ctx->pc = 0x13eb58u;
    // NOP
    // 0x13eb5c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x13EB5Cu;
    {
        const bool branch_taken_0x13eb5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13eb5c) {
            ctx->pc = 0x13EB88u;
            goto label_13eb88;
        }
    }
    ctx->pc = 0x13EB64u;
    // 0x13eb64: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x13eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x13eb68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EB68u;
    {
        const bool branch_taken_0x13eb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eb68) {
            ctx->pc = 0x13EB84u;
            goto label_13eb84;
        }
    }
    ctx->pc = 0x13EB70u;
    // 0x13eb70: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x13eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13eb74: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x13eb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eb78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13eb78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13eb7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13EB7Cu;
    {
        const bool branch_taken_0x13eb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB7Cu;
        // 0x13eb80: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb7c) {
            ctx->pc = 0x13EB88u;
            goto label_13eb88;
        }
    }
    ctx->pc = 0x13EB84u;
label_13eb84:
    // 0x13eb84: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x13eb84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_13eb88:
    // 0x13eb88: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x13eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13eb8c: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x13eb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eb90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13eb90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13eb94: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x13eb94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13eb98: 0x0  nop
    ctx->pc = 0x13eb98u;
    // NOP
    // 0x13eb9c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x13EB9Cu;
    {
        const bool branch_taken_0x13eb9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13eb9c) {
            ctx->pc = 0x13EBBCu;
            goto label_13ebbc;
        }
    }
    ctx->pc = 0x13EBA4u;
    // 0x13eba4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x13eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x13eba8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EBA8u;
    {
        const bool branch_taken_0x13eba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eba8) {
            ctx->pc = 0x13EBB8u;
            goto label_13ebb8;
        }
    }
    ctx->pc = 0x13EBB0u;
    // 0x13ebb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13EBB0u;
    {
        const bool branch_taken_0x13ebb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBB0u;
        // 0x13ebb4: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebb0) {
            ctx->pc = 0x13EBBCu;
            goto label_13ebbc;
        }
    }
    ctx->pc = 0x13EBB8u;
label_13ebb8:
    // 0x13ebb8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x13ebb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_13ebbc:
    // 0x13ebbc: 0xc05ff20  jal         func_17FC80
    ctx->pc = 0x13EBBCu;
    SET_GPR_U32(ctx, 31, 0x13EBC4u);
    ctx->pc = 0x13EBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EBBCu;
    // 0x13ebc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FC80u, 0x13EBBCu, 0x13EBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EBC4u;
label_13ebc4:
    // 0x13ebc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ebc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ebc8:
    // 0x13ebc8: 0x3e00008  jr          $ra
    ctx->pc = 0x13EBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBC8u;
        // 0x13ebcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EBD0u;
}
