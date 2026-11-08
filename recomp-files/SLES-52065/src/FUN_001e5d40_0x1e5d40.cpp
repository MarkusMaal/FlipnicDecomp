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

// Function: FUN_001e5d40
// Address: 0x1e5d40 - 0x1e5e14
void FUN_001e5d40_0x1e5d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e5d40_0x1e5d40");
#endif

    switch (ctx->pc) {
        case 0x1e5da8u: goto label_1e5da8;
        case 0x1e5dbcu: goto label_1e5dbc;
        case 0x1e5de4u: goto label_1e5de4;
        default: break;
    }

    ctx->pc = 0x1e5d40u;

    // 0x1e5d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e5d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e5d44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e5d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e5d48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e5d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e5d4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e5d50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e5d54: 0x8f828754  lw          $v0, -0x78AC($gp)
    ctx->pc = 0x1e5d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936404)));
    // 0x1e5d58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5D58u;
    {
        const bool branch_taken_0x1e5d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D58u;
        // 0x1e5d5c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d58) {
            ctx->pc = 0x1E5D70u;
            goto label_1e5d70;
        }
    }
    ctx->pc = 0x1E5D60u;
    // 0x1e5d60: 0x8f82875c  lw          $v0, -0x78A4($gp)
    ctx->pc = 0x1e5d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x1e5d64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e5d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e5d68: 0xaf82875c  sw          $v0, -0x78A4($gp)
    ctx->pc = 0x1e5d68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 2));
    // 0x1e5d6c: 0xaf828754  sw          $v0, -0x78AC($gp)
    ctx->pc = 0x1e5d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936404), GPR_U32(ctx, 2));
label_1e5d70:
    // 0x1e5d70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e5d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5d74: 0x8f908754  lw          $s0, -0x78AC($gp)
    ctx->pc = 0x1e5d74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936404)));
    // 0x1e5d78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e5d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e5d7c: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1e5d7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e5d80: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5D80u;
    {
        const bool branch_taken_0x1e5d80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D80u;
        // 0x1e5d84: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d80) {
            ctx->pc = 0x1E5DA0u;
            goto label_1e5da0;
        }
    }
    ctx->pc = 0x1E5D88u;
    // 0x1e5d88: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e5d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e5d8c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e5d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e5d90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5d94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5d98: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E5D98u;
    {
        const bool branch_taken_0x1e5d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d98) {
            ctx->pc = 0x1E5DFCu;
            goto label_1e5dfc;
        }
    }
    ctx->pc = 0x1E5DA0u;
label_1e5da0:
    // 0x1e5da0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E5DA0u;
    SET_GPR_U32(ctx, 31, 0x1E5DA8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E5DA0u, 0x1E5DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5DA8u;
label_1e5da8:
    // 0x1e5da8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5DA8u;
    {
        const bool branch_taken_0x1e5da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DA8u;
        // 0x1e5dac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5da8) {
            ctx->pc = 0x1E5DBCu;
            goto label_1e5dbc;
        }
    }
    ctx->pc = 0x1E5DB0u;
    // 0x1e5db0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e5db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5db4: 0xc079b20  jal         func_1E6C80
    ctx->pc = 0x1E5DB4u;
    SET_GPR_U32(ctx, 31, 0x1E5DBCu);
    ctx->pc = 0x1E5DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5DB4u;
    // 0x1e5db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6C80u, 0x1E5DB4u, 0x1E5DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5DBCu;
label_1e5dbc:
    // 0x1e5dbc: 0x8f828754  lw          $v0, -0x78AC($gp)
    ctx->pc = 0x1e5dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936404)));
    // 0x1e5dc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5DC0u;
    {
        const bool branch_taken_0x1e5dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DC0u;
        // 0x1e5dc4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5dc0) {
            ctx->pc = 0x1E5DD8u;
            goto label_1e5dd8;
        }
    }
    ctx->pc = 0x1E5DC8u;
    // 0x1e5dc8: 0x8f82875c  lw          $v0, -0x78A4($gp)
    ctx->pc = 0x1e5dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x1e5dcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e5dd0: 0xaf82875c  sw          $v0, -0x78A4($gp)
    ctx->pc = 0x1e5dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 2));
    // 0x1e5dd4: 0xaf828754  sw          $v0, -0x78AC($gp)
    ctx->pc = 0x1e5dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936404), GPR_U32(ctx, 2));
label_1e5dd8:
    // 0x1e5dd8: 0x8f868754  lw          $a2, -0x78AC($gp)
    ctx->pc = 0x1e5dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936404)));
    // 0x1e5ddc: 0xc04839c  jal         func_120E70
    ctx->pc = 0x1E5DDCu;
    SET_GPR_U32(ctx, 31, 0x1E5DE4u);
    ctx->pc = 0x1E5DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5DDCu;
    // 0x1e5de0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120E70u, 0x1E5DDCu, 0x1E5DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5DE4u;
label_1e5de4:
    // 0x1e5de4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e5de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5de8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e5de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e5dec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e5decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e5df0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5df4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5df8: 0x0  nop
    ctx->pc = 0x1e5df8u;
    // NOP
label_1e5dfc:
    // 0x1e5dfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e5dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5e00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5e00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5e04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5e08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E0Cu;
        // 0x1e5e10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5E14u;
}
