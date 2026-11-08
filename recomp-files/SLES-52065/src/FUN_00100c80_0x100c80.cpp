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

// Function: FUN_00100c80
// Address: 0x100c80 - 0x100d9c
void FUN_00100c80_0x100c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00100c80_0x100c80");
#endif

    switch (ctx->pc) {
        case 0x100d2cu: goto label_100d2c;
        case 0x100d4cu: goto label_100d4c;
        case 0x100d68u: goto label_100d68;
        case 0x100d80u: goto label_100d80;
        default: break;
    }

    ctx->pc = 0x100c80u;

    // 0x100c80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x100c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x100c84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x100c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x100c88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x100c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x100c8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x100c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x100c90: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x100c90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x100c98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x100c9c: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x100c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x100ca0: 0x8ca42cd0  lw          $a0, 0x2CD0($a1)
    ctx->pc = 0x100ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11472)));
    // 0x100ca4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100CA4u;
    {
        const bool branch_taken_0x100ca4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x100CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CA4u;
        // 0x100ca8: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ca4) {
            ctx->pc = 0x100CB4u;
            goto label_100cb4;
        }
    }
    ctx->pc = 0x100CACu;
    // 0x100cac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x100CACu;
    {
        const bool branch_taken_0x100cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CACu;
        // 0x100cb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100cac) {
            ctx->pc = 0x100CCCu;
            goto label_100ccc;
        }
    }
    ctx->pc = 0x100CB4u;
label_100cb4:
    // 0x100cb4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x100cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x100cb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x100cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x100cbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x100cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x100cc0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x100cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x100cc4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x100cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x100cc8: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x100cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_100ccc:
    // 0x100ccc: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x100CCCu;
    {
        const bool branch_taken_0x100ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x100ccc) {
            ctx->pc = 0x100D80u;
            goto label_100d80;
        }
    }
    ctx->pc = 0x100CD4u;
    // 0x100cd4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100CD4u;
    {
        const bool branch_taken_0x100cd4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x100CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CD4u;
        // 0x100cd8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100cd4) {
            ctx->pc = 0x100CE4u;
            goto label_100ce4;
        }
    }
    ctx->pc = 0x100CDCu;
    // 0x100cdc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x100CDCu;
    {
        const bool branch_taken_0x100cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CDCu;
        // 0x100ce0: 0x846401e8  lh          $a0, 0x1E8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100cdc) {
            ctx->pc = 0x100D08u;
            goto label_100d08;
        }
    }
    ctx->pc = 0x100CE4u;
label_100ce4:
    // 0x100ce4: 0x8ca42cd0  lw          $a0, 0x2CD0($a1)
    ctx->pc = 0x100ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11472)));
    // 0x100ce8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x100ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x100cec: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x100cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x100cf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x100cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x100cf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x100cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x100cf8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x100cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x100cfc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x100cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x100d00: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x100d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x100d04: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x100d04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_100d08:
    // 0x100d08: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x100d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x100d0c: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x100D0Cu;
    {
        const bool branch_taken_0x100d0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x100d0c) {
            ctx->pc = 0x100D80u;
            goto label_100d80;
        }
    }
    ctx->pc = 0x100D14u;
    // 0x100d14: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x100d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100d18: 0x8c502c20  lw          $s0, 0x2C20($v0)
    ctx->pc = 0x100d18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11296)));
    // 0x100d1c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x100d1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x100d20: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x100D20u;
    {
        const bool branch_taken_0x100d20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x100D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D20u;
        // 0x100d24: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d20) {
            ctx->pc = 0x100D60u;
            goto label_100d60;
        }
    }
    ctx->pc = 0x100D28u;
    // 0x100d28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x100d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100d2c:
    // 0x100d2c: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x100d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100d30: 0x8c422c1c  lw          $v0, 0x2C1C($v0)
    ctx->pc = 0x100d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11292)));
    // 0x100d34: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x100d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x100d38: 0x90420042  lbu         $v0, 0x42($v0)
    ctx->pc = 0x100d38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 66)));
    // 0x100d3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100D3Cu;
    {
        const bool branch_taken_0x100d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D3Cu;
        // 0x100d40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d3c) {
            ctx->pc = 0x100D4Cu;
            goto label_100d4c;
        }
    }
    ctx->pc = 0x100D44u;
    // 0x100d44: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x100D44u;
    SET_GPR_U32(ctx, 31, 0x100D4Cu);
    ctx->pc = 0x100D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D44u;
    // 0x100d48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x100D44u, 0x100D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D4Cu;
label_100d4c:
    // 0x100d4c: 0x0  nop
    ctx->pc = 0x100d4cu;
    // NOP
    // 0x100d50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x100d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x100d54: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x100d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x100d58: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x100D58u;
    {
        const bool branch_taken_0x100d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D58u;
        // 0x100d5c: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d58) {
            ctx->pc = 0x100D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100d2c;
        }
    }
    ctx->pc = 0x100D60u;
label_100d60:
    // 0x100d60: 0xc054790  jal         func_151E40
    ctx->pc = 0x100D60u;
    SET_GPR_U32(ctx, 31, 0x100D68u);
    ctx->pc = 0x100D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D60u;
    // 0x100d64: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151E40u, 0x100D60u, 0x100D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D68u;
label_100d68:
    // 0x100d68: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x100d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100d6c: 0x8c832c04  lw          $v1, 0x2C04($a0)
    ctx->pc = 0x100d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11268)));
    // 0x100d70: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x100D70u;
    {
        const bool branch_taken_0x100d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x100d70) {
            ctx->pc = 0x100D80u;
            goto label_100d80;
        }
    }
    ctx->pc = 0x100D78u;
    // 0x100d78: 0xc0574d8  jal         func_15D360
    ctx->pc = 0x100D78u;
    SET_GPR_U32(ctx, 31, 0x100D80u);
    ctx->pc = 0x15D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D360u, 0x100D78u, 0x100D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D80u;
label_100d80:
    // 0x100d80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x100d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100d84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x100d84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100d88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x100d88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100d8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x100d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100d90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100d94: 0x3e00008  jr          $ra
    ctx->pc = 0x100D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D94u;
        // 0x100d98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100D9Cu;
}
