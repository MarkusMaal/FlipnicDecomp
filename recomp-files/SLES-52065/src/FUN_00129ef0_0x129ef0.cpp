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

// Function: FUN_00129ef0
// Address: 0x129ef0 - 0x129f70
void FUN_00129ef0_0x129ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00129ef0_0x129ef0");
#endif

    switch (ctx->pc) {
        case 0x129f04u: goto label_129f04;
        default: break;
    }

    ctx->pc = 0x129ef0u;

    // 0x129ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x129ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x129ef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x129ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x129ef8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x129ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x129efc: 0xc04c6ec  jal         func_131BB0
    ctx->pc = 0x129EFCu;
    SET_GPR_U32(ctx, 31, 0x129F04u);
    ctx->pc = 0x129F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129EFCu;
    // 0x129f00: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BB0u, 0x129EFCu, 0x129F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129F04u;
label_129f04:
    // 0x129f04: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x129f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129f08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x129f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x129f0c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x129f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129f14: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x129f14u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x129f18: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x129f18u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x129f1c: 0x46010044  c1          0x10044
    ctx->pc = 0x129f1cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x129f20: 0x0  nop
    ctx->pc = 0x129f20u;
    // NOP
    // 0x129f24: 0x0  nop
    ctx->pc = 0x129f24u;
    // NOP
    // 0x129f28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129f28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129f2c: 0x0  nop
    ctx->pc = 0x129f2cu;
    // NOP
    // 0x129f30: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x129F30u;
    {
        const bool branch_taken_0x129f30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F30u;
        // 0x129f34: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f30) {
            ctx->pc = 0x129F40u;
            goto label_129f40;
        }
    }
    ctx->pc = 0x129F38u;
    // 0x129f38: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x129F38u;
    {
        const bool branch_taken_0x129f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F38u;
        // 0x129f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f38) {
            ctx->pc = 0x129F64u;
            goto label_129f64;
        }
    }
    ctx->pc = 0x129F40u;
label_129f40:
    // 0x129f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129f44: 0x0  nop
    ctx->pc = 0x129f44u;
    // NOP
    // 0x129f48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129f48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129f4c: 0x0  nop
    ctx->pc = 0x129f4cu;
    // NOP
    // 0x129f50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x129F50u;
    {
        const bool branch_taken_0x129f50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129f50) {
            ctx->pc = 0x129F60u;
            goto label_129f60;
        }
    }
    ctx->pc = 0x129F58u;
    // 0x129f58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x129F58u;
    {
        const bool branch_taken_0x129f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F58u;
        // 0x129f5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f58) {
            ctx->pc = 0x129F64u;
            goto label_129f64;
        }
    }
    ctx->pc = 0x129F60u;
label_129f60:
    // 0x129f60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x129f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_129f64:
    // 0x129f64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x129f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129f68: 0x3e00008  jr          $ra
    ctx->pc = 0x129F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F68u;
        // 0x129f6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129F70u;
}
