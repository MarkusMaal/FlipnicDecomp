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

// Function: entry_00200218
// Address: 0x200218 - 0x20023c
void entry_00200218_0x200218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200218_0x200218");
#endif

    switch (ctx->pc) {
        case 0x20022cu: goto label_20022c;
        default: break;
    }

    ctx->pc = 0x200218u;

    // 0x200218: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x200218u;
    {
        const bool branch_taken_0x200218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200218u;
        // 0x20021c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200218) {
            ctx->pc = 0x20023Cu;
            return;
        }
    }
    ctx->pc = 0x200220u;
    // 0x200220: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x200220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200224: 0xc07ffce  jal         func_1FFF38
    ctx->pc = 0x200224u;
    SET_GPR_U32(ctx, 31, 0x20022Cu);
    ctx->pc = 0x200228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200224u;
    // 0x200228: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF38u, 0x200224u, 0x20022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20022Cu;
label_20022c:
    // 0x20022c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20022cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200230: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x200230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200234: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x200234u;
    SET_GPR_U32(ctx, 31, 0x20023Cu);
    ctx->pc = 0x200238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200234u;
    // 0x200238: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x200234u, 0x20023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20023Cu;
}
