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

// Function: FUN_00160ee0
// Address: 0x160ee0 - 0x160f44
void FUN_00160ee0_0x160ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00160ee0_0x160ee0");
#endif

    switch (ctx->pc) {
        case 0x160ef8u: goto label_160ef8;
        default: break;
    }

    ctx->pc = 0x160ee0u;

    // 0x160ee0: 0x8c88001c  lw          $t0, 0x1C($a0)
    ctx->pc = 0x160ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x160ee4: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x160ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x160ee8: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x160ee8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x160eec: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x160EECu;
    {
        const bool branch_taken_0x160eec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EECu;
        // 0x160ef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160eec) {
            ctx->pc = 0x160F38u;
            goto label_160f38;
        }
    }
    ctx->pc = 0x160EF4u;
    // 0x160ef4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x160ef4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160ef8:
    // 0x160ef8: 0x1095021  addu        $t2, $t0, $t1
    ctx->pc = 0x160ef8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x160efc: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x160efcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x160f00: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x160F00u;
    {
        const bool branch_taken_0x160f00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x160f00) {
            ctx->pc = 0x160F28u;
            goto label_160f28;
        }
    }
    ctx->pc = 0x160F08u;
    // 0x160f08: 0x85430002  lh          $v1, 0x2($t2)
    ctx->pc = 0x160f08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x160f0c: 0x14c30006  bne         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x160F0Cu;
    {
        const bool branch_taken_0x160f0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x160f0c) {
            ctx->pc = 0x160F28u;
            goto label_160f28;
        }
    }
    ctx->pc = 0x160F14u;
    // 0x160f14: 0x85430004  lh          $v1, 0x4($t2)
    ctx->pc = 0x160f14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x160f18: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160F18u;
    {
        const bool branch_taken_0x160f18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x160f18) {
            ctx->pc = 0x160F28u;
            goto label_160f28;
        }
    }
    ctx->pc = 0x160F20u;
    // 0x160f20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x160F20u;
    {
        const bool branch_taken_0x160f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160f20) {
            ctx->pc = 0x160F3Cu;
            goto label_160f3c;
        }
    }
    ctx->pc = 0x160F28u;
label_160f28:
    // 0x160f28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x160f2c: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x160f2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x160f30: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x160F30u;
    {
        const bool branch_taken_0x160f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F30u;
        // 0x160f34: 0x25290050  addiu       $t1, $t1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f30) {
            ctx->pc = 0x160EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160ef8;
        }
    }
    ctx->pc = 0x160F38u;
label_160f38:
    // 0x160f38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x160f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_160f3c:
    // 0x160f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x160F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160F44u;
}
