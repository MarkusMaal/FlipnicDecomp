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

// Function: entry_001ffd28
// Address: 0x1ffd28 - 0x1ffd58
void entry_001ffd28_0x1ffd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffd28_0x1ffd28");
#endif

    switch (ctx->pc) {
        case 0x1ffd40u: goto label_1ffd40;
        default: break;
    }

    ctx->pc = 0x1ffd28u;

label_1ffd28:
    // 0x1ffd28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ffd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd2c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ffd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ffd30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ffd30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ffd34: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x1ffd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x1ffd38: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FFD38u;
    SET_GPR_U32(ctx, 31, 0x1FFD40u);
    ctx->pc = 0x1FFD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD38u;
    // 0x1ffd3c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FFD38u, 0x1FFD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD40u;
label_1ffd40:
    // 0x1ffd40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ffd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd44: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x1ffd44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1ffd48: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FFD48u;
    {
        const bool branch_taken_0x1ffd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffd48) {
            ctx->pc = 0x1FFD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFD48u;
            // 0x1ffd4c: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffd28;
        }
    }
    ctx->pc = 0x1FFD50u;
    // 0x1ffd50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFD50u;
    {
        const bool branch_taken_0x1ffd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD50u;
        // 0x1ffd54: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd50) {
            ctx->pc = 0x1FFD5Cu;
            return;
        }
    }
    ctx->pc = 0x1FFD58u;
}
