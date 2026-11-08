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

// Function: entry_001f3a1c
// Address: 0x1f3a1c - 0x1f3a3c
void entry_001f3a1c_0x1f3a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3a1c_0x1f3a1c");
#endif

    switch (ctx->pc) {
        case 0x1f3a34u: goto label_1f3a34;
        default: break;
    }

    ctx->pc = 0x1f3a1cu;

    // 0x1f3a1c: 0x2c420051  sltiu       $v0, $v0, 0x51
    ctx->pc = 0x1f3a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
    // 0x1f3a20: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F3A20u;
    {
        const bool branch_taken_0x1f3a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A20u;
        // 0x1f3a24: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a20) {
            ctx->pc = 0x1F3A3Cu;
            return;
        }
    }
    ctx->pc = 0x1F3A28u;
    // 0x1f3a28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a2c: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F3A2Cu;
    SET_GPR_U32(ctx, 31, 0x1F3A34u);
    ctx->pc = 0x1F3A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3A2Cu;
    // 0x1f3a30: 0x24844460  addiu       $a0, $a0, 0x4460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F3A2Cu, 0x1F3A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3A34u;
label_1f3a34:
    // 0x1f3a34: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1F3A34u;
    {
        const bool branch_taken_0x1f3a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A34u;
        // 0x1f3a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a34) {
            ctx->pc = 0x1F3AC4u;
            return;
        }
    }
    ctx->pc = 0x1F3A3Cu;
}
