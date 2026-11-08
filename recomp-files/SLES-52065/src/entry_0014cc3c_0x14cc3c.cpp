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

// Function: entry_0014cc3c
// Address: 0x14cc3c - 0x14cc60
void entry_0014cc3c_0x14cc3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cc3c_0x14cc3c");
#endif

    switch (ctx->pc) {
        case 0x14cc54u: goto label_14cc54;
        default: break;
    }

    ctx->pc = 0x14cc3cu;

label_14cc3c:
    // 0x14cc3c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14cc40:
    // 0x14cc40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14cc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14cc44:
    // 0x14cc44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14cc44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14cc48:
    // 0x14cc48: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x14cc48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_14cc4c:
    // 0x14cc4c: 0x320f809  jalr        $t9
label_14cc50:
    if (ctx->pc == 0x14CC50u) {
        ctx->pc = 0x14CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC4Cu;
        // 0x14cc50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CC54u;
        goto label_14cc54;
    }
    ctx->pc = 0x14CC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14CC54u);
        ctx->pc = 0x14CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC4Cu;
        // 0x14cc50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CC4Cu, 0x14CC54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CC54u;
label_14cc54:
    // 0x14cc54: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x14cc54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_14cc58:
    // 0x14cc58: 0x1651fff8  bne         $s2, $s1, . + 4 + (-0x8 << 2)
label_14cc5c:
    if (ctx->pc == 0x14CC5Cu) {
        ctx->pc = 0x14CC60u;
        goto label_fallthrough_0x14cc58;
    }
    ctx->pc = 0x14CC58u;
    {
        const bool branch_taken_0x14cc58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x14cc58) {
            ctx->pc = 0x14CC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14cc3c;
        }
    }
label_fallthrough_0x14cc58:
    ctx->pc = 0x14CC60u;
}
