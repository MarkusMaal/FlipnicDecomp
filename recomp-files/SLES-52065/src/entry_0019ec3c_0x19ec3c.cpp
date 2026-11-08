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

// Function: entry_0019ec3c
// Address: 0x19ec3c - 0x19ec64
void entry_0019ec3c_0x19ec3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ec3c_0x19ec3c");
#endif

    switch (ctx->pc) {
        case 0x19ec5cu: goto label_19ec5c;
        default: break;
    }

    ctx->pc = 0x19ec3cu;

label_19ec3c:
    // 0x19ec3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ec40: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19ec44: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19EC44u;
    {
        const bool branch_taken_0x19ec44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19ec44) {
            ctx->pc = 0x19EC64u;
            return;
        }
    }
    ctx->pc = 0x19EC4Cu;
    // 0x19ec4c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x19ec4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19ec50: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x19ec50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19ec54: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x19EC54u;
    SET_GPR_U32(ctx, 31, 0x19EC5Cu);
    ctx->pc = 0x19EC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC54u;
    // 0x19ec58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x19EC54u, 0x19EC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC5Cu;
label_19ec5c:
    // 0x19ec5c: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x19EC5Cu;
    {
        const bool branch_taken_0x19ec5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC5Cu;
        // 0x19ec60: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec5c) {
            ctx->pc = 0x19EC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ec3c;
        }
    }
    ctx->pc = 0x19EC64u;
}
