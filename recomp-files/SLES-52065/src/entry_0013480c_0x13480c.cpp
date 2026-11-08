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

// Function: entry_0013480c
// Address: 0x13480c - 0x134828
void entry_0013480c_0x13480c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013480c_0x13480c");
#endif

    switch (ctx->pc) {
        case 0x134814u: goto label_134814;
        case 0x134824u: goto label_134824;
        default: break;
    }

    ctx->pc = 0x13480cu;

    // 0x13480c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13480Cu;
    SET_GPR_U32(ctx, 31, 0x134814u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13480Cu, 0x134814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134814u;
label_134814:
    // 0x134814: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134814u;
    {
        const bool branch_taken_0x134814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134814u;
        // 0x134818: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134814) {
            ctx->pc = 0x134828u;
            return;
        }
    }
    ctx->pc = 0x13481Cu;
    // 0x13481c: 0xc04dd0c  jal         func_137430
    ctx->pc = 0x13481Cu;
    SET_GPR_U32(ctx, 31, 0x134824u);
    ctx->pc = 0x134820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13481Cu;
    // 0x134820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137430u, 0x13481Cu, 0x134824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134824u;
label_134824:
    // 0x134824: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x134824u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x134828u;
}
