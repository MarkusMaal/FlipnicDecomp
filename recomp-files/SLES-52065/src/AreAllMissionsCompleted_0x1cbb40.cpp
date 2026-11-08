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

// Function: AreAllMissionsCompleted
// Address: 0x1cbb40 - 0x1cbbcc
void AreAllMissionsCompleted_0x1cbb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AreAllMissionsCompleted_0x1cbb40");
#endif

    switch (ctx->pc) {
        case 0x1cbb7cu: goto label_1cbb7c;
        case 0x1cbb88u: goto label_1cbb88;
        default: break;
    }

    ctx->pc = 0x1cbb40u;

    // 0x1cbb40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cbb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cbb44: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cbb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cbb48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cbb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cbb4c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1cbb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cbb50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cbb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cbb54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cbb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cbb58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cbb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cbb5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cbb5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb60: 0x8c23ca84  lw          $v1, -0x357C($at)
    ctx->pc = 0x1cbb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1cbb64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbb68: 0x8c52110c  lw          $s2, 0x110C($v0)
    ctx->pc = 0x1cbb68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4364)));
    // 0x1cbb6c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1cbb6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1cbb70: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1CBB70u;
    {
        const bool branch_taken_0x1cbb70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB70u;
        // 0x1cbb74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb70) {
            ctx->pc = 0x1CBBACu;
            goto label_1cbbac;
        }
    }
    ctx->pc = 0x1CBB78u;
    // 0x1cbb78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cbb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cbb7c:
    // 0x1cbb7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cbb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb80: 0xc072ef4  jal         func_1CBBD0
    ctx->pc = 0x1CBB80u;
    SET_GPR_U32(ctx, 31, 0x1CBB88u);
    ctx->pc = 0x1CBB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB80u;
    // 0x1cbb84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBBD0u, 0x1CBB80u, 0x1CBB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB88u;
label_1cbb88:
    // 0x1cbb88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cbb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cbb8c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBB8Cu;
    {
        const bool branch_taken_0x1cbb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cbb8c) {
            ctx->pc = 0x1CBB9Cu;
            goto label_1cbb9c;
        }
    }
    ctx->pc = 0x1CBB94u;
    // 0x1cbb94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBB94u;
    {
        const bool branch_taken_0x1cbb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB94u;
        // 0x1cbb98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb94) {
            ctx->pc = 0x1CBBB4u;
            goto label_1cbbb4;
        }
    }
    ctx->pc = 0x1CBB9Cu;
label_1cbb9c:
    // 0x1cbb9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cbb9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cbba0: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1cbba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1cbba4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1CBBA4u;
    {
        const bool branch_taken_0x1cbba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBA4u;
        // 0x1cbba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbba4) {
            ctx->pc = 0x1CBB7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbb7c;
        }
    }
    ctx->pc = 0x1CBBACu;
label_1cbbac:
    // 0x1cbbac: 0x0  nop
    ctx->pc = 0x1cbbacu;
    // NOP
    // 0x1cbbb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cbbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cbbb4:
    // 0x1cbbb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cbbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cbbb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cbbb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cbbbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cbbbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbbc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cbbc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBC4u;
        // 0x1cbbc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBBCCu;
}
