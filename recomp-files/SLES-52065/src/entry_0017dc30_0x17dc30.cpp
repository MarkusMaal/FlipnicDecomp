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

// Function: entry_0017dc30
// Address: 0x17dc30 - 0x17dc4c
void entry_0017dc30_0x17dc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dc30_0x17dc30");
#endif

    switch (ctx->pc) {
        case 0x17dc44u: goto label_17dc44;
        default: break;
    }

    ctx->pc = 0x17dc30u;

    // 0x17dc30: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17DC30u;
    {
        const bool branch_taken_0x17dc30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC30u;
        // 0x17dc34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc30) {
            ctx->pc = 0x17DC4Cu;
            return;
        }
    }
    ctx->pc = 0x17DC38u;
    // 0x17dc38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17dc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc3c: 0xc05fb94  jal         func_17EE50
    ctx->pc = 0x17DC3Cu;
    SET_GPR_U32(ctx, 31, 0x17DC44u);
    ctx->pc = 0x17DC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DC3Cu;
    // 0x17dc40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EE50u, 0x17DC3Cu, 0x17DC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC44u;
label_17dc44:
    // 0x17dc44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17DC44u;
    {
        const bool branch_taken_0x17dc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC44u;
        // 0x17dc48: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc44) {
            ctx->pc = 0x17DC58u;
            return;
        }
    }
    ctx->pc = 0x17DC4Cu;
}
