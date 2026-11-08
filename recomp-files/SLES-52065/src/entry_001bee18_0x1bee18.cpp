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

// Function: entry_001bee18
// Address: 0x1bee18 - 0x1bee30
void entry_001bee18_0x1bee18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bee18_0x1bee18");
#endif

    switch (ctx->pc) {
        case 0x1bee20u: goto label_1bee20;
        default: break;
    }

    ctx->pc = 0x1bee18u;

    // 0x1bee18: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BEE18u;
    SET_GPR_U32(ctx, 31, 0x1BEE20u);
    ctx->pc = 0x1BEE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE18u;
    // 0x1bee1c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BEE18u, 0x1BEE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE20u;
label_1bee20:
    // 0x1bee20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEE20u;
    {
        const bool branch_taken_0x1bee20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE20u;
        // 0x1bee24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee20) {
            ctx->pc = 0x1BEE30u;
            return;
        }
    }
    ctx->pc = 0x1BEE28u;
    // 0x1bee28: 0xc06fd00  jal         func_1BF400
    ctx->pc = 0x1BEE28u;
    SET_GPR_U32(ctx, 31, 0x1BEE30u);
    ctx->pc = 0x1BEE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE28u;
    // 0x1bee2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF400u, 0x1BEE28u, 0x1BEE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE30u;
}
