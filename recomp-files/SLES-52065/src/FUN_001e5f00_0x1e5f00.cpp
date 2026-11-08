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

// Function: FUN_001e5f00
// Address: 0x1e5f00 - 0x1e5fd8
void FUN_001e5f00_0x1e5f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e5f00_0x1e5f00");
#endif

    switch (ctx->pc) {
        case 0x1e5f64u: goto label_1e5f64;
        case 0x1e5facu: goto label_1e5fac;
        default: break;
    }

    ctx->pc = 0x1e5f00u;

    // 0x1e5f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e5f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e5f04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e5f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e5f08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e5f0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e5f10: 0x8f828788  lw          $v0, -0x7878($gp)
    ctx->pc = 0x1e5f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936456)));
    // 0x1e5f14: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5F14u;
    {
        const bool branch_taken_0x1e5f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F14u;
        // 0x1e5f18: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f14) {
            ctx->pc = 0x1E5F2Cu;
            goto label_1e5f2c;
        }
    }
    ctx->pc = 0x1E5F1Cu;
    // 0x1e5f1c: 0x8f82875c  lw          $v0, -0x78A4($gp)
    ctx->pc = 0x1e5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x1e5f20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e5f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e5f24: 0xaf82875c  sw          $v0, -0x78A4($gp)
    ctx->pc = 0x1e5f24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 2));
    // 0x1e5f28: 0xaf828788  sw          $v0, -0x7878($gp)
    ctx->pc = 0x1e5f28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 2));
label_1e5f2c:
    // 0x1e5f2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e5f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5f30: 0x8f908788  lw          $s0, -0x7878($gp)
    ctx->pc = 0x1e5f30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936456)));
    // 0x1e5f34: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e5f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e5f38: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1e5f38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e5f3c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5F3Cu;
    {
        const bool branch_taken_0x1e5f3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F3Cu;
        // 0x1e5f40: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f3c) {
            ctx->pc = 0x1E5F5Cu;
            goto label_1e5f5c;
        }
    }
    ctx->pc = 0x1E5F44u;
    // 0x1e5f44: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e5f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e5f48: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e5f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e5f4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5f50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e5f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5f54: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E5F54u;
    {
        const bool branch_taken_0x1e5f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5f54) {
            ctx->pc = 0x1E5FC4u;
            goto label_1e5fc4;
        }
    }
    ctx->pc = 0x1E5F5Cu;
label_1e5f5c:
    // 0x1e5f5c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E5F5Cu;
    SET_GPR_U32(ctx, 31, 0x1E5F64u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E5F5Cu, 0x1E5F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5F64u;
label_1e5f64:
    // 0x1e5f64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5F64u;
    {
        const bool branch_taken_0x1e5f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F64u;
        // 0x1e5f68: 0x3c040023  lui         $a0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f64) {
            ctx->pc = 0x1E5F84u;
            goto label_1e5f84;
        }
    }
    ctx->pc = 0x1E5F6Cu;
    // 0x1e5f6c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e5f70: 0x24848850  addiu       $a0, $a0, -0x77B0
    ctx->pc = 0x1e5f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936656));
    // 0x1e5f74: 0x2463c270  addiu       $v1, $v1, -0x3D90
    ctx->pc = 0x1e5f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951536));
    // 0x1e5f78: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1e5f78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1e5f7c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e5f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e5f80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e5f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e5f84:
    // 0x1e5f84: 0x8f838788  lw          $v1, -0x7878($gp)
    ctx->pc = 0x1e5f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936456)));
    // 0x1e5f88: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5F88u;
    {
        const bool branch_taken_0x1e5f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F88u;
        // 0x1e5f8c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f88) {
            ctx->pc = 0x1E5FA0u;
            goto label_1e5fa0;
        }
    }
    ctx->pc = 0x1E5F90u;
    // 0x1e5f90: 0x8f83875c  lw          $v1, -0x78A4($gp)
    ctx->pc = 0x1e5f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x1e5f94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e5f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e5f98: 0xaf83875c  sw          $v1, -0x78A4($gp)
    ctx->pc = 0x1e5f98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 3));
    // 0x1e5f9c: 0xaf838788  sw          $v1, -0x7878($gp)
    ctx->pc = 0x1e5f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 3));
label_1e5fa0:
    // 0x1e5fa0: 0x8f868788  lw          $a2, -0x7878($gp)
    ctx->pc = 0x1e5fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936456)));
    // 0x1e5fa4: 0xc04839c  jal         func_120E70
    ctx->pc = 0x1E5FA4u;
    SET_GPR_U32(ctx, 31, 0x1E5FACu);
    ctx->pc = 0x1E5FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5FA4u;
    // 0x1e5fa8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120E70u, 0x1E5FA4u, 0x1E5FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5FACu;
label_1e5fac:
    // 0x1e5fac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e5facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5fb0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e5fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e5fb4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e5fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e5fb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5fbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e5fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5fc0: 0x0  nop
    ctx->pc = 0x1e5fc0u;
    // NOP
label_1e5fc4:
    // 0x1e5fc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e5fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5fc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5fcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5FD0u;
        // 0x1e5fd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5FD8u;
}
