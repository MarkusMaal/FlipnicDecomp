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

// Function: FUN_001b7e80
// Address: 0x1b7e80 - 0x1b7f10
void FUN_001b7e80_0x1b7e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7e80_0x1b7e80");
#endif

    switch (ctx->pc) {
        case 0x1b7ea0u: goto label_1b7ea0;
        case 0x1b7eb8u: goto label_1b7eb8;
        case 0x1b7ec4u: goto label_1b7ec4;
        case 0x1b7ed0u: goto label_1b7ed0;
        case 0x1b7edcu: goto label_1b7edc;
        case 0x1b7ee4u: goto label_1b7ee4;
        case 0x1b7ef0u: goto label_1b7ef0;
        default: break;
    }

    ctx->pc = 0x1b7e80u;

    // 0x1b7e80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b7e84: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1b7e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1b7e88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b7e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b7e8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7e90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7e94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b7e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e98: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x1B7E98u;
    SET_GPR_U32(ctx, 31, 0x1B7EA0u);
    ctx->pc = 0x1B7E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E98u;
    // 0x1b7e9c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x1B7E98u, 0x1B7EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7EA0u;
label_1b7ea0:
    // 0x1b7ea0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7ea4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1b7ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b7ea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7eac: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1b7eacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7eb0: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1B7EB0u;
    SET_GPR_U32(ctx, 31, 0x1B7EB8u);
    ctx->pc = 0x1B7EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7EB0u;
    // 0x1b7eb4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1B7EB0u, 0x1B7EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7EB8u;
label_1b7eb8:
    // 0x1b7eb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7ebc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7EBCu;
    {
        const bool branch_taken_0x1b7ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7EBCu;
        // 0x1b7ec0: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ebc) {
            ctx->pc = 0x1B7EE4u;
            goto label_1b7ee4;
        }
    }
    ctx->pc = 0x1B7EC4u;
label_1b7ec4:
    // 0x1b7ec4: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1b7ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b7ec8: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1B7EC8u;
    SET_GPR_U32(ctx, 31, 0x1B7ED0u);
    ctx->pc = 0x1B7ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7EC8u;
    // 0x1b7ecc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1B7EC8u, 0x1B7ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7ED0u;
label_1b7ed0:
    // 0x1b7ed0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1b7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1b7ed4: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1B7ED4u;
    SET_GPR_U32(ctx, 31, 0x1B7EDCu);
    ctx->pc = 0x1B7ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7ED4u;
    // 0x1b7ed8: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1B7ED4u, 0x1B7EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7EDCu;
label_1b7edc:
    // 0x1b7edc: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B7EDCu;
    SET_GPR_U32(ctx, 31, 0x1B7EE4u);
    ctx->pc = 0x1B7EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7EDCu;
    // 0x1b7ee0: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B7EDCu, 0x1B7EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7EE4u;
label_1b7ee4:
    // 0x1b7ee4: 0x0  nop
    ctx->pc = 0x1b7ee4u;
    // NOP
    // 0x1b7ee8: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B7EE8u;
    SET_GPR_U32(ctx, 31, 0x1B7EF0u);
    ctx->pc = 0x1B7EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7EE8u;
    // 0x1b7eec: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B7EE8u, 0x1B7EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7EF0u;
label_1b7ef0:
    // 0x1b7ef0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1b7ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1b7ef4: 0x1462fff3  bne         $v1, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B7EF4u;
    {
        const bool branch_taken_0x1b7ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7ef4) {
            ctx->pc = 0x1B7EC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7ec4;
        }
    }
    ctx->pc = 0x1B7EFCu;
    // 0x1b7efc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b7efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7f00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7f04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7f08: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F08u;
        // 0x1b7f0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7F10u;
}
