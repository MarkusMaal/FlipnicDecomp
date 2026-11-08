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

// Function: entry_001e1558
// Address: 0x1e1558 - 0x1e1584
void entry_001e1558_0x1e1558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1558_0x1e1558");
#endif

    switch (ctx->pc) {
        case 0x1e157cu: goto label_1e157c;
        default: break;
    }

    ctx->pc = 0x1e1558u;

label_1e1558:
    // 0x1e1558: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e1558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e155c:
    // 0x1e155c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e155cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1e1560:
    // 0x1e1560: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1e1560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1e1564:
    // 0x1e1564: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1568:
    // 0x1e1568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e156c:
    // 0x1e156c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1e156cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e1570:
    // 0x1e1570: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e1570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1574:
    // 0x1e1574: 0x40f809  jalr        $v0
label_1e1578:
    if (ctx->pc == 0x1E1578u) {
        ctx->pc = 0x1E1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1574u;
        // 0x1e1578: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E157Cu;
        goto label_1e157c;
    }
    ctx->pc = 0x1E1574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E157Cu);
        ctx->pc = 0x1E1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1574u;
        // 0x1e1578: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1574u, 0x1E157Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E157Cu;
label_1e157c:
    // 0x1e157c: 0x1640fff6  bnez        $s2, . + 4 + (-0xA << 2)
label_1e1580:
    if (ctx->pc == 0x1E1580u) {
        ctx->pc = 0x1E1584u;
        goto label_fallthrough_0x1e157c;
    }
    ctx->pc = 0x1E157Cu;
    {
        const bool branch_taken_0x1e157c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e157c) {
            ctx->pc = 0x1E1558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1558;
        }
    }
label_fallthrough_0x1e157c:
    ctx->pc = 0x1E1584u;
}
