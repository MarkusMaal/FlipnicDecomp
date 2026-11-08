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

// Function: entry_001ab244
// Address: 0x1ab244 - 0x1ab260
void entry_001ab244_0x1ab244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab244_0x1ab244");
#endif

    switch (ctx->pc) {
        case 0x1ab250u: goto label_1ab250;
        default: break;
    }

    ctx->pc = 0x1ab244u;

    // 0x1ab244: 0x0  nop
    ctx->pc = 0x1ab244u;
    // NOP
    // 0x1ab248: 0xc06ae3c  jal         func_1AB8F0
    ctx->pc = 0x1AB248u;
    SET_GPR_U32(ctx, 31, 0x1AB250u);
    ctx->pc = 0x1AB24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB248u;
    // 0x1ab24c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB8F0u, 0x1AB248u, 0x1AB250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB250u;
label_1ab250:
    // 0x1ab250: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB250u;
    {
        const bool branch_taken_0x1ab250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB250u;
        // 0x1ab254: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab250) {
            ctx->pc = 0x1AB260u;
            return;
        }
    }
    ctx->pc = 0x1AB258u;
    // 0x1ab258: 0xc06ae30  jal         func_1AB8C0
    ctx->pc = 0x1AB258u;
    SET_GPR_U32(ctx, 31, 0x1AB260u);
    ctx->pc = 0x1AB8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB8C0u, 0x1AB258u, 0x1AB260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB260u;
}
