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

// Function: FUN_0013b850
// Address: 0x13b850 - 0x13b8cc
void FUN_0013b850_0x13b850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013b850_0x13b850");
#endif

    switch (ctx->pc) {
        case 0x13b864u: goto label_13b864;
        default: break;
    }

    ctx->pc = 0x13b850u;

    // 0x13b850: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x13b850u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13b854: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x13B854u;
    {
        const bool branch_taken_0x13b854 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B854u;
        // 0x13b858: 0x24a90004  addiu       $t1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b854) {
            ctx->pc = 0x13B890u;
            goto label_13b890;
        }
    }
    ctx->pc = 0x13B85Cu;
    // 0x13b85c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x13b85cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13b860: 0x0  nop
    ctx->pc = 0x13b860u;
    // NOP
label_13b864:
    // 0x13b864: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x13b864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x13b868: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x13b868u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x13b86c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B86Cu;
    {
        const bool branch_taken_0x13b86c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b86c) {
            ctx->pc = 0x13B880u;
            goto label_13b880;
        }
    }
    ctx->pc = 0x13B874u;
    // 0x13b874: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x13b874u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b878: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13B878u;
    {
        const bool branch_taken_0x13b878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B878u;
        // 0x13b87c: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b878) {
            ctx->pc = 0x13B888u;
            goto label_13b888;
        }
    }
    ctx->pc = 0x13B880u;
label_13b880:
    // 0x13b880: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x13b880u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x13b884: 0x0  nop
    ctx->pc = 0x13b884u;
    // NOP
label_13b888:
    // 0x13b888: 0x1500fff6  bnez        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x13B888u;
    {
        const bool branch_taken_0x13b888 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b888) {
            ctx->pc = 0x13B864u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b864;
        }
    }
    ctx->pc = 0x13B890u;
label_13b890:
    // 0x13b890: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x13b890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13b894: 0x11230007  beq         $t1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B894u;
    {
        const bool branch_taken_0x13b894 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x13B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B894u;
        // 0x13b898: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b894) {
            ctx->pc = 0x13B8B4u;
            goto label_13b8b4;
        }
    }
    ctx->pc = 0x13B89Cu;
    // 0x13b89c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x13b89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13b8a0: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x13b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x13b8a4: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x13b8a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13b8a8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B8A8u;
    {
        const bool branch_taken_0x13b8a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b8a8) {
            ctx->pc = 0x13B8C0u;
            goto label_13b8c0;
        }
    }
    ctx->pc = 0x13B8B0u;
    // 0x13b8b0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x13b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_13b8b4:
    // 0x13b8b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13b8b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b8b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13B8B8u;
    {
        const bool branch_taken_0x13b8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8B8u;
        // 0x13b8bc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b8b8) {
            ctx->pc = 0x13B8C4u;
            goto label_13b8c4;
        }
    }
    ctx->pc = 0x13B8C0u;
label_13b8c0:
    // 0x13b8c0: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x13b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_13b8c4:
    // 0x13b8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x13B8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B8CCu;
}
