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

// Function: entry_001f8514
// Address: 0x1f8514 - 0x1f853c
void entry_001f8514_0x1f8514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8514_0x1f8514");
#endif

    switch (ctx->pc) {
        case 0x1f8520u: goto label_1f8520;
        default: break;
    }

    ctx->pc = 0x1f8514u;

    // 0x1f8514: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x1f8514u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x1f8518: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F8518u;
    SET_GPR_U32(ctx, 31, 0x1F8520u);
    ctx->pc = 0x1F851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8518u;
    // 0x1f851c: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F8518u, 0x1F8520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8520u;
label_1f8520:
    // 0x1f8520: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F8520u;
    {
        const bool branch_taken_0x1f8520 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F8524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8520u;
        // 0x1f8524: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8520) {
            ctx->pc = 0x1F85C4u;
            return;
        }
    }
    ctx->pc = 0x1F8528u;
    // 0x1f8528: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8528u;
    {
        const bool branch_taken_0x1f8528 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8528) {
            ctx->pc = 0x1F853Cu;
            return;
        }
    }
    ctx->pc = 0x1F8530u;
    // 0x1f8530: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1f8530u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8534: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8534u;
    {
        const bool branch_taken_0x1f8534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8534u;
        // 0x1f8538: 0x3c100039  lui         $s0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8534) {
            ctx->pc = 0x1F854Cu;
            return;
        }
    }
    ctx->pc = 0x1F853Cu;
}
