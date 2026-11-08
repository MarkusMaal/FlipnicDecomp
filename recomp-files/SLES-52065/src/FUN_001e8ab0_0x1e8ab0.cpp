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

// Function: FUN_001e8ab0
// Address: 0x1e8ab0 - 0x1e8b90
void FUN_001e8ab0_0x1e8ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e8ab0_0x1e8ab0");
#endif

    switch (ctx->pc) {
        case 0x1e8ad4u: goto label_1e8ad4;
        case 0x1e8b04u: goto label_1e8b04;
        case 0x1e8b10u: goto label_1e8b10;
        case 0x1e8b1cu: goto label_1e8b1c;
        case 0x1e8b34u: goto label_1e8b34;
        case 0x1e8b40u: goto label_1e8b40;
        case 0x1e8b58u: goto label_1e8b58;
        default: break;
    }

    ctx->pc = 0x1e8ab0u;

    // 0x1e8ab0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e8ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e8ab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e8ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e8ab8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1e8ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1e8abc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8ac0: 0x83828770  lb          $v0, -0x7890($gp)
    ctx->pc = 0x1e8ac0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936432)));
    // 0x1e8ac4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E8AC4u;
    {
        const bool branch_taken_0x1e8ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8AC4u;
        // 0x1e8ac8: 0x3a0f021  addu        $fp, $sp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ac4) {
            ctx->pc = 0x1E8B48u;
            goto label_1e8b48;
        }
    }
    ctx->pc = 0x1E8ACCu;
    // 0x1e8acc: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E8ACCu;
    SET_GPR_U32(ctx, 31, 0x1E8AD4u);
    ctx->pc = 0x1E8AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8ACCu;
    // 0x1e8ad0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E8ACCu, 0x1E8AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8AD4u;
label_1e8ad4:
    // 0x1e8ad4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E8AD4u;
    {
        const bool branch_taken_0x1e8ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8AD4u;
        // 0x1e8ad8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ad4) {
            ctx->pc = 0x1E8B04u;
            goto label_1e8b04;
        }
    }
    ctx->pc = 0x1E8ADCu;
    // 0x1e8adc: 0xafd0005c  sw          $s0, 0x5C($fp)
    ctx->pc = 0x1e8adcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 92), GPR_U32(ctx, 16));
    // 0x1e8ae0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1e8ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1e8ae4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1e8ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1e8ae8: 0x24a53fa0  addiu       $a1, $a1, 0x3FA0
    ctx->pc = 0x1e8ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16288));
    // 0x1e8aec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e8aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1e8af0: 0x27c60058  addiu       $a2, $fp, 0x58
    ctx->pc = 0x1e8af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 88));
    // 0x1e8af4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e8af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1e8af8: 0x8fc2005c  lw          $v0, 0x5C($fp)
    ctx->pc = 0x1e8af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x1e8afc: 0xc04889c  jal         func_122270
    ctx->pc = 0x1E8AFCu;
    SET_GPR_U32(ctx, 31, 0x1E8B04u);
    ctx->pc = 0x1E8B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8AFCu;
    // 0x1e8b00: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1E8AFCu, 0x1E8B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8B04u;
label_1e8b04:
    // 0x1e8b04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e8b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b08: 0xc07a370  jal         func_1E8DC0
    ctx->pc = 0x1E8B08u;
    SET_GPR_U32(ctx, 31, 0x1E8B10u);
    ctx->pc = 0x1E8B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8B08u;
    // 0x1e8b0c: 0x27c40050  addiu       $a0, $fp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8DC0u, 0x1E8B08u, 0x1E8B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8B10u;
label_1e8b10:
    // 0x1e8b10: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x1e8b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x1e8b14: 0xc04814c  jal         func_120530
    ctx->pc = 0x1E8B14u;
    SET_GPR_U32(ctx, 31, 0x1E8B1Cu);
    ctx->pc = 0x1E8B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8B14u;
    // 0x1e8b18: 0x27c50050  addiu       $a1, $fp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120530u, 0x1E8B14u, 0x1E8B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8B1Cu;
label_1e8b1c:
    // 0x1e8b1c: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x1e8b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x1e8b20: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e8b20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1e8b24: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x1e8b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x1e8b28: 0x24a50110  addiu       $a1, $a1, 0x110
    ctx->pc = 0x1e8b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x1e8b2c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x1E8B2Cu;
    SET_GPR_U32(ctx, 31, 0x1E8B34u);
    ctx->pc = 0x1E8B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8B2Cu;
    // 0x1e8b30: 0x24c6ba38  addiu       $a2, $a2, -0x45C8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1E8B2Cu, 0x1E8B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8B34u;
label_1e8b34:
    // 0x1e8b34: 0x27c40050  addiu       $a0, $fp, 0x50
    ctx->pc = 0x1e8b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x1e8b38: 0xc0482a4  jal         func_120A90
    ctx->pc = 0x1E8B38u;
    SET_GPR_U32(ctx, 31, 0x1E8B40u);
    ctx->pc = 0x1E8B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8B38u;
    // 0x1e8b3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A90u, 0x1E8B38u, 0x1E8B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8B40u;
label_1e8b40:
    // 0x1e8b40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e8b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8b44: 0xa3828770  sb          $v0, -0x7890($gp)
    ctx->pc = 0x1e8b44u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936432), (uint8_t)GPR_U32(ctx, 2));
label_1e8b48:
    // 0x1e8b48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E8B48u;
    {
        const bool branch_taken_0x1e8b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B48u;
        // 0x1e8b4c: 0x27828778  addiu       $v0, $gp, -0x7888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b48) {
            ctx->pc = 0x1E8B78u;
            goto label_1e8b78;
        }
    }
    ctx->pc = 0x1E8B50u;
    // 0x1e8b50: 0xc07a704  jal         func_1E9C10
    ctx->pc = 0x1E8B50u;
    SET_GPR_U32(ctx, 31, 0x1E8B58u);
    ctx->pc = 0x1E8B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8B50u;
    // 0x1e8b54: 0x27c40030  addiu       $a0, $fp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E8B50u, 0x1E8B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8B58u;
label_1e8b58:
    // 0x1e8b58: 0x0  nop
    ctx->pc = 0x1e8b58u;
    // NOP
    // 0x1e8b5c: 0x0  nop
    ctx->pc = 0x1e8b5cu;
    // NOP
    // 0x1e8b60: 0x0  nop
    ctx->pc = 0x1e8b60u;
    // NOP
    // 0x1e8b64: 0x0  nop
    ctx->pc = 0x1e8b64u;
    // NOP
    // 0x1e8b68: 0x0  nop
    ctx->pc = 0x1e8b68u;
    // NOP
    // 0x1e8b6c: 0x0  nop
    ctx->pc = 0x1e8b6cu;
    // NOP
    // 0x1e8b70: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E8B70u;
    {
        const bool branch_taken_0x1e8b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8b70) {
            ctx->pc = 0x1E8B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8b58;
        }
    }
    ctx->pc = 0x1E8B78u;
label_1e8b78:
    // 0x1e8b78: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e8b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x1e8b7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e8b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8b80: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1e8b80u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8b84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8b88: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B88u;
        // 0x1e8b8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8B90u;
}
